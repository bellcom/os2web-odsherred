<?php
/**
 * @file
 * os2web_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function os2web_roles_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => '5',
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => '3',
  );

  // Exported role: Kommunikation.
  $roles['Kommunikation'] = array(
    'name' => 'Kommunikation',
    'weight' => '6',
  );

  // Exported role: Student.
  $roles['Student'] = array(
    'name' => 'Student',
    'weight' => '2',
  );

  // Exported role: Webmaster.
  $roles['Webmaster'] = array(
    'name' => 'Webmaster',
    'weight' => '4',
  );

  return $roles;
}
