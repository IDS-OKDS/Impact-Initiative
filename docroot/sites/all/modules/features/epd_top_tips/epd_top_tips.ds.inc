<?php
/**
 * @file
 * epd_top_tips.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function epd_top_tips_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|top_tip|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'top_tip';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h4',
        'class' => 'top-tip-title',
        'ft' => array(),
      ),
    ),
    'field_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'contentp flex w-clearfix',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_example_project' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Example',
          'lbw-el' => 'h5',
          'ow' => TRUE,
          'ow-el' => 'h5',
          'ow-cl' => 'example-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_example_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fis' => TRUE,
          'fis-el' => 'p',
          'fis-cl' => 'contentp example flex w-clearfix',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|top_tip|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|top_tip|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'top_tip';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_example_project' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|top_tip|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function epd_top_tips_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|top_tip|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'top_tip';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_description',
        2 => 'field_example_project',
        3 => 'field_example_text',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_description' => 'ds_content',
      'field_example_project' => 'ds_content',
      'field_example_text' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|top_tip|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|top_tip|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'top_tip';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'comments',
        1 => 'field_description',
        2 => 'field_example_project',
        3 => 'field_example_text',
      ),
    ),
    'fields' => array(
      'comments' => 'ds_content',
      'field_description' => 'ds_content',
      'field_example_project' => 'ds_content',
      'field_example_text' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|top_tip|full'] = $ds_layout;

  return $export;
}
