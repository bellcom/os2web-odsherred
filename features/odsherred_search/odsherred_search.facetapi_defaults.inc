<?php
/**
 * @file
 * odsherred_search.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function odsherred_search_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@localhost::bundle';
  $facet->searcher = 'apachesolr@localhost';
  $facet->realm = '';
  $facet->facet = 'bundle';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => 0,
    'flatten' => 0,
    'query_type' => 'term',
    'pretty_paths_alias' => 'bundle',
  );
  $export['apachesolr@localhost::bundle'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@localhost::changed';
  $facet->searcher = 'apachesolr@localhost';
  $facet->realm = '';
  $facet->facet = 'changed';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
    ),
    'facet_mincount' => 1,
    'facet_missing' => 0,
    'flatten' => 0,
    'query_type' => 'date_range',
    'pretty_paths_alias' => 'ds_changed',
  );
  $export['apachesolr@localhost::changed'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@localhost::im_field_site_structure';
  $facet->searcher = 'apachesolr@localhost';
  $facet->realm = '';
  $facet->facet = 'im_field_site_structure';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => 0,
    'flatten' => '0',
    'query_type' => 'term',
    'pretty_paths_alias' => 'im_field_site_structure',
  );
  $export['apachesolr@localhost::im_field_site_structure'] = $facet;

  return $export;
}
