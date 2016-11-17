<?php
/**
 * @file
 * epd_case_study.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function epd_case_study_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-case-study-anchors.
  $menus['menu-case-study-anchors'] = array(
    'menu_name' => 'menu-case-study-anchors',
    'title' => 'Case Study Anchors',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Case Study Anchors');

  return $menus;
}
