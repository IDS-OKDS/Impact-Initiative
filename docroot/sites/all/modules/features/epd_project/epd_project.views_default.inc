<?php
/**
 * @file
 * epd_project.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function epd_project_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'publication';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publication';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publication';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_publications_node']['id'] = 'reverse_field_publications_node';
  $handler->display->display_options['relationships']['reverse_field_publications_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_publications_node']['field'] = 'reverse_field_publications_node';
  /* Field: Content: Issue */
  $handler->display->display_options['fields']['field_issue']['id'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['table'] = 'field_data_field_issue';
  $handler->display->display_options['fields']['field_issue']['field'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_issue']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_issue']['alter']['text'] = '([field_issue])';
  /* Field: Field: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author']['delta_offset'] = '0';
  /* Field: Content: Volume Title */
  $handler->display->display_options['fields']['field_volume_title']['id'] = 'field_volume_title';
  $handler->display->display_options['fields']['field_volume_title']['table'] = 'field_data_field_volume_title';
  $handler->display->display_options['fields']['field_volume_title']['field'] = 'field_volume_title';
  $handler->display->display_options['fields']['field_volume_title']['exclude'] = TRUE;
  /* Field: Content: Published Date */
  $handler->display->display_options['fields']['field_published_date']['id'] = 'field_published_date';
  $handler->display->display_options['fields']['field_published_date']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['fields']['field_published_date']['field'] = 'field_published_date';
  $handler->display->display_options['fields']['field_published_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_published_date']['settings'] = array(
    'format_type' => 'year_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Journal Title */
  $handler->display->display_options['fields']['field_journal_title']['id'] = 'field_journal_title';
  $handler->display->display_options['fields']['field_journal_title']['table'] = 'field_data_field_journal_title';
  $handler->display->display_options['fields']['field_journal_title']['field'] = 'field_journal_title';
  $handler->display->display_options['fields']['field_journal_title']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_published_date], [field_author], [field_journal_title]. [field_volume_title] [field_issue]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Publication URL */
  $handler->display->display_options['fields']['field_publication_url']['id'] = 'field_publication_url';
  $handler->display->display_options['fields']['field_publication_url']['table'] = 'field_data_field_publication_url';
  $handler->display->display_options['fields']['field_publication_url']['field'] = 'field_publication_url';
  $handler->display->display_options['fields']['field_publication_url']['label'] = '';
  $handler->display->display_options['fields']['field_publication_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_publication_url']['alter']['path'] = '[field_publication_url-value]';
  $handler->display->display_options['fields']['field_publication_url']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_publication_url']['element_label_colon'] = FALSE;
  /* Field: Content: Updated publication URL */
  $handler->display->display_options['fields']['field_updated_publication_url']['id'] = 'field_updated_publication_url';
  $handler->display->display_options['fields']['field_updated_publication_url']['table'] = 'field_data_field_updated_publication_url';
  $handler->display->display_options['fields']['field_updated_publication_url']['field'] = 'field_updated_publication_url';
  $handler->display->display_options['fields']['field_updated_publication_url']['label'] = 'Publication URL';
  $handler->display->display_options['fields']['field_updated_publication_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_updated_publication_url']['type'] = 'link_url';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_publication_type']['id'] = 'field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['field'] = 'field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_publication_type']['type'] = 'token_formatters_term_reference';
  $handler->display->display_options['fields']['field_publication_type']['settings'] = array(
    'text' => '[term:name]',
    'link' => 'search?field_publication_type_tid[]=[term:tid]',
    'check_access' => TRUE,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_publications_node';
  $handler->display->display_options['fields']['title']['label'] = 'Project';
  /* Field: Content: Primary theme */
  $handler->display->display_options['fields']['field_primary_theme']['id'] = 'field_primary_theme';
  $handler->display->display_options['fields']['field_primary_theme']['table'] = 'field_data_field_primary_theme';
  $handler->display->display_options['fields']['field_primary_theme']['field'] = 'field_primary_theme';
  $handler->display->display_options['fields']['field_primary_theme']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_primary_theme']['type'] = 'token_formatters_term_reference';
  $handler->display->display_options['fields']['field_primary_theme']['settings'] = array(
    'text' => '[term:name]',
    'link' => 'search?field_primary_theme_tid[]=[term:tid]',
    'check_access' => TRUE,
  );
  /* Field: Content: Themes */
  $handler->display->display_options['fields']['field_themes']['id'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['table'] = 'field_data_field_themes';
  $handler->display->display_options['fields']['field_themes']['field'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_themes']['type'] = 'token_formatters_term_reference';
  $handler->display->display_options['fields']['field_themes']['settings'] = array(
    'text' => '[term:name]',
    'link' => 'search?field_theme_tid[]=[term:tid]',
    'check_access' => TRUE,
  );
  $handler->display->display_options['fields']['field_themes']['delta_offset'] = '0';
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['type'] = 'token_formatters_term_reference';
  $handler->display->display_options['fields']['field_keywords']['settings'] = array(
    'text' => '[term:name]',
    'link' => 'search?field_keywords_tid[]=[term:tid]',
    'check_access' => TRUE,
  );
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_keywords']['separator'] = '';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['publication'] = $view;

  return $export;
}
