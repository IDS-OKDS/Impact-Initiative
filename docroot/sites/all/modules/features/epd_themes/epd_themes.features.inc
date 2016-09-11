<?php
/**
 * @file
 * epd_themes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function epd_themes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function epd_themes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
