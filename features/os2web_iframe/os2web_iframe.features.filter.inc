<?php
/**
 * @file
 * os2web_iframe.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function os2web_iframe_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML + iFrame.
  $formats['full_html_iframe'] = array(
    'format' => 'full_html_iframe',
    'name' => 'Full HTML + iFrame',
    'cache' => '0',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'insertFrame_filter' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'insertframe_use_base_prefix' => 0,
        ),
      ),
      'lightbox_iframe_filter' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => '2',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
