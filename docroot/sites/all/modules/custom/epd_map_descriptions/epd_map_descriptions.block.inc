<?php

/**
* @file
* Provides EPD map description blocks.
*/

/**
* Implements hook_block_info().
*/
function epd_map_descriptions_block_info() {
  $blocks = array();
  $blocks['default_description'] = array(
    'info' => t('Map Description: Default Description'),
  );

  $blocks['organisation_map_desc'] = array(
    'info' => t('Map Description: Organisation Map Description'),
  );

  $blocks['organisation_term_desc'] = array(
    'info' => t('Map Description: Organisation Term Description'),
  );

  return $blocks;
}

/**
* Implements hook_block_view().
*/
function epd_map_descriptions_block_view($delta = '') {
  $block = array();

  switch ($delta) {
    case 'default_description':
      $block['subject'] = '';
      $block['content'] = variable_get('map_desc_default', array('value' => ''))['value'];
      break;

    case 'organisation_map_desc':
      $block['subject'] = '';
      $block['content'] = variable_get('map_desc_organisation', array('value' => ''))['value'];
      break;

    case 'organisation_term_desc':
      $block['subject'] = '';
      $block['content'] = _load_term_desc();
      break;
  }

  return $block;
}

function _load_term_desc() {
  $params = drupal_get_query_parameters();
  $tid = $params['field_organisations_tid'][0];
  $term = taxonomy_term_load($tid);
  return $term->description;
}
