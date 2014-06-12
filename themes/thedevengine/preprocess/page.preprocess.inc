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

  // Set breadcrumbs.
  $breadcrumbs = array(
    l(t('Home'), '<front>'),
  );
  if (!empty($variables['node']->type) && ($variables['node']->type == 'issue' || $variables['node']->type == 'book' || $variables['node']->type == 'project')) {
    $breadcrumbs[] = l(t('Projects'), 'projects');
  }
  if (arg(0) == 'projects' && arg(1) && !arg(2)) {
    $breadcrumbs[] = l(t('Projects'), 'projects');
  }
  drupal_set_breadcrumb($breadcrumbs);
}
