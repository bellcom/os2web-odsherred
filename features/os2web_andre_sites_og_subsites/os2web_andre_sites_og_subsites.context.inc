<?php
/**
 * @file
 * os2web_andre_sites_og_subsites.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os2web_andre_sites_og_subsites_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'andre_sider_odsherred';
  $context->description = 'Odsherred';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'andre-sider/*' => 'andre-sider/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-andre_sider_i_odsherred_kommune' => array(
          'module' => 'panels_mini',
          'delta' => 'andre_sider_i_odsherred_kommune',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'bluenwhite',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Odsherred');
  $export['andre_sider_odsherred'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ods_hvis_top';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'andre-sider/*' => 'andre-sider/*',
        'subsites-og-sites/*' => 'subsites-og-sites/*',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'bluenwhite',
    ),
  );
  $context->condition_mode = 0;
  $export['ods_hvis_top'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_andre_sider';
  $context->description = 'Andre sider og subsites';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'andre-sider/*' => 'andre-sider/*',
      ),
    ),
    'views' => array(
      'values' => array(
        'andre_sider' => 'andre_sider',
        'andre_sider:page' => 'andre_sider:page',
        'subsites_og_sites' => 'subsites_og_sites',
        'subsites_og_sites:page' => 'subsites_og_sites:page',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'odsherred_web_ingen_menu',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Andre sider og subsites');
  $export['os2web_andre_sider'] = $context;

  return $export;
}
