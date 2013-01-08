<?php
/**
 * @file
 * os2web_meeting_views.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function os2web_meeting_views_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-indholdsmenu:dagsorden-og-referat
  $menu_links['menu-indholdsmenu:dagsorden-og-referat'] = array(
    'menu_name' => 'menu-indholdsmenu',
    'link_path' => 'dagsorden-og-referat',
    'router_path' => 'dagsorden-og-referat',
    'link_title' => 'Dagsordner og referater',
    'options' => array(
      'attributes' => array(
        'title' => 'Se mødeplaner, dagsordner og referater for byrådet og de politiske udvalg',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'taxonomy/term/6',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Dagsordner og referater');


  return $menu_links;
}
