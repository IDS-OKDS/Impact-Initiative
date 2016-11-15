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
    'addthis' => array(
      'weight' => '0',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Share this page',
          'lbw' => 1,
          'lbw-el' => 'div',
          'lbw-cl' => 'sharetext sidebarsocial',
        ),
      ),
    ),
    'case_study_menu' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'download_button_2' => array(
      'weight' => '23',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:21:"entityreference_label";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:1:{s:4:"link";i:1;}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:23:"node:field_pdf_download";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-cl' => 'homepage-titles larger w-clearfix',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'contentp flex w-clearfix',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_intro' => array(
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
    'field_intro_donors' => array(
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
    'field_introduction' => array(
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
    'field_pdf_download' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_researchers_top_tips' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'ol',
          'ow-cl' => 'numbered',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => 'top-tip',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_donors_top_tips' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'ol',
          'ow-cl' => 'numbered',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => 'top-tip',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_published_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lbw' => 1,
          'lbw-el' => 'div',
          'lbw-cl' => 'meta1',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'metaentry w-clearfix',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'meta2',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_references' => array(
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
    'field_people' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lbw' => 1,
          'lbw-el' => 'div',
          'lbw-cl' => 'meta1',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'metaentry w-clearfix',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'meta2',
          'fis-at' => '',
          'fis-def-at' => FALSE,
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
  $ds_field->field = 'addthis';
  $ds_field->label = 'AddThis';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'addthis|addthis_block',
    'block_render' => '1',
  );
  $export['addthis'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'breadcrumbs';
  $ds_field->label = 'Breadcrumbs';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'easy_breadcrumb|easy_breadcrumb',
    'block_render' => '1',
  );
  $export['breadcrumbs'] = $ds_field;

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
    'block_render' => '3',
  );
  $export['case_study_menu'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'download_button_2';
  $ds_field->label = 'Download Button 2';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'case_study|default';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['download_button_2'] = $ds_field;

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
        0 => 'group_title_wrapper',
        1 => 'addthis',
        2 => 'group_pub',
        3 => 'title',
        4 => 'field_pdf_download',
        5 => 'case_study_menu',
        6 => 'group_intro',
        7 => 'group_recs_for_researchers',
        8 => 'group_recs_for_donors',
        9 => 'field_project_link',
        10 => 'group_conclusion',
        11 => 'group_project_references',
        12 => 'field_conclusion_images',
        13 => 'group_references',
        14 => 'field_donors_images',
        15 => 'field_intro_donors',
        16 => 'field_intro_images',
        17 => 'group_donors_images',
        18 => 'field_donors_top_tips',
        19 => 'body',
        20 => 'download_button_2',
        21 => 'group_conclusion_images',
        22 => 'field_intro',
        23 => 'group_researchers_images',
        24 => 'field_researchers_images',
        25 => 'field_researchers_top_tips',
        26 => 'field_references',
        27 => 'field_people',
        28 => 'field_published_date',
        29 => 'group_social_wrapper',
        30 => 'field_main_image',
        31 => 'group_author_wrapper',
        32 => 'field_introduction',
        33 => 'group_intro_images',
      ),
    ),
    'fields' => array(
      'group_title_wrapper' => 'ds_content',
      'addthis' => 'ds_content',
      'group_pub' => 'ds_content',
      'title' => 'ds_content',
      'field_pdf_download' => 'ds_content',
      'case_study_menu' => 'ds_content',
      'group_intro' => 'ds_content',
      'group_recs_for_researchers' => 'ds_content',
      'group_recs_for_donors' => 'ds_content',
      'field_project_link' => 'ds_content',
      'group_conclusion' => 'ds_content',
      'group_project_references' => 'ds_content',
      'field_conclusion_images' => 'ds_content',
      'group_references' => 'ds_content',
      'field_donors_images' => 'ds_content',
      'field_intro_donors' => 'ds_content',
      'field_intro_images' => 'ds_content',
      'group_donors_images' => 'ds_content',
      'field_donors_top_tips' => 'ds_content',
      'body' => 'ds_content',
      'download_button_2' => 'ds_content',
      'group_conclusion_images' => 'ds_content',
      'field_intro' => 'ds_content',
      'group_researchers_images' => 'ds_content',
      'field_researchers_images' => 'ds_content',
      'field_researchers_top_tips' => 'ds_content',
      'field_references' => 'ds_content',
      'field_people' => 'ds_content',
      'field_published_date' => 'ds_content',
      'group_social_wrapper' => 'ds_content',
      'field_main_image' => 'ds_content',
      'group_author_wrapper' => 'ds_content',
      'field_introduction' => 'ds_content',
      'group_intro_images' => 'ds_content',
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
