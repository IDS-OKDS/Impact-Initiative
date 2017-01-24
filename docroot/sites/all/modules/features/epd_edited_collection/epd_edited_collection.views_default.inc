<?php
/**
 * @file
 * epd_edited_collection.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function epd_edited_collection_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'edited_collection_chapter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Edited collection chapter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_chapters_target_id']['id'] = 'field_chapters_target_id';
  $handler->display->display_options['relationships']['field_chapters_target_id']['table'] = 'field_data_field_chapters';
  $handler->display->display_options['relationships']['field_chapters_target_id']['field'] = 'field_chapters_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_chapters_node']['id'] = 'reverse_field_chapters_node';
  $handler->display->display_options['relationships']['reverse_field_chapters_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_chapters_node']['field'] = 'reverse_field_chapters_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_chapters_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Chapters */
  $handler->display->display_options['fields']['field_chapters']['id'] = 'field_chapters';
  $handler->display->display_options['fields']['field_chapters']['table'] = 'field_data_field_chapters';
  $handler->display->display_options['fields']['field_chapters']['field'] = 'field_chapters';
  $handler->display->display_options['fields']['field_chapters']['relationship'] = 'reverse_field_chapters_node';
  $handler->display->display_options['fields']['field_chapters']['label'] = '';
  $handler->display->display_options['fields']['field_chapters']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chapters']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_chapters']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_chapters']['delta_offset'] = '0';

  /* Display: Chapter Teaser */
  $handler = $view->new_display('block', 'Chapter Teaser', 'chapter_teaser');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_chapters_target_id']['id'] = 'field_chapters_target_id';
  $handler->display->display_options['relationships']['field_chapters_target_id']['table'] = 'field_data_field_chapters';
  $handler->display->display_options['relationships']['field_chapters_target_id']['field'] = 'field_chapters_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_chapters_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Colour */
  $handler->display->display_options['fields']['field_colour']['id'] = 'field_colour';
  $handler->display->display_options['fields']['field_colour']['table'] = 'field_data_field_colour';
  $handler->display->display_options['fields']['field_colour']['field'] = 'field_colour';
  $handler->display->display_options['fields']['field_colour']['relationship'] = 'field_chapters_target_id';
  $handler->display->display_options['fields']['field_colour']['label'] = '';
  $handler->display->display_options['fields']['field_colour']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_colour']['type'] = 'color_field_css_declaration';
  $handler->display->display_options['fields']['field_colour']['settings'] = array(
    'selector' => '.chapter-teaser-left-section.nid-[node:nid]',
    'property' => 'background-color',
    'important' => 1,
  );
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['relationship'] = 'field_chapters_target_id';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_title']['type'] = 'text_plain';
  /* Field: Content: Authors */
  $handler->display->display_options['fields']['field_persons']['id'] = 'field_persons';
  $handler->display->display_options['fields']['field_persons']['table'] = 'field_data_field_persons';
  $handler->display->display_options['fields']['field_persons']['field'] = 'field_persons';
  $handler->display->display_options['fields']['field_persons']['relationship'] = 'field_chapters_target_id';
  $handler->display->display_options['fields']['field_persons']['label'] = '';
  $handler->display->display_options['fields']['field_persons']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_persons']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_persons']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Main Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['relationship'] = 'field_chapters_target_id';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Content: Introduction */
  $handler->display->display_options['fields']['field_introduction']['id'] = 'field_introduction';
  $handler->display->display_options['fields']['field_introduction']['table'] = 'field_data_field_introduction';
  $handler->display->display_options['fields']['field_introduction']['field'] = 'field_introduction';
  $handler->display->display_options['fields']['field_introduction']['relationship'] = 'field_chapters_target_id';
  $handler->display->display_options['fields']['field_introduction']['label'] = '';
  $handler->display->display_options['fields']['field_introduction']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_introduction']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_chapters_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_chapters_target_id';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_type'] = 'span';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'download-pdf-button top';
  $handler->display->display_options['fields']['view_node']['element_label_class'] = 'download-pdf-button top';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'download-pdf-button top';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View chapter';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="chapter-teaser contentp flex w-clearfix lab-image">
<div class="chapter-teaser-left-section nid-[nid]">
<h3 class="counter">[counter]</h3>
<h2>[title]</h2>
<h3>[field_short_title]</h3>
<div class="author">[field_persons]</div>
</div>
<div class="chapter-teaser-right-section">
[field_main_image]
<div class="cover-text">[field_introduction]</div>
<div class="download-pdf-button top">[view_node]</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $export['edited_collection_chapter'] = $view;

  return $export;
}
