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
      'bundle' => 'none',
      'bundle_selected' => array(),
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
  $facet->name = 'apachesolr@localhost::im_field_newstype';
  $facet->searcher = 'apachesolr@localhost';
  $facet->realm = '';
  $facet->facet = 'im_field_newstype';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => 0,
    'flatten' => '1',
    'query_type' => 'news type',
    'pretty_paths_alias' => 'im_field_newstype',
  );
  $export['apachesolr@localhost::im_field_newstype'] = $facet;

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
      'bundle' => 'none',
      'bundle_selected' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => 0,
    'flatten' => '0',
    'query_type' => 'term',
    'pretty_paths_alias' => 'portalkategori',
  );
  $export['apachesolr@localhost::im_field_site_structure'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@localhost::is_field_newstype';
  $facet->searcher = 'apachesolr@localhost';
  $facet->realm = '';
  $facet->facet = 'is_field_newstype';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(
        'arp_case' => 0,
        'arp_document' => 0,
        'andre_sider' => 0,
        'baggrund' => 0,
        'rotating_image' => 0,
        'os2web_borger_dk_article' => 0,
        'borger_dk_permalink' => 0,
        'borgerservices' => 0,
        'bullet_point' => 0,
        'bullet_point_attachment' => 0,
        'files' => 0,
        'esdh_dokument' => 0,
        'esdh_sag' => 0,
        'galleri' => 0,
        'right_column' => 0,
        'contentpage' => 0,
        'institution' => 0,
        'kontaktblok' => 0,
        'knactivity' => 0,
        'local_plan' => 0,
        'media' => 0,
        'meeting' => 0,
        'os2web_meeting_search_status' => 0,
        'news' => 0,
        'ofir_job' => 0,
        'panel' => 0,
        'person' => 0,
        'hoering' => 0,
        'politician' => 0,
        'politikker' => 0,
        'referat' => 0,
        'sektionsside' => 0,
        'selvbetjeningslinks' => 0,
        'speaker_paper' => 0,
        'spotbox' => 0,
        'subsites_og_sites' => 0,
        'tema' => 0,
        'webform' => 0,
        'iframe_selvbetjeningsl_sning_mm' => 0,
      ),
      'roles' => array(
        1 => 0,
        2 => 0,
        6 => 0,
        4 => 0,
        7 => 0,
        3 => 0,
        5 => 0,
        8 => 0,
        12 => 0,
        11 => 0,
        15 => 0,
      ),
    ),
    'facet_mincount' => '0',
    'facet_missing' => 0,
    'flatten' => '1',
    'query_type' => 'term',
    'pretty_paths_alias' => 'im_field_newstype',
    'pretty_paths_taxonomy_pathauto' => 0,
    'pretty_paths_taxonomy_pathauto_vocabulary' => 'site_struktur',
  );
  $export['apachesolr@localhost::is_field_newstype'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@localhost::is_field_site_structure';
  $facet->searcher = 'apachesolr@localhost';
  $facet->realm = '';
  $facet->facet = 'is_field_site_structure';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => 0,
    'flatten' => '1',
    'query_type' => 'term',
    'pretty_paths_alias' => 'is_field_site_structure',
    'pretty_paths_taxonomy_pathauto' => 0,
    'pretty_paths_taxonomy_pathauto_vocabulary' => 'site_struktur',
  );
  $export['apachesolr@localhost::is_field_site_structure'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@localhost::ss_field_sitestruktur';
  $facet->searcher = 'apachesolr@localhost';
  $facet->realm = '';
  $facet->facet = 'ss_field_sitestruktur';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => 1,
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'pretty_paths_alias' => 'ss_field_sitestruktur',
  );
  $export['apachesolr@localhost::ss_field_sitestruktur'] = $facet;

  return $export;
}
