<?php
/**
 * @file
 * nyheder.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function nyheder_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-presseservice.
  $menus['menu-presseservice'] = array(
    'menu_name' => 'menu-presseservice',
    'title' => 'Presseservice',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Presseservice');


  return $menus;
}
