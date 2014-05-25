<?php
/**
 * @file
 * devengine_environment.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function devengine_environment_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'environments';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Environments';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'devengine_environment_delta_de_development',
      'hide_title' => 1,
      'title' => 'Development',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'devengine_environment_delta_de_staging',
      'hide_title' => 1,
      'title' => 'Staging',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'devengine_environment_delta_de_production',
      'hide_title' => 1,
      'title' => 'Production',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Development');
  t('Environments');
  t('Production');
  t('Staging');

  $export['environments'] = $quicktabs;

  return $export;
}
