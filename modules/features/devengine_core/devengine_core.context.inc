<?php
/**
 * @file
 * devengine_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devengine_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devengine_sitewide';
  $context->description = '';
  $context->tag = 'devengine';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
        'devengine_core-devengine_core_project_menu' => array(
          'module' => 'devengine_core',
          'delta' => 'devengine_core_project_menu',
          'region' => 'header',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('devengine');
  $export['devengine_sitewide'] = $context;

  return $export;
}
