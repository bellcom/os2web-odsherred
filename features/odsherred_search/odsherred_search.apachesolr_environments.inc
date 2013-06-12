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
  $environment->url = 'http://localhost:8983/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_index_last' => array(
      'feedback' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'fieldable_panels_pane' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'node' => array(
        'last_changed' => '1369657489',
        'last_entity_id' => '894154',
      ),
      'file' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'taxonomy_term' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'taxonomy_vocabulary' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'user' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'wysiwyg_profile' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'rules_config' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
    ),
    'apachesolr_index_updated' => 1370870431,
    'apachesolr_last_optimize' => 1370594290,
    'apachesolr_read_only' => '0',
    'apachesolr_search_facet_pages' => '/search/*',
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'contentpage',
      1 => 'iframe_selvbetjeningsl_sning_mm',
      2 => 'news',
      3 => 'os2web_borger_dk_article',
      4 => 'subsites_og_sites',
    ),
  );
  $export['localhost'] = $environment;

  return $export;
}
