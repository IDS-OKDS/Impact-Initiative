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
    'info' => t('Copyright and Licensing'),
  );
  $blocks['epd_about_impact_lab'] = array(
    'info' => t('About The Impact Lab'),
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
    case 'epd_about_impact_lab':
      $block['subject'] = '';
      $block['content'] = variable_get('epd_about_impact_lab', array('value' => ''))['value'];
      break;
  }

  return $block;
}
