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
  $handler->display->display_options['title'] = 'Humanitarian Profile Summary';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_location_pcode' => 'field_location_pcode',
    'field_locations' => 'field_locations',
    'field_humprofile_date' => 'field_humprofile_date',
    'field_humprofile_affected' => 'field_humprofile_affected',
    'field_humprofile_displaced' => 'field_humprofile_affected',
    'field_humprofile_non_displaced' => 'field_humprofile_affected',
    'field_humprofile_casualities' => 'field_humprofile_casualities',
    'field_humprofile_assistance' => 'field_humprofile_assistance',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_location_pcode' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_humprofile_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_humprofile_affected' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
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
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_humprofile_assistance' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'The Humanitarian Profile is an attempt to account for, on an ongoing basis, the number of people affected by an emergency. Because people may be affected in many different ways by an emergency, different groups are identified within the humanitarian profile, such as displaced, non-displaced, injured, missing, and dead.

When it is available, a more detailed humanitarian profile dataset may be found on the Common Operational Datasets Registry . The information presented on HumanitarianResponse.info represents a summary of that dataset if it is available. Otherwise, the tables presented here represent the most detailed information available. <a href="http://cod.humanitarianresponse.info/node/52">Full Humanitarian Profile guidance.</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Relationship: Content: Location (field_locations) */
  $handler->display->display_options['relationships']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['relationships']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['relationships']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['relationships']['field_locations_tid']['required'] = 0;
  /* Relationship: Content: Displaced (field_humprofile_displaced) */
  $handler->display->display_options['relationships']['field_humprofile_displaced_value']['id'] = 'field_humprofile_displaced_value';
  $handler->display->display_options['relationships']['field_humprofile_displaced_value']['table'] = 'field_data_field_humprofile_displaced';
  $handler->display->display_options['relationships']['field_humprofile_displaced_value']['field'] = 'field_humprofile_displaced_value';
  $handler->display->display_options['relationships']['field_humprofile_displaced_value']['required'] = 0;
  $handler->display->display_options['relationships']['field_humprofile_displaced_value']['delta'] = '-1';
  /* Field: Taxonomy term: PCode */
  $handler->display->display_options['fields']['field_location_pcode']['id'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['table'] = 'field_data_field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['field'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['relationship'] = 'field_locations_tid';
  $handler->display->display_options['fields']['field_location_pcode']['label'] = '';
  $handler->display->display_options['fields']['field_location_pcode']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_pcode']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location_pcode']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location_pcode']['field_api_classes'] = 0;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_locations']['alter']['text'] = '[field_locations]
PCode: [field_location_pcode]';
  $handler->display->display_options['fields']['field_locations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['nl2br'] = 1;
  $handler->display->display_options['fields']['field_locations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_locations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_locations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_locations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_locations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_locations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_locations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_locations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_locations']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_locations']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_locations']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_locations']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_locations']['field_api_classes'] = 0;
  /* Field: Content: Date of Data */
  $handler->display->display_options['fields']['field_humprofile_date']['id'] = 'field_humprofile_date';
  $handler->display->display_options['fields']['field_humprofile_date']['table'] = 'field_data_field_humprofile_date';
  $handler->display->display_options['fields']['field_humprofile_date']['field'] = 'field_humprofile_date';
  $handler->display->display_options['fields']['field_humprofile_date']['label'] = 'Date of Data (dd/mm/yyyy)';
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
  $handler->display->display_options['fields']['field_humprofile_affected']['label'] = 'Numbers of People';
  $handler->display->display_options['fields']['field_humprofile_affected']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_humprofile_affected']['alter']['text'] = '<div class="field field-name-field-humprofile-affected field-type-number-integer field-label-inline clearfix">
<div class="field-label">Affected:</div><div class="field-items"><div class="field-item">[field_humprofile_affected]</div></div>
</div>';
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
  $handler->display->display_options['fields']['field_humprofile_affected']['empty'] = 'No data';
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
    'view_mode' => 'full',
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
  /* Field: Content: Casualties */
  $handler->display->display_options['fields']['field_humprofile_casualities']['id'] = 'field_humprofile_casualities';
  $handler->display->display_options['fields']['field_humprofile_casualities']['table'] = 'field_data_field_humprofile_casualities';
  $handler->display->display_options['fields']['field_humprofile_casualities']['field'] = 'field_humprofile_casualities';
  $handler->display->display_options['fields']['field_humprofile_casualities']['label'] = '';
  $handler->display->display_options['fields']['field_humprofile_casualities']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_humprofile_casualities']['alter']['text'] = '<div class="field field-name-field-humprofile-casualties field-type-number-integer field-label-inline clearfix">
<div class="field-label">Casualties:</div><div class="field-items"><div class="field-item">[field_humprofile_casualities]</div></div>
</div>';
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
  $handler->display->display_options['fields']['field_humprofile_casualities']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_humprofile_assistance']['label'] = '';
  $handler->display->display_options['fields']['field_humprofile_assistance']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_humprofile_assistance']['alter']['text'] = '<div class="field field-name-field-humprofile-assistance field-type-number-integer field-label-inline clearfix">
<div class="field-label">Need Assistance:</div><div class="field-items"><div class="field-item">[field_humprofile_assistance]</div></div>
</div>';
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
  $handler->display->display_options['fields']['field_humprofile_assistance']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_humprofile_assistance']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_humprofile_assistance']['empty'] = 'No data';
  $handler->display->display_options['fields']['field_humprofile_assistance']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_humprofile_assistance']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_humprofile_assistance']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_humprofile_assistance']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_humprofile_assistance']['field_api_classes'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
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
  /* Filter criterion: Content: Location (field_locations) */
  $handler->display->display_options['filters']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['filters']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['value'] = '';
  $handler->display->display_options['filters']['field_locations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator_id'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['identifier'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['vocabulary'] = 'locations';
  $handler->display->display_options['filters']['field_locations_tid']['error_message'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'visuals-data/humanitarian-profile';
  $export['humanitarian_profile'] = $view;

  return $export;
}
