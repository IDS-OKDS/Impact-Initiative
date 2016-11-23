<?php
/**
 * @file
 * epd_case_study.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function epd_case_study_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function epd_case_study_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function epd_case_study_node_info() {
  $items = array(
    'case_study' => array(
      'name' => t('Learning Guide'),
      'base' => 'node_content',
      'description' => t('Content type for the Impact Initiative\'s Learning Guide.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
