<?php
/**
 * @file
 * devengine_dashboard.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devengine_dashboard_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'issues_dashboard';
  $view->description = 'Provides issues tools.';
  $view->tag = 'Issues';
  $view->base_table = 'node';
  $view->human_name = 'Issues dashboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Issues dashboard';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Assigned */
  $handler->display->display_options['fields']['field_issue_assigned']['id'] = 'field_issue_assigned';
  $handler->display->display_options['fields']['field_issue_assigned']['table'] = 'field_data_field_issue_assigned';
  $handler->display->display_options['fields']['field_issue_assigned']['field'] = 'field_issue_assigned';
  $handler->display->display_options['fields']['field_issue_assigned']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: % Done */
  $handler->display->display_options['fields']['field_issue_done']['id'] = 'field_issue_done';
  $handler->display->display_options['fields']['field_issue_done']['table'] = 'field_data_field_issue_done';
  $handler->display->display_options['fields']['field_issue_done']['field'] = 'field_issue_done';
  /* Field: Content: Estimate */
  $handler->display->display_options['fields']['field_issue_estimate']['id'] = 'field_issue_estimate';
  $handler->display->display_options['fields']['field_issue_estimate']['table'] = 'field_data_field_issue_estimate';
  $handler->display->display_options['fields']['field_issue_estimate']['field'] = 'field_issue_estimate';
  $handler->display->display_options['fields']['field_issue_estimate']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['fields']['field_issue_priority']['table'] = 'field_data_field_issue_priority';
  $handler->display->display_options['fields']['field_issue_priority']['field'] = 'field_issue_priority';
  /* Field: Content: Start date */
  $handler->display->display_options['fields']['field_issue_start_date']['id'] = 'field_issue_start_date';
  $handler->display->display_options['fields']['field_issue_start_date']['table'] = 'field_data_field_issue_start_date';
  $handler->display->display_options['fields']['field_issue_start_date']['field'] = 'field_issue_start_date';
  $handler->display->display_options['fields']['field_issue_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['fields']['field_issue_status']['table'] = 'field_data_field_issue_status';
  $handler->display->display_options['fields']['field_issue_status']['field'] = 'field_issue_status';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Project (field_issue_project) */
  $handler->display->display_options['arguments']['field_issue_project_target_id']['id'] = 'field_issue_project_target_id';
  $handler->display->display_options['arguments']['field_issue_project_target_id']['table'] = 'field_data_field_issue_project';
  $handler->display->display_options['arguments']['field_issue_project_target_id']['field'] = 'field_issue_project_target_id';
  $handler->display->display_options['arguments']['field_issue_project_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_issue_project_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_issue_project_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_issue_project_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_issue_project_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'issue' => 'issue',
  );

  /* Display: Issues page */
  $handler = $view->new_display('page', 'Issues page', 'page');
  $handler->display->display_options['display_description'] = 'Displays available issues for project.';
  $handler->display->display_options['path'] = 'projects/%/issues';
  $export['issues_dashboard'] = $view;

  $view = new view();
  $view->name = 'projects_dashboard';
  $view->description = 'Provides projects tools.';
  $view->tag = 'Projects';
  $view->base_table = 'node';
  $view->human_name = 'Projects dashboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Projects page */
  $handler = $view->new_display('page', 'Projects page', 'project_page');
  $handler->display->display_options['display_description'] = 'Displays available projects for user.';
  $handler->display->display_options['path'] = 'projects';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Projects';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['projects_dashboard'] = $view;

  return $export;
}
