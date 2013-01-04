<?php
/**
 * @file
 * os2web_grund_paneler.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_grund_paneler_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
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
function os2web_grund_paneler_views_api() {
  return array("version" => "3.0");
}
