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
        'facetapi-LT2dFnd8cMmZGLVNO9fmhxRE08mqPGTJ' => array(
          'module' => 'facetapi',
          'delta' => 'LT2dFnd8cMmZGLVNO9fmhxRE08mqPGTJ',
          'region' => 'content',
          'weight' => '-93',
        ),
        'apachesolr_search-sort' => array(
          'module' => 'apachesolr_search',
          'delta' => 'sort',
          'region' => 'content',
          'weight' => '-93',
        ),
        'facetapi-tWCrGXAGLKyRv1Hha469kKDo0BGurs8p' => array(
          'module' => 'facetapi',
          'delta' => 'tWCrGXAGLKyRv1Hha469kKDo0BGurs8p',
          'region' => 'sidebar_first',
          'weight' => '-4',
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
