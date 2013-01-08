<?php
/**
 * @file
 * os2web_kontaktblok.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function os2web_kontaktblok_user_default_permissions() {
  $permissions = array();

  // Exported permission: create kontaktblok content.
  $permissions['create kontaktblok content'] = array(
    'name' => 'create kontaktblok content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any kontaktblok content.
  $permissions['delete any kontaktblok content'] = array(
    'name' => 'delete any kontaktblok content',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own kontaktblok content.
  $permissions['delete own kontaktblok content'] = array(
    'name' => 'delete own kontaktblok content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any kontaktblok content.
  $permissions['edit any kontaktblok content'] = array(
    'name' => 'edit any kontaktblok content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own kontaktblok content.
  $permissions['edit own kontaktblok content'] = array(
    'name' => 'edit own kontaktblok content',
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
