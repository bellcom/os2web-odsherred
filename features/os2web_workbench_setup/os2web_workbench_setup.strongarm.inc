<?php
/**
 * @file
 * os2web_workbench_setup.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2web_workbench_setup_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_contentpage';
  $strongarm->value = 1;
  $export['workbench_access_node_type_contentpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_galleri';
  $strongarm->value = 1;
  $export['workbench_access_node_type_galleri'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_iframe_selvbetjeningsl_sning_mm';
  $strongarm->value = 1;
  $export['workbench_access_node_type_iframe_selvbetjeningsl_sning_mm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_knactivity';
  $strongarm->value = 0;
  $export['workbench_access_node_type_knactivity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_news';
  $strongarm->value = 1;
  $export['workbench_access_node_type_news'] = $strongarm;

  return $export;
}
