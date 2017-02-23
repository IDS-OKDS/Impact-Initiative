<?php
/**
 * @file
 * epd_files.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function epd_files_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_type") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function epd_files_image_default_styles() {
  $styles = array();

  // Exported image style: 125_x_150.
  $styles['125_x_150'] = array(
    'label' => '125 x 150',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 125,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
