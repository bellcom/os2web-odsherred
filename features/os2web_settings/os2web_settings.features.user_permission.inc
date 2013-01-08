<?php
/**
 * @file
 * os2web_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function os2web_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: add media from remote sources.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: administer @font-your-face.
  $permissions['administer @font-your-face'] = array(
    'name' => 'administer @font-your-face',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'fontyourface',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: create contentpage content.
  $permissions['create contentpage content'] = array(
    'name' => 'create contentpage content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create galleri content.
  $permissions['create galleri content'] = array(
    'name' => 'create galleri content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create news content.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create rotating_image content.
  $permissions['create rotating_image content'] = array(
    'name' => 'create rotating_image content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any contentpage content.
  $permissions['delete any contentpage content'] = array(
    'name' => 'delete any contentpage content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Kommunikation',
      2 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any galleri content.
  $permissions['delete any galleri content'] = array(
    'name' => 'delete any galleri content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any news content.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any rotating_image content.
  $permissions['delete any rotating_image content'] = array(
    'name' => 'delete any rotating_image content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own contentpage content.
  $permissions['delete own contentpage content'] = array(
    'name' => 'delete own contentpage content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own esdh_dokument content.
  $permissions['delete own esdh_dokument content'] = array(
    'name' => 'delete own esdh_dokument content',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own esdh_sag content.
  $permissions['delete own esdh_sag content'] = array(
    'name' => 'delete own esdh_sag content',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own galleri content.
  $permissions['delete own galleri content'] = array(
    'name' => 'delete own galleri content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own news content.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own rotating_image content.
  $permissions['delete own rotating_image content'] = array(
    'name' => 'delete own rotating_image content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any contentpage content.
  $permissions['edit any contentpage content'] = array(
    'name' => 'edit any contentpage content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any galleri content.
  $permissions['edit any galleri content'] = array(
    'name' => 'edit any galleri content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any news content.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any rotating_image content.
  $permissions['edit any rotating_image content'] = array(
    'name' => 'edit any rotating_image content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own contentpage content.
  $permissions['edit own contentpage content'] = array(
    'name' => 'edit own contentpage content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own esdh_dokument content.
  $permissions['edit own esdh_dokument content'] = array(
    'name' => 'edit own esdh_dokument content',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own esdh_sag content.
  $permissions['edit own esdh_sag content'] = array(
    'name' => 'edit own esdh_sag content',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own galleri content.
  $permissions['edit own galleri content'] = array(
    'name' => 'edit own galleri content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own news content.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own rotating_image content.
  $permissions['edit own rotating_image content'] = array(
    'name' => 'edit own rotating_image content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'media',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: show format selection for file.
  $permissions['show format selection for file'] = array(
    'name' => 'show format selection for file',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for node.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for rules_config.
  $permissions['show format selection for rules_config'] = array(
    'name' => 'show format selection for rules_config',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for taxonomy_term.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for user.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format tips.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show more format tips link.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
