<?php
/**
 * @file
 * odsherred_web.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function odsherred_web_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'borger';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Borger';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'panels_mini_delta_forside_mini_borger_muligheder',
      'hide_title' => 1,
      'title' => 'Dine muligheder',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'panels_mini_delta_forside_mini_borger',
      'hide_title' => 1,
      'title' => 'Nyheder',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Borger');
  t('Dine muligheder');
  t('Nyheder');

  $export['borger'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'erhverv';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Erhverv';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'panels_mini_delta_forside_mini_erhverv_muligheder',
      'hide_title' => 1,
      'title' => 'Dine muligheder',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'panels_mini_delta_forside_mini_erhverv',
      'hide_title' => 1,
      'title' => 'Nyheder',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Dine muligheder');
  t('Erhverv');
  t('Nyheder');

  $export['erhverv'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'politik';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Politik';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'panels_mini_delta_forside_mini_politik_muligheder',
      'hide_title' => 1,
      'title' => 'Dine muligheder',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'panels_mini_delta_forside_mini_politik',
      'hide_title' => 1,
      'title' => 'Nyheder',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Dine muligheder');
  t('Nyheder');
  t('Politik');

  $export['politik'] = $quicktabs;

  return $export;
}
