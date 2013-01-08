<?php
/**
 * @file
 * os2web_dagsorden_h_jre_indhold.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_dagsorden_h_jre_indhold_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
