<?php
/**
 * @file
 * odsherred_create_content_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function odsherred_create_content_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
