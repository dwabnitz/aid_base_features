<?php
/**
 * @file
 * aid_basic_news_item.field_group.inc
 */

/**
 * Implementation of hook_field_group_info().
 */
function aid_basic_news_item_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_item_assoc_content|node|news_item|form';
  $field_group->group_name = 'group_news_item_assoc_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Associated Content',
    'weight' => '12',
    'children' => array(
      0 => 'field_news_item_media_assets',
      1 => 'field_news_item_attachments',
      2 => 'field_news_item_related_nodes',
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
  $export['group_news_item_assoc_content|node|news_item|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_item_classification|node|news_item|form';
  $field_group->group_name = 'group_news_item_classification';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Classification',
    'weight' => '8',
    'children' => array(
      0 => 'field_news_item_tags',
      1 => 'field_news_item_department',
      2 => 'field_news_item_research_area',
      3 => 'field_news_item_topics',
      4 => 'field_news_item_category',
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
  $export['group_news_item_classification|node|news_item|form'] = $field_group;

  return $export;
}
