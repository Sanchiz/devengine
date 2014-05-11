<?php
/**
 * @file
 * devengine_core.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function devengine_core_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_issue_matadata|node|issue|form';
  $field_group->group_name = 'group_issue_matadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Issue metadata',
    'weight' => '0',
    'children' => array(
      0 => 'field_issue_assigned',
      1 => 'field_issue_done',
      2 => 'field_issue_estimate',
      3 => 'field_issue_priority',
      4 => 'field_issue_project',
      5 => 'field_issue_start_date',
      6 => 'field_issue_status',
      7 => 'field_issue_type',
      8 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-issue-matadata field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_issue_matadata|node|issue|form'] = $field_group;

  return $export;
}
