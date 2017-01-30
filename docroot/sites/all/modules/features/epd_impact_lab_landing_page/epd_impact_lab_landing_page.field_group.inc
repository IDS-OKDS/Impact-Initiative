<?php
/**
 * @file
 * epd_impact_lab_landing_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function epd_impact_lab_landing_page_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_wrapper|node|impact_lab_landing_page|full';
  $field_group->group_name = 'group_content_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'impact_lab_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main content wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_short_title',
      2 => 'title',
      3 => 'group_learning_guides',
      4 => 'group_special_collection',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Main content wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'maincontentwrapper content-wrapper featured',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_content_wrapper|node|impact_lab_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_learning_guides|node|impact_lab_landing_page|full';
  $field_group->group_name = 'group_learning_guides';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'impact_lab_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_content_wrapper';
  $field_group->data = array(
    'label' => 'Learning guides wrapper',
    'weight' => '5',
    'children' => array(
      0 => 'field_learning_guides',
      1 => 'learning_guides_view',
      2 => 'where_to_get_funding_for_impact_',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Learning guides wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'case-study-section w-clearfix',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_learning_guides|node|impact_lab_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_special_collection|node|impact_lab_landing_page|full';
  $field_group->group_name = 'group_special_collection';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'impact_lab_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_content_wrapper';
  $field_group->data = array(
    'label' => 'Special collection wrapper',
    'weight' => '4',
    'children' => array(
      0 => 'field_special_collection',
      1 => 'how_to_enable_impact_block',
      2 => 'special_collections_view',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Special collection wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'case-study-section w-clearfix',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_special_collection|node|impact_lab_landing_page|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Learning guides wrapper');
  t('Main content wrapper');
  t('Special collection wrapper');

  return $field_groups;
}
