<?php
/**
 * @file
 * epd_top_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function epd_top_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-top-menu_children--young-people:http://theimpactinitiative1.dev.dd:8083//search?field_themes_tid[]=1392.
  $menu_links['menu-top-menu_children--young-people:http://theimpactinitiative1.dev.dd:8083//search?field_themes_tid[]=1392'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'http://theimpactinitiative1.dev.dd:8083//search?field_themes_tid[]=1392',
    'router_path' => '',
    'link_title' => 'Children & Young People',
    'options' => array(
      'menu_token_link_path' => '[site:url]/search?field_themes_tid[]=1392',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'node_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/58909c878b0fa',
      'attributes' => array(
        'class' => array(
          0 => 'children',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-top-menu_children--young-people:http://theimpactinitiative1.dev.dd:8083//search?field_themes_tid[]=1392',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_projects:http://theimpactinitiative1.dev.dd:8083/admin/structure/features/epd_top_menu/recreate#',
  );
  // Exported menu link: menu-top-menu_education:menutoken/5890a98f8cd41.
  $menu_links['menu-top-menu_education:menutoken/5890a98f8cd41'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'menutoken/5890a98f8cd41',
    'router_path' => 'menutoken/%',
    'link_title' => 'Education',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'education',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_token_link_path' => '[site:url]/search?field_themes_tid[]=10',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'node_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-top-menu_education:menutoken/5890a98f8cd41',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_projects:http://theimpactinitiative1.dev.dd:8083/admin/structure/features/epd_top_menu/recreate#',
  );
  // Exported menu link: menu-top-menu_events:node/1039.
  $menu_links['menu-top-menu_events:node/1039'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'node/1039',
    'router_path' => 'node/%',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'events',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-top-menu_events:node/1039',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_gender:menutoken/5890aa09710a8.
  $menu_links['menu-top-menu_gender:menutoken/5890aa09710a8'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'menutoken/5890aa09710a8',
    'router_path' => 'menutoken/%',
    'link_title' => 'Gender',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'gender',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_token_link_path' => '[site:url]/search?field_themes_tid[]=1403',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'node_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-top-menu_gender:menutoken/5890aa09710a8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_projects:http://theimpactinitiative1.dev.dd:8083/admin/structure/features/epd_top_menu/recreate#',
  );
  // Exported menu link: menu-top-menu_governance:menutoken/5890aa431a080.
  $menu_links['menu-top-menu_governance:menutoken/5890aa431a080'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'menutoken/5890aa431a080',
    'router_path' => 'menutoken/%',
    'link_title' => 'Governance',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'governance',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_token_link_path' => '[site:url]/search?field_themes_tid[]=5',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'node_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-top-menu_governance:menutoken/5890aa431a080',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_projects:http://theimpactinitiative1.dev.dd:8083/admin/structure/features/epd_top_menu/recreate#',
  );
  // Exported menu link: menu-top-menu_health:menutoken/5890aac3c91dd.
  $menu_links['menu-top-menu_health:menutoken/5890aac3c91dd'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'menutoken/5890aac3c91dd',
    'router_path' => 'menutoken/%',
    'link_title' => 'Health',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'health',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_token_link_path' => '[site:url]/search?field_themes_tid[]=9',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'node_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-top-menu_health:menutoken/5890aac3c91dd',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_projects:http://theimpactinitiative1.dev.dd:8083/admin/structure/features/epd_top_menu/recreate#',
  );
  // Exported menu link: menu-top-menu_home:<front>.
  $menu_links['menu-top-menu_home:<front>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'home',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-top-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_impact-lab:node/1141.
  $menu_links['menu-top-menu_impact-lab:node/1141'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'node/1141',
    'router_path' => 'node/%',
    'link_title' => 'Impact Lab',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'impact',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-top-menu_impact-lab:node/1141',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_livelihoods:menutoken/5890aaf96ef73.
  $menu_links['menu-top-menu_livelihoods:menutoken/5890aaf96ef73'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'menutoken/5890aaf96ef73',
    'router_path' => 'menutoken/%',
    'link_title' => 'Livelihoods',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'livelihoods',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_token_link_path' => '[site:url]/search?field_themes_tid[]=6',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'node_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-top-menu_livelihoods:menutoken/5890aaf96ef73',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_projects:http://theimpactinitiative1.dev.dd:8083/admin/structure/features/epd_top_menu/recreate#',
  );
  // Exported menu link: menu-top-menu_news:blog.
  $menu_links['menu-top-menu_news:blog'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'news',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-top-menu_news:blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_projects:http://theimpactinitiative1.dev.dd:8083/admin/structure/menu/item/3323/edit#.
  $menu_links['menu-top-menu_projects:http://theimpactinitiative1.dev.dd:8083/admin/structure/menu/item/3323/edit#'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'http://theimpactinitiative1.dev.dd:8083/admin/structure/menu/item/3323/edit#',
    'router_path' => '',
    'link_title' => 'Projects',
    'options' => array(
      'menu_token_link_path' => '[current-page:url]#',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'node_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/58909a83372cc',
      'attributes' => array(
        'class' => array(
          0 => 'project',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-top-menu_projects:http://theimpactinitiative1.dev.dd:8083/admin/structure/menu/item/3323/edit#',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_resources:resources.
  $menu_links['menu-top-menu_resources:resources'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'resources',
    'router_path' => 'resources',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'resources',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-top-menu_resources:resources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_search:node/974.
  $menu_links['menu-top-menu_search:node/974'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'node/974',
    'router_path' => 'node/%',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'search',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-top-menu_search:node/974',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_security:menutoken/5890ab280c306.
  $menu_links['menu-top-menu_security:menutoken/5890ab280c306'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'menutoken/5890ab280c306',
    'router_path' => 'menutoken/%',
    'link_title' => 'Security',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'security',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_token_link_path' => '[site:url]/search?field_themes_tid[]=4',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'node_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-top-menu_security:menutoken/5890ab280c306',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_projects:http://theimpactinitiative1.dev.dd:8083/admin/structure/features/epd_top_menu/recreate#',
  );
  // Exported menu link: menu-top-menu_urbanrural:menutoken/5890ab4bdcdf9.
  $menu_links['menu-top-menu_urbanrural:menutoken/5890ab4bdcdf9'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'menutoken/5890ab4bdcdf9',
    'router_path' => 'menutoken/%',
    'link_title' => 'Urban/Rural',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'urban',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_token_link_path' => '[site:url]/search?field_themes_tid[]=8',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'node_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-top-menu_urbanrural:menutoken/5890ab4bdcdf9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_projects:http://theimpactinitiative1.dev.dd:8083/admin/structure/features/epd_top_menu/recreate#',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Children & Young People');
  t('Education');
  t('Events');
  t('Gender');
  t('Governance');
  t('Health');
  t('Home');
  t('Impact Lab');
  t('Livelihoods');
  t('News');
  t('Projects');
  t('Resources');
  t('Search');
  t('Security');
  t('Urban/Rural');

  return $menu_links;
}
