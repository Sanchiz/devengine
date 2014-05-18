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
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No available issues.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
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
  $handler->display->display_options['fields']['field_issue_assigned']['empty'] = 'No specified';
  $handler->display->display_options['fields']['field_issue_assigned']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: % Done */
  $handler->display->display_options['fields']['field_issue_done']['id'] = 'field_issue_done';
  $handler->display->display_options['fields']['field_issue_done']['table'] = 'field_data_field_issue_done';
  $handler->display->display_options['fields']['field_issue_done']['field'] = 'field_issue_done';
  $handler->display->display_options['fields']['field_issue_done']['empty'] = '0 %';
  /* Field: Content: Estimate */
  $handler->display->display_options['fields']['field_issue_estimate']['id'] = 'field_issue_estimate';
  $handler->display->display_options['fields']['field_issue_estimate']['table'] = 'field_data_field_issue_estimate';
  $handler->display->display_options['fields']['field_issue_estimate']['field'] = 'field_issue_estimate';
  $handler->display->display_options['fields']['field_issue_estimate']['empty'] = 'No specified';
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
  $handler->display->display_options['fields']['field_issue_priority']['empty'] = 'No specified';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Status (field_issue_status) */
  $handler->display->display_options['filters']['field_issue_status_value']['id'] = 'field_issue_status_value';
  $handler->display->display_options['filters']['field_issue_status_value']['table'] = 'field_data_field_issue_status';
  $handler->display->display_options['filters']['field_issue_status_value']['field'] = 'field_issue_status_value';
  $handler->display->display_options['filters']['field_issue_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status_value']['expose']['operator_id'] = 'field_issue_status_value_op';
  $handler->display->display_options['filters']['field_issue_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status_value']['expose']['operator'] = 'field_issue_status_value_op';
  $handler->display->display_options['filters']['field_issue_status_value']['expose']['identifier'] = 'field_issue_status_value';
  $handler->display->display_options['filters']['field_issue_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Priority (field_issue_priority) */
  $handler->display->display_options['filters']['field_issue_priority_value']['id'] = 'field_issue_priority_value';
  $handler->display->display_options['filters']['field_issue_priority_value']['table'] = 'field_data_field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority_value']['field'] = 'field_issue_priority_value';
  $handler->display->display_options['filters']['field_issue_priority_value']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_priority_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_priority_value']['expose']['operator_id'] = 'field_issue_priority_value_op';
  $handler->display->display_options['filters']['field_issue_priority_value']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_issue_priority_value']['expose']['operator'] = 'field_issue_priority_value_op';
  $handler->display->display_options['filters']['field_issue_priority_value']['expose']['identifier'] = 'field_issue_priority_value';
  $handler->display->display_options['filters']['field_issue_priority_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: % Done (field_issue_done) */
  $handler->display->display_options['filters']['field_issue_done_value']['id'] = 'field_issue_done_value';
  $handler->display->display_options['filters']['field_issue_done_value']['table'] = 'field_data_field_issue_done';
  $handler->display->display_options['filters']['field_issue_done_value']['field'] = 'field_issue_done_value';
  $handler->display->display_options['filters']['field_issue_done_value']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_done_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_done_value']['expose']['operator_id'] = 'field_issue_done_value_op';
  $handler->display->display_options['filters']['field_issue_done_value']['expose']['label'] = '% Done';
  $handler->display->display_options['filters']['field_issue_done_value']['expose']['operator'] = 'field_issue_done_value_op';
  $handler->display->display_options['filters']['field_issue_done_value']['expose']['identifier'] = 'field_issue_done_value';
  $handler->display->display_options['filters']['field_issue_done_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'projects/%/issues';

  /* Display: Latest project issues block */
  $handler = $view->new_display('block', 'Latest project issues block', 'latest_project_issues_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest issues';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More >';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Project (field_issue_project) */
  $handler->display->display_options['arguments']['field_issue_project_target_id']['id'] = 'field_issue_project_target_id';
  $handler->display->display_options['arguments']['field_issue_project_target_id']['table'] = 'field_data_field_issue_project';
  $handler->display->display_options['arguments']['field_issue_project_target_id']['field'] = 'field_issue_project_target_id';
  $handler->display->display_options['arguments']['field_issue_project_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_issue_project_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_issue_project_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_issue_project_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_issue_project_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: User issues block */
  $handler = $view->new_display('block', 'User issues block', 'user_issues_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'User issues';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Assigned (field_issue_assigned) */
  $handler->display->display_options['arguments']['field_issue_assigned_target_id']['id'] = 'field_issue_assigned_target_id';
  $handler->display->display_options['arguments']['field_issue_assigned_target_id']['table'] = 'field_data_field_issue_assigned';
  $handler->display->display_options['arguments']['field_issue_assigned_target_id']['field'] = 'field_issue_assigned_target_id';
  $handler->display->display_options['arguments']['field_issue_assigned_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_issue_assigned_target_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_issue_assigned_target_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_issue_assigned_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_issue_assigned_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_issue_assigned_target_id']['summary_options']['items_per_page'] = '25';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No available projects.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Project id';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Project name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Short name */
  $handler->display->display_options['fields']['field_project_machine_name']['id'] = 'field_project_machine_name';
  $handler->display->display_options['fields']['field_project_machine_name']['table'] = 'field_data_field_project_machine_name';
  $handler->display->display_options['fields']['field_project_machine_name']['field'] = 'field_project_machine_name';
  $handler->display->display_options['fields']['field_project_machine_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_project_machine_name']['alter']['path'] = 'node/[nid]';
  /* Field: Content: Client */
  $handler->display->display_options['fields']['field_project_client']['id'] = 'field_project_client';
  $handler->display->display_options['fields']['field_project_client']['table'] = 'field_data_field_project_client';
  $handler->display->display_options['fields']['field_project_client']['field'] = 'field_project_client';
  $handler->display->display_options['fields']['field_project_client']['empty'] = 'Not specified';
  $handler->display->display_options['fields']['field_project_client']['settings'] = array(
    'link' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'View link';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'projects/[nid]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Issues link';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Issues';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'projects/[nid]/issues';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'New issue link';
  $handler->display->display_options['fields']['nothing_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'New issue';
  $handler->display->display_options['fields']['nothing_3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['path'] = 'projects/[nid]/new-issue';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[nothing_1] | [nothing_2] | [nothing_3]';
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
