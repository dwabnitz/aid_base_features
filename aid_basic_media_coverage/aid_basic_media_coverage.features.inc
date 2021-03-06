<?php
/**
 * @file
 * aid_basic_media_coverage.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function aid_basic_media_coverage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function aid_basic_media_coverage_node_info() {
  $items = array(
    'media_coverage' => array(
      'name' => t('Media Coverage'),
      'base' => 'node_content',
      'description' => t('Use for media coverage about your organization.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
