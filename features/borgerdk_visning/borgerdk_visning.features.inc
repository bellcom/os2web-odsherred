<?php
/**
 * @file
 * borgerdk_visning.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function borgerdk_visning_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function borgerdk_visning_image_default_styles() {
  $styles = array();

  // Exported image style: borger_dk_image.
  $styles['borger_dk_image'] = array(
    'name' => 'borger_dk_image',
    'effects' => array(
      6 => array(
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
          'height' => '210',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
