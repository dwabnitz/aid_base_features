<?php
/**
 * @file
 * aid_basic_press_release.field_group.inc
 */

/**
 * Implementation of hook_field_group_info().
 */
function aid_basic_press_release_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pressrelease_assoc_nodes|node|press_release|form';
  $field_group->group_name = 'group_pressrelease_assoc_nodes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_release';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Associated Content',
    'weight' => '12',
    'children' => array(
      0 => 'field_pressrelease_attachments',
      1 => 'field_pressrelease_related_nodes',
      2 => 'field_pressrelease_media_assets',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pressrelease_assoc_nodes|node|press_release|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pressrelease_classific|node|press_release|form';
  $field_group->group_name = 'group_pressrelease_classific';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_release';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Classification',
    'weight' => '7',
    'children' => array(
      0 => 'field_pressrelease_tags',
      1 => 'field_pressrelease_topics',
      2 => 'field_pressrelease_res_areas',
      3 => 'field_pressrelease_department',
      4 => 'field_pressrelease_category',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pressrelease_classific|node|press_release|form'] = $field_group;

  return $export;
}
