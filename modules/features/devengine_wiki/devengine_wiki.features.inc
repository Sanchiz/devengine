<?php
/**
 * @file
 * devengine_wiki.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devengine_wiki_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
