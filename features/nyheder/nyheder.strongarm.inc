<?php
/**
 * @file
 * nyheder.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nyheder_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_dag';
  $strongarm->value = 'd';
  $export['date_format_dag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_dag_og_maaned';
  $strongarm->value = 'd. M';
  $export['date_format_dag_og_maaned'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_kun_dato';
  $strongarm->value = 'd.m.y';
  $export['date_format_kun_dato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_maaned';
  $strongarm->value = 'M';
  $export['date_format_maaned'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_count_content_views';
  $strongarm->value = 1;
  $export['statistics_count_content_views'] = $strongarm;

  return $export;
}
