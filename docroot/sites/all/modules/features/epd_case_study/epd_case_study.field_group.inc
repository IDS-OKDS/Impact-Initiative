<?php
/**
 * @file
 * epd_case_study.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function epd_case_study_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conclusion_images|node|case_study|default';
  $field_group->group_name = 'group_conclusion_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_conclusion';
  $field_group->data = array(
    'label' => 'Conclusion Images',
    'weight' => '23',
    'children' => array(
      0 => 'field_conclusion_images',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Conclusion Images',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'related-wrapper',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_conclusion_images|node|case_study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conclusion_images|node|case_study|form';
  $field_group->group_name = 'group_conclusion_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_conclusion';
  $field_group->data = array(
    'label' => 'Conclusion Images',
    'weight' => '5',
    'children' => array(
      0 => 'field_conclusion_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-conclusion-images field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_conclusion_images|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conclusion|node|case_study|default';
  $field_group->group_name = 'group_conclusion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Conclusion',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_pdf_download',
      2 => 'group_conclusion_images',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Conclusion',
      'instance_settings' => array(
        'id' => 'conclusion',
        'classes' => '',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'h2',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_conclusion|node|case_study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conclusion|node|case_study|form';
  $field_group->group_name = 'group_conclusion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Conclusion',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_pdf_download',
      2 => 'group_conclusion_images',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-conclusion field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_conclusion|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_donors_images|node|case_study|default';
  $field_group->group_name = 'group_donors_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_recs_for_donors';
  $field_group->data = array(
    'label' => 'Donors Images',
    'weight' => '15',
    'children' => array(
      0 => 'field_donors_images',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Donors Images',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'related-wrapper',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_donors_images|node|case_study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_donors_images|node|case_study|form';
  $field_group->group_name = 'group_donors_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recs_for_donors';
  $field_group->data = array(
    'label' => 'Donors Images',
    'weight' => '6',
    'children' => array(
      0 => 'field_donors_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-donors-images field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_donors_images|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_intro_images|node|case_study|default';
  $field_group->group_name = 'group_intro_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_intro';
  $field_group->data = array(
    'label' => 'Intro Images',
    'weight' => '15',
    'children' => array(
      0 => 'field_intro_images',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Intro Images',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'related-wrapper',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_intro_images|node|case_study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_intro_images|node|case_study|form';
  $field_group->group_name = 'group_intro_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_intro';
  $field_group->data = array(
    'label' => 'Intro Images',
    'weight' => '6',
    'children' => array(
      0 => 'field_intro_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-intro-images field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_intro_images|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_intro|node|case_study|default';
  $field_group->group_name = 'group_intro';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Introduction',
    'weight' => '1',
    'children' => array(
      0 => 'field_main_image',
      1 => 'field_introduction',
      2 => 'group_intro_images',
      3 => 'group_pub',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Introduction',
      'instance_settings' => array(
        'id' => 'intro',
        'classes' => 'case-study-section w-clearfix',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'h2',
        'attributes' => '',
        'wrapper' => '',
        'required_fields' => 1,
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_intro|node|case_study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_intro|node|case_study|form';
  $field_group->group_name = 'group_intro';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Intro',
    'weight' => '0',
    'children' => array(
      0 => 'field_main_image',
      1 => 'field_introduction',
      2 => 'field_description',
      3 => 'title',
      4 => 'group_intro_images',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-intro field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_intro|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_references|node|case_study|default';
  $field_group->group_name = 'group_project_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project spotlight',
    'weight' => '5',
    'children' => array(
      0 => 'field_project_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Project spotlight',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'h2',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_project_references|node|case_study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_references|node|case_study|form';
  $field_group->group_name = 'group_project_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project spotlight',
    'weight' => '4',
    'children' => array(
      0 => 'field_project_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Project spotlight',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-project-references field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_project_references|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pub|node|case_study|default';
  $field_group->group_name = 'group_pub';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_intro';
  $field_group->data = array(
    'label' => 'About this case study',
    'weight' => '13',
    'children' => array(
      0 => 'field_author',
      1 => 'field_published_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'About this case study',
      'instance_settings' => array(
        'classes' => 'related-link-block top-info',
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pub|node|case_study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pub|node|case_study|form';
  $field_group->group_name = 'group_pub';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publishing options',
    'weight' => '5',
    'children' => array(
      0 => 'field_author',
      1 => 'field_published_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-pub field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_pub|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recs_for_donors|node|case_study|default';
  $field_group->group_name = 'group_recs_for_donors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Top tips for donors',
    'weight' => '3',
    'children' => array(
      0 => 'field_intro_donors',
      1 => 'field_donors_top_tips',
      2 => 'group_donors_images',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Top tips for donors',
      'instance_settings' => array(
        'id' => 'donors',
        'classes' => '',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'h2',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_recs_for_donors|node|case_study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recs_for_donors|node|case_study|form';
  $field_group->group_name = 'group_recs_for_donors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recommendations for donors',
    'weight' => '2',
    'children' => array(
      0 => 'field_intro_donors',
      1 => 'field_donors_top_tips',
      2 => 'group_donors_images',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-recs-for-donors field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_recs_for_donors|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recs_for_researchers|node|case_study|default';
  $field_group->group_name = 'group_recs_for_researchers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Top tips for researchers',
    'weight' => '2',
    'children' => array(
      0 => 'field_intro',
      1 => 'field_researchers_top_tips',
      2 => 'group_researchers_images',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Top tips for researchers',
      'instance_settings' => array(
        'id' => 'research',
        'classes' => '',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'h2',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_recs_for_researchers|node|case_study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recs_for_researchers|node|case_study|form';
  $field_group->group_name = 'group_recs_for_researchers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recommendations for researchers',
    'weight' => '1',
    'children' => array(
      0 => 'field_intro',
      1 => 'field_researchers_top_tips',
      2 => 'group_researchers_images',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-recs-for-researchers field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_recs_for_researchers|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_researchers_images|node|case_study|default';
  $field_group->group_name = 'group_researchers_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_recs_for_researchers';
  $field_group->data = array(
    'label' => 'Researchers Images',
    'weight' => '29',
    'children' => array(
      0 => 'field_researchers_images',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Researchers Images',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'related-wrapper',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_researchers_images|node|case_study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_researchers_images|node|case_study|form';
  $field_group->group_name = 'group_researchers_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recs_for_researchers';
  $field_group->data = array(
    'label' => 'Researchers Images',
    'weight' => '5',
    'children' => array(
      0 => 'field_researchers_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-researchers-images field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_researchers_images|node|case_study|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('About this case study');
  t('Conclusion');
  t('Conclusion Images');
  t('Donors Images');
  t('Intro');
  t('Intro Images');
  t('Introduction');
  t('Project spotlight');
  t('Publishing options');
  t('Recommendations for donors');
  t('Recommendations for researchers');
  t('Researchers Images');
  t('Top tips for donors');
  t('Top tips for researchers');

  return $field_groups;
}
