<?php
/**
 * @file
 * Dev Engine admin tools.
 */

/**
 * Dev Engine main settings form.
 */
function devengine_core_main_settings($form, $form_state) {
  $form['devengine_core_logged_access'] = array(
    '#type' => 'checkbox',
    '#title' => t('Access to site only for logged users'),
    '#description' => t('This option can disable access to site for anonymous users'),
    '#default_value' => variable_get('devengine_core_logged_access', TRUE),
  );
  return system_settings_form($form);
}
