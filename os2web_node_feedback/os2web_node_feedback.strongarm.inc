<?php
/**
 * @file
 * os2web_node_feedback.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2web_node_feedback_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feedback_excluded_paths';
  $strongarm->value = 'admin/*';
  $export['feedback_excluded_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_feedback__feedback';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'help' => array(
          'weight' => '0',
        ),
        'message' => array(
          'weight' => '1',
        ),
        'actions' => array(
          'weight' => '2',
        ),
        'submit' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_feedback__feedback'] = $strongarm;

  return $export;
}
