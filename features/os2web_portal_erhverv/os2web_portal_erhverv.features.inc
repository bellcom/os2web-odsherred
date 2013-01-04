<?php
/**
 * @file
 * os2web_portal_erhverv.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_portal_erhverv_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
