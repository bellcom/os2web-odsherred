<?php
/**
 * @file
 * os2web_borgerservices.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2web_borgerservices_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_borgerservices';
  $strongarm->value = '0';
  $export['language_content_type_borgerservices'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_borgerservices';
  $strongarm->value = array();
  $export['menu_options_borgerservices'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_borgerservices';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_borgerservices'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_borgerservices';
  $strongarm->value = array();
  $export['node_options_borgerservices'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_borgerservices';
  $strongarm->value = '0';
  $export['node_preview_borgerservices'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_borgerservices';
  $strongarm->value = 1;
  $export['node_submitted_borgerservices'] = $strongarm;

  return $export;
}
