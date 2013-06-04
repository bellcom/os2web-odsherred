<?php
/**
 * @file
 * odsherred_web.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function odsherred_web_user_default_permissions() {
  $permissions = array();

  // Exported permission: use text format standard.
  $permissions['use text format standard'] = array(
    'name' => 'use text format standard',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
