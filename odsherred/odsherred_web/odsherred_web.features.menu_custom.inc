<?php
/**
 * @file
 * odsherred_web.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function odsherred_web_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-megadd--borger-oss.
  $menus['menu-megadd--borger-oss'] = array(
    'menu_name' => 'menu-megadd--borger-oss',
    'title' => 'I megamenu - Borger - Ofte stillede spørgsmål',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('I megamenu - Borger - Ofte stillede spørgsmål');


  return $menus;
}
