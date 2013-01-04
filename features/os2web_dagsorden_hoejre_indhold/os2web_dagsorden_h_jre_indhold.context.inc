<?php
/**
 * @file
 * os2web_dagsorden_h_jre_indhold.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os2web_dagsorden_h_jre_indhold_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hoejre_blokke_ved_dagsordener';
  $context->description = 'Højre blokke ved dagsordener';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'dagsorden-og-referat' => 'dagsorden-og-referat',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-hoejre_blokke_ved_dagsordener' => array(
          'module' => 'panels_mini',
          'delta' => 'hoejre_blokke_ved_dagsordener',
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
  t('Højre blokke ved dagsordener');
  $export['hoejre_blokke_ved_dagsordener'] = $context;

  return $export;
}
