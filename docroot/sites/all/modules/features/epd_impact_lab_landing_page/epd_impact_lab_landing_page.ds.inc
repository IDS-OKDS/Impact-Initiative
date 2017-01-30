<?php
/**
 * @file
 * epd_impact_lab_landing_page.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function epd_impact_lab_landing_page_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|impact_lab_landing_page|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'impact_lab_landing_page';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'how_to_enable_impact_block' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'related-wrapper',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'contentp',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'learning_guides_view' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
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
    'special_collections_view' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'contentp flex w-clearfix',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'where_to_get_funding_for_impact_' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'related-wrapper',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'contentp',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(
          'lb-cl' => 'case-study-h2',
        ),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'case-study-section w-clearfix',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'contentp',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_special_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Special collection',
          'lb-el' => 'h3',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'contentp flex w-clearfix',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_learning_guides' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Learning guides',
          'lb-el' => 'h3',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'contentp flex w-clearfix',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_short_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => 'case-study-section w-clearfix',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|impact_lab_landing_page|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function epd_impact_lab_landing_page_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'how_to_enable_impact_block';
  $ds_field->label = 'How to enable impact block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'impact_lab_landing_page|full';
  $ds_field->properties = array(
    'block' => 'epd_copyright_licensing|epd_special_collections_block',
    'block_render' => '1',
  );
  $export['how_to_enable_impact_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'learning_guides_view';
  $ds_field->label = 'Learning Guides View';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'impact_lab_landing_page|full';
  $ds_field->properties = array(
    'block' => 'views|71f25ec12a2c38894fd7d25667bb5cfb',
    'block_render' => '1',
  );
  $export['learning_guides_view'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'special_collections_view';
  $ds_field->label = 'Special Collections view';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'impact_lab_landing_page|full';
  $ds_field->properties = array(
    'block' => 'views|37cab4edd015b4b0254c899e068be7e9',
    'block_render' => '1',
  );
  $export['special_collections_view'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'where_to_get_funding_for_impact_';
  $ds_field->label = 'Where to get funding for impact block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'impact_lab_landing_page|full';
  $ds_field->properties = array(
    'block' => 'epd_copyright_licensing|epd_learning_guides_block',
    'block_render' => '1',
  );
  $export['where_to_get_funding_for_impact_'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function epd_impact_lab_landing_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|impact_lab_landing_page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'impact_lab_landing_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_special_collection',
        2 => 'field_learning_guides',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_special_collection' => 'ds_content',
      'field_learning_guides' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|impact_lab_landing_page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|impact_lab_landing_page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'impact_lab_landing_page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_content_wrapper',
        1 => 'title',
        2 => 'field_short_title',
        3 => 'body',
        4 => 'group_special_collection',
        5 => 'group_learning_guides',
        6 => 'where_to_get_funding_for_impact_',
        7 => 'field_learning_guides',
        8 => 'learning_guides_view',
        9 => 'how_to_enable_impact_block',
        10 => 'field_special_collection',
        11 => 'special_collections_view',
      ),
    ),
    'fields' => array(
      'group_content_wrapper' => 'ds_content',
      'title' => 'ds_content',
      'field_short_title' => 'ds_content',
      'body' => 'ds_content',
      'group_special_collection' => 'ds_content',
      'group_learning_guides' => 'ds_content',
      'where_to_get_funding_for_impact_' => 'ds_content',
      'field_learning_guides' => 'ds_content',
      'learning_guides_view' => 'ds_content',
      'how_to_enable_impact_block' => 'ds_content',
      'field_special_collection' => 'ds_content',
      'special_collections_view' => 'ds_content',
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
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|impact_lab_landing_page|full'] = $ds_layout;

  return $export;
}
