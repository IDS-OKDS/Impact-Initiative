<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<!--[if lte IE 8]> <html<?php print $html_attributes . $rdf_namespaces; ?> class="lteie8"> <![endif]-->
<!--[if IE 9]> <html<?php print $html_attributes . $rdf_namespaces; ?> class="ie9"> <![endif]-->
<!--[if gt IE 9]><!--> <html<?php print $html_attributes . $rdf_namespaces; ?>> <!--<![endif]-->
<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=0" />
</head>
<body class="<?php print $classes; ?> w-clearfix contentbody" <?php print $attributes; ?> cz-shortcut-listen="true">
  <div id="skip">
    <a href="#content"><?php print t('Jump to Navigation'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>