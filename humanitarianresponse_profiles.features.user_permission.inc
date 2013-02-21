<?php
/**
 * @file
 * humanitarianresponse_profiles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_profiles_user_default_permissions() {
  $permissions = array();

  // Exported permission: create humanitarian_profile content.
  $permissions['create humanitarian_profile content'] = array(
    'name' => 'create humanitarian_profile content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own humanitarian_profile content.
  $permissions['delete own humanitarian_profile content'] = array(
    'name' => 'delete own humanitarian_profile content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own humanitarian_profile content.
  $permissions['edit own humanitarian_profile content'] = array(
    'name' => 'edit own humanitarian_profile content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
