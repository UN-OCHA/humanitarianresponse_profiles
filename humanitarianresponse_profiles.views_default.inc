<?php
/**
 * @file
 * humanitarianresponse_profiles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function humanitarianresponse_profiles_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'humanitarian_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Humanitarian Profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Humanitarian Profile';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_loc' => 'field_loc',
    'title' => 'title',
    'field_humprofile_date' => 'field_humprofile_date',
    'field_humprofile_affected' => 'field_humprofile_affected',
    'field_humprofile_displaced' => 'field_humprofile_displaced',
    'field_humprofile_non_displaced' => 'field_humprofile_non_displaced',
    'field_humprofile_casualities' => 'field_humprofile_casualities',
    'field_humprofile_assistance' => 'field_humprofile_assistance',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_loc' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_humprofile_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_humprofile_affected' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_humprofile_displaced' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_humprofile_non_displaced' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_humprofile_casualities' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_humprofile_assistance' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_loc']['id'] = 'field_loc';
  $handler->display->display_options['fields']['field_loc']['table'] = 'field_data_field_loc';
  $handler->display->display_options['fields']['field_loc']['field'] = 'field_loc';
  $handler->display->display_options['fields']['field_loc']['label'] = '';
  $handler->display->display_options['fields']['field_loc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_loc']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_loc']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_loc']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_loc']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_loc']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_loc']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_loc']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_loc']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_loc']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_loc']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_loc']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_loc']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_loc']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_loc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_loc']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_loc']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_loc']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_loc']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_loc']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_loc']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_loc']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_loc']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_loc']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_loc']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Location';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_loc]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date of Data */
  $handler->display->display_options['fields']['field_humprofile_date']['id'] = 'field_humprofile_date';
  $handler->display->display_options['fields']['field_humprofile_date']['table'] = 'field_data_field_humprofile_date';
  $handler->display->display_options['fields']['field_humprofile_date']['field'] = 'field_humprofile_date';
  $handler->display->display_options['fields']['field_humprofile_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_humprofile_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_humprofile_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_humprofile_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_humprofile_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_humprofile_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_humprofile_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_humprofile_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_humprofile_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_humprofile_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_humprofile_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_humprofile_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_humprofile_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_humprofile_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_humprofile_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_humprofile_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_humprofile_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_humprofile_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_humprofile_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_humprofile_date']['field_api_classes'] = 0;
  /* Field: Content: Affected */
  $handler->display->display_options['fields']['field_humprofile_affected']['id'] = 'field_humprofile_affected';
  $handler->display->display_options['fields']['field_humprofile_affected']['table'] = 'field_data_field_humprofile_affected';
  $handler->display->display_options['fields']['field_humprofile_affected']['field'] = 'field_humprofile_affected';
  $handler->display->display_options['fields']['field_humprofile_affected']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_humprofile_affected']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_humprofile_affected']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_humprofile_affected']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_humprofile_affected']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_humprofile_affected']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_humprofile_affected']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_humprofile_affected']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_humprofile_affected']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_humprofile_affected']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_humprofile_affected']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_humprofile_affected']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_humprofile_affected']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_humprofile_affected']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_humprofile_affected']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_humprofile_affected']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_humprofile_affected']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_humprofile_affected']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_humprofile_affected']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_humprofile_affected']['field_api_classes'] = 0;
  /* Field: Content: Displaced */
  $handler->display->display_options['fields']['field_humprofile_displaced']['id'] = 'field_humprofile_displaced';
  $handler->display->display_options['fields']['field_humprofile_displaced']['table'] = 'field_data_field_humprofile_displaced';
  $handler->display->display_options['fields']['field_humprofile_displaced']['field'] = 'field_humprofile_displaced';
  $handler->display->display_options['fields']['field_humprofile_displaced']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_humprofile_displaced']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_humprofile_displaced']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_humprofile_displaced']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_humprofile_displaced']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_humprofile_displaced']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_humprofile_displaced']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_humprofile_displaced']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_humprofile_displaced']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_humprofile_displaced']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_humprofile_displaced']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_humprofile_displaced']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_humprofile_displaced']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_humprofile_displaced']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_humprofile_displaced']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_humprofile_displaced']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_humprofile_displaced']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_humprofile_displaced']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_humprofile_displaced']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_humprofile_displaced']['settings'] = array(
    'name' => 'field_collection_view',
    'display_id' => 'default',
    'add' => 'Add',
  );
  $handler->display->display_options['fields']['field_humprofile_displaced']['field_api_classes'] = 0;
  /* Field: Content: Non-Displaced */
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['id'] = 'field_humprofile_non_displaced';
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['table'] = 'field_data_field_humprofile_non_displaced';
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['field'] = 'field_humprofile_non_displaced';
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['field_api_classes'] = 0;
  /* Field: Content: Casualities */
  $handler->display->display_options['fields']['field_humprofile_casualities']['id'] = 'field_humprofile_casualities';
  $handler->display->display_options['fields']['field_humprofile_casualities']['table'] = 'field_data_field_humprofile_casualities';
  $handler->display->display_options['fields']['field_humprofile_casualities']['field'] = 'field_humprofile_casualities';
  $handler->display->display_options['fields']['field_humprofile_casualities']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_humprofile_casualities']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_humprofile_casualities']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_humprofile_casualities']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_humprofile_casualities']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_humprofile_casualities']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_humprofile_casualities']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_humprofile_casualities']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_humprofile_casualities']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_humprofile_casualities']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_humprofile_casualities']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_humprofile_casualities']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_humprofile_casualities']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_humprofile_casualities']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_humprofile_casualities']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_humprofile_casualities']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_humprofile_casualities']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_humprofile_casualities']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_humprofile_casualities']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_humprofile_casualities']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_humprofile_casualities']['field_api_classes'] = 0;
  /* Field: Content: In Need of Humanitarian Assistance */
  $handler->display->display_options['fields']['field_humprofile_assistance']['id'] = 'field_humprofile_assistance';
  $handler->display->display_options['fields']['field_humprofile_assistance']['table'] = 'field_data_field_humprofile_assistance';
  $handler->display->display_options['fields']['field_humprofile_assistance']['field'] = 'field_humprofile_assistance';
  $handler->display->display_options['fields']['field_humprofile_assistance']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_humprofile_assistance']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_humprofile_assistance']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_humprofile_assistance']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_humprofile_assistance']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_humprofile_assistance']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_humprofile_assistance']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_humprofile_assistance']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_humprofile_assistance']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_humprofile_assistance']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_humprofile_assistance']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_humprofile_assistance']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_humprofile_assistance']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_humprofile_assistance']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_humprofile_assistance']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_humprofile_assistance']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_humprofile_assistance']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_humprofile_assistance']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_humprofile_assistance']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_humprofile_assistance']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Date of Data (field_humprofile_date) */
  $handler->display->display_options['sorts']['field_humprofile_date_value']['id'] = 'field_humprofile_date_value';
  $handler->display->display_options['sorts']['field_humprofile_date_value']['table'] = 'field_data_field_humprofile_date';
  $handler->display->display_options['sorts']['field_humprofile_date_value']['field'] = 'field_humprofile_date_value';
  $handler->display->display_options['sorts']['field_humprofile_date_value']['order'] = 'DESC';
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
    'humanitarian_profile' => 'humanitarian_profile',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'coordination/humanitarian-profile';
  $translatables['humanitarian_profile'] = array(
    t('Master'),
    t('Humanitarian Profile'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Location'),
    t('[field_loc]'),
    t('Date of Data'),
    t('Affected'),
    t('Displaced'),
    t('Non-Displaced'),
    t('Casualities'),
    t('In Need of Humanitarian Assistance'),
    t('Page'),
  );
  $export['humanitarian_profile'] = $view;

  return $export;
}
