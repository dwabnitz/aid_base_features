<?php
/**
 * @file
 * aid_basic_profile.field_group.inc
 */

/**
 * Implementation of hook_field_group_info().
 */
function aid_basic_profile_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_contact|node|profile|form';
  $field_group->group_name = 'group_profile_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '11',
    'children' => array(
      0 => 'field_profile_contact_note',
      1 => 'field_profile_email',
      2 => 'field_profile_fax',
      3 => 'field_profile_phone',
      4 => 'field_profile_postal_address',
      5 => 'field_profile_visitor_address',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_profile_contact|node|profile|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_personal|node|profile|form';
  $field_group->group_name = 'group_profile_personal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal Information',
    'weight' => '18',
    'children' => array(
      0 => 'field_profile_affiliations',
      1 => 'field_profile_awards',
      2 => 'field_profile_biography',
      3 => 'field_profile_cv',
      4 => 'field_profile_cv_attachment',
      5 => 'field_profile_memberships',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Personal Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_profile_personal|node|profile|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_research|node|profile|form';
  $field_group->group_name = 'group_profile_research';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Research Information',
    'weight' => '19',
    'children' => array(
      0 => 'field_profile_research',
      1 => 'field_profile_research_interests',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Research Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_profile_research|node|profile|form'] = $field_group;

  return $export;
}
