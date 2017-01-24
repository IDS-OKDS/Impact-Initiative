<?php
/**
 * @file
 * epd_edited_collection.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function epd_edited_collection_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|edited_collection_chapter|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'edited_collection_chapter';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|edited_collection_chapter|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|edited_collection_chapter|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'edited_collection_chapter';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'addthis' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_short_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'h2',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_main_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_persons' => array(
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
    'field_foreward' => array(
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
    'field_content' => array(
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
    'field_keywords' => array(
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
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'meta2',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|edited_collection_chapter|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|edited_collection|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'edited_collection';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'chapter_teaser' => array(
      'weight' => '28',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'addthis' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_short_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'h2',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
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
    'field_foreward' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
          'lbw' => 1,
          'lbw-el' => 'h2 ',
          'lbw-cl' => 'case-study-h2',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'contentp flex w-clearfix',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_foreward_author' => array(
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
    'field_author' => array(
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
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'meta2',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_pdf_download' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'top',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|edited_collection|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function epd_edited_collection_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'chapter_teaser';
  $ds_field->label = 'Chapter Teaser';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'edited_collection|full';
  $ds_field->properties = array(
    'block' => 'views|f8b7925271a26156ebdca4388a03fd25',
    'block_render' => '1',
  );
  $export['chapter_teaser'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function epd_edited_collection_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|edited_collection_chapter|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'edited_collection_chapter';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_content_wrapper',
        1 => 'field_introduction',
        2 => 'field_main_image',
        3 => 'field_persons',
        4 => 'field_colour',
        5 => 'field_foreward',
        6 => 'field_content',
        7 => 'field_references',
        8 => 'field_keywords',
        9 => 'group_title_wrapper',
        10 => 'title',
        11 => 'field_short_title',
        12 => 'field_pdf_download',
      ),
    ),
    'fields' => array(
      'group_content_wrapper' => 'ds_content',
      'field_introduction' => 'ds_content',
      'field_main_image' => 'ds_content',
      'field_persons' => 'ds_content',
      'field_colour' => 'ds_content',
      'field_foreward' => 'ds_content',
      'field_content' => 'ds_content',
      'field_references' => 'ds_content',
      'field_keywords' => 'ds_content',
      'group_title_wrapper' => 'ds_content',
      'title' => 'ds_content',
      'field_short_title' => 'ds_content',
      'field_pdf_download' => 'ds_content',
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
  $export['node|edited_collection_chapter|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|edited_collection_chapter|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'edited_collection_chapter';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'group_content_wrapper',
        2 => 'field_pdf_download',
        3 => 'field_short_title',
        4 => 'field_persons',
        5 => 'addthis',
        6 => 'field_published_date',
        7 => 'group_pub',
        8 => 'field_keywords',
        9 => 'group_title_wrapper',
        10 => 'group_intro',
        11 => 'group_social_wrapper',
        12 => 'field_main_image',
        13 => 'group_abstract',
        14 => 'field_foreward',
        15 => 'field_content',
        16 => 'group_references',
        17 => 'field_references',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'group_content_wrapper' => 'ds_content',
      'field_pdf_download' => 'ds_content',
      'field_short_title' => 'ds_content',
      'field_persons' => 'ds_content',
      'addthis' => 'ds_content',
      'field_published_date' => 'ds_content',
      'group_pub' => 'ds_content',
      'field_keywords' => 'ds_content',
      'group_title_wrapper' => 'ds_content',
      'group_intro' => 'ds_content',
      'group_social_wrapper' => 'ds_content',
      'field_main_image' => 'ds_content',
      'group_abstract' => 'ds_content',
      'field_foreward' => 'ds_content',
      'field_content' => 'ds_content',
      'group_references' => 'ds_content',
      'field_references' => 'ds_content',
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
  $export['node|edited_collection_chapter|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|edited_collection_chapter|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'edited_collection_chapter';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'section',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|edited_collection_chapter|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|edited_collection|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'edited_collection';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_short_title',
        1 => 'field_short_description',
        2 => 'field_introduction',
        3 => 'field_main_image',
        4 => 'field_foreward',
        5 => 'field_foreward_author',
        6 => 'field_author',
        7 => 'field_chapters',
        8 => 'field_published_date',
        9 => 'field_pdf_download',
      ),
    ),
    'fields' => array(
      'field_short_title' => 'ds_content',
      'field_short_description' => 'ds_content',
      'field_introduction' => 'ds_content',
      'field_main_image' => 'ds_content',
      'field_foreward' => 'ds_content',
      'field_foreward_author' => 'ds_content',
      'field_author' => 'ds_content',
      'field_chapters' => 'ds_content',
      'field_published_date' => 'ds_content',
      'field_pdf_download' => 'ds_content',
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
  $export['node|edited_collection|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|edited_collection|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'edited_collection';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_content_wrapper',
        1 => 'addthis',
        2 => 'group_pub',
        3 => 'title',
        4 => 'field_pdf_download',
        5 => 'field_short_title',
        6 => 'field_author',
        7 => 'field_published_date',
        8 => 'group_title_wrapper',
        9 => 'group_intro',
        10 => 'group_social_wrapper',
        11 => 'field_main_image',
        12 => 'field_introduction',
        13 => 'field_foreward',
        14 => 'field_foreward_author',
        15 => 'chapter_teaser',
      ),
    ),
    'fields' => array(
      'group_content_wrapper' => 'ds_content',
      'addthis' => 'ds_content',
      'group_pub' => 'ds_content',
      'title' => 'ds_content',
      'field_pdf_download' => 'ds_content',
      'field_short_title' => 'ds_content',
      'field_author' => 'ds_content',
      'field_published_date' => 'ds_content',
      'group_title_wrapper' => 'ds_content',
      'group_intro' => 'ds_content',
      'group_social_wrapper' => 'ds_content',
      'field_main_image' => 'ds_content',
      'field_introduction' => 'ds_content',
      'field_foreward' => 'ds_content',
      'field_foreward_author' => 'ds_content',
      'chapter_teaser' => 'ds_content',
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
  $export['node|edited_collection|full'] = $ds_layout;

  return $export;
}