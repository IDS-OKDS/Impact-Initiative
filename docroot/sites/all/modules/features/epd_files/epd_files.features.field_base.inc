<?php
/**
 * @file
 * epd_files.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function epd_files_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_file_image_attribution'.
  $field_bases['field_file_image_attribution'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_image_attribution',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}