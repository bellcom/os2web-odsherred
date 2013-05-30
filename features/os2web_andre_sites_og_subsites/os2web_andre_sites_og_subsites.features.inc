<?php
/**
 * @file
 * os2web_andre_sites_og_subsites.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_andre_sites_og_subsites_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_andre_sites_og_subsites_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function os2web_andre_sites_og_subsites_image_default_styles() {
  $styles = array();

  // Exported image style: grid3.
  $styles['grid3'] = array(
    'name' => 'grid3',
    'effects' => array(
      10 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '220',
          'height' => '130',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function os2web_andre_sites_og_subsites_node_info() {
  $items = array(
    'subsites_og_sites' => array(
      'name' => t('Subsites og sites'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Sitenavn'),
      'help' => '',
    ),
  );
  return $items;
}
