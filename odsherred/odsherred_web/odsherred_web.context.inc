<?php
/**
 * @file
 * odsherred_web.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function odsherred_web_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'kontaktformular';
  $context->description = '';
  $context->tag = 'Odsherred';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/894172' => 'node/894172',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-kontakt' => array(
          'module' => 'panels_mini',
          'delta' => 'kontakt',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Odsherred');
  $export['kontaktformular'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'odsherred_forside';
  $context->description = '';
  $context->tag = 'Odsherred';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'odshrred_forside',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Odsherred');
  $export['odsherred_forside'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'odsherred_generelt';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~nyheder' => '~nyheder',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'sidebar_first',
          'weight' => '-11',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header_first',
          'weight' => '-10',
        ),
        'menu_block-19' => array(
          'module' => 'menu_block',
          'delta' => '19',
          'region' => 'header_second',
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
  $export['odsherred_generelt'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'vis_sidetitel';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'os2web_borger_dk_article' => 'os2web_borger_dk_article',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'odsherred_borger_dk_artikler',
    ),
  );
  $context->condition_mode = 0;
  $export['vis_sidetitel'] = $context;

  return $export;
}
