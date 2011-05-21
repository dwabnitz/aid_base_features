<?php
/**
 * @file
 * aid_basic_event.field_group.inc
 */

/**
 * Implementation of hook_field_group_info().
 */
function aid_basic_event_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_associated_content|node|event|form';
  $field_group->group_name = 'group_event_associated_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Associated Content',
    'weight' => '7',
    'children' => array(
      0 => 'field_event_attachments',
      1 => 'field_event_related_nodes',
      2 => 'field_event_media_assets',
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
  $export['group_event_associated_content|node|event|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_classification|node|event|form';
  $field_group->group_name = 'group_event_classification';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Classification',
    'weight' => '5',
    'children' => array(
      0 => 'field_event_tags',
      1 => 'field_event_department',
      2 => 'field_event_topics',
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
  $export['group_event_classification|node|event|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_links|node|event|form';
  $field_group->group_name = 'group_event_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '6',
    'children' => array(
      0 => 'field_event_urls',
      1 => 'field_event_website',
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
  $export['group_event_links|node|event|form'] = $field_group;

  return $export;
}
