<?php
/**
 * @file
 * epd_case_study.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function epd_case_study_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|case_study|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'case_study';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'case_study_menu' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-cl' => 'homepage-titles larger w-clearfix',
        ),
      ),
    ),
    'field_donors_top_tips' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'ol',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|case_study|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function epd_case_study_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'case_study_menu';
  $ds_field->label = 'Case Study Menu';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'case_study|*';
  $ds_field->properties = array(
    'block' => 'menu|menu-case-study-anchors',
    'block_render' => '1',
  );
  $export['case_study_menu'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function epd_case_study_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|case_study|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'case_study';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'case_study_menu',
        1 => 'group_intro',
        2 => 'group_recs_for_researchers',
        3 => 'group_recs_for_donors',
        4 => 'group_conclusion',
        5 => 'group_project_references',
        6 => 'field_project_link',
        7 => 'field_conclusion_images',
        8 => 'field_main_image',
        9 => 'field_donors_images',
        10 => 'group_pub',
        11 => 'field_intro_donors',
        12 => 'field_introduction',
        13 => 'field_intro_images',
        14 => 'group_donors_images',
        15 => 'group_intro_images',
        16 => 'field_author',
        17 => 'field_donors_top_tips',
        18 => 'field_published_date',
        19 => 'body',
        20 => 'group_conclusion_images',
        21 => 'field_pdf_download',
        22 => 'field_intro',
        23 => 'group_researchers_images',
        24 => 'field_researchers_images',
        25 => 'field_researchers_top_tips',
      ),
    ),
    'fields' => array(
      'case_study_menu' => 'ds_content',
      'group_intro' => 'ds_content',
      'group_recs_for_researchers' => 'ds_content',
      'group_recs_for_donors' => 'ds_content',
      'group_conclusion' => 'ds_content',
      'group_project_references' => 'ds_content',
      'field_project_link' => 'ds_content',
      'field_conclusion_images' => 'ds_content',
      'field_main_image' => 'ds_content',
      'field_donors_images' => 'ds_content',
      'group_pub' => 'ds_content',
      'field_intro_donors' => 'ds_content',
      'field_introduction' => 'ds_content',
      'field_intro_images' => 'ds_content',
      'group_donors_images' => 'ds_content',
      'group_intro_images' => 'ds_content',
      'field_author' => 'ds_content',
      'field_donors_top_tips' => 'ds_content',
      'field_published_date' => 'ds_content',
      'body' => 'ds_content',
      'group_conclusion_images' => 'ds_content',
      'field_pdf_download' => 'ds_content',
      'field_intro' => 'ds_content',
      'group_researchers_images' => 'ds_content',
      'field_researchers_images' => 'ds_content',
      'field_researchers_top_tips' => 'ds_content',
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
  $export['node|case_study|default'] = $ds_layout;

  return $export;
}
