<?php
/**
 * @file
 * epd_files.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function epd_files_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'file|image|image_related';
  $ds_fieldsetting->entity_type = 'file';
  $ds_fieldsetting->bundle = 'image';
  $ds_fieldsetting->view_mode = 'image_related';
  $ds_fieldsetting->settings = array(
    'field_file_caption' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'related-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['file|image|image_related'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'file|image|image_with_caption';
  $ds_fieldsetting->entity_type = 'file';
  $ds_fieldsetting->bundle = 'image';
  $ds_fieldsetting->view_mode = 'image_with_caption';
  $ds_fieldsetting->settings = array(
    'field_file_caption' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'caption',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['file|image|image_with_caption'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function epd_files_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'file|image|image_related';
  $ds_layout->entity_type = 'file';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'image_related';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'regions' => array(
      'ds_content' => array(
        0 => 'group_image_related',
        1 => 'field_file_caption',
        2 => 'file',
      ),
    ),
    'fields' => array(
      'group_image_related' => 'ds_content',
      'field_file_caption' => 'ds_content',
      'file' => 'ds_content',
    ),
  );
  $export['file|image|image_related'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'file|image|image_with_caption';
  $ds_layout->entity_type = 'file';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'image_with_caption';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'regions' => array(
      'ds_content' => array(
        0 => 'group_lab_image',
        1 => 'file',
        2 => 'field_file_caption',
      ),
    ),
    'fields' => array(
      'group_lab_image' => 'ds_content',
      'file' => 'ds_content',
      'field_file_caption' => 'ds_content',
    ),
  );
  $export['file|image|image_with_caption'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function epd_files_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'image_related';
  $ds_view_mode->label = 'Image Related';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['image_related'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'image_with_caption';
  $ds_view_mode->label = 'Image with Caption';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['image_with_caption'] = $ds_view_mode;

  return $export;
}
