<?php
/**
 * @file
 * os2web_spotbokse.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function os2web_spotbokse_user_default_permissions() {
  $permissions = array();

  // Exported permission: create spotbox content.
  $permissions['create spotbox content'] = array(
    'name' => 'create spotbox content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any spotbox content.
  $permissions['delete any spotbox content'] = array(
    'name' => 'delete any spotbox content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Kommunikation',
      2 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own spotbox content.
  $permissions['delete own spotbox content'] = array(
    'name' => 'delete own spotbox content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any spotbox content.
  $permissions['edit any spotbox content'] = array(
    'name' => 'edit any spotbox content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own spotbox content.
  $permissions['edit own spotbox content'] = array(
    'name' => 'edit own spotbox content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
