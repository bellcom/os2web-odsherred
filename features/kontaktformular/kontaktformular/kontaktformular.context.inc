<?php
/**
 * @file
 * kontaktformular.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kontaktformular_context_default_contexts() {
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

  return $export;
}
