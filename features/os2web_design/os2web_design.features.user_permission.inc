<?php
/**
 * @file
 * os2web_design.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function os2web_design_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer background image.
  $permissions['administer background image'] = array(
    'name' => 'administer background image',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'bg_image',
  );

  // Exported permission: administer delta.
  $permissions['administer delta'] = array(
    'name' => 'administer delta',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'delta_ui',
  );

  // Exported permission: manage background images.
  $permissions['manage background images'] = array(
    'name' => 'manage background images',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'bg_image_ui',
  );

  return $permissions;
}
