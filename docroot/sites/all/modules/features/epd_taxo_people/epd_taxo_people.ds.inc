<?php
/**
 * @file
 * epd_taxo_people.ds.inc
 */

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
