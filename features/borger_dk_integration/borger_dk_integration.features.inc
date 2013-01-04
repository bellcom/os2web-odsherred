<?php
/**
 * @file
 * borger_dk_integration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function borger_dk_integration_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function borger_dk_integration_node_info() {
  $items = array(
    'borger_dk_permalink' => array(
      'name' => t('Borger.dk permalink'),
      'base' => 'node_content',
      'description' => t('Paste a permalink from borger.dk into this!'),
      'has_title' => '1',
      'title_label' => t('Et titelfelt vi skjuler'),
      'help' => '',
    ),
  );
  return $items;
}
