<?php
/**
 * @file
 * crf_sectoral_analysis.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function crf_sectoral_analysis_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_comment_sectoral_analysis';
  $strongarm->value = 0;
  $export['print_display_comment_sectoral_analysis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_sectoral_analysis';
  $strongarm->value = 1;
  $export['print_display_sectoral_analysis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_urllist_sectoral_analysis';
  $strongarm->value = 1;
  $export['print_display_urllist_sectoral_analysis'] = $strongarm;

  return $export;
}
