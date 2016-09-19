
<?php
  // We hide the comments to render below.
  hide($content['comments']);
  hide($content['links']);
  print '<div class="resource-title">' . $title . ' - </div>';
  print render($content);
 ?>
