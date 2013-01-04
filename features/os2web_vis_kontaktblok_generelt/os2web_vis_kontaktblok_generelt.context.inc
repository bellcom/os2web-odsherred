<?php
/**
 * @file
 * os2web_vis_kontaktblok_generelt.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os2web_vis_kontaktblok_generelt_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_generel_hoejre';
  $context->description = 'Visning af bla. kontaktblok i højre sidebar på udvalgte sider';
  $context->tag = 'OS2WEB - Generelt';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'selvbetjening' => 'selvbetjening',
        'nyheder' => 'nyheder',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-hoejre_blokke_generel' => array(
          'module' => 'panels_mini',
          'delta' => 'hoejre_blokke_generel',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'standard',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OS2WEB - Generelt');
  t('Visning af bla. kontaktblok i højre sidebar på udvalgte sider');
  $export['os2web_generel_hoejre'] = $context;

  return $export;
}
