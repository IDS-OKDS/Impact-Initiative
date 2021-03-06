<?php
/**
 * @file
 * epd_edited_collection.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function epd_edited_collection_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_abstract|node|edited_collection_chapter|full';
  $field_group->group_name = 'group_abstract';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'edited_collection_chapter';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_intro';
  $field_group->data = array(
    'label' => 'Abstract',
    'weight' => '18',
    'children' => array(
      0 => 'field_content',
      1 => 'field_foreward',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Abstract',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'case-study w-clearfix',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'h2 class="case-study-h2"',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_abstract|node|edited_collection_chapter|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_authors|node|edited_collection_chapter|full';
  $field_group->group_name = 'group_authors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'edited_collection_chapter';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pub';
  $field_group->data = array(
    'label' => 'Authors',
    'weight' => '4',
    'children' => array(
      0 => 'field_persons',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-authors field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_authors|node|edited_collection_chapter|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_wrapper|node|edited_collection_chapter|default';
  $field_group->group_name = 'group_content_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'edited_collection_chapter';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main content wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_title_wrapper',
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
  $field_groups['group_content_wrapper|node|edited_collection_chapter|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_wrapper|node|edited_collection_chapter|full';
  $field_group->group_name = 'group_content_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'edited_collection_chapter';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main content wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'chapter_navigation',
      1 => 'group_intro',
      2 => 'group_title_wrapper',
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
  $field_groups['group_content_wrapper|node|edited_collection_chapter|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_wrapper|node|edited_collection|full';
  $field_group->group_name = 'group_content_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'edited_collection';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main content wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_intro',
      1 => 'group_title_wrapper',
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
  $field_groups['group_content_wrapper|node|edited_collection|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_intro|node|edited_collection_chapter|full';
  $field_group->group_name = 'group_intro';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'edited_collection_chapter';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_content_wrapper';
  $field_group->data = array(
    'label' => 'Introduction',
    'weight' => '16',
    'children' => array(
      0 => 'field_main_image',
      1 => 'group_abstract',
      2 => 'group_pub',
      3 => 'group_references',
      4 => 'group_social_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Introduction',
      'instance_settings' => array(
        'id' => 'intro',
        'classes' => 'case-study-section w-clearfix',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_intro|node|edited_collection_chapter|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_intro|node|edited_collection|full';
  $field_group->group_name = 'group_intro';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'edited_collection';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_content_wrapper';
  $field_group->data = array(
    'label' => 'Introduction',
    'weight' => '22',
    'children' => array(
      0 => 'field_foreward',
      1 => 'field_foreward_author',
      2 => 'field_introduction',
      3 => 'field_main_image',
      4 => 'chapter_teaser',
      5 => 'group_social_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Introduction',
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
  $field_groups['group_intro|node|edited_collection|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pub|node|edited_collection_chapter|full';
  $field_group->group_name = 'group_pub';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'edited_collection_chapter';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_intro';
  $field_group->data = array(
    'label' => 'About this chapter',
    'weight' => '17',
    'children' => array(
      0 => 'field_keywords',
      1 => 'field_published_date',
      2 => 'collection_link',
      3 => 'group_authors',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'About this chapter',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'related-link-block top-info related-wrapper',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'h3 class="about-impact"',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pub|node|edited_collection_chapter|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pub|node|edited_collection|full';
  $field_group->group_name = 'group_pub';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'edited_collection';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_social_wrapper';
  $field_group->data = array(
    'label' => 'About this edited collection',
    'weight' => '2',
    'children' => array(
      0 => 'field_published_date',
      1 => 'field_people',
      2 => 'about_the_impact_lab_2',
      3 => 'licensing_2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'About this edited collection',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'related-link-block top-info',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'h3 class="about-impact',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_pub|node|edited_collection|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_references|node|edited_collection_chapter|full';
  $field_group->group_name = 'group_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'edited_collection_chapter';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_intro';
  $field_group->data = array(
    'label' => 'References',
    'weight' => '20',
    'children' => array(
      0 => 'field_references',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'References',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'case-study-section w-clearfix',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'h2 class="case-study-h2"',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_references|node|edited_collection_chapter|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_wrapper|node|edited_collection_chapter|full';
  $field_group->group_name = 'group_social_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'edited_collection_chapter';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_intro';
  $field_group->data = array(
    'label' => 'Social Wrapper',
    'weight' => '15',
    'children' => array(
      0 => 'addthis',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Social Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_social_wrapper|node|edited_collection_chapter|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_wrapper|node|edited_collection|full';
  $field_group->group_name = 'group_social_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'edited_collection';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_intro';
  $field_group->data = array(
    'label' => 'Social Wrapper',
    'weight' => '23',
    'children' => array(
      0 => 'addthis',
      1 => 'group_pub',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Social Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'related-wrapper top',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_social_wrapper|node|edited_collection|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_wrapper|node|edited_collection_chapter|default';
  $field_group->group_name = 'group_title_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'edited_collection_chapter';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_content_wrapper';
  $field_group->data = array(
    'label' => 'Title wrapper',
    'weight' => '14',
    'children' => array(
      0 => 'field_short_title',
      1 => 'field_pdf_download',
      2 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Title wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'homepage-titles larger w-clearfix',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_title_wrapper|node|edited_collection_chapter|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_wrapper|node|edited_collection_chapter|full';
  $field_group->group_name = 'group_title_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'edited_collection_chapter';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_content_wrapper';
  $field_group->data = array(
    'label' => 'Title wrapper',
    'weight' => '14',
    'children' => array(
      0 => 'field_pdf_download',
      1 => 'field_short_title',
      2 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Title wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'homepage-titles larger w-clearfix',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_title_wrapper|node|edited_collection_chapter|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_wrapper|node|edited_collection|full';
  $field_group->group_name = 'group_title_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'edited_collection';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_content_wrapper';
  $field_group->data = array(
    'label' => 'Title wrapper',
    'weight' => '21',
    'children' => array(
      0 => 'field_pdf_download',
      1 => 'field_short_title',
      2 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Title wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'homepage-titles larger w-clearfix',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_title_wrapper|node|edited_collection|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('About this chapter');
  t('About this edited collection');
  t('Abstract');
  t('Authors');
  t('Introduction');
  t('Main content wrapper');
  t('References');
  t('Social Wrapper');
  t('Title wrapper');

  return $field_groups;
}
