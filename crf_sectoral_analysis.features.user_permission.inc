<?php
/**
 * @file
 * crf_sectoral_analysis.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crf_sectoral_analysis_user_default_permissions() {
  $permissions = array();

  // Exported permission: delete any sectoral_analysis content.
  $permissions['delete any sectoral_analysis content'] = array(
    'name' => 'delete any sectoral_analysis content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own sectoral_analysis content.
  $permissions['delete own sectoral_analysis content'] = array(
    'name' => 'delete own sectoral_analysis content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any sectoral_analysis content.
  $permissions['edit any sectoral_analysis content'] = array(
    'name' => 'edit any sectoral_analysis content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own sectoral_analysis content.
  $permissions['edit own sectoral_analysis content'] = array(
    'name' => 'edit own sectoral_analysis content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}
