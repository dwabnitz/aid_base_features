<?php
/**
 * @file
 * aid_basic_research_program.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function aid_basic_research_program_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function aid_basic_research_program_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Book page'),
      'base' => 'node_content',
      'description' => t('<em>Books</em> have a built-in hierarchical navigation. Use for handbooks or tutorials.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'research_program' => array(
      'name' => t('Research Program'),
      'base' => 'node_content',
      'description' => t('Describe a coordinated set of projects undertaking related research. This content type takes the form of an outline with built-in hierarchical navigation.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'research_program_section' => array(
      'name' => t('Research Program Section'),
      'base' => 'node_content',
      'description' => t('Create a section of a research program.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
