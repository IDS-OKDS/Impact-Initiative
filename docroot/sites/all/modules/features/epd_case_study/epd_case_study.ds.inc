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
    'about_the_impact_lab' => array(
      'weight' => '2',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
          'lbw' => 1,
          'lbw-el' => 'h3',
          'lbw-cl' => 'about-impact about-impact-lab',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'related-link-block top-info',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'p',
          'fis-cl' => 'about-ii',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
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
    'licensing' => array(
      'weight' => '3',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
          'lbw' => 1,
          'lbw-el' => 'h3',
          'lbw-cl' => 'licensing',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'related-link-block top-info licensing-content',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'p',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'menu_fixed' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:3:{s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"block";s:7:"subtype";s:28:"menu-menu-case-study-anchors";}',
        'load_terms' => 0,
        'ft' => array(
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'fixed-tabs',
          'fis-at' => 'style="display: none;"',
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
    'field_people' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lbw-el' => 'div',
          'lbw-cl' => 'meta1',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'metaentry w-clearfix',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_project_link_text' => array(
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
    'field_published_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lbw-el' => 'div',
          'lbw-cl' => 'meta1',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'metaentry w-clearfix',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_project_link_text' => array(
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
    'field_project_link_text' => array(
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
  $ds_field->field = 'about_the_impact_lab';
  $ds_field->label = 'About The Impact Lab';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'case_study|*';
  $ds_field->properties = array(
    'block' => 'epd_copyright_licensing|epd_about_impact_lab',
    'block_render' => '1',
  );
  $export['about_the_impact_lab'] = $ds_field;

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

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'licensing';
  $ds_field->label = 'Licensing';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'case_study|*';
  $ds_field->properties = array(
    'block' => 'epd_copyright_licensing|epd_copyright_licensing',
    'block_render' => '1',
  );
  $export['licensing'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'menu_fixed';
  $ds_field->label = 'Menu Fixed';
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
  $export['menu_fixed'] = $ds_field;

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
        0 => 'menu_fixed',
        1 => 'addthis',
        2 => 'group_pub',
        3 => 'title',
        4 => 'group_content_wrapper',
        5 => 'about_the_impact_lab',
        6 => 'field_pdf_download',
        7 => 'group_title_wrapper',
        8 => 'case_study_menu',
        9 => 'licensing',
        10 => 'group_intro',
        11 => 'group_recs_for_researchers',
        12 => 'group_recs_for_donors',
        13 => 'field_project_link',
        14 => 'field_project_link_text',
        15 => 'group_project_references',
        16 => 'group_conclusion',
        17 => 'group_references',
        18 => 'field_conclusion_images',
        19 => 'field_donors_images',
        20 => 'field_intro_donors',
        21 => 'field_intro_images',
        22 => 'group_donors_images',
        23 => 'field_donors_top_tips',
        24 => 'body',
        25 => 'download_button_2',
        26 => 'group_conclusion_images',
        27 => 'field_intro',
        28 => 'group_researchers_images',
        29 => 'field_researchers_images',
        30 => 'field_researchers_top_tips',
        31 => 'field_references',
        32 => 'field_people',
        33 => 'field_published_date',
        34 => 'group_social_wrapper',
        35 => 'field_main_image',
        36 => 'group_author_wrapper',
        37 => 'field_introduction',
        38 => 'group_intro_images',
      ),
    ),
    'fields' => array(
      'menu_fixed' => 'ds_content',
      'addthis' => 'ds_content',
      'group_pub' => 'ds_content',
      'title' => 'ds_content',
      'group_content_wrapper' => 'ds_content',
      'about_the_impact_lab' => 'ds_content',
      'field_pdf_download' => 'ds_content',
      'group_title_wrapper' => 'ds_content',
      'case_study_menu' => 'ds_content',
      'licensing' => 'ds_content',
      'group_intro' => 'ds_content',
      'group_recs_for_researchers' => 'ds_content',
      'group_recs_for_donors' => 'ds_content',
      'field_project_link' => 'ds_content',
      'field_project_link_text' => 'ds_content',
      'group_project_references' => 'ds_content',
      'group_conclusion' => 'ds_content',
      'group_references' => 'ds_content',
      'field_conclusion_images' => 'ds_content',
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
