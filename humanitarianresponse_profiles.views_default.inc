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

  $view = new view();
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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'The Humanitarian Profile is an attempt to account for, on an ongoing basis, the number of people affected by an emergency. Because people may be affected in many different ways by an emergency, different groups are identified within the humanitarian profile, such as displaced, non-displaced, injured, missing, and dead.

When it is available, a more detailed humanitarian profile dataset may be found on the Common Operational Datasets Registry . The information presented on HumanitarianResponse.info represents a summary of that dataset if it is available. Otherwise, the tables presented here represent the most detailed information available. <a href="http://cod.humanitarianresponse.info/node/52">Full Humanitarian Profile guidance.</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Relationship: Field: Location (field_locations) */
  $handler->display->display_options['relationships']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['relationships']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['relationships']['field_locations_tid']['field'] = 'field_locations_tid';
  /* Relationship: Content: Displaced (field_humprofile_displaced) */
  $handler->display->display_options['relationships']['field_humprofile_displaced_value']['id'] = 'field_humprofile_displaced_value';
  $handler->display->display_options['relationships']['field_humprofile_displaced_value']['table'] = 'field_data_field_humprofile_displaced';
  $handler->display->display_options['relationships']['field_humprofile_displaced_value']['field'] = 'field_humprofile_displaced_value';
  $handler->display->display_options['relationships']['field_humprofile_displaced_value']['delta'] = '-1';
  /* Field: Taxonomy term: PCode */
  $handler->display->display_options['fields']['field_location_pcode']['id'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['table'] = 'field_data_field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['field'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['relationship'] = 'field_locations_tid';
  $handler->display->display_options['fields']['field_location_pcode']['label'] = '';
  $handler->display->display_options['fields']['field_location_pcode']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_pcode']['element_label_colon'] = FALSE;
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_locations']['alter']['text'] = '[field_locations]
PCode: [field_location_pcode]';
  $handler->display->display_options['fields']['field_locations']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_locations']['multi_type'] = 'ul';
  /* Field: Content: Date of Data */
  $handler->display->display_options['fields']['field_humprofile_date']['id'] = 'field_humprofile_date';
  $handler->display->display_options['fields']['field_humprofile_date']['table'] = 'field_data_field_humprofile_date';
  $handler->display->display_options['fields']['field_humprofile_date']['field'] = 'field_humprofile_date';
  $handler->display->display_options['fields']['field_humprofile_date']['label'] = 'Date of Data (dd/mm/yyyy)';
  $handler->display->display_options['fields']['field_humprofile_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_humprofile_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Affected */
  $handler->display->display_options['fields']['field_humprofile_affected']['id'] = 'field_humprofile_affected';
  $handler->display->display_options['fields']['field_humprofile_affected']['table'] = 'field_data_field_humprofile_affected';
  $handler->display->display_options['fields']['field_humprofile_affected']['field'] = 'field_humprofile_affected';
  $handler->display->display_options['fields']['field_humprofile_affected']['label'] = 'Numbers of People';
  $handler->display->display_options['fields']['field_humprofile_affected']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_humprofile_affected']['alter']['text'] = '<div class="field field-name-field-humprofile-affected field-type-number-integer field-label-inline clearfix">
<div class="field-label">Affected:</div><div class="field-items"><div class="field-item">[field_humprofile_affected]</div></div>
</div>';
  $handler->display->display_options['fields']['field_humprofile_affected']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_humprofile_affected']['empty'] = 'No data';
  $handler->display->display_options['fields']['field_humprofile_affected']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Displaced */
  $handler->display->display_options['fields']['field_humprofile_displaced']['id'] = 'field_humprofile_displaced';
  $handler->display->display_options['fields']['field_humprofile_displaced']['table'] = 'field_data_field_humprofile_displaced';
  $handler->display->display_options['fields']['field_humprofile_displaced']['field'] = 'field_humprofile_displaced';
  $handler->display->display_options['fields']['field_humprofile_displaced']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_humprofile_displaced']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_humprofile_displaced']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content: Non-Displaced */
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['id'] = 'field_humprofile_non_displaced';
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['table'] = 'field_data_field_humprofile_non_displaced';
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['field'] = 'field_humprofile_non_displaced';
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_humprofile_non_displaced']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content: Casualties */
  $handler->display->display_options['fields']['field_humprofile_casualities']['id'] = 'field_humprofile_casualities';
  $handler->display->display_options['fields']['field_humprofile_casualities']['table'] = 'field_data_field_humprofile_casualities';
  $handler->display->display_options['fields']['field_humprofile_casualities']['field'] = 'field_humprofile_casualities';
  $handler->display->display_options['fields']['field_humprofile_casualities']['label'] = '';
  $handler->display->display_options['fields']['field_humprofile_casualities']['alter']['text'] = '<div class="field field-name-field-humprofile-casualties field-type-number-integer field-label-inline clearfix">
<div class="field-label">Casualties:</div><div class="field-items"><div class="field-item">[field_humprofile_casualities]</div></div>
</div>';
  $handler->display->display_options['fields']['field_humprofile_casualities']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_humprofile_casualities']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_humprofile_casualities']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content: In Need of Humanitarian Assistance */
  $handler->display->display_options['fields']['field_humprofile_assistance']['id'] = 'field_humprofile_assistance';
  $handler->display->display_options['fields']['field_humprofile_assistance']['table'] = 'field_data_field_humprofile_assistance';
  $handler->display->display_options['fields']['field_humprofile_assistance']['field'] = 'field_humprofile_assistance';
  $handler->display->display_options['fields']['field_humprofile_assistance']['label'] = '';
  $handler->display->display_options['fields']['field_humprofile_assistance']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_humprofile_assistance']['alter']['text'] = '<div class="field field-name-field-humprofile-assistance field-type-number-integer field-label-inline clearfix">
<div class="field-label">Need Assistance:</div><div class="field-items"><div class="field-item">[field_humprofile_assistance]</div></div>
</div>';
  $handler->display->display_options['fields']['field_humprofile_assistance']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_humprofile_assistance']['empty'] = 'No data';
  $handler->display->display_options['fields']['field_humprofile_assistance']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
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
  /* Filter criterion: Field: Location (field_locations) */
  $handler->display->display_options['filters']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['filters']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['value'] = '';
  $handler->display->display_options['filters']['field_locations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator_id'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['identifier'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['vocabulary'] = 'locations';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'humanitarian-profile';

  /* Display: XLS */
  $handler = $view->new_display('views_data_export', 'XLS', 'xls');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'humanitarian_profile_summary.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Displaced (field_humprofile_displaced) */
  $handler->display->display_options['relationships']['field_humprofile_displaced_value']['id'] = 'field_humprofile_displaced_value';
  $handler->display->display_options['relationships']['field_humprofile_displaced_value']['table'] = 'field_data_field_humprofile_displaced';
  $handler->display->display_options['relationships']['field_humprofile_displaced_value']['field'] = 'field_humprofile_displaced_value';
  $handler->display->display_options['relationships']['field_humprofile_displaced_value']['delta'] = '-1';
  /* Relationship: Content: Casualties (field_humprofile_casualities) */
  $handler->display->display_options['relationships']['field_humprofile_casualities_value']['id'] = 'field_humprofile_casualities_value';
  $handler->display->display_options['relationships']['field_humprofile_casualities_value']['table'] = 'field_data_field_humprofile_casualities';
  $handler->display->display_options['relationships']['field_humprofile_casualities_value']['field'] = 'field_humprofile_casualities_value';
  $handler->display->display_options['relationships']['field_humprofile_casualities_value']['delta'] = '-1';
  /* Relationship: Content: Non-Displaced (field_humprofile_non_displaced) */
  $handler->display->display_options['relationships']['field_humprofile_non_displaced_value']['id'] = 'field_humprofile_non_displaced_value';
  $handler->display->display_options['relationships']['field_humprofile_non_displaced_value']['table'] = 'field_data_field_humprofile_non_displaced';
  $handler->display->display_options['relationships']['field_humprofile_non_displaced_value']['field'] = 'field_humprofile_non_displaced_value';
  $handler->display->display_options['relationships']['field_humprofile_non_displaced_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['alter']['text'] = '[field_locations]
PCode: [field_location_pcode]';
  $handler->display->display_options['fields']['field_locations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  /* Field: Content: Date of Data */
  $handler->display->display_options['fields']['field_humprofile_date']['id'] = 'field_humprofile_date';
  $handler->display->display_options['fields']['field_humprofile_date']['table'] = 'field_data_field_humprofile_date';
  $handler->display->display_options['fields']['field_humprofile_date']['field'] = 'field_humprofile_date';
  $handler->display->display_options['fields']['field_humprofile_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_humprofile_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Affected */
  $handler->display->display_options['fields']['field_humprofile_affected']['id'] = 'field_humprofile_affected';
  $handler->display->display_options['fields']['field_humprofile_affected']['table'] = 'field_data_field_humprofile_affected';
  $handler->display->display_options['fields']['field_humprofile_affected']['field'] = 'field_humprofile_affected';
  $handler->display->display_options['fields']['field_humprofile_affected']['alter']['text'] = '<div class="field field-name-field-humprofile-affected field-type-number-integer field-label-inline clearfix">
<div class="field-label">Affected:</div><div class="field-items"><div class="field-item">[field_humprofile_affected]</div></div>
</div>';
  $handler->display->display_options['fields']['field_humprofile_affected']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_humprofile_affected']['empty'] = 'No data';
  $handler->display->display_options['fields']['field_humprofile_affected']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: Displaced */
  $handler->display->display_options['fields']['field_humprofile_dis_poeple']['id'] = 'field_humprofile_dis_poeple';
  $handler->display->display_options['fields']['field_humprofile_dis_poeple']['table'] = 'field_data_field_humprofile_dis_poeple';
  $handler->display->display_options['fields']['field_humprofile_dis_poeple']['field'] = 'field_humprofile_dis_poeple';
  $handler->display->display_options['fields']['field_humprofile_dis_poeple']['relationship'] = 'field_humprofile_displaced_value';
  /* Field: Field collection item: IDP */
  $handler->display->display_options['fields']['field_humprofile_idp']['id'] = 'field_humprofile_idp';
  $handler->display->display_options['fields']['field_humprofile_idp']['table'] = 'field_data_field_humprofile_idp';
  $handler->display->display_options['fields']['field_humprofile_idp']['field'] = 'field_humprofile_idp';
  $handler->display->display_options['fields']['field_humprofile_idp']['relationship'] = 'field_humprofile_displaced_value';
  $handler->display->display_options['fields']['field_humprofile_idp']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Refugee and Asylum seekers */
  $handler->display->display_options['fields']['field_humprofile_refugee']['id'] = 'field_humprofile_refugee';
  $handler->display->display_options['fields']['field_humprofile_refugee']['table'] = 'field_data_field_humprofile_refugee';
  $handler->display->display_options['fields']['field_humprofile_refugee']['field'] = 'field_humprofile_refugee';
  $handler->display->display_options['fields']['field_humprofile_refugee']['relationship'] = 'field_humprofile_displaced_value';
  $handler->display->display_options['fields']['field_humprofile_refugee']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Others of Concern */
  $handler->display->display_options['fields']['field_humprofile_others']['id'] = 'field_humprofile_others';
  $handler->display->display_options['fields']['field_humprofile_others']['table'] = 'field_data_field_humprofile_others';
  $handler->display->display_options['fields']['field_humprofile_others']['field'] = 'field_humprofile_others';
  $handler->display->display_options['fields']['field_humprofile_others']['relationship'] = 'field_humprofile_displaced_value';
  $handler->display->display_options['fields']['field_humprofile_others']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Non-Displaced */
  $handler->display->display_options['fields']['field_humprofile_non_dis_people']['id'] = 'field_humprofile_non_dis_people';
  $handler->display->display_options['fields']['field_humprofile_non_dis_people']['table'] = 'field_data_field_humprofile_non_dis_people';
  $handler->display->display_options['fields']['field_humprofile_non_dis_people']['field'] = 'field_humprofile_non_dis_people';
  $handler->display->display_options['fields']['field_humprofile_non_dis_people']['relationship'] = 'field_humprofile_non_displaced_value';
  $handler->display->display_options['fields']['field_humprofile_non_dis_people']['label'] = 'Non Displaced';
  $handler->display->display_options['fields']['field_humprofile_non_dis_people']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Host */
  $handler->display->display_options['fields']['field_humprofile_host']['id'] = 'field_humprofile_host';
  $handler->display->display_options['fields']['field_humprofile_host']['table'] = 'field_data_field_humprofile_host';
  $handler->display->display_options['fields']['field_humprofile_host']['field'] = 'field_humprofile_host';
  $handler->display->display_options['fields']['field_humprofile_host']['relationship'] = 'field_humprofile_non_displaced_value';
  $handler->display->display_options['fields']['field_humprofile_host']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Non-Host */
  $handler->display->display_options['fields']['field_humprofile_non_host']['id'] = 'field_humprofile_non_host';
  $handler->display->display_options['fields']['field_humprofile_non_host']['table'] = 'field_data_field_humprofile_non_host';
  $handler->display->display_options['fields']['field_humprofile_non_host']['field'] = 'field_humprofile_non_host';
  $handler->display->display_options['fields']['field_humprofile_non_host']['relationship'] = 'field_humprofile_non_displaced_value';
  $handler->display->display_options['fields']['field_humprofile_non_host']['label'] = 'Non Host';
  $handler->display->display_options['fields']['field_humprofile_non_host']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Casualties */
  $handler->display->display_options['fields']['field_humprofile_cas_people']['id'] = 'field_humprofile_cas_people';
  $handler->display->display_options['fields']['field_humprofile_cas_people']['table'] = 'field_data_field_humprofile_cas_people';
  $handler->display->display_options['fields']['field_humprofile_cas_people']['field'] = 'field_humprofile_cas_people';
  $handler->display->display_options['fields']['field_humprofile_cas_people']['relationship'] = 'field_humprofile_displaced_value';
  /* Field: Field collection item: Dead */
  $handler->display->display_options['fields']['field_humprofile_dead']['id'] = 'field_humprofile_dead';
  $handler->display->display_options['fields']['field_humprofile_dead']['table'] = 'field_data_field_humprofile_dead';
  $handler->display->display_options['fields']['field_humprofile_dead']['field'] = 'field_humprofile_dead';
  $handler->display->display_options['fields']['field_humprofile_dead']['relationship'] = 'field_humprofile_casualities_value';
  $handler->display->display_options['fields']['field_humprofile_dead']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Missing */
  $handler->display->display_options['fields']['field_humprofile_missing']['id'] = 'field_humprofile_missing';
  $handler->display->display_options['fields']['field_humprofile_missing']['table'] = 'field_data_field_humprofile_missing';
  $handler->display->display_options['fields']['field_humprofile_missing']['field'] = 'field_humprofile_missing';
  $handler->display->display_options['fields']['field_humprofile_missing']['relationship'] = 'field_humprofile_casualities_value';
  $handler->display->display_options['fields']['field_humprofile_missing']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Injured */
  $handler->display->display_options['fields']['field_humprofile_injured']['id'] = 'field_humprofile_injured';
  $handler->display->display_options['fields']['field_humprofile_injured']['table'] = 'field_data_field_humprofile_injured';
  $handler->display->display_options['fields']['field_humprofile_injured']['field'] = 'field_humprofile_injured';
  $handler->display->display_options['fields']['field_humprofile_injured']['relationship'] = 'field_humprofile_casualities_value';
  $handler->display->display_options['fields']['field_humprofile_injured']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: In Need of Humanitarian Assistance */
  $handler->display->display_options['fields']['field_humprofile_assistance']['id'] = 'field_humprofile_assistance';
  $handler->display->display_options['fields']['field_humprofile_assistance']['table'] = 'field_data_field_humprofile_assistance';
  $handler->display->display_options['fields']['field_humprofile_assistance']['field'] = 'field_humprofile_assistance';
  $handler->display->display_options['fields']['field_humprofile_assistance']['label'] = 'Need Assistance';
  $handler->display->display_options['fields']['field_humprofile_assistance']['alter']['text'] = '<div class="field field-name-field-humprofile-assistance field-type-number-integer field-label-inline clearfix">
<div class="field-label">Need Assistance:</div><div class="field-items"><div class="field-item">[field_humprofile_assistance]</div></div>
</div>';
  $handler->display->display_options['fields']['field_humprofile_assistance']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_humprofile_assistance']['empty'] = 'No data';
  $handler->display->display_options['fields']['field_humprofile_assistance']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['path'] = 'humanitarian-profile.xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: XML */
  $handler = $view->new_display('views_data_export', 'XML', 'xml');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'pascal';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Displaced (field_humprofile_displaced) */
  $handler->display->display_options['relationships']['field_humprofile_displaced_value']['id'] = 'field_humprofile_displaced_value';
  $handler->display->display_options['relationships']['field_humprofile_displaced_value']['table'] = 'field_data_field_humprofile_displaced';
  $handler->display->display_options['relationships']['field_humprofile_displaced_value']['field'] = 'field_humprofile_displaced_value';
  $handler->display->display_options['relationships']['field_humprofile_displaced_value']['delta'] = '-1';
  /* Relationship: Content: Casualties (field_humprofile_casualities) */
  $handler->display->display_options['relationships']['field_humprofile_casualities_value']['id'] = 'field_humprofile_casualities_value';
  $handler->display->display_options['relationships']['field_humprofile_casualities_value']['table'] = 'field_data_field_humprofile_casualities';
  $handler->display->display_options['relationships']['field_humprofile_casualities_value']['field'] = 'field_humprofile_casualities_value';
  $handler->display->display_options['relationships']['field_humprofile_casualities_value']['delta'] = '-1';
  /* Relationship: Content: Non-Displaced (field_humprofile_non_displaced) */
  $handler->display->display_options['relationships']['field_humprofile_non_displaced_value']['id'] = 'field_humprofile_non_displaced_value';
  $handler->display->display_options['relationships']['field_humprofile_non_displaced_value']['table'] = 'field_data_field_humprofile_non_displaced';
  $handler->display->display_options['relationships']['field_humprofile_non_displaced_value']['field'] = 'field_humprofile_non_displaced_value';
  $handler->display->display_options['relationships']['field_humprofile_non_displaced_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['alter']['text'] = '[field_locations]
PCode: [field_location_pcode]';
  $handler->display->display_options['fields']['field_locations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  /* Field: Content: Date of Data */
  $handler->display->display_options['fields']['field_humprofile_date']['id'] = 'field_humprofile_date';
  $handler->display->display_options['fields']['field_humprofile_date']['table'] = 'field_data_field_humprofile_date';
  $handler->display->display_options['fields']['field_humprofile_date']['field'] = 'field_humprofile_date';
  $handler->display->display_options['fields']['field_humprofile_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_humprofile_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Affected */
  $handler->display->display_options['fields']['field_humprofile_affected']['id'] = 'field_humprofile_affected';
  $handler->display->display_options['fields']['field_humprofile_affected']['table'] = 'field_data_field_humprofile_affected';
  $handler->display->display_options['fields']['field_humprofile_affected']['field'] = 'field_humprofile_affected';
  $handler->display->display_options['fields']['field_humprofile_affected']['alter']['text'] = '<div class="field field-name-field-humprofile-affected field-type-number-integer field-label-inline clearfix">
<div class="field-label">Affected:</div><div class="field-items"><div class="field-item">[field_humprofile_affected]</div></div>
</div>';
  $handler->display->display_options['fields']['field_humprofile_affected']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_humprofile_affected']['empty'] = 'No data';
  $handler->display->display_options['fields']['field_humprofile_affected']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: Displaced */
  $handler->display->display_options['fields']['field_humprofile_dis_poeple']['id'] = 'field_humprofile_dis_poeple';
  $handler->display->display_options['fields']['field_humprofile_dis_poeple']['table'] = 'field_data_field_humprofile_dis_poeple';
  $handler->display->display_options['fields']['field_humprofile_dis_poeple']['field'] = 'field_humprofile_dis_poeple';
  $handler->display->display_options['fields']['field_humprofile_dis_poeple']['relationship'] = 'field_humprofile_displaced_value';
  /* Field: Field collection item: IDP */
  $handler->display->display_options['fields']['field_humprofile_idp']['id'] = 'field_humprofile_idp';
  $handler->display->display_options['fields']['field_humprofile_idp']['table'] = 'field_data_field_humprofile_idp';
  $handler->display->display_options['fields']['field_humprofile_idp']['field'] = 'field_humprofile_idp';
  $handler->display->display_options['fields']['field_humprofile_idp']['relationship'] = 'field_humprofile_displaced_value';
  $handler->display->display_options['fields']['field_humprofile_idp']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Refugee and Asylum seekers */
  $handler->display->display_options['fields']['field_humprofile_refugee']['id'] = 'field_humprofile_refugee';
  $handler->display->display_options['fields']['field_humprofile_refugee']['table'] = 'field_data_field_humprofile_refugee';
  $handler->display->display_options['fields']['field_humprofile_refugee']['field'] = 'field_humprofile_refugee';
  $handler->display->display_options['fields']['field_humprofile_refugee']['relationship'] = 'field_humprofile_displaced_value';
  $handler->display->display_options['fields']['field_humprofile_refugee']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Others of Concern */
  $handler->display->display_options['fields']['field_humprofile_others']['id'] = 'field_humprofile_others';
  $handler->display->display_options['fields']['field_humprofile_others']['table'] = 'field_data_field_humprofile_others';
  $handler->display->display_options['fields']['field_humprofile_others']['field'] = 'field_humprofile_others';
  $handler->display->display_options['fields']['field_humprofile_others']['relationship'] = 'field_humprofile_displaced_value';
  $handler->display->display_options['fields']['field_humprofile_others']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Non-Displaced */
  $handler->display->display_options['fields']['field_humprofile_non_dis_people']['id'] = 'field_humprofile_non_dis_people';
  $handler->display->display_options['fields']['field_humprofile_non_dis_people']['table'] = 'field_data_field_humprofile_non_dis_people';
  $handler->display->display_options['fields']['field_humprofile_non_dis_people']['field'] = 'field_humprofile_non_dis_people';
  $handler->display->display_options['fields']['field_humprofile_non_dis_people']['relationship'] = 'field_humprofile_non_displaced_value';
  $handler->display->display_options['fields']['field_humprofile_non_dis_people']['label'] = 'Non Displaced';
  $handler->display->display_options['fields']['field_humprofile_non_dis_people']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Host */
  $handler->display->display_options['fields']['field_humprofile_host']['id'] = 'field_humprofile_host';
  $handler->display->display_options['fields']['field_humprofile_host']['table'] = 'field_data_field_humprofile_host';
  $handler->display->display_options['fields']['field_humprofile_host']['field'] = 'field_humprofile_host';
  $handler->display->display_options['fields']['field_humprofile_host']['relationship'] = 'field_humprofile_non_displaced_value';
  $handler->display->display_options['fields']['field_humprofile_host']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Non-Host */
  $handler->display->display_options['fields']['field_humprofile_non_host']['id'] = 'field_humprofile_non_host';
  $handler->display->display_options['fields']['field_humprofile_non_host']['table'] = 'field_data_field_humprofile_non_host';
  $handler->display->display_options['fields']['field_humprofile_non_host']['field'] = 'field_humprofile_non_host';
  $handler->display->display_options['fields']['field_humprofile_non_host']['relationship'] = 'field_humprofile_non_displaced_value';
  $handler->display->display_options['fields']['field_humprofile_non_host']['label'] = 'Non Host';
  $handler->display->display_options['fields']['field_humprofile_non_host']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Casualties */
  $handler->display->display_options['fields']['field_humprofile_cas_people']['id'] = 'field_humprofile_cas_people';
  $handler->display->display_options['fields']['field_humprofile_cas_people']['table'] = 'field_data_field_humprofile_cas_people';
  $handler->display->display_options['fields']['field_humprofile_cas_people']['field'] = 'field_humprofile_cas_people';
  $handler->display->display_options['fields']['field_humprofile_cas_people']['relationship'] = 'field_humprofile_displaced_value';
  /* Field: Field collection item: Dead */
  $handler->display->display_options['fields']['field_humprofile_dead']['id'] = 'field_humprofile_dead';
  $handler->display->display_options['fields']['field_humprofile_dead']['table'] = 'field_data_field_humprofile_dead';
  $handler->display->display_options['fields']['field_humprofile_dead']['field'] = 'field_humprofile_dead';
  $handler->display->display_options['fields']['field_humprofile_dead']['relationship'] = 'field_humprofile_casualities_value';
  $handler->display->display_options['fields']['field_humprofile_dead']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Missing */
  $handler->display->display_options['fields']['field_humprofile_missing']['id'] = 'field_humprofile_missing';
  $handler->display->display_options['fields']['field_humprofile_missing']['table'] = 'field_data_field_humprofile_missing';
  $handler->display->display_options['fields']['field_humprofile_missing']['field'] = 'field_humprofile_missing';
  $handler->display->display_options['fields']['field_humprofile_missing']['relationship'] = 'field_humprofile_casualities_value';
  $handler->display->display_options['fields']['field_humprofile_missing']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Injured */
  $handler->display->display_options['fields']['field_humprofile_injured']['id'] = 'field_humprofile_injured';
  $handler->display->display_options['fields']['field_humprofile_injured']['table'] = 'field_data_field_humprofile_injured';
  $handler->display->display_options['fields']['field_humprofile_injured']['field'] = 'field_humprofile_injured';
  $handler->display->display_options['fields']['field_humprofile_injured']['relationship'] = 'field_humprofile_casualities_value';
  $handler->display->display_options['fields']['field_humprofile_injured']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: In Need of Humanitarian Assistance */
  $handler->display->display_options['fields']['field_humprofile_assistance']['id'] = 'field_humprofile_assistance';
  $handler->display->display_options['fields']['field_humprofile_assistance']['table'] = 'field_data_field_humprofile_assistance';
  $handler->display->display_options['fields']['field_humprofile_assistance']['field'] = 'field_humprofile_assistance';
  $handler->display->display_options['fields']['field_humprofile_assistance']['label'] = 'Need Assistance';
  $handler->display->display_options['fields']['field_humprofile_assistance']['alter']['text'] = '<div class="field field-name-field-humprofile-assistance field-type-number-integer field-label-inline clearfix">
<div class="field-label">Need Assistance:</div><div class="field-items"><div class="field-item">[field_humprofile_assistance]</div></div>
</div>';
  $handler->display->display_options['fields']['field_humprofile_assistance']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_humprofile_assistance']['empty'] = 'No data';
  $handler->display->display_options['fields']['field_humprofile_assistance']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['path'] = 'humanitarian-profile.xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['humanitarian_profile'] = array(
    t('Master'),
    t('Humanitarian Profile Summary'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('The Humanitarian Profile is an attempt to account for, on an ongoing basis, the number of people affected by an emergency. Because people may be affected in many different ways by an emergency, different groups are identified within the humanitarian profile, such as displaced, non-displaced, injured, missing, and dead.

When it is available, a more detailed humanitarian profile dataset may be found on the Common Operational Datasets Registry . The information presented on HumanitarianResponse.info represents a summary of that dataset if it is available. Otherwise, the tables presented here represent the most detailed information available. <a href="http://cod.humanitarianresponse.info/node/52">Full Humanitarian Profile guidance.</a>'),
    t('term from field_locations'),
    t('field collection item from field_humprofile_displaced'),
    t('Location'),
    t('[field_locations]
PCode: [field_location_pcode]'),
    t('Date of Data (dd/mm/yyyy)'),
    t('Numbers of People'),
    t('<div class="field field-name-field-humprofile-affected field-type-number-integer field-label-inline clearfix">
<div class="field-label">Affected:</div><div class="field-items"><div class="field-item">[field_humprofile_affected]</div></div>
</div>'),
    t('No data'),
    t('Displaced'),
    t('Non-Displaced'),
    t('<div class="field field-name-field-humprofile-casualties field-type-number-integer field-label-inline clearfix">
<div class="field-label">Casualties:</div><div class="field-items"><div class="field-item">[field_humprofile_casualities]</div></div>
</div>'),
    t('<div class="field field-name-field-humprofile-assistance field-type-number-integer field-label-inline clearfix">
<div class="field-label">Need Assistance:</div><div class="field-items"><div class="field-item">[field_humprofile_assistance]</div></div>
</div>'),
    t('Edit'),
    t('Page'),
    t('XLS'),
    t('field collection item from field_humprofile_casualities'),
    t('field collection item from field_humprofile_non_displaced'),
    t('Date of Data'),
    t('Affected'),
    t('IDP'),
    t('Refugee and Asylum seekers'),
    t('Others of Concern'),
    t('Non Displaced'),
    t('Host'),
    t('Non Host'),
    t('Casualties'),
    t('Dead'),
    t('Missing'),
    t('Injured'),
    t('Need Assistance'),
    t('XML'),
  );
  $export['humanitarian_profile'] = $view;

  return $export;
}
