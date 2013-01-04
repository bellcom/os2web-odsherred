<?php
/**
 * @file
 * os2web_borgerservices.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_borgerservices_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_borgerservices_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function os2web_borgerservices_image_default_styles() {
  $styles = array();

  // Exported image style: borgerservices.
  $styles['borgerservices'] = array(
    'name' => 'borgerservices',
    'effects' => array(
      12 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '159',
          'height' => '94',
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
function os2web_borgerservices_node_info() {
  $items = array(
    'borgerservices' => array(
      'name' => t('Borgerservices'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
