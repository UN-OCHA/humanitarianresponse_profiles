<?php
/**
 * @file
 * humanitarianresponse_profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function humanitarianresponse_profiles_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function humanitarianresponse_profiles_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function humanitarianresponse_profiles_node_info() {
  $items = array(
    'humanitarian_profile' => array(
      'name' => t('Humanitarian Profile'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
