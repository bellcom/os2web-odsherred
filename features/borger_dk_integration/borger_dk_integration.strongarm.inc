<?php
/**
 * @file
 * borger_dk_integration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function borger_dk_integration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_borger_dk_permalink';
  $strongarm->value = 0;
  $export['comment_anonymous_borger_dk_permalink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_borger_dk_permalink';
  $strongarm->value = '1';
  $export['comment_borger_dk_permalink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_borger_dk_permalink';
  $strongarm->value = 1;
  $export['comment_default_mode_borger_dk_permalink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_borger_dk_permalink';
  $strongarm->value = '50';
  $export['comment_default_per_page_borger_dk_permalink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_borger_dk_permalink';
  $strongarm->value = 1;
  $export['comment_form_location_borger_dk_permalink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_borger_dk_permalink';
  $strongarm->value = '1';
  $export['comment_preview_borger_dk_permalink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_borger_dk_permalink';
  $strongarm->value = 1;
  $export['comment_subject_field_borger_dk_permalink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_borger_dk_permalink';
  $strongarm->value = array();
  $export['menu_options_borger_dk_permalink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_borger_dk_permalink';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_borger_dk_permalink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_borger_dk_permalink';
  $strongarm->value = array();
  $export['node_options_borger_dk_permalink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_borger_dk_permalink';
  $strongarm->value = '1';
  $export['node_preview_borger_dk_permalink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_borger_dk_permalink';
  $strongarm->value = 1;
  $export['node_submitted_borger_dk_permalink'] = $strongarm;

  return $export;
}
