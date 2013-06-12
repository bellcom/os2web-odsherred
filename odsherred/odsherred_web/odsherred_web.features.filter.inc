<?php
/**
 * @file
 * odsherred_web.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function odsherred_web_filter_default_formats() {
  $formats = array();

  // Exported format: standard.
  $formats['standard'] = array(
    'format' => 'standard',
    'name' => 'standard',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <div> <p> <br>',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 0,
        ),
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
