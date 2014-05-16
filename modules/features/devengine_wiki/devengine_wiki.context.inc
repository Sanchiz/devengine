<?php
/**
 * @file
 * devengine_wiki.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devengine_wiki_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devengine_wiki';
  $context->description = '';
  $context->tag = 'devengine';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'projects/*/wiki*' => 'projects/*/wiki*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'book-navigation' => array(
          'module' => 'book',
          'delta' => 'navigation',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('devengine');
  $export['devengine_wiki'] = $context;

  return $export;
}
