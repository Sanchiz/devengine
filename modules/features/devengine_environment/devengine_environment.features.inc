<?php
/**
 * @file
 * devengine_environment.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devengine_environment_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}
