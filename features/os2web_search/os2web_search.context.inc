<?php
/**
 * @file
 * os2web_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os2web_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search/*' => 'search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'apachesolr_search-sort' => array(
          'module' => 'apachesolr_search',
          'delta' => 'sort',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
        'facetapi-Q7IEPePqqGeMRym706M15bmvrqPKy501' => array(
          'module' => 'facetapi',
          'delta' => 'Q7IEPePqqGeMRym706M15bmvrqPKy501',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'hide_second_sidebar',
    ),
  );
  $context->condition_mode = 0;
  $export['search'] = $context;

  return $export;
}
