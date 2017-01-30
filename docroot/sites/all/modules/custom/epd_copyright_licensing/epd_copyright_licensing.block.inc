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
  $blocks['epd_special_collections_block'] = array(
    'info' => t('How to enable impact'),
  );
  $blocks['epd_learning_guides_block'] = array(
    'info' => t('Where to get funding for impact'),
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
    case 'epd_special_collections_block':
      $block['subject'] = '';
      $block['content'] = variable_get('epd_special_collections_block', array('value' => ''))['value'];
      break;
    case 'epd_learning_guides_block':
      $block['subject'] = '';
      $block['content'] = variable_get('epd_learning_guides_block', array('value' => ''))['value'];
      break;
  }

  return $block;
}
