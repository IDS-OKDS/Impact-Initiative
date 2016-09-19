<?php
/**
 * @file
 * epd_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function epd_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
