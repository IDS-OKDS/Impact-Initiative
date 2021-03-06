<?php
/**
 * @file
 * epd_themes.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function epd_themes_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'themes';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'theme' => 'themes',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-themes-block' => array(
          'module' => 'views',
          'delta' => 'themes-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['themes'] = $context;

  return $export;
}
