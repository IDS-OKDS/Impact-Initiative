(function ($) {
  Drupal.behaviors.epd = {
    attach: function (context, settings) {
      if ($('#events-buttons').length < 1 && $('.block-views-events-block').length > 0) {
        $upcomingButton = $("<div/>", {id: 'upcoming', class: 'event-button active', role: 'button', text: 'Upcoming'});
        $previousButton = $("<div/>", {id: 'previous', class: 'event-button', role: 'button', text: 'Previous'});
        $buttonWrapper = $("<div/>", {id: 'events-buttons', role: 'button'});
        $buttonWrapper.append($upcomingButton);
        $buttonWrapper.append($previousButton);

        $('.block-views-events-block').before($buttonWrapper);

        $('.block-views-events-block_1').hide();

        $upcomingButton.click( function() {
          $upcomingButton.addClass('active');
          $previousButton.removeClass('active');
          $('.block-views-events-block').show();
          $('.block-views-events-block_1').hide();
        });

        $previousButton.click( function() {
          $previousButton.addClass('active');
          $upcomingButton.removeClass('active');
          $('.block-views-events-block').hide();
          $('.block-views-events-block_1').show();
        });
      }
    }
  };
}(jQuery));
