<?php
/**
 * @file
 * os2web_design.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2web_design_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bg_image_attachment';
  $strongarm->value = 'fixed';
  $export['bg_image_attachment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bg_image_exclude_admin';
  $strongarm->value = 1;
  $export['bg_image_exclude_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bg_image_node_field';
  $strongarm->value = 'field_side_baggrungsbillede';
  $export['bg_image_node_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bg_image_node_type';
  $strongarm->value = 'baggrund';
  $export['bg_image_node_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bg_image_selector';
  $strongarm->value = 'herskalderstånoget';
  $export['bg_image_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'job_scheduler_rebuild_all';
  $strongarm->value = FALSE;
  $export['job_scheduler_rebuild_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_baggrund';
  $strongarm->value = '0';
  $export['language_content_type_baggrund'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_baggrund';
  $strongarm->value = array();
  $export['menu_options_baggrund'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_baggrund';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_baggrund'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_baggrund';
  $strongarm->value = array(
    0 => 'promote',
  );
  $export['node_options_baggrund'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_baggrund';
  $strongarm->value = '1';
  $export['node_preview_baggrund'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_baggrund';
  $strongarm->value = 1;
  $export['node_submitted_baggrund'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_baggrund';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_baggrund'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_baggrund';
  $strongarm->value = 1;
  $export['scheduler_publish_required_baggrund'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_baggrund';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_baggrund'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_baggrund';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_baggrund'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_baggrund';
  $strongarm->value = 1;
  $export['scheduler_unpublish_enable_baggrund'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_baggrund';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_baggrund'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_baggrund';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_baggrund'] = $strongarm;

  return $export;
}
