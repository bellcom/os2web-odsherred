<?php
/**
 * @file
 * nyheder.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nyheder_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news-page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'nyheder' => 'nyheder',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-19' => array(
          'module' => 'menu_block',
          'delta' => '19',
          'region' => 'user_first',
          'weight' => '-10',
        ),
        'panels_mini-footer_menuer' => array(
          'module' => 'panels_mini',
          'delta' => 'footer_menuer',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['news-page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_edit';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'node/*/edit' => 'node/*/edit',
        'node/*/add' => 'node/*/add',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'odsherred_web_ingen_menu',
    ),
  );
  $context->condition_mode = 1;
  $export['news_edit'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_node_view';
  $context->description = 'News node view';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'sidebar_first',
          'weight' => '41',
        ),
      ),
    ),
    'breadcrumb' => 'nyheder',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News node view');
  $export['news_node_view'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_search';
  $context->description = 'search page context';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search/news*' => 'search/news*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-7',
        ),
        'facetapi-XgsLAqEUP0cGkgFM1lxSV1QvzvRgCRT4' => array(
          'module' => 'facetapi',
          'delta' => 'XgsLAqEUP0cGkgFM1lxSV1QvzvRgCRT4',
          'region' => 'sidebar_first',
          'weight' => '8',
        ),
        'facetapi-OPDwFS26TeVgxxmByLy4OUj2pkORtZs0' => array(
          'module' => 'facetapi',
          'delta' => 'OPDwFS26TeVgxxmByLy4OUj2pkORtZs0',
          'region' => 'sidebar_first',
          'weight' => '9',
        ),
        'facetapi-LT2dFnd8cMmZGLVNO9fmhxRE08mqPGTJ' => array(
          'module' => 'facetapi',
          'delta' => 'LT2dFnd8cMmZGLVNO9fmhxRE08mqPGTJ',
          'region' => 'sidebar_first',
          'weight' => '10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'portalforside',
    ),
    'region' => array(
      'cmstheme' => array(
        'disable' => array(
          'page_top' => 0,
          'page_bottom' => 0,
          'content' => 0,
          'user_first' => 0,
          'user_second' => 0,
          'branding' => 0,
          'menu' => 0,
          'search' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'header_first' => 0,
          'header_second' => 0,
          'preface_first' => 0,
          'preface_second' => 0,
          'preface_third' => 0,
          'postscript_first' => 0,
          'postscript_second' => 0,
          'postscript_third' => 0,
          'postscript_fourth' => 0,
          'footer_first' => 0,
          'footer_second' => 0,
          'footer_third' => 0,
        ),
      ),
      'odsherredweb' => array(
        'disable' => array(
          'header_first' => 'header_first',
          'page_top' => 0,
          'page_bottom' => 0,
          'content' => 0,
          'user_first' => 0,
          'user_second' => 0,
          'branding' => 0,
          'menu' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'header_second' => 0,
          'preface_first' => 0,
          'preface_second' => 0,
          'preface_third' => 0,
          'postscript_first' => 0,
          'postscript_second' => 0,
          'postscript_third' => 0,
          'postscript_fourth' => 0,
          'footer_first' => 0,
          'footer_second' => 0,
        ),
      ),
      'omega' => array(
        'disable' => array(
          'page_top' => 0,
          'page_bottom' => 0,
          'content' => 0,
          'user_first' => 0,
          'user_second' => 0,
          'branding' => 0,
          'menu' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'header_first' => 0,
          'header_second' => 0,
          'preface_first' => 0,
          'preface_second' => 0,
          'preface_third' => 0,
          'postscript_first' => 0,
          'postscript_second' => 0,
          'postscript_third' => 0,
          'postscript_fourth' => 0,
          'footer_first' => 0,
          'footer_second' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('search page context');
  $export['news_search'] = $context;

  return $export;
}
