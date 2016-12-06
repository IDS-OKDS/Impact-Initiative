<?php
/**
 * @file
 * epd_themes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function epd_themes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'themes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Themes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Themes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Theme Image */
  $handler->display->display_options['fields']['field_theme_image']['id'] = 'field_theme_image';
  $handler->display->display_options['fields']['field_theme_image']['table'] = 'field_data_field_theme_image';
  $handler->display->display_options['fields']['field_theme_image']['field'] = 'field_theme_image';
  $handler->display->display_options['fields']['field_theme_image']['label'] = '';
  $handler->display->display_options['fields']['field_theme_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_theme_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Theme Colour (Hex) */
  $handler->display->display_options['fields']['field_theme_colour']['id'] = 'field_theme_colour';
  $handler->display->display_options['fields']['field_theme_colour']['table'] = 'field_data_field_theme_colour';
  $handler->display->display_options['fields']['field_theme_colour']['field'] = 'field_theme_colour';
  $handler->display->display_options['fields']['field_theme_colour']['label'] = '';
  $handler->display->display_options['fields']['field_theme_colour']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_theme_colour']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'search?field_themes_tid[]=[tid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Description field with option to add styles */
  $handler->display->display_options['fields']['description_with_styles']['id'] = 'description_with_styles';
  $handler->display->display_options['fields']['description_with_styles']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description_with_styles']['field'] = 'description_with_styles';
  $handler->display->display_options['fields']['description_with_styles']['label'] = '';
  $handler->display->display_options['fields']['description_with_styles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description_with_styles']['styles_to_add'] = 'border-top: 5px solid #[field_theme_colour]; padding-top: 10px;';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'theme' => 'theme',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['themes'] = $view;

  return $export;
}
