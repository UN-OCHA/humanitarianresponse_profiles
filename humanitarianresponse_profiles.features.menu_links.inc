<?php
/**
 * @file
 * humanitarianresponse_profiles.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function humanitarianresponse_profiles_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:humanitarian-profile
  $menu_links['main-menu:humanitarian-profile'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'humanitarian-profile',
    'router_path' => 'humanitarian-profile',
    'link_title' => 'Humanitarian Profile',
    'options' => array(
      'attributes' => array(
        'title' => 'Humanitarian Profile',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => '<nolink>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Humanitarian Profile');


  return $menu_links;
}
