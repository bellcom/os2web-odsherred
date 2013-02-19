<?php
/**
 * @file
 * odsherred_search.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function odsherred_search_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'localhost';
  $environment->name = 'Localhost';
  $environment->url = 'http://localhost:8080/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_read_only' => '0',
    'apachesolr_search_facet_pages' => '',
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'andre_sider',
      1 => 'arp_case',
      2 => 'arp_document',
      3 => 'borgerservices',
      4 => 'borger_dk_article',
      5 => 'contentpage',
      6 => 'hoering',
      7 => 'local_plan',
      8 => 'meeting',
      9 => 'news',
      10 => 'politician',
      11 => 'sektionsside',
      12 => 'selvbetjeningslinks',
      13 => 'spotbox',
      14 => 'subsites_og_sites',
    ),
  );
  $export['localhost'] = $environment;

  return $export;
}
