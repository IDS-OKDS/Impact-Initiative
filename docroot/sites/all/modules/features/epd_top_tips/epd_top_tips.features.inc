<?php
/**
 * @file
 * epd_top_tips.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function epd_top_tips_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function epd_top_tips_node_info() {
  $items = array(
    'top_tip' => array(
      'name' => t('Top tip'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
