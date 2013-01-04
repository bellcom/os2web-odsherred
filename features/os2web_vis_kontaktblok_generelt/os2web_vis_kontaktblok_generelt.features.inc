<?php
/**
 * @file
 * os2web_vis_kontaktblok_generelt.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_vis_kontaktblok_generelt_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
