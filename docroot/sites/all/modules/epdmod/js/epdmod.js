;
(function($) {

    jQuery(document).ready(function(){
        
	$('#views-exposed-form-search-page .filterwrapper').each(function(){
	    if(myselect = $(this).find('select')){
		if(!myselect.val()){
		    $(this).hide();
		}
	    }
	});
      
    });

}(jQuery));