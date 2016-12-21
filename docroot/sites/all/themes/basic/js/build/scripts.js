
//# sourceMappingURL=scripts.map

/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth

function setEqualHeight(columns) {
 var tallestcolumn = 0;
 columns.each( function() {
	currentHeight = $(this).height();
	if(currentHeight > tallestcolumn) {
		tallestcolumn  = currentHeight;
	}
 });
 columns.height(tallestcolumn);
}

(function ($, Drupal, window, document, undefined) {

// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.basic = {
  attach: function(context, settings) {

    $(window).ready(function() {
      // Execute code once the window is ready.
	 setEqualHeight($(".view-id-resources_archive .w-col .featuredp"));
    });

    $(window).load(function() {
      // Execute code once the window is fully loaded.
    });

    $(window).resize(function() {
      // Execute code when the window is resized.
    });

    $(window).scroll(function () {
      // Execute code when the window scrolls.
    });

    $(document).ready(function() {
      // Execute code once the DOM is ready.
	  	 	if ( ! ($('#donors.case-study-section').length )) {
				$('a[href="#donors"]').hide();
		}
    });
  }
};


})(jQuery, Drupal, this, this.document);