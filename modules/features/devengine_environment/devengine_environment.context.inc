<?php
/**
 * @file
 * devengine_environment.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devengine_environment_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devengine_repository';
  $context->description = '';
  $context->tag = 'devengine';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'projects/*/environment' => 'projects/*/environment',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-environments' => array(
          'module' => 'quicktabs',
          'delta' => 'environments',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('devengine');
  $export['devengine_repository'] = $context;

  return $export;
}
