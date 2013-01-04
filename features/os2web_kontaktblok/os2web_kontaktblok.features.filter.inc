<?php
/**
 * @file
 * os2web_kontaktblok.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function os2web_kontaktblok_filter_default_formats() {
  $formats = array();

  // Exported format: Blokindhold.
  $formats['blokindhold'] = array(
    'format' => 'blokindhold',
    'name' => 'Blokindhold',
    'cache' => '1',
    'status' => '1',
    'weight' => '-7',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <ul> <ol> <li> <dl> <dt> <dd> <span> <div> <b> <br> <table> <tr> <td>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '60',
        ),
      ),
      'media_filter' => array(
        'weight' => '2',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
