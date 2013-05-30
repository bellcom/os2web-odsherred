<?php
/**
 * @file
 * os2web_indholdstyper.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function os2web_indholdstyper_taxonomy_default_vocabularies() {
  return array(
    'forfrem_til' => array(
      'name' => 'Forfrem til',
      'machine_name' => 'forfrem_til',
      'description' => 'Forside og portalforsider',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'nyhedstype' => array(
      'name' => 'Nyhedstype',
      'machine_name' => 'nyhedstype',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
