<?php
/**
 * @file
 * os2web_menuer_og_blokke.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function os2web_menuer_og_blokke_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-andre-netsteder.
  $menus['menu-andre-netsteder'] = array(
    'menu_name' => 'menu-andre-netsteder',
    'title' => 'Andre netsteder',
    'description' => '',
  );
  // Exported menu: menu-erhverv-genveje.
  $menus['menu-erhverv-genveje'] = array(
    'menu_name' => 'menu-erhverv-genveje',
    'title' => 'Din kommune',
    'description' => 'Spørgsmål om din kommune',
  );
  // Exported menu: menu-indholdsmenu.
  $menus['menu-indholdsmenu'] = array(
    'menu_name' => 'menu-indholdsmenu',
    'title' => 'Indholdsmenu',
    'description' => '',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Andre netsteder');
  t('Din kommune');
  t('Indholdsmenu');
  t('Main menu');
  t('Spørgsmål om din kommune');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');


  return $menus;
}
