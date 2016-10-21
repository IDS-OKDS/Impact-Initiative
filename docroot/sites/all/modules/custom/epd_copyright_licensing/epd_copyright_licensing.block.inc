<?php

/**
* @file
* Provides EPD map description blocks.
*/

/**
* Implements hook_block_info().
*/
function epd_copyright_licensing_block_info() {
  $blocks = array();
  $blocks['epd_copyright_licensing'] = array(
    'info' => t('Map Description: Default Description'),
  );


  return $blocks;
}

/**
* Implements hook_block_view().
*/
function epd_copyright_licensing_block_view($delta = '') {
  $block = array();

  switch ($delta) {
    case 'epd_copyright_licensing':
      $block['subject'] = '';
      $block['content'] = variable_get('epd_copyright_licensing', array('value' => ''))['value'];
      break;
  }

  return $block;
}
