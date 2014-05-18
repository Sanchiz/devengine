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
  $context->name = 'devengine_project';
  $context->description = '';
  $context->tag = 'devengine';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'project' => 'project',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-00c06f6441585a9aa4855feee2f5b2e5' => array(
          'module' => 'views',
          'delta' => '00c06f6441585a9aa4855feee2f5b2e5',
          'region' => 'content',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('devengine');
  $export['devengine_project'] = $context;

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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devengine_user';
  $context->description = '';
  $context->tag = 'devengine';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-188b419607f64b18618ba2b0220c9ec1' => array(
          'module' => 'views',
          'delta' => '188b419607f64b18618ba2b0220c9ec1',
          'region' => 'content',
          'weight' => '5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('devengine');
  $export['devengine_user'] = $context;

  return $export;
}
