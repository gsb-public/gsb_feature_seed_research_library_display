<?php
/**
 * @file
 * gsb_feature_seed_research_library_display.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_seed_research_library_display_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
