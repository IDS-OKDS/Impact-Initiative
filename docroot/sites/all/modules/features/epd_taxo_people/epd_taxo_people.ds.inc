<?php
/**
 * @file
 * epd_taxo_people.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function epd_taxo_people_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|people|full';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'people';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'p',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_photo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'lab-image',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['taxonomy_term|people|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function epd_taxo_people_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|people|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'people';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'description',
        1 => 'field_photo',
        2 => 'field_google_scholar_id',
        3 => 'field_orcid_id',
        4 => 'field_related_links',
        5 => 'field_partner',
      ),
    ),
    'fields' => array(
      'description' => 'ds_content',
      'field_photo' => 'ds_content',
      'field_google_scholar_id' => 'ds_content',
      'field_orcid_id' => 'ds_content',
      'field_related_links' => 'ds_content',
      'field_partner' => 'ds_content',
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
  $export['taxonomy_term|people|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|people|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'people';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_photo',
        1 => 'title',
        2 => 'description',
        3 => 'field_related_links',
      ),
    ),
    'fields' => array(
      'field_photo' => 'ds_content',
      'title' => 'ds_content',
      'description' => 'ds_content',
      'field_related_links' => 'ds_content',
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
  $export['taxonomy_term|people|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function epd_taxo_people_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'full';
  $ds_view_mode->label = 'Full';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['full'] = $ds_view_mode;

  return $export;
}
