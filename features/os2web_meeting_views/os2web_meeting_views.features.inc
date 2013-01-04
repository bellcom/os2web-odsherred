<?php
/**
 * @file
 * os2web_meeting_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_meeting_views_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
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
 * Implements hook_views_api().
 */
function os2web_meeting_views_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function os2web_meeting_views_node_info() {
  $items = array(
    'bullet_point' => array(
      'name' => t('Bullet Point'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'bullet_point_attachment' => array(
      'name' => t('Bullet Point Attachment'),
      'base' => 'node_content',
      'description' => t('is an attachment to bullet point'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'meeting' => array(
      'name' => t('Meeting'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'os2web_meeting_search_status' => array(
      'name' => t('Meeting search status'),
      'base' => 'node_content',
      'description' => t('Det nyeste element af dette indhold vises på dagsordens søge siden.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  return $items;
}
