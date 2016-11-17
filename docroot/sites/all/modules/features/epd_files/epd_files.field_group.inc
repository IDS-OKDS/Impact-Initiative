<?php
/**
 * @file
 * epd_files.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function epd_files_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_related|file|image|image_related';
  $field_group->group_name = 'group_image_related';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'image_related';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Related',
    'weight' => '0',
    'children' => array(
      0 => 'field_file_caption',
      1 => 'file',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Related',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'related-link-block w-inline-block',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_image_related|file|image|image_related'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lab_image|file|image|image_with_caption';
  $field_group->group_name = 'group_lab_image';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'image_with_caption';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lab image',
    'weight' => '0',
    'children' => array(
      0 => 'field_file_caption',
      1 => 'file',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Lab image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'case-study lab-image',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_lab_image|file|image|image_with_caption'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Image Related');
  t('Lab image');

  return $field_groups;
}
