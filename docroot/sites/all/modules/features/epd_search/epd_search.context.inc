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
  $context->name = 'epd_search_default';
  $context->description = '';
  $context->tag = 'EPD Search';
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
        'quicktabs-search' => array(
          'module' => 'quicktabs',
          'delta' => 'search',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('EPD Search');
  $export['epd_search_default'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'epd_search_null';
  $context->description = '';
  $context->tag = 'EPD Search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search' => 'search',
      ),
    ),
    'query_string' => array(
      'values' => array(
        '~title=&*&field_ii_keywords_tid=All' => '~title=&*&field_ii_keywords_tid=All',
        '~*field_organisations_tid*' => '~*field_organisations_tid*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'epd_map_descriptions-default_description' => array(
          'module' => 'epd_map_descriptions',
          'delta' => 'default_description',
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
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('EPD Search');
  $export['epd_search_null'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'epd_search_organisations';
  $context->description = '';
  $context->tag = 'EPD Search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search' => 'search',
      ),
    ),
    'query_string' => array(
      'values' => array(
        '*field_organisations_tid%5B%5D=*' => '*field_organisations_tid%5B%5D=*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'epd_map_descriptions-organisation' => array(
          'module' => 'epd_map_descriptions',
          'delta' => 'organisation',
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
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('EPD Search');
  $export['epd_search_organisations'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'epd_search_themes';
  $context->description = '';
  $context->tag = 'EPD Search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search' => 'search',
      ),
    ),
    'query_string' => array(
      'values' => array(
        'field_themes_tid[]=*' => 'field_themes_tid[]=*',
        'title=&field_themes_tid%5B%5D=*&field_ii_keywords_tid=All' => 'title=&field_themes_tid%5B%5D=*&field_ii_keywords_tid=All',
        '~title=&field_themes_tid%5B%5D=*&*&field_ii_keywords_tid=All' => '~title=&field_themes_tid%5B%5D=*&*&field_ii_keywords_tid=All',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'epd_map_descriptions-default_description' => array(
          'module' => 'epd_map_descriptions',
          'delta' => 'default_description',
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
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('EPD Search');
  $export['epd_search_themes'] = $context;

  return $export;
}
