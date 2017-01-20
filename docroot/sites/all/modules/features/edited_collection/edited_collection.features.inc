<?php
/**
 * @file
 * edited_collection.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function edited_collection_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function edited_collection_node_info() {
  $items = array(
    'edited_collection' => array(
      'name' => t('Edited collection'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'edited_collection_chapter' => array(
      'name' => t('Edited collection chapter'),
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
