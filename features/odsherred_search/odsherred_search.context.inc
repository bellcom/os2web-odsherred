<?php
/**
 * @file
 * odsherred_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function odsherred_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search';
  $context->description = 'search page context';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search*' => 'search*',
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
          'weight' => '-99',
        ),
        'facetapi-LT2dFnd8cMmZGLVNO9fmhxRE08mqPGTJ' => array(
          'module' => 'facetapi',
          'delta' => 'LT2dFnd8cMmZGLVNO9fmhxRE08mqPGTJ',
          'region' => 'content',
          'weight' => '-98',
        ),
        'facetapi-XgsLAqEUP0cGkgFM1lxSV1QvzvRgCRT4' => array(
          'module' => 'facetapi',
          'delta' => 'XgsLAqEUP0cGkgFM1lxSV1QvzvRgCRT4',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'apachesolr_search-mlt-001' => array(
          'module' => 'apachesolr_search',
          'delta' => 'mlt-001',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'portalforside',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('search page context');
  $export['search'] = $context;

  return $export;
}
