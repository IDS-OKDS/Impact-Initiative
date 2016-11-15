<?php
/**
 * @file
 * epd_project.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function epd_project_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_wrapper|node|project|teaser';
  $field_group->group_name = 'group_text_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Text Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'spotight-text-block',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_text_wrapper|node|project|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Text Wrapper');

  return $field_groups;
}
