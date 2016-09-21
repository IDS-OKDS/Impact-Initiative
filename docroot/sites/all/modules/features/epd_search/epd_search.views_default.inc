<?php
/**
 * @file
 * epd_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function epd_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'type' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_publication_type_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_themes_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'opencalais_country_tags_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_organisations_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_keywords_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_people_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_author_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_data_type_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_leaflet';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => '',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['map'] = 'google-high-res';
  $handler->display->display_options['style_options']['map_height'] = '600';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = array(
    'latitude' => 'latitude',
  );
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = 'longitude';
  $handler->display->display_options['style_options']['center_option'] = '0';
  $handler->display->display_options['style_options']['sync']['2'] = 0;
  $handler->display->display_options['style_options']['sync']['4'] = 0;
  $handler->display->display_options['style_options']['sync']['8'] = 1;
  $handler->display->display_options['style_options']['sync']['16'] = 1;
  $handler->display->display_options['style_options']['full_screen'] = 0;
  $handler->display->display_options['style_options']['scale_metric'] = 0;
  $handler->display->display_options['style_options']['scale_imperial'] = 0;
  $handler->display->display_options['style_options']['zoom_indicator'] = 0;
  $handler->display->display_options['style_options']['map_reset'] = 0;
  $handler->display->display_options['style_options']['map_cluster_toggle'] = 0;
  $handler->display->display_options['style_options']['mini_map']['on'] = 0;
  $handler->display->display_options['style_options']['mini_map']['height'] = '100';
  $handler->display->display_options['style_options']['mini_map']['width'] = '150';
  $handler->display->display_options['style_options']['mini_map']['toggle'] = 1;
  $handler->display->display_options['style_options']['mini_map']['zoom_delta'] = '-5';
  $handler->display->display_options['style_options']['cluster_radius'] = '80';
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_differentiator_fields'] = array(
    '' => '',
  );
  $handler->display->display_options['style_options']['cluster_differentiator']['zoom_ranges'] = array(
    1 => '',
  );
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_tooltips'] = 0;
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_outline'] = '0';
  $handler->display->display_options['style_options']['cluster_aggregation']['aggregation_function'] = 'average';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['small'] = '1000';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['medium'] = '10000';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['large'] = '100000';
  $handler->display->display_options['style_options']['map_options']['maxzoom'] = '7';
  $handler->display->display_options['style_options']['map_options']['zoom'] = '2';
  $handler->display->display_options['style_options']['map_options']['scrollwheelzoom'] = '1';
  $handler->display->display_options['style_options']['map_options']['dragging'] = '1';
  /* Relationship: Content: Country (opencalais_country_tags) */
  $handler->display->display_options['relationships']['opencalais_country_tags_tid']['id'] = 'opencalais_country_tags_tid';
  $handler->display->display_options['relationships']['opencalais_country_tags_tid']['table'] = 'field_data_opencalais_country_tags';
  $handler->display->display_options['relationships']['opencalais_country_tags_tid']['field'] = 'opencalais_country_tags_tid';
  $handler->display->display_options['relationships']['opencalais_country_tags_tid']['required'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Field: Taxonomy term: OpenCalais Metadata: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'field_data_latitude';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['relationship'] = 'opencalais_country_tags_tid';
  $handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
  /* Field: Taxonomy term: OpenCalais Metadata: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'field_data_longitude';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['relationship'] = 'opencalais_country_tags_tid';
  $handler->display->display_options['fields']['longitude']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Latitude';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[latitude]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[longitude]';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Project Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
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
    'asset' => 'asset',
    'blog' => 'blog',
    'project' => 'project',
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Themes (field_themes) */
  $handler->display->display_options['filters']['field_themes_tid']['id'] = 'field_themes_tid';
  $handler->display->display_options['filters']['field_themes_tid']['table'] = 'field_data_field_themes';
  $handler->display->display_options['filters']['field_themes_tid']['field'] = 'field_themes_tid';
  $handler->display->display_options['filters']['field_themes_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_themes_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_themes_tid']['expose']['operator_id'] = 'field_themes_tid_op';
  $handler->display->display_options['filters']['field_themes_tid']['expose']['label'] = 'Theme';
  $handler->display->display_options['filters']['field_themes_tid']['expose']['operator'] = 'field_themes_tid_op';
  $handler->display->display_options['filters']['field_themes_tid']['expose']['identifier'] = 'field_themes_tid';
  $handler->display->display_options['filters']['field_themes_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_themes_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_themes_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_themes_tid']['vocabulary'] = 'theme';
  /* Filter criterion: Content: Country (opencalais_country_tags) */
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['id'] = 'opencalais_country_tags_tid';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['table'] = 'field_data_opencalais_country_tags';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['field'] = 'opencalais_country_tags_tid';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['expose']['operator_id'] = 'opencalais_country_tags_tid_op';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['expose']['operator'] = 'opencalais_country_tags_tid_op';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['expose']['identifier'] = 'opencalais_country_tags_tid';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['vocabulary'] = 'country';
  /* Filter criterion: Content: Keywords (field_ii_keywords) */
  $handler->display->display_options['filters']['field_ii_keywords_tid']['id'] = 'field_ii_keywords_tid';
  $handler->display->display_options['filters']['field_ii_keywords_tid']['table'] = 'field_data_field_ii_keywords';
  $handler->display->display_options['filters']['field_ii_keywords_tid']['field'] = 'field_ii_keywords_tid';
  $handler->display->display_options['filters']['field_ii_keywords_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ii_keywords_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ii_keywords_tid']['expose']['operator_id'] = 'field_ii_keywords_tid_op';
  $handler->display->display_options['filters']['field_ii_keywords_tid']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['field_ii_keywords_tid']['expose']['operator'] = 'field_ii_keywords_tid_op';
  $handler->display->display_options['filters']['field_ii_keywords_tid']['expose']['identifier'] = 'field_ii_keywords_tid';
  $handler->display->display_options['filters']['field_ii_keywords_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_ii_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ii_keywords_tid']['vocabulary'] = 'ii_keyword';
  /* Filter criterion: Content: Organisations (field_organisations) */
  $handler->display->display_options['filters']['field_organisations_tid']['id'] = 'field_organisations_tid';
  $handler->display->display_options['filters']['field_organisations_tid']['table'] = 'field_data_field_organisations';
  $handler->display->display_options['filters']['field_organisations_tid']['field'] = 'field_organisations_tid';
  $handler->display->display_options['filters']['field_organisations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_organisations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organisations_tid']['expose']['operator_id'] = 'field_organisations_tid_op';
  $handler->display->display_options['filters']['field_organisations_tid']['expose']['label'] = 'Organisations';
  $handler->display->display_options['filters']['field_organisations_tid']['expose']['operator'] = 'field_organisations_tid_op';
  $handler->display->display_options['filters']['field_organisations_tid']['expose']['identifier'] = 'field_organisations_tid';
  $handler->display->display_options['filters']['field_organisations_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_organisations_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_organisations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organisations_tid']['vocabulary'] = 'organisations';
  /* Filter criterion: Content: People (field_people) */
  $handler->display->display_options['filters']['field_people_tid']['id'] = 'field_people_tid';
  $handler->display->display_options['filters']['field_people_tid']['table'] = 'field_data_field_people';
  $handler->display->display_options['filters']['field_people_tid']['field'] = 'field_people_tid';
  $handler->display->display_options['filters']['field_people_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_people_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_people_tid']['expose']['operator_id'] = 'field_people_tid_op';
  $handler->display->display_options['filters']['field_people_tid']['expose']['label'] = 'People';
  $handler->display->display_options['filters']['field_people_tid']['expose']['operator'] = 'field_people_tid_op';
  $handler->display->display_options['filters']['field_people_tid']['expose']['identifier'] = 'field_people_tid';
  $handler->display->display_options['filters']['field_people_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_people_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_people_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_people_tid']['vocabulary'] = 'people';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'page' => 'page',
    'home' => 'home',
    'webform' => 'webform',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Data type (field_data_type) */
  $handler->display->display_options['filters']['field_data_type_tid']['id'] = 'field_data_type_tid';
  $handler->display->display_options['filters']['field_data_type_tid']['table'] = 'field_data_field_data_type';
  $handler->display->display_options['filters']['field_data_type_tid']['field'] = 'field_data_type_tid';
  $handler->display->display_options['filters']['field_data_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_data_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_data_type_tid']['expose']['operator_id'] = 'field_data_type_tid_op';
  $handler->display->display_options['filters']['field_data_type_tid']['expose']['label'] = 'Data type';
  $handler->display->display_options['filters']['field_data_type_tid']['expose']['operator'] = 'field_data_type_tid_op';
  $handler->display->display_options['filters']['field_data_type_tid']['expose']['identifier'] = 'field_data_type_tid';
  $handler->display->display_options['filters']['field_data_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_data_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_data_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_data_type_tid']['vocabulary'] = 'data_type';
  /* Filter criterion: Content: Publication Type (field_publication_type) */
  $handler->display->display_options['filters']['field_publication_type_tid']['id'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['filters']['field_publication_type_tid']['field'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_publication_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['operator_id'] = 'field_publication_type_tid_op';
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['label'] = 'Publication Type';
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['operator'] = 'field_publication_type_tid_op';
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['identifier'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_publication_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_publication_type_tid']['vocabulary'] = 'publication_type';
  /* Filter criterion: Field: Author (field_author) */
  $handler->display->display_options['filters']['field_author_tid']['id'] = 'field_author_tid';
  $handler->display->display_options['filters']['field_author_tid']['table'] = 'field_data_field_author';
  $handler->display->display_options['filters']['field_author_tid']['field'] = 'field_author_tid';
  $handler->display->display_options['filters']['field_author_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_author_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_author_tid']['expose']['operator_id'] = 'field_author_tid_op';
  $handler->display->display_options['filters']['field_author_tid']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['field_author_tid']['expose']['operator'] = 'field_author_tid_op';
  $handler->display->display_options['filters']['field_author_tid']['expose']['identifier'] = 'field_author_tid';
  $handler->display->display_options['filters']['field_author_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_author_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_author_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_author_tid']['vocabulary'] = 'author';

  /* Display: Map Page */
  $handler = $view->new_display('page', 'Map Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search map';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Field: Taxonomy term: OpenCalais Metadata: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'field_data_latitude';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['relationship'] = 'opencalais_country_tags_tid';
  $handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
  /* Field: Taxonomy term: OpenCalais Metadata: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'field_data_longitude';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['relationship'] = 'opencalais_country_tags_tid';
  $handler->display->display_options['fields']['longitude']['exclude'] = TRUE;
  $handler->display->display_options['path'] = 'search-map';

  /* Display: List Page */
  $handler = $view->new_display('page', 'List Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search list';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Primary theme */
  $handler->display->display_options['fields']['field_primary_theme']['id'] = 'field_primary_theme';
  $handler->display->display_options['fields']['field_primary_theme']['table'] = 'field_data_field_primary_theme';
  $handler->display->display_options['fields']['field_primary_theme']['field'] = 'field_primary_theme';
  $handler->display->display_options['fields']['field_primary_theme']['hide_empty'] = TRUE;
  /* Field: Content: Themes */
  $handler->display->display_options['fields']['field_themes']['id'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['table'] = 'field_data_field_themes';
  $handler->display->display_options['fields']['field_themes']['field'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_themes']['delta_offset'] = '0';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['opencalais_country_tags']['id'] = 'opencalais_country_tags';
  $handler->display->display_options['fields']['opencalais_country_tags']['table'] = 'field_data_opencalais_country_tags';
  $handler->display->display_options['fields']['opencalais_country_tags']['field'] = 'opencalais_country_tags';
  $handler->display->display_options['fields']['opencalais_country_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['opencalais_country_tags']['delta_offset'] = '0';
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_keywords']['separator'] = ' ';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'asset' => 'asset',
    'blog' => 'blog',
    'project' => 'project',
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Publication Type (field_publication_type) */
  $handler->display->display_options['filters']['field_publication_type_tid']['id'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['filters']['field_publication_type_tid']['field'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_publication_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['operator_id'] = 'field_publication_type_tid_op';
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['label'] = 'Publication Type';
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['operator'] = 'field_publication_type_tid_op';
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['identifier'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_publication_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_publication_type_tid']['vocabulary'] = 'publication_type';
  /* Filter criterion: Content: Themes (field_themes) */
  $handler->display->display_options['filters']['field_themes_tid']['id'] = 'field_themes_tid';
  $handler->display->display_options['filters']['field_themes_tid']['table'] = 'field_data_field_themes';
  $handler->display->display_options['filters']['field_themes_tid']['field'] = 'field_themes_tid';
  $handler->display->display_options['filters']['field_themes_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_themes_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_themes_tid']['expose']['operator_id'] = 'field_themes_tid_op';
  $handler->display->display_options['filters']['field_themes_tid']['expose']['label'] = 'Theme';
  $handler->display->display_options['filters']['field_themes_tid']['expose']['operator'] = 'field_themes_tid_op';
  $handler->display->display_options['filters']['field_themes_tid']['expose']['identifier'] = 'field_themes_tid';
  $handler->display->display_options['filters']['field_themes_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_themes_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_themes_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_themes_tid']['vocabulary'] = 'theme';
  /* Filter criterion: Content: Country (opencalais_country_tags) */
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['id'] = 'opencalais_country_tags_tid';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['table'] = 'field_data_opencalais_country_tags';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['field'] = 'opencalais_country_tags_tid';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['expose']['operator_id'] = 'opencalais_country_tags_tid_op';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['expose']['operator'] = 'opencalais_country_tags_tid_op';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['expose']['identifier'] = 'opencalais_country_tags_tid';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['vocabulary'] = 'country';
  /* Filter criterion: Content: Organisations (field_organisations) */
  $handler->display->display_options['filters']['field_organisations_tid']['id'] = 'field_organisations_tid';
  $handler->display->display_options['filters']['field_organisations_tid']['table'] = 'field_data_field_organisations';
  $handler->display->display_options['filters']['field_organisations_tid']['field'] = 'field_organisations_tid';
  $handler->display->display_options['filters']['field_organisations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_organisations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organisations_tid']['expose']['operator_id'] = 'field_organisations_tid_op';
  $handler->display->display_options['filters']['field_organisations_tid']['expose']['label'] = 'Organisations';
  $handler->display->display_options['filters']['field_organisations_tid']['expose']['operator'] = 'field_organisations_tid_op';
  $handler->display->display_options['filters']['field_organisations_tid']['expose']['identifier'] = 'field_organisations_tid';
  $handler->display->display_options['filters']['field_organisations_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_organisations_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_organisations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organisations_tid']['vocabulary'] = 'organisations';
  /* Filter criterion: Content: Keywords (field_keywords) */
  $handler->display->display_options['filters']['field_keywords_tid']['id'] = 'field_keywords_tid';
  $handler->display->display_options['filters']['field_keywords_tid']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['filters']['field_keywords_tid']['field'] = 'field_keywords_tid';
  $handler->display->display_options['filters']['field_keywords_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_keywords_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['operator_id'] = 'field_keywords_tid_op';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['operator'] = 'field_keywords_tid_op';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['identifier'] = 'field_keywords_tid';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_keywords_tid']['vocabulary'] = 'keywords';
  /* Filter criterion: Content: People (field_people) */
  $handler->display->display_options['filters']['field_people_tid']['id'] = 'field_people_tid';
  $handler->display->display_options['filters']['field_people_tid']['table'] = 'field_data_field_people';
  $handler->display->display_options['filters']['field_people_tid']['field'] = 'field_people_tid';
  $handler->display->display_options['filters']['field_people_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_people_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_people_tid']['expose']['operator_id'] = 'field_people_tid_op';
  $handler->display->display_options['filters']['field_people_tid']['expose']['label'] = 'People';
  $handler->display->display_options['filters']['field_people_tid']['expose']['operator'] = 'field_people_tid_op';
  $handler->display->display_options['filters']['field_people_tid']['expose']['identifier'] = 'field_people_tid';
  $handler->display->display_options['filters']['field_people_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_people_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_people_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_people_tid']['vocabulary'] = 'people';
  /* Filter criterion: Field: Author (field_author) */
  $handler->display->display_options['filters']['field_author_tid']['id'] = 'field_author_tid';
  $handler->display->display_options['filters']['field_author_tid']['table'] = 'field_data_field_author';
  $handler->display->display_options['filters']['field_author_tid']['field'] = 'field_author_tid';
  $handler->display->display_options['filters']['field_author_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_author_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_author_tid']['expose']['operator_id'] = 'field_author_tid_op';
  $handler->display->display_options['filters']['field_author_tid']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['field_author_tid']['expose']['operator'] = 'field_author_tid_op';
  $handler->display->display_options['filters']['field_author_tid']['expose']['identifier'] = 'field_author_tid';
  $handler->display->display_options['filters']['field_author_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_author_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_author_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_author_tid']['vocabulary'] = 'author';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'page' => 'page',
    'home' => 'home',
    'webform' => 'webform',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Data type (field_data_type) */
  $handler->display->display_options['filters']['field_data_type_tid']['id'] = 'field_data_type_tid';
  $handler->display->display_options['filters']['field_data_type_tid']['table'] = 'field_data_field_data_type';
  $handler->display->display_options['filters']['field_data_type_tid']['field'] = 'field_data_type_tid';
  $handler->display->display_options['filters']['field_data_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_data_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_data_type_tid']['expose']['operator_id'] = 'field_data_type_tid_op';
  $handler->display->display_options['filters']['field_data_type_tid']['expose']['label'] = 'Data type';
  $handler->display->display_options['filters']['field_data_type_tid']['expose']['operator'] = 'field_data_type_tid_op';
  $handler->display->display_options['filters']['field_data_type_tid']['expose']['identifier'] = 'field_data_type_tid';
  $handler->display->display_options['filters']['field_data_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_data_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_data_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_data_type_tid']['vocabulary'] = 'data_type';
  $handler->display->display_options['path'] = 'search-list';

  /* Display: Project page map */
  $handler = $view->new_display('block', 'Project page map', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Field: Taxonomy term: OpenCalais Metadata: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'field_data_latitude';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['relationship'] = 'opencalais_country_tags_tid';
  $handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
  /* Field: Taxonomy term: OpenCalais Metadata: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'field_data_longitude';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['relationship'] = 'opencalais_country_tags_tid';
  $handler->display->display_options['fields']['longitude']['exclude'] = TRUE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'asset' => 'asset',
    'blog' => 'blog',
    'project' => 'project',
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Themes (field_themes) */
  $handler->display->display_options['filters']['field_themes_tid']['id'] = 'field_themes_tid';
  $handler->display->display_options['filters']['field_themes_tid']['table'] = 'field_data_field_themes';
  $handler->display->display_options['filters']['field_themes_tid']['field'] = 'field_themes_tid';
  $handler->display->display_options['filters']['field_themes_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_themes_tid']['expose']['operator_id'] = 'field_themes_tid_op';
  $handler->display->display_options['filters']['field_themes_tid']['expose']['label'] = 'Theme';
  $handler->display->display_options['filters']['field_themes_tid']['expose']['operator'] = 'field_themes_tid_op';
  $handler->display->display_options['filters']['field_themes_tid']['expose']['identifier'] = 'field_themes_tid';
  $handler->display->display_options['filters']['field_themes_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_themes_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_themes_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_themes_tid']['vocabulary'] = 'theme';
  /* Filter criterion: Content: Country (opencalais_country_tags) */
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['id'] = 'opencalais_country_tags_tid';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['table'] = 'field_data_opencalais_country_tags';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['field'] = 'opencalais_country_tags_tid';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['expose']['operator_id'] = 'opencalais_country_tags_tid_op';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['expose']['operator'] = 'opencalais_country_tags_tid_op';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['expose']['identifier'] = 'opencalais_country_tags_tid';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['opencalais_country_tags_tid']['vocabulary'] = 'country';
  /* Filter criterion: Content: Organisations (field_organisations) */
  $handler->display->display_options['filters']['field_organisations_tid']['id'] = 'field_organisations_tid';
  $handler->display->display_options['filters']['field_organisations_tid']['table'] = 'field_data_field_organisations';
  $handler->display->display_options['filters']['field_organisations_tid']['field'] = 'field_organisations_tid';
  $handler->display->display_options['filters']['field_organisations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organisations_tid']['expose']['operator_id'] = 'field_organisations_tid_op';
  $handler->display->display_options['filters']['field_organisations_tid']['expose']['label'] = 'Organisations';
  $handler->display->display_options['filters']['field_organisations_tid']['expose']['operator'] = 'field_organisations_tid_op';
  $handler->display->display_options['filters']['field_organisations_tid']['expose']['identifier'] = 'field_organisations_tid';
  $handler->display->display_options['filters']['field_organisations_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_organisations_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_organisations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organisations_tid']['vocabulary'] = 'organisations';
  /* Filter criterion: Content: Keywords (field_keywords) */
  $handler->display->display_options['filters']['field_keywords_tid']['id'] = 'field_keywords_tid';
  $handler->display->display_options['filters']['field_keywords_tid']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['filters']['field_keywords_tid']['field'] = 'field_keywords_tid';
  $handler->display->display_options['filters']['field_keywords_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['operator_id'] = 'field_keywords_tid_op';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['operator'] = 'field_keywords_tid_op';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['identifier'] = 'field_keywords_tid';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_keywords_tid']['vocabulary'] = 'keywords';
  /* Filter criterion: Content: People (field_people) */
  $handler->display->display_options['filters']['field_people_tid']['id'] = 'field_people_tid';
  $handler->display->display_options['filters']['field_people_tid']['table'] = 'field_data_field_people';
  $handler->display->display_options['filters']['field_people_tid']['field'] = 'field_people_tid';
  $handler->display->display_options['filters']['field_people_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_people_tid']['expose']['operator_id'] = 'field_people_tid_op';
  $handler->display->display_options['filters']['field_people_tid']['expose']['label'] = 'People';
  $handler->display->display_options['filters']['field_people_tid']['expose']['operator'] = 'field_people_tid_op';
  $handler->display->display_options['filters']['field_people_tid']['expose']['identifier'] = 'field_people_tid';
  $handler->display->display_options['filters']['field_people_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_people_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_people_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_people_tid']['vocabulary'] = 'people';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'page' => 'page',
    'blog' => 'blog',
    'home' => 'home',
    'webform' => 'webform',
  );
  /* Filter criterion: Content: Data type (field_data_type) */
  $handler->display->display_options['filters']['field_data_type_tid']['id'] = 'field_data_type_tid';
  $handler->display->display_options['filters']['field_data_type_tid']['table'] = 'field_data_field_data_type';
  $handler->display->display_options['filters']['field_data_type_tid']['field'] = 'field_data_type_tid';
  $handler->display->display_options['filters']['field_data_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_data_type_tid']['expose']['operator_id'] = 'field_data_type_tid_op';
  $handler->display->display_options['filters']['field_data_type_tid']['expose']['label'] = 'Data type';
  $handler->display->display_options['filters']['field_data_type_tid']['expose']['operator'] = 'field_data_type_tid_op';
  $handler->display->display_options['filters']['field_data_type_tid']['expose']['identifier'] = 'field_data_type_tid';
  $handler->display->display_options['filters']['field_data_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_data_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_data_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_data_type_tid']['vocabulary'] = 'data_type';
  $export['search'] = $view;

  return $export;
}
