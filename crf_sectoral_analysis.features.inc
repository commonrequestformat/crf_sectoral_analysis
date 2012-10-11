<?php
/**
 * @file
 * crf_sectoral_analysis.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crf_sectoral_analysis_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crf_sectoral_analysis_views_api() {
  return array("version" => "3.0");
}