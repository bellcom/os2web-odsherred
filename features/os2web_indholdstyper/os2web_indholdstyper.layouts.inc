<?php
/**
 * @file
 * os2web_indholdstyper.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function os2web_indholdstyper_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'node_edit';
  $layout->admin_title = 'Node edit';
  $layout->admin_description = '';
  $layout->category = 'CMS Theme';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Centreret',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'venstre',
          1 => 'h__jre',
        ),
        'parent' => 'main',
        'class' => 'Top',
      ),
      'venstre' => array(
        'type' => 'region',
        'title' => 'Venstre',
        'width' => '75.03062257016563',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'h__jre' => array(
        'type' => 'region',
        'title' => 'Højre',
        'width' => '24.969377429834374',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $export['node_edit'] = $layout;

  return $export;
}
