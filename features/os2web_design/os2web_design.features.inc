<?php
/**
 * @file
 * os2web_design.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_design_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_design_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function os2web_design_node_info() {
  $items = array(
    'baggrund' => array(
      'name' => t('Baggrund'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
