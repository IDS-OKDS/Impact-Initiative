// Clusterer2.js - marker clustering routines for Google Maps apps
//
// Etienne Châtaignier <etienne.chataignier@gmail.com> has coded the following features :
// Compliance with Google Maps API V3
// Compliance with ExtInfoWindow for Google Maps API V3
// 
//
//
// Copyright � 2005,2006 by Jef Poskanzer <jef@mail.acme.com>.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
// OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
// OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
// SUCH DAMAGE.
//
// For commentary on this license please see http://acme.com/license.html


// Constructor.
Clusterer = function(map){
    this.map = map;
    this.markers = [];
    this.clusters = [];
    this.timeout = null;
    this.currentZoomLevel = map.getZoom();
    this.maxVisibleMarkers = Clusterer.defaultMaxVisibleMarkers;
    this.gridSize = Clusterer.defaultGridSize;
    this.minMarkersPerCluster = Clusterer.defaultMinMarkersPerCluster;
    this.maxLinesPerInfoBox = Clusterer.defaultMaxLinesPerInfoBox;
    this.icon = Clusterer.defaultIcon;
    this.extInfoWindowId = 'gmap_extinfowindow';

    google.maps.event.addListener(map, 'bounds_changed', Clusterer.MakeCaller(Clusterer.boundsChanged, this));
    
    if(!map.infowindow){
        map.infowindow = new google.maps.InfoWindow();
    }
    this.infowindow = this.map.infowindow = map.infowindow;
    google.maps.event.addListener(this.infowindow, 'closeclick', Clusterer.MakeCaller(Clusterer.PopDown, this));
};


Clusterer.defaultMaxVisibleMarkers = 150;
Clusterer.defaultGridSize = 5;
Clusterer.defaultMinMarkersPerCluster = 5;
Clusterer.defaultMaxLinesPerInfoBox = 10;

Clusterer.defaultIcon = 'http://acme.com/resources/images/markers/blue_large.PNG';

// Call this to change the cluster icon.
Clusterer.prototype.SetIcon = function(icon){
    this.icon = icon;
};


// Changes the maximum number of visible markers before clustering kicks in.
Clusterer.prototype.SetMaxVisibleMarkers = function(n){
    this.maxVisibleMarkers = n;
};


// Sets the minumum number of markers for a cluster.
Clusterer.prototype.SetMinMarkersPerCluster = function(n){
    this.minMarkersPerCluster = n;
};


// Sets the maximum number of lines in an info box.
Clusterer.prototype.SetMaxLinesPerInfoBox = function(n){
    this.maxLinesPerInfoBox = n;
};


// Call this to add a marker.
Clusterer.prototype.AddMarker = function(marker, title){
    if (marker.setMap != null)
        marker.setMap(this.map);
    marker.map = this.map;

    marker.title = title;
    marker.onMap = false;
    this.markers.push(marker);
    this.DisplayLater();
};


// Call this to remove a marker.
Clusterer.prototype.RemoveMarker = function(marker){
    for (var i = 0; i < this.markers.length; ++i)
        if (this.markers[i] == marker){
            if (marker.onMap)
                marker.setMap(null);
            for (var j = 0; j < this.clusters.length; ++j){
                var cluster = this.clusters[j];
                if (cluster != null){
                    for (var k = 0; k < cluster.markers.length; ++k)
                        if (cluster.markers[k] == marker){
                            cluster.markers[k] = null;
                            --cluster.markerCount;
                            break;
                        }
                    if (cluster.markerCount == 0){
                        this.ClearCluster(cluster);
                        this.clusters[j] = null;
                    }
                    else if (cluster == this.poppedUpCluster)
                        Clusterer.RePop(this);
                }
            }
            this.markers[i] = null;
            break;
        }
    this.DisplayLater();
};



Clusterer.boundsChanged = function(clusterer){
    // When the zoom level changes, we have to remove all the clusters.
    $zoomed = false;
    var newZoomLevel = clusterer.map.getZoom();
    if (newZoomLevel != clusterer.currentZoomLevel){
        $zoomed = true;
        for (var i = 0; i < clusterer.clusters.length; ++i){
            if (clusterer.clusters[i] != null){
                clusterer.ClearCluster(clusterer.clusters[i]);
                clusterer.clusters[i] = null;
            }
        }

        clusterer.currentZoomLevel = newZoomLevel;
    }

    Clusterer.Display(clusterer);
    
    // In case a cluster is currently popped-up, re-pop to get any new
    // markers into the infobox.
    if($zoomed){
       Clusterer.RePop(clusterer);
    }
}


Clusterer.prototype.DisplayLater = function(){
    if (this.timeout != null)
        clearTimeout(this.timeout);
    this.timeout = setTimeout(Clusterer.MakeCaller(Clusterer.Display, this), 50);
};


Clusterer.Display = function(clusterer){

    clearTimeout(clusterer.timeout);

    // Get the current bounds of the visible area.
    var i, j, marker, cluster;

    var bounds = clusterer.map.getBounds();
    if (typeof bounds == 'undefined')
        return;

    // Expand the bounds a little, so things look smoother when scrolling
    // by small amounts.
    var sw = bounds.getSouthWest();
    var ne = bounds.getNorthEast();
    var dx = ne.lng() - sw.lng();
    var dy = ne.lat() - sw.lat();
    if (dx < 300 && dy < 150){
        dx *= 0.10;
        dy *= 0.10;
        bounds = new google.maps.LatLngBounds(
                new google.maps.LatLng(sw.lat() - dy, sw.lng() - dx),
                new google.maps.LatLng(ne.lat() + dy, ne.lng() + dx));
    }

    // Partition the markers into visible and non-visible lists.
    var visibleMarkers = [];
    var nonvisibleMarkers = [];
    for (i = 0; i < clusterer.markers.length; ++i){
        marker = clusterer.markers[i];

        if (marker != null)
            if (bounds.contains(marker.getPosition()))
                visibleMarkers.push(marker);
            else
                nonvisibleMarkers.push(marker);
    }

    // Take down the non-visible markers.
    for (i = 0; i < nonvisibleMarkers.length; ++i){
        marker = nonvisibleMarkers[i];
        if (marker.onMap){
            marker.setMap(null);
            marker.onMap = false;
        }
    }

    // Take down the non-visible clusters.
    for (i = 0; i < clusterer.clusters.length; ++i){
        cluster = clusterer.clusters[i];

        if (cluster != null
                && cluster.marker != null
                && !bounds.contains(cluster.marker.getPosition())
                && cluster.onMap){
            cluster.marker.setMap(null);
            cluster.onMap = false;
        }
    }

    // Clustering!  This is some complicated stuff.  We have three goals
    // here.  One, limit the number of markers & clusters displayed, so the
    // maps code doesn't slow to a crawl.  Two, when possible keep existing
    // clusters instead of replacing them with new ones, so that the app pans
    // better.  And three, of course, be CPU and memory efficient.
    if (visibleMarkers.length > clusterer.maxVisibleMarkers){
        // Add to the list of clusters by splitting up the current bounds
        // into a grid.
        var latRange = bounds.getNorthEast().lat() - bounds.getSouthWest().lat();
        var latInc = latRange / clusterer.gridSize;
        var lngInc = latInc / Math.cos((bounds.getNorthEast().lat() + bounds.getSouthWest().lat()) / 2.0 * Math.PI / 180.0);
        for (var lat = bounds.getSouthWest().lat(); lat <= bounds.getNorthEast().lat(); lat += latInc)
            for (var lng = bounds.getSouthWest().lng(); lng <= bounds.getNorthEast().lng(); lng += lngInc){
                cluster = new Object();
                cluster.clusterer = clusterer;
                cluster.bounds = new google.maps.LatLngBounds(new google.maps.LatLng(lat, lng), new google.maps.LatLng(lat + latInc, lng + lngInc));
                cluster.markers = [];
                cluster.markerCount = 0;
                cluster.onMap = false;
                cluster.marker = null;
                clusterer.clusters.push(cluster);
            }

        // Put all the unclustered visible markers into a cluster - the first
        // one it fits in, which favors pre-existing clusters.
        for (i = 0; i < visibleMarkers.length; ++i){
            marker = visibleMarkers[i];
            if (marker != null && !marker.inCluster){
                for (j = 0; j < clusterer.clusters.length; ++j){
                    cluster = clusterer.clusters[j];
                    if (cluster != null && cluster.bounds.contains(marker.getPosition())){
                        cluster.markers.push(marker);
                        ++cluster.markerCount;
                        marker.inCluster = true;
                    }
                }
            }
        }

        // Get rid of any clusters containing only a few markers.
        for (i = 0; i < clusterer.clusters.length; ++i)
            if (clusterer.clusters[i] != null && clusterer.clusters[i].markerCount < clusterer.minMarkersPerCluster){
                clusterer.ClearCluster(clusterer.clusters[i]);
                clusterer.clusters[i] = null;
            }

        // Shrink the clusters list.
        for (i = clusterer.clusters.length - 1; i >= 0; --i)
            if (clusterer.clusters[i] != null)
                break;
            else
                --clusterer.clusters.length;

        // Ok, we have our clusters.  Go through the markers in each
        // cluster and remove them from the map if they are currently up.
        for (i = 0; i < clusterer.clusters.length; ++i){
            cluster = clusterer.clusters[i];
            if (cluster != null){
                for (j = 0; j < cluster.markers.length; ++j){
                    marker = cluster.markers[j];
                    if (marker != null){
                        marker.setMap(null);
                        marker.onMap = false;
                    }
                }
            }
        }

        // Now make cluster-markers for any clusters that need one.
        for (i = 0; i < clusterer.clusters.length; ++i){
            cluster = clusterer.clusters[i];
            if (cluster != null && cluster.marker == null){
                // Figure out the average coordinates of the markers in this
                // cluster.
                var xTotal = 0.0, yTotal = 0.0;
                for (j = 0; j < cluster.markers.length; ++j){
                    marker = cluster.markers[j];
                    if (marker != null){
                        xTotal += (+marker.getPosition().lng());
                        yTotal += (+marker.getPosition().lat());
                    }
                }
                var location = new google.maps.LatLng(yTotal / cluster.markerCount, xTotal / cluster.markerCount);
                cluster.marker = new google.maps.Marker({
                    position: location,
                    icon: clusterer.icon
                });
                google.maps.event.addListener(cluster.marker, 'click', Clusterer.MakeCaller(Clusterer.PopUp, cluster));
            }
        }
    }

    // Display the visible markers not already up and not in clusters.
    for (i = 0; i < visibleMarkers.length; ++i){
        marker = visibleMarkers[i];
        if (marker != null && !marker.onMap && !marker.inCluster){
            marker.setMap(clusterer.map);
            marker.onMap = true;
            google.maps.event.addDomListener(marker, 'click', function(){ Clusterer.PopDown(clusterer); });
        }
    }

    // Display the visible clusters not already up.
    for (i = 0; i < clusterer.clusters.length; ++i){
        cluster = clusterer.clusters[i];
        if (cluster != null && !cluster.onMap && bounds.contains(cluster.marker.getPosition())){
            cluster.marker.setMap(clusterer.map);
            cluster.onMap = true;
        }
    }
};


Clusterer.PopUp = function(cluster){    
    var clusterer = cluster.clusterer;    
    var html = '<table width="300">';
    var n = 0;
    for (var i = 0; i < cluster.markers.length; ++i){
        var marker = cluster.markers[i];
        if (marker != null){
            ++n;
            var icon_marker = marker.getIcon();
            html += '<tr><td>';
            html += '<img src="' + icon_marker.url + '" width="' + (icon_marker.size.width / 2) + '" height="' + (icon_marker.size.height / 2) + '">';
            html += '</td><td>' + marker.title + '</td></tr>';
            if (n == clusterer.maxLinesPerInfoBox - 1 && cluster.markerCount > clusterer.maxLinesPerInfoBox){
                html += '<tr><td colspan="2">...and ' + (cluster.markerCount - n) + ' more</td></tr>';
                break;
            }
        }
    }
    html += '</table>';
    
    clusterer.closeInfoWindow();
    Clusterer.PopDown(clusterer);
    if(cluster.marker.openExtInfoWindow){
        cluster.marker.openExtInfoWindow(clusterer.extInfoWindowId, html, cluster.marker.opts);
    } else {
        clusterer.infowindow.setContent(html);
        clusterer.infowindow.open(cluster.clusterer.map, cluster.marker);
    }
    clusterer.poppedUpCluster = cluster;
};


Clusterer.RePop = function(clusterer){
    if (clusterer.poppedUpCluster != null){
        var popup = false;
        for (var i = 0; i < clusterer.clusters.length; i++){
            if (clusterer.clusters[i] != null){
                if (clusterer.clusters[i].marker.getPosition().equals(clusterer.poppedUpCluster.marker.getPosition())){
                    clusterer.infowindow.open(clusterer.map, clusterer.poppedUpCluster.marker);
                    popup = true;
                }
            }
        }
        if (!popup){
            clusterer.infowindow.close();
            Clusterer.PopDown(clusterer);
        }
    }
};


Clusterer.PopDown = function(clusterer){
    clusterer.poppedUpCluster = null;
};


Clusterer.prototype.ClearCluster = function(cluster){
    var i, marker;

    for (i = 0; i < cluster.markers.length; ++i)
        if (cluster.markers[i] != null){
            cluster.markers[i].inCluster = false;
            cluster.markers[i] = null;
        }
    cluster.markers.length = 0;
    cluster.markerCount = 0;
    if (cluster == this.poppedUpCluster)
        cluster.clusterer.infowindow.close();
    if (cluster.onMap){
        cluster.marker.setMap(null);
        cluster.onMap = false;
        google.maps.event.clearListeners(cluster.marker, 'click');
    }
};


// This returns a function closure that calls the given routine with the
// specified arg.
Clusterer.MakeCaller = function(func, arg){
    return function(){
        func(arg);
    };
};

Clusterer.prototype.closeInfoWindow = function(){
    this.infowindow.close();
    if (this.map.closeExtInfoWindow){
        this.map.closeExtInfoWindow();
    }
}
        