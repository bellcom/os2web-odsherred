<?php
/**
 * @file
 * os2web_planer_i_h_ring.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_planer_i_h_ring_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_planer_i_h_ring_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function os2web_planer_i_h_ring_node_info() {
  $items = array(
    'hoering' => array(
      'name' => t('Planer i høring'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
