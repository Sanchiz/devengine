<?php

/**
 * Implements hook_preprocess_page().
 */
function thedevengine_preprocess_page(&$variables) {
  // Added classes layout.
  $variables['classes_array'][] = 'l-page';
  if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
    $variables['classes_array'][] = 'two-sidebars';
  }
  elseif (!empty($variables['page']['sidebar_first'])) {
    $variables['classes_array'][] = 'one-sidebar';
    $variables['classes_array'][] = 'sidebar-first';
  }
  elseif (!empty($variables['page']['sidebar_second'])) {
    $variables['classes_array'][] = 'one-sidebar';
    $variables['classes_array'][] = 'sidebar-second';
  }
  else {
    $variables['classes_array'][] = 'no-sidebars';
  }
}
