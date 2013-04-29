<?php
/**
 * @file
 * nyheder.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function nyheder_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'nyheder';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'news page tabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_nyheder_hoeringer-block_1',
      'hide_title' => 1,
      'title' => 'Høringer',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_nyheder_moedekalender-block_1',
      'hide_title' => 1,
      'title' => 'Mødeaktiviteter',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_nyheder_udbud-block_1',
      'hide_title' => 1,
      'title' => 'Udbud',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Høringer');
  t('Mødeaktiviteter');
  t('Udbud');
  t('news page tabs');

  $export['nyheder'] = $quicktabs;

  return $export;
}
