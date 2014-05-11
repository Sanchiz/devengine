<?php
/**
 * @file
 * devengine_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function devengine_core_user_default_roles() {
  $roles = array();

  // Exported role: client.
  $roles['client'] = array(
    'name' => 'client',
    'weight' => 5,
  );

  // Exported role: developer.
  $roles['developer'] = array(
    'name' => 'developer',
    'weight' => 3,
  );

  // Exported role: manager.
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => 4,
  );

  return $roles;
}
