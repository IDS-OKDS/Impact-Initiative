<?php
/**
 * @file
 * epd_perms.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function epd_perms_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'pre-authenticated' => 'pre-authenticated',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'pre-authenticated' => 'pre-authenticated',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add JS snippets for google analytics'.
  $permissions['add JS snippets for google analytics'] = array(
    'name' => 'add JS snippets for google analytics',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'add terms in anniversary'.
  $permissions['add terms in anniversary'] = array(
    'name' => 'add terms in anniversary',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in asset_type'.
  $permissions['add terms in asset_type'] = array(
    'name' => 'add terms in asset_type',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in author'.
  $permissions['add terms in author'] = array(
    'name' => 'add terms in author',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in calais_document_category'.
  $permissions['add terms in calais_document_category'] = array(
    'name' => 'add terms in calais_document_category',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in city'.
  $permissions['add terms in city'] = array(
    'name' => 'add terms in city',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in company'.
  $permissions['add terms in company'] = array(
    'name' => 'add terms in company',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in conferences'.
  $permissions['add terms in conferences'] = array(
    'name' => 'add terms in conferences',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in continent'.
  $permissions['add terms in continent'] = array(
    'name' => 'add terms in continent',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in country'.
  $permissions['add terms in country'] = array(
    'name' => 'add terms in country',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in currency'.
  $permissions['add terms in currency'] = array(
    'name' => 'add terms in currency',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in data_type'.
  $permissions['add terms in data_type'] = array(
    'name' => 'add terms in data_type',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in editor'.
  $permissions['add terms in editor'] = array(
    'name' => 'add terms in editor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in email_address'.
  $permissions['add terms in email_address'] = array(
    'name' => 'add terms in email_address',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in entertainment_award_event'.
  $permissions['add terms in entertainment_award_event'] = array(
    'name' => 'add terms in entertainment_award_event',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in events_facts'.
  $permissions['add terms in events_facts'] = array(
    'name' => 'add terms in events_facts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in facility'.
  $permissions['add terms in facility'] = array(
    'name' => 'add terms in facility',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in fax_number'.
  $permissions['add terms in fax_number'] = array(
    'name' => 'add terms in fax_number',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in fund'.
  $permissions['add terms in fund'] = array(
    'name' => 'add terms in fund',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in fund_call_id'.
  $permissions['add terms in fund_call_id'] = array(
    'name' => 'add terms in fund_call_id',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in grant_category'.
  $permissions['add terms in grant_category'] = array(
    'name' => 'add terms in grant_category',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in holiday'.
  $permissions['add terms in holiday'] = array(
    'name' => 'add terms in holiday',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in ii_keyword'.
  $permissions['add terms in ii_keyword'] = array(
    'name' => 'add terms in ii_keyword',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in industry_term'.
  $permissions['add terms in industry_term'] = array(
    'name' => 'add terms in industry_term',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in journalist'.
  $permissions['add terms in journalist'] = array(
    'name' => 'add terms in journalist',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in keywords'.
  $permissions['add terms in keywords'] = array(
    'name' => 'add terms in keywords',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in lead_organisation_departme'.
  $permissions['add terms in lead_organisation_departme'] = array(
    'name' => 'add terms in lead_organisation_departme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in market_index'.
  $permissions['add terms in market_index'] = array(
    'name' => 'add terms in market_index',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in medical_condition'.
  $permissions['add terms in medical_condition'] = array(
    'name' => 'add terms in medical_condition',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in medical_treatment'.
  $permissions['add terms in medical_treatment'] = array(
    'name' => 'add terms in medical_treatment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in movie'.
  $permissions['add terms in movie'] = array(
    'name' => 'add terms in movie',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in music_album'.
  $permissions['add terms in music_album'] = array(
    'name' => 'add terms in music_album',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in music_group'.
  $permissions['add terms in music_group'] = array(
    'name' => 'add terms in music_group',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in natural_feature'.
  $permissions['add terms in natural_feature'] = array(
    'name' => 'add terms in natural_feature',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in operating_system'.
  $permissions['add terms in operating_system'] = array(
    'name' => 'add terms in operating_system',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in organisations'.
  $permissions['add terms in organisations'] = array(
    'name' => 'add terms in organisations',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in organization'.
  $permissions['add terms in organization'] = array(
    'name' => 'add terms in organization',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in people'.
  $permissions['add terms in people'] = array(
    'name' => 'add terms in people',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in person'.
  $permissions['add terms in person'] = array(
    'name' => 'add terms in person',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in pharmaceutical_drug'.
  $permissions['add terms in pharmaceutical_drug'] = array(
    'name' => 'add terms in pharmaceutical_drug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in phone_number'.
  $permissions['add terms in phone_number'] = array(
    'name' => 'add terms in phone_number',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in political_event'.
  $permissions['add terms in political_event'] = array(
    'name' => 'add terms in political_event',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in position'.
  $permissions['add terms in position'] = array(
    'name' => 'add terms in position',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in product'.
  $permissions['add terms in product'] = array(
    'name' => 'add terms in product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in programming_language'.
  $permissions['add terms in programming_language'] = array(
    'name' => 'add terms in programming_language',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in project_status'.
  $permissions['add terms in project_status'] = array(
    'name' => 'add terms in project_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in province_or_state'.
  $permissions['add terms in province_or_state'] = array(
    'name' => 'add terms in province_or_state',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in publication_type'.
  $permissions['add terms in publication_type'] = array(
    'name' => 'add terms in publication_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in published_medium'.
  $permissions['add terms in published_medium'] = array(
    'name' => 'add terms in published_medium',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in radio_program'.
  $permissions['add terms in radio_program'] = array(
    'name' => 'add terms in radio_program',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in radio_station'.
  $permissions['add terms in radio_station'] = array(
    'name' => 'add terms in radio_station',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in region'.
  $permissions['add terms in region'] = array(
    'name' => 'add terms in region',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in resource_type'.
  $permissions['add terms in resource_type'] = array(
    'name' => 'add terms in resource_type',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in social_tags'.
  $permissions['add terms in social_tags'] = array(
    'name' => 'add terms in social_tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in sports_event'.
  $permissions['add terms in sports_event'] = array(
    'name' => 'add terms in sports_event',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in sports_game'.
  $permissions['add terms in sports_game'] = array(
    'name' => 'add terms in sports_game',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in sports_league'.
  $permissions['add terms in sports_league'] = array(
    'name' => 'add terms in sports_league',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in technology'.
  $permissions['add terms in technology'] = array(
    'name' => 'add terms in technology',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in theme'.
  $permissions['add terms in theme'] = array(
    'name' => 'add terms in theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in tvshow'.
  $permissions['add terms in tvshow'] = array(
    'name' => 'add terms in tvshow',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in tvstation'.
  $permissions['add terms in tvstation'] = array(
    'name' => 'add terms in tvstation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in url'.
  $permissions['add terms in url'] = array(
    'name' => 'add terms in url',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'administer CAPTCHA settings'.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer epd map descriptions'.
  $permissions['administer epd map descriptions'] = array(
    'name' => 'administer epd map descriptions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'epd_map_descriptions',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer fields'.
  $permissions['administer fields'] = array(
    'name' => 'administer fields',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer linkit'.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'linkit',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer opencalais'.
  $permissions['administer opencalais'] = array(
    'name' => 'administer opencalais',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'opencalais',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer quicktabs'.
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'quicktabs',
  );

  // Exported permission: 'administer recaptcha'.
  $permissions['administer recaptcha'] = array(
    'name' => 'administer recaptcha',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'recaptcha',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer smtp module'.
  $permissions['administer smtp module'] = array(
    'name' => 'administer smtp module',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'smtp',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear node feeds'.
  $permissions['clear node feeds'] = array(
    'name' => 'clear node feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear user feeds'.
  $permissions['clear user feeds'] = array(
    'name' => 'clear user feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create asset content'.
  $permissions['create asset content'] = array(
    'name' => 'create asset content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create blog content'.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create case_study content'.
  $permissions['create case_study content'] = array(
    'name' => 'create case_study content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create home content'.
  $permissions['create home content'] = array(
    'name' => 'create home content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create project content'.
  $permissions['create project content'] = array(
    'name' => 'create project content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create publication content'.
  $permissions['create publication content'] = array(
    'name' => 'create publication content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create resource content'.
  $permissions['create resource content'] = array(
    'name' => 'create resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create top_tip content'.
  $permissions['create top_tip content'] = array(
    'name' => 'create top_tip content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any asset content'.
  $permissions['delete any asset content'] = array(
    'name' => 'delete any asset content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any blog content'.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any case_study content'.
  $permissions['delete any case_study content'] = array(
    'name' => 'delete any case_study content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any home content'.
  $permissions['delete any home content'] = array(
    'name' => 'delete any home content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any project content'.
  $permissions['delete any project content'] = array(
    'name' => 'delete any project content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any publication content'.
  $permissions['delete any publication content'] = array(
    'name' => 'delete any publication content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any resource content'.
  $permissions['delete any resource content'] = array(
    'name' => 'delete any resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any top_tip content'.
  $permissions['delete any top_tip content'] = array(
    'name' => 'delete any top_tip content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own asset content'.
  $permissions['delete own asset content'] = array(
    'name' => 'delete own asset content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own blog content'.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own case_study content'.
  $permissions['delete own case_study content'] = array(
    'name' => 'delete own case_study content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own home content'.
  $permissions['delete own home content'] = array(
    'name' => 'delete own home content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own project content'.
  $permissions['delete own project content'] = array(
    'name' => 'delete own project content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own publication content'.
  $permissions['delete own publication content'] = array(
    'name' => 'delete own publication content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own resource content'.
  $permissions['delete own resource content'] = array(
    'name' => 'delete own resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own top_tip content'.
  $permissions['delete own top_tip content'] = array(
    'name' => 'delete own top_tip content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in anniversary'.
  $permissions['delete terms in anniversary'] = array(
    'name' => 'delete terms in anniversary',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in asset_type'.
  $permissions['delete terms in asset_type'] = array(
    'name' => 'delete terms in asset_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in author'.
  $permissions['delete terms in author'] = array(
    'name' => 'delete terms in author',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in calais_document_category'.
  $permissions['delete terms in calais_document_category'] = array(
    'name' => 'delete terms in calais_document_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in city'.
  $permissions['delete terms in city'] = array(
    'name' => 'delete terms in city',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in company'.
  $permissions['delete terms in company'] = array(
    'name' => 'delete terms in company',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in conferences'.
  $permissions['delete terms in conferences'] = array(
    'name' => 'delete terms in conferences',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in continent'.
  $permissions['delete terms in continent'] = array(
    'name' => 'delete terms in continent',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in country'.
  $permissions['delete terms in country'] = array(
    'name' => 'delete terms in country',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in currency'.
  $permissions['delete terms in currency'] = array(
    'name' => 'delete terms in currency',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in data_type'.
  $permissions['delete terms in data_type'] = array(
    'name' => 'delete terms in data_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in editor'.
  $permissions['delete terms in editor'] = array(
    'name' => 'delete terms in editor',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in email_address'.
  $permissions['delete terms in email_address'] = array(
    'name' => 'delete terms in email_address',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in entertainment_award_event'.
  $permissions['delete terms in entertainment_award_event'] = array(
    'name' => 'delete terms in entertainment_award_event',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in events_facts'.
  $permissions['delete terms in events_facts'] = array(
    'name' => 'delete terms in events_facts',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in facility'.
  $permissions['delete terms in facility'] = array(
    'name' => 'delete terms in facility',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in fax_number'.
  $permissions['delete terms in fax_number'] = array(
    'name' => 'delete terms in fax_number',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in fund'.
  $permissions['delete terms in fund'] = array(
    'name' => 'delete terms in fund',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in fund_call_id'.
  $permissions['delete terms in fund_call_id'] = array(
    'name' => 'delete terms in fund_call_id',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in grant_category'.
  $permissions['delete terms in grant_category'] = array(
    'name' => 'delete terms in grant_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in holiday'.
  $permissions['delete terms in holiday'] = array(
    'name' => 'delete terms in holiday',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ii_keyword'.
  $permissions['delete terms in ii_keyword'] = array(
    'name' => 'delete terms in ii_keyword',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in industry_term'.
  $permissions['delete terms in industry_term'] = array(
    'name' => 'delete terms in industry_term',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in journalist'.
  $permissions['delete terms in journalist'] = array(
    'name' => 'delete terms in journalist',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in keywords'.
  $permissions['delete terms in keywords'] = array(
    'name' => 'delete terms in keywords',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in lead_organisation_departme'.
  $permissions['delete terms in lead_organisation_departme'] = array(
    'name' => 'delete terms in lead_organisation_departme',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in market_index'.
  $permissions['delete terms in market_index'] = array(
    'name' => 'delete terms in market_index',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in medical_condition'.
  $permissions['delete terms in medical_condition'] = array(
    'name' => 'delete terms in medical_condition',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in medical_treatment'.
  $permissions['delete terms in medical_treatment'] = array(
    'name' => 'delete terms in medical_treatment',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in movie'.
  $permissions['delete terms in movie'] = array(
    'name' => 'delete terms in movie',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in music_album'.
  $permissions['delete terms in music_album'] = array(
    'name' => 'delete terms in music_album',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in music_group'.
  $permissions['delete terms in music_group'] = array(
    'name' => 'delete terms in music_group',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in natural_feature'.
  $permissions['delete terms in natural_feature'] = array(
    'name' => 'delete terms in natural_feature',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in operating_system'.
  $permissions['delete terms in operating_system'] = array(
    'name' => 'delete terms in operating_system',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in organisations'.
  $permissions['delete terms in organisations'] = array(
    'name' => 'delete terms in organisations',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in organization'.
  $permissions['delete terms in organization'] = array(
    'name' => 'delete terms in organization',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in people'.
  $permissions['delete terms in people'] = array(
    'name' => 'delete terms in people',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in person'.
  $permissions['delete terms in person'] = array(
    'name' => 'delete terms in person',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in pharmaceutical_drug'.
  $permissions['delete terms in pharmaceutical_drug'] = array(
    'name' => 'delete terms in pharmaceutical_drug',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in phone_number'.
  $permissions['delete terms in phone_number'] = array(
    'name' => 'delete terms in phone_number',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in political_event'.
  $permissions['delete terms in political_event'] = array(
    'name' => 'delete terms in political_event',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in position'.
  $permissions['delete terms in position'] = array(
    'name' => 'delete terms in position',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in product'.
  $permissions['delete terms in product'] = array(
    'name' => 'delete terms in product',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in programming_language'.
  $permissions['delete terms in programming_language'] = array(
    'name' => 'delete terms in programming_language',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in project_status'.
  $permissions['delete terms in project_status'] = array(
    'name' => 'delete terms in project_status',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in province_or_state'.
  $permissions['delete terms in province_or_state'] = array(
    'name' => 'delete terms in province_or_state',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in publication_type'.
  $permissions['delete terms in publication_type'] = array(
    'name' => 'delete terms in publication_type',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in published_medium'.
  $permissions['delete terms in published_medium'] = array(
    'name' => 'delete terms in published_medium',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in radio_program'.
  $permissions['delete terms in radio_program'] = array(
    'name' => 'delete terms in radio_program',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in radio_station'.
  $permissions['delete terms in radio_station'] = array(
    'name' => 'delete terms in radio_station',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in region'.
  $permissions['delete terms in region'] = array(
    'name' => 'delete terms in region',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in resource_type'.
  $permissions['delete terms in resource_type'] = array(
    'name' => 'delete terms in resource_type',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in social_tags'.
  $permissions['delete terms in social_tags'] = array(
    'name' => 'delete terms in social_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in sports_event'.
  $permissions['delete terms in sports_event'] = array(
    'name' => 'delete terms in sports_event',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in sports_game'.
  $permissions['delete terms in sports_game'] = array(
    'name' => 'delete terms in sports_game',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in sports_league'.
  $permissions['delete terms in sports_league'] = array(
    'name' => 'delete terms in sports_league',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in technology'.
  $permissions['delete terms in technology'] = array(
    'name' => 'delete terms in technology',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in theme'.
  $permissions['delete terms in theme'] = array(
    'name' => 'delete terms in theme',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tvshow'.
  $permissions['delete terms in tvshow'] = array(
    'name' => 'delete terms in tvshow',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tvstation'.
  $permissions['delete terms in tvstation'] = array(
    'name' => 'delete terms in tvstation',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in url'.
  $permissions['delete terms in url'] = array(
    'name' => 'delete terms in url',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any asset content'.
  $permissions['edit any asset content'] = array(
    'name' => 'edit any asset content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any blog content'.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any case_study content'.
  $permissions['edit any case_study content'] = array(
    'name' => 'edit any case_study content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any home content'.
  $permissions['edit any home content'] = array(
    'name' => 'edit any home content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any project content'.
  $permissions['edit any project content'] = array(
    'name' => 'edit any project content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any publication content'.
  $permissions['edit any publication content'] = array(
    'name' => 'edit any publication content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any resource content'.
  $permissions['edit any resource content'] = array(
    'name' => 'edit any resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any top_tip content'.
  $permissions['edit any top_tip content'] = array(
    'name' => 'edit any top_tip content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own asset content'.
  $permissions['edit own asset content'] = array(
    'name' => 'edit own asset content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own blog content'.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own case_study content'.
  $permissions['edit own case_study content'] = array(
    'name' => 'edit own case_study content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'pre-authenticated' => 'pre-authenticated',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own home content'.
  $permissions['edit own home content'] = array(
    'name' => 'edit own home content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own project content'.
  $permissions['edit own project content'] = array(
    'name' => 'edit own project content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own publication content'.
  $permissions['edit own publication content'] = array(
    'name' => 'edit own publication content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own resource content'.
  $permissions['edit own resource content'] = array(
    'name' => 'edit own resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own top_tip content'.
  $permissions['edit own top_tip content'] = array(
    'name' => 'edit own top_tip content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in anniversary'.
  $permissions['edit terms in anniversary'] = array(
    'name' => 'edit terms in anniversary',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in asset_type'.
  $permissions['edit terms in asset_type'] = array(
    'name' => 'edit terms in asset_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in author'.
  $permissions['edit terms in author'] = array(
    'name' => 'edit terms in author',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in calais_document_category'.
  $permissions['edit terms in calais_document_category'] = array(
    'name' => 'edit terms in calais_document_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in city'.
  $permissions['edit terms in city'] = array(
    'name' => 'edit terms in city',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in company'.
  $permissions['edit terms in company'] = array(
    'name' => 'edit terms in company',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in conferences'.
  $permissions['edit terms in conferences'] = array(
    'name' => 'edit terms in conferences',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in continent'.
  $permissions['edit terms in continent'] = array(
    'name' => 'edit terms in continent',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in country'.
  $permissions['edit terms in country'] = array(
    'name' => 'edit terms in country',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in currency'.
  $permissions['edit terms in currency'] = array(
    'name' => 'edit terms in currency',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in data_type'.
  $permissions['edit terms in data_type'] = array(
    'name' => 'edit terms in data_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in editor'.
  $permissions['edit terms in editor'] = array(
    'name' => 'edit terms in editor',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in email_address'.
  $permissions['edit terms in email_address'] = array(
    'name' => 'edit terms in email_address',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in entertainment_award_event'.
  $permissions['edit terms in entertainment_award_event'] = array(
    'name' => 'edit terms in entertainment_award_event',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in events_facts'.
  $permissions['edit terms in events_facts'] = array(
    'name' => 'edit terms in events_facts',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in facility'.
  $permissions['edit terms in facility'] = array(
    'name' => 'edit terms in facility',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in fax_number'.
  $permissions['edit terms in fax_number'] = array(
    'name' => 'edit terms in fax_number',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in fund'.
  $permissions['edit terms in fund'] = array(
    'name' => 'edit terms in fund',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in fund_call_id'.
  $permissions['edit terms in fund_call_id'] = array(
    'name' => 'edit terms in fund_call_id',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in grant_category'.
  $permissions['edit terms in grant_category'] = array(
    'name' => 'edit terms in grant_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in holiday'.
  $permissions['edit terms in holiday'] = array(
    'name' => 'edit terms in holiday',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ii_keyword'.
  $permissions['edit terms in ii_keyword'] = array(
    'name' => 'edit terms in ii_keyword',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in industry_term'.
  $permissions['edit terms in industry_term'] = array(
    'name' => 'edit terms in industry_term',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in journalist'.
  $permissions['edit terms in journalist'] = array(
    'name' => 'edit terms in journalist',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in keywords'.
  $permissions['edit terms in keywords'] = array(
    'name' => 'edit terms in keywords',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in lead_organisation_departme'.
  $permissions['edit terms in lead_organisation_departme'] = array(
    'name' => 'edit terms in lead_organisation_departme',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in market_index'.
  $permissions['edit terms in market_index'] = array(
    'name' => 'edit terms in market_index',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in medical_condition'.
  $permissions['edit terms in medical_condition'] = array(
    'name' => 'edit terms in medical_condition',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in medical_treatment'.
  $permissions['edit terms in medical_treatment'] = array(
    'name' => 'edit terms in medical_treatment',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in movie'.
  $permissions['edit terms in movie'] = array(
    'name' => 'edit terms in movie',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in music_album'.
  $permissions['edit terms in music_album'] = array(
    'name' => 'edit terms in music_album',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in music_group'.
  $permissions['edit terms in music_group'] = array(
    'name' => 'edit terms in music_group',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in natural_feature'.
  $permissions['edit terms in natural_feature'] = array(
    'name' => 'edit terms in natural_feature',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in operating_system'.
  $permissions['edit terms in operating_system'] = array(
    'name' => 'edit terms in operating_system',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in organisations'.
  $permissions['edit terms in organisations'] = array(
    'name' => 'edit terms in organisations',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in organization'.
  $permissions['edit terms in organization'] = array(
    'name' => 'edit terms in organization',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in people'.
  $permissions['edit terms in people'] = array(
    'name' => 'edit terms in people',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in person'.
  $permissions['edit terms in person'] = array(
    'name' => 'edit terms in person',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in pharmaceutical_drug'.
  $permissions['edit terms in pharmaceutical_drug'] = array(
    'name' => 'edit terms in pharmaceutical_drug',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in phone_number'.
  $permissions['edit terms in phone_number'] = array(
    'name' => 'edit terms in phone_number',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in political_event'.
  $permissions['edit terms in political_event'] = array(
    'name' => 'edit terms in political_event',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in position'.
  $permissions['edit terms in position'] = array(
    'name' => 'edit terms in position',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in product'.
  $permissions['edit terms in product'] = array(
    'name' => 'edit terms in product',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in programming_language'.
  $permissions['edit terms in programming_language'] = array(
    'name' => 'edit terms in programming_language',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in project_status'.
  $permissions['edit terms in project_status'] = array(
    'name' => 'edit terms in project_status',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in province_or_state'.
  $permissions['edit terms in province_or_state'] = array(
    'name' => 'edit terms in province_or_state',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in publication_type'.
  $permissions['edit terms in publication_type'] = array(
    'name' => 'edit terms in publication_type',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in published_medium'.
  $permissions['edit terms in published_medium'] = array(
    'name' => 'edit terms in published_medium',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in radio_program'.
  $permissions['edit terms in radio_program'] = array(
    'name' => 'edit terms in radio_program',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in radio_station'.
  $permissions['edit terms in radio_station'] = array(
    'name' => 'edit terms in radio_station',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in region'.
  $permissions['edit terms in region'] = array(
    'name' => 'edit terms in region',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in resource_type'.
  $permissions['edit terms in resource_type'] = array(
    'name' => 'edit terms in resource_type',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in social_tags'.
  $permissions['edit terms in social_tags'] = array(
    'name' => 'edit terms in social_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in sports_event'.
  $permissions['edit terms in sports_event'] = array(
    'name' => 'edit terms in sports_event',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in sports_game'.
  $permissions['edit terms in sports_game'] = array(
    'name' => 'edit terms in sports_game',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in sports_league'.
  $permissions['edit terms in sports_league'] = array(
    'name' => 'edit terms in sports_league',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in technology'.
  $permissions['edit terms in technology'] = array(
    'name' => 'edit terms in technology',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in theme'.
  $permissions['edit terms in theme'] = array(
    'name' => 'edit terms in theme',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tvshow'.
  $permissions['edit terms in tvshow'] = array(
    'name' => 'edit terms in tvshow',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tvstation'.
  $permissions['edit terms in tvstation'] = array(
    'name' => 'edit terms in tvstation',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in url'.
  $permissions['edit terms in url'] = array(
    'name' => 'edit terms in url',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit webform components'.
  $permissions['edit webform components'] = array(
    'name' => 'edit webform components',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'enter asset revision log entry'.
  $permissions['enter asset revision log entry'] = array(
    'name' => 'enter asset revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter blog revision log entry'.
  $permissions['enter blog revision log entry'] = array(
    'name' => 'enter blog revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter case_study revision log entry'.
  $permissions['enter case_study revision log entry'] = array(
    'name' => 'enter case_study revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter event revision log entry'.
  $permissions['enter event revision log entry'] = array(
    'name' => 'enter event revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter home revision log entry'.
  $permissions['enter home revision log entry'] = array(
    'name' => 'enter home revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter news revision log entry'.
  $permissions['enter news revision log entry'] = array(
    'name' => 'enter news revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter page revision log entry'.
  $permissions['enter page revision log entry'] = array(
    'name' => 'enter page revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter project revision log entry'.
  $permissions['enter project revision log entry'] = array(
    'name' => 'enter project revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter publication revision log entry'.
  $permissions['enter publication revision log entry'] = array(
    'name' => 'enter publication revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter resource revision log entry'.
  $permissions['enter resource revision log entry'] = array(
    'name' => 'enter resource revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter top_tip revision log entry'.
  $permissions['enter top_tip revision log entry'] = array(
    'name' => 'enter top_tip revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter webform revision log entry'.
  $permissions['enter webform revision log entry'] = array(
    'name' => 'enter webform revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'filter harmonizer view info msgs'.
  $permissions['filter harmonizer view info msgs'] = array(
    'name' => 'filter harmonizer view info msgs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter_harmonizer',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import node feeds'.
  $permissions['import node feeds'] = array(
    'name' => 'import node feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import user feeds'.
  $permissions['import user feeds'] = array(
    'name' => 'import user feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'override asset authored by option'.
  $permissions['override asset authored by option'] = array(
    'name' => 'override asset authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override asset authored on option'.
  $permissions['override asset authored on option'] = array(
    'name' => 'override asset authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override asset promote to front page option'.
  $permissions['override asset promote to front page option'] = array(
    'name' => 'override asset promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override asset published option'.
  $permissions['override asset published option'] = array(
    'name' => 'override asset published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override asset revision option'.
  $permissions['override asset revision option'] = array(
    'name' => 'override asset revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override asset sticky option'.
  $permissions['override asset sticky option'] = array(
    'name' => 'override asset sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog authored by option'.
  $permissions['override blog authored by option'] = array(
    'name' => 'override blog authored by option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog authored on option'.
  $permissions['override blog authored on option'] = array(
    'name' => 'override blog authored on option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog promote to front page option'.
  $permissions['override blog promote to front page option'] = array(
    'name' => 'override blog promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog published option'.
  $permissions['override blog published option'] = array(
    'name' => 'override blog published option',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog revision option'.
  $permissions['override blog revision option'] = array(
    'name' => 'override blog revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog sticky option'.
  $permissions['override blog sticky option'] = array(
    'name' => 'override blog sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override case_study authored by option'.
  $permissions['override case_study authored by option'] = array(
    'name' => 'override case_study authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override case_study authored on option'.
  $permissions['override case_study authored on option'] = array(
    'name' => 'override case_study authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override case_study promote to front page option'.
  $permissions['override case_study promote to front page option'] = array(
    'name' => 'override case_study promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override case_study published option'.
  $permissions['override case_study published option'] = array(
    'name' => 'override case_study published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override case_study revision option'.
  $permissions['override case_study revision option'] = array(
    'name' => 'override case_study revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override case_study sticky option'.
  $permissions['override case_study sticky option'] = array(
    'name' => 'override case_study sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event authored by option'.
  $permissions['override event authored by option'] = array(
    'name' => 'override event authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event authored on option'.
  $permissions['override event authored on option'] = array(
    'name' => 'override event authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event promote to front page option'.
  $permissions['override event promote to front page option'] = array(
    'name' => 'override event promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event published option'.
  $permissions['override event published option'] = array(
    'name' => 'override event published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event revision option'.
  $permissions['override event revision option'] = array(
    'name' => 'override event revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event sticky option'.
  $permissions['override event sticky option'] = array(
    'name' => 'override event sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override home authored by option'.
  $permissions['override home authored by option'] = array(
    'name' => 'override home authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override home authored on option'.
  $permissions['override home authored on option'] = array(
    'name' => 'override home authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override home promote to front page option'.
  $permissions['override home promote to front page option'] = array(
    'name' => 'override home promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override home published option'.
  $permissions['override home published option'] = array(
    'name' => 'override home published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override home revision option'.
  $permissions['override home revision option'] = array(
    'name' => 'override home revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override home sticky option'.
  $permissions['override home sticky option'] = array(
    'name' => 'override home sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news authored by option'.
  $permissions['override news authored by option'] = array(
    'name' => 'override news authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news authored on option'.
  $permissions['override news authored on option'] = array(
    'name' => 'override news authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news promote to front page option'.
  $permissions['override news promote to front page option'] = array(
    'name' => 'override news promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news published option'.
  $permissions['override news published option'] = array(
    'name' => 'override news published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news revision option'.
  $permissions['override news revision option'] = array(
    'name' => 'override news revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news sticky option'.
  $permissions['override news sticky option'] = array(
    'name' => 'override news sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page authored by option'.
  $permissions['override page authored by option'] = array(
    'name' => 'override page authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page authored on option'.
  $permissions['override page authored on option'] = array(
    'name' => 'override page authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page promote to front page option'.
  $permissions['override page promote to front page option'] = array(
    'name' => 'override page promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page published option'.
  $permissions['override page published option'] = array(
    'name' => 'override page published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page revision option'.
  $permissions['override page revision option'] = array(
    'name' => 'override page revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page sticky option'.
  $permissions['override page sticky option'] = array(
    'name' => 'override page sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override project authored by option'.
  $permissions['override project authored by option'] = array(
    'name' => 'override project authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override project authored on option'.
  $permissions['override project authored on option'] = array(
    'name' => 'override project authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override project promote to front page option'.
  $permissions['override project promote to front page option'] = array(
    'name' => 'override project promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override project published option'.
  $permissions['override project published option'] = array(
    'name' => 'override project published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override project revision option'.
  $permissions['override project revision option'] = array(
    'name' => 'override project revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override project sticky option'.
  $permissions['override project sticky option'] = array(
    'name' => 'override project sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override publication authored by option'.
  $permissions['override publication authored by option'] = array(
    'name' => 'override publication authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override publication authored on option'.
  $permissions['override publication authored on option'] = array(
    'name' => 'override publication authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override publication promote to front page option'.
  $permissions['override publication promote to front page option'] = array(
    'name' => 'override publication promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override publication published option'.
  $permissions['override publication published option'] = array(
    'name' => 'override publication published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override publication revision option'.
  $permissions['override publication revision option'] = array(
    'name' => 'override publication revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override publication sticky option'.
  $permissions['override publication sticky option'] = array(
    'name' => 'override publication sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override resource authored by option'.
  $permissions['override resource authored by option'] = array(
    'name' => 'override resource authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override resource authored on option'.
  $permissions['override resource authored on option'] = array(
    'name' => 'override resource authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override resource promote to front page option'.
  $permissions['override resource promote to front page option'] = array(
    'name' => 'override resource promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override resource published option'.
  $permissions['override resource published option'] = array(
    'name' => 'override resource published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override resource revision option'.
  $permissions['override resource revision option'] = array(
    'name' => 'override resource revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override resource sticky option'.
  $permissions['override resource sticky option'] = array(
    'name' => 'override resource sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override top_tip authored by option'.
  $permissions['override top_tip authored by option'] = array(
    'name' => 'override top_tip authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override top_tip authored on option'.
  $permissions['override top_tip authored on option'] = array(
    'name' => 'override top_tip authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override top_tip promote to front page option'.
  $permissions['override top_tip promote to front page option'] = array(
    'name' => 'override top_tip promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override top_tip published option'.
  $permissions['override top_tip published option'] = array(
    'name' => 'override top_tip published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override top_tip revision option'.
  $permissions['override top_tip revision option'] = array(
    'name' => 'override top_tip revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override top_tip sticky option'.
  $permissions['override top_tip sticky option'] = array(
    'name' => 'override top_tip sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override webform authored by option'.
  $permissions['override webform authored by option'] = array(
    'name' => 'override webform authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override webform authored on option'.
  $permissions['override webform authored on option'] = array(
    'name' => 'override webform authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override webform promote to front page option'.
  $permissions['override webform promote to front page option'] = array(
    'name' => 'override webform promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override webform published option'.
  $permissions['override webform published option'] = array(
    'name' => 'override webform published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override webform revision option'.
  $permissions['override webform revision option'] = array(
    'name' => 'override webform revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override webform sticky option'.
  $permissions['override webform sticky option'] = array(
    'name' => 'override webform sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip CAPTCHA'.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'unlock node feeds'.
  $permissions['unlock node feeds'] = array(
    'name' => 'unlock node feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock user feeds'.
  $permissions['unlock user feeds'] = array(
    'name' => 'unlock user feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(),
    'module' => 'ctools',
  );

  // Exported permission: 'use media wysiwyg'.
  $permissions['use media wysiwyg'] = array(
    'name' => 'use media wysiwyg',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'media_wysiwyg',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'view any unpublished asset content'.
  $permissions['view any unpublished asset content'] = array(
    'name' => 'view any unpublished asset content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished blog content'.
  $permissions['view any unpublished blog content'] = array(
    'name' => 'view any unpublished blog content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished case_study content'.
  $permissions['view any unpublished case_study content'] = array(
    'name' => 'view any unpublished case_study content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished content'.
  $permissions['view any unpublished content'] = array(
    'name' => 'view any unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished event content'.
  $permissions['view any unpublished event content'] = array(
    'name' => 'view any unpublished event content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished home content'.
  $permissions['view any unpublished home content'] = array(
    'name' => 'view any unpublished home content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished news content'.
  $permissions['view any unpublished news content'] = array(
    'name' => 'view any unpublished news content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished page content'.
  $permissions['view any unpublished page content'] = array(
    'name' => 'view any unpublished page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished project content'.
  $permissions['view any unpublished project content'] = array(
    'name' => 'view any unpublished project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished publication content'.
  $permissions['view any unpublished publication content'] = array(
    'name' => 'view any unpublished publication content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished resource content'.
  $permissions['view any unpublished resource content'] = array(
    'name' => 'view any unpublished resource content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished top_tip content'.
  $permissions['view any unpublished top_tip content'] = array(
    'name' => 'view any unpublished top_tip content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished webform content'.
  $permissions['view any unpublished webform content'] = array(
    'name' => 'view any unpublished webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'system',
  );

  return $permissions;
}
