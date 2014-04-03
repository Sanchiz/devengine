<?php
/**
 * @file
 * devengine_core.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function devengine_core_taxonomy_default_vocabularies() {
  return array(
    'issue_type' => array(
      'name' => 'Issue type',
      'machine_name' => 'issue_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
