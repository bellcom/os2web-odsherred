<?php
/**
 * @file
 * os2web_selvbetjeningslinks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_selvbetjeningslinks_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
