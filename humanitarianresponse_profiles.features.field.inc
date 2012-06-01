<?php
/**
 * @file
 * humanitarianresponse_profiles.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function humanitarianresponse_profiles_field_default_fields() {
  $fields = array();

  // Exported field: 'field_collection_item-field_humprofile_casualities-field_humprofile_cas_people'
  $fields['field_collection_item-field_humprofile_casualities-field_humprofile_cas_people'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_humprofile_cas_people',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'field_humprofile_casualities',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_humprofile_cas_people',
      'label' => 'Casualties',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_humprofile_casualities-field_humprofile_dead'
  $fields['field_collection_item-field_humprofile_casualities-field_humprofile_dead'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_humprofile_dead',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'field_humprofile_casualities',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_humprofile_dead',
      'label' => 'Dead',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_humprofile_casualities-field_humprofile_injured'
  $fields['field_collection_item-field_humprofile_casualities-field_humprofile_injured'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_humprofile_injured',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'field_humprofile_casualities',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => '3',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_humprofile_injured',
      'label' => 'Injured',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_humprofile_casualities-field_humprofile_missing'
  $fields['field_collection_item-field_humprofile_casualities-field_humprofile_missing'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_humprofile_missing',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'field_humprofile_casualities',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_humprofile_missing',
      'label' => 'Missing',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_humprofile_displaced-field_humprofile_dis_poeple'
  $fields['field_collection_item-field_humprofile_displaced-field_humprofile_dis_poeple'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_humprofile_dis_poeple',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'field_humprofile_displaced',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => '0',
        ),
        'entityreference_view_widget' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_humprofile_dis_poeple',
      'label' => 'Displaced',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_humprofile_displaced-field_humprofile_idp'
  $fields['field_collection_item-field_humprofile_displaced-field_humprofile_idp'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_humprofile_idp',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'field_humprofile_displaced',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => '1',
        ),
        'entityreference_view_widget' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_humprofile_idp',
      'label' => 'IDP',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_humprofile_displaced-field_humprofile_others'
  $fields['field_collection_item-field_humprofile_displaced-field_humprofile_others'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_humprofile_others',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'field_humprofile_displaced',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => '3',
        ),
        'entityreference_view_widget' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_humprofile_others',
      'label' => 'Others of Concern',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_humprofile_displaced-field_humprofile_refugee'
  $fields['field_collection_item-field_humprofile_displaced-field_humprofile_refugee'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_humprofile_refugee',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'field_humprofile_displaced',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => '2',
        ),
        'entityreference_view_widget' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_humprofile_refugee',
      'label' => 'Refugee and Asylum seekers',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_humprofile_non_displaced-field_humprofile_host'
  $fields['field_collection_item-field_humprofile_non_displaced-field_humprofile_host'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_humprofile_host',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'field_humprofile_non_displaced',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => '1',
        ),
        'entityreference_view_widget' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_humprofile_host',
      'label' => 'Host',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_humprofile_non_displaced-field_humprofile_non_dis_people'
  $fields['field_collection_item-field_humprofile_non_displaced-field_humprofile_non_dis_people'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_humprofile_non_dis_people',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'field_humprofile_non_displaced',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => '0',
        ),
        'entityreference_view_widget' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_humprofile_non_dis_people',
      'label' => 'Non-Displaced',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_humprofile_non_displaced-field_humprofile_non_host'
  $fields['field_collection_item-field_humprofile_non_displaced-field_humprofile_non_host'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_humprofile_non_host',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'field_humprofile_non_displaced',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => '2',
        ),
        'entityreference_view_widget' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_humprofile_non_host',
      'label' => 'Non-Host',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-humanitarian_profile-field_humprofile_affected'
  $fields['node-humanitarian_profile-field_humprofile_affected'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_humprofile_affected',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'humanitarian_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => '2',
        ),
        'entityreference_view_widget' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_humprofile_affected',
      'label' => 'Affected',
      'required' => 1,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-humanitarian_profile-field_humprofile_assistance'
  $fields['node-humanitarian_profile-field_humprofile_assistance'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_humprofile_assistance',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'humanitarian_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 0,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => '6',
        ),
        'entityreference_view_widget' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_humprofile_assistance',
      'label' => 'In Need of Humanitarian Assistance',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-humanitarian_profile-field_humprofile_casualities'
  $fields['node-humanitarian_profile-field_humprofile_casualities'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_humprofile_casualities',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'humanitarian_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_fields',
          'weight' => '5',
        ),
        'entityreference_view_widget' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_humprofile_casualities',
      'label' => 'Casualties',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-humanitarian_profile-field_humprofile_date'
  $fields['node-humanitarian_profile-field_humprofile_date'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_humprofile_date',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'date',
      'settings' => array(
        'cache_count' => '4',
        'cache_enabled' => 0,
        'granularity' => array(
          'day' => 'day',
          'hour' => 0,
          'minute' => 0,
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'repeat' => '0',
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => '0',
      'type' => 'datetime',
    ),
    'field_instance' => array(
      'bundle' => 'humanitarian_profile',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'short',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '1',
        ),
        'entityreference_view_widget' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_humprofile_date',
      'label' => 'Date of Data',
      'required' => 1,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'display_all_day' => 0,
          'increment' => '15',
          'input_format' => 'j M Y - g:i:sa',
          'input_format_custom' => '',
          'label_position' => 'above',
          'repeat_collapsed' => 0,
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_popup',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-humanitarian_profile-field_humprofile_displaced'
  $fields['node-humanitarian_profile-field_humprofile_displaced'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_humprofile_displaced',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'humanitarian_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_fields',
          'weight' => '3',
        ),
        'entityreference_view_widget' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_humprofile_displaced',
      'label' => 'Displaced',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-humanitarian_profile-field_humprofile_methodology'
  $fields['node-humanitarian_profile-field_humprofile_methodology'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_humprofile_methodology',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'humanitarian_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '8',
        ),
        'entityreference_view_widget' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_humprofile_methodology',
      'label' => 'Methodology',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-humanitarian_profile-field_humprofile_non_displaced'
  $fields['node-humanitarian_profile-field_humprofile_non_displaced'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_humprofile_non_displaced',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'humanitarian_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_fields',
          'weight' => '4',
        ),
        'entityreference_view_widget' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_humprofile_non_displaced',
      'label' => 'Non-Displaced',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-humanitarian_profile-field_humprofile_notes'
  $fields['node-humanitarian_profile-field_humprofile_notes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_humprofile_notes',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'humanitarian_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '9',
        ),
        'entityreference_view_widget' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_humprofile_notes',
      'label' => 'Notes',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-humanitarian_profile-field_humprofile_source'
  $fields['node-humanitarian_profile-field_humprofile_source'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_humprofile_source',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'humanitarian_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '7',
        ),
        'entityreference_view_widget' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_humprofile_source',
      'label' => 'Source',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-humanitarian_profile-field_locations'
  $fields['node-humanitarian_profile-field_locations'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_locations',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'locations',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'humanitarian_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 10,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_locations',
      'label' => 'Location(s)',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_hs',
        'weight' => '1',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Affected');
  t('Casualties');
  t('Date of Data');
  t('Dead');
  t('Displaced');
  t('Host');
  t('IDP');
  t('In Need of Humanitarian Assistance');
  t('Injured');
  t('Location(s)');
  t('Methodology');
  t('Missing');
  t('Non-Displaced');
  t('Non-Host');
  t('Notes');
  t('Others of Concern');
  t('Refugee and Asylum seekers');
  t('Source');

  return $fields;
}
