<?php
/**
 * @file
 * os2web_context.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_context_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
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
function os2web_context_node_info() {
  $items = array(
    'esdh_dokument' => array(
      'name' => t('ESDH Dokument'),
      'base' => 'node_content',
      'description' => t('En side der præsentere en eller flere filer fra ESDH systemet.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
    'esdh_sag' => array(
      'name' => t('ESDH Sag'),
      'base' => 'node_content',
      'description' => t('Viser en sag fra ESDH systemet.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
    'local_plan' => array(
      'name' => t('Lokalplan'),
      'base' => 'node_content',
      'description' => t('Lokalplaner vedtaget i kommunen.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'referat' => array(
      'name' => t('Referat'),
      'base' => 'node_content',
      'description' => t('Mødereferater og anden dokumentation.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
