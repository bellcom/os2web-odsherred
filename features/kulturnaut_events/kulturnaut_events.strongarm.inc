<?php
/**
 * @file
 * kulturnaut_events.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function kulturnaut_events_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_knactivity';
  $strongarm->value = 'edit-print';
  $export['additional_settings__active_tab_knactivity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_knactivity';
  $strongarm->value = '0';
  $export['language_content_type_knactivity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_knactivity';
  $strongarm->value = array();
  $export['menu_options_knactivity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_knactivity';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_knactivity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_knactivity';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_knactivity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_knactivity';
  $strongarm->value = '0';
  $export['node_preview_knactivity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_knactivity';
  $strongarm->value = 0;
  $export['node_submitted_knactivity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_knactivity';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_knactivity'] = $strongarm;

  return $export;
}
