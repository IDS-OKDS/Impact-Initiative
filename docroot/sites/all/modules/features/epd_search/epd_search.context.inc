<?php
/**
 * @file
 * epd_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function epd_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_default';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search' => 'search',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'epd_map_descriptions-default' => array(
          'module' => 'epd_map_descriptions',
          'delta' => 'default',
          'region' => 'content',
          'weight' => '-10',
        ),
        'quicktabs-search' => array(
          'module' => 'quicktabs',
          'delta' => 'search',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['search_default'] = $context;

  return $export;
}
