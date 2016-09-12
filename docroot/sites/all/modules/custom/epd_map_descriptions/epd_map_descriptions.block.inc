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
  $blocks['default'] = array(
    'info' => t('Map Description: Default'),
  );

  return $blocks;
}

/**
* Implements hook_block_view().
*/
function epd_map_descriptions_block_view($delta = '') {
  $block = array();

  switch ($delta) {
    case 'default':
      $block['subject'] = '';
      $block['content'] = variable_get('map_desc_default', array('value' => ''))['value'];
      break;
  }

  return $block;
}
