<?php
/**
 * @file
 * os2web_taxon.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2web_taxon_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxon_taxonomy_button_text';
  $strongarm->value = 'Klassificér med Taxon';
  $export['taxon_taxonomy_button_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxon_taxonomy_button_text_wait';
  $strongarm->value = 'Klassificerer...';
  $export['taxon_taxonomy_button_text_wait'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxon_taxonomy_ckeditor_field';
  $strongarm->value = 'edit-body-und-0-value';
  $export['taxon_taxonomy_ckeditor_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxon_taxonomy_field_name';
  $strongarm->value = '#edit-field-termref-kle-und';
  $export['taxon_taxonomy_field_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxon_taxonomy_not_selected_image';
  $strongarm->value = '/profiles/os2web/modules/os2web/taxon_taxonomy/images/not_selected_png';
  $export['taxon_taxonomy_not_selected_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxon_taxonomy_number_results_returned';
  $strongarm->value = '5';
  $export['taxon_taxonomy_number_results_returned'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxon_taxonomy_selected_image';
  $strongarm->value = '/profiles/os2web/modules/os2web/taxon_taxonomy/images/selected_png';
  $export['taxon_taxonomy_selected_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxon_taxonomy_taxonomy_name';
  $strongarm->value = 'kle';
  $export['taxon_taxonomy_taxonomy_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxon_taxonomy_taxon_url';
  $strongarm->value = '10.1.1.182/Taxon/taxon-ws.php';
  $export['taxon_taxonomy_taxon_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxon_taxonomy_wait_image';
  $strongarm->value = '/profiles/os2web/modules/os2web/taxon_taxonomy/images/wait.gif';
  $export['taxon_taxonomy_wait_image'] = $strongarm;

  return $export;
}
