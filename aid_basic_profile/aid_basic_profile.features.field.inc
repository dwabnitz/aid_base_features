<?php
/**
 * @file
 * aid_basic_profile.features.field.inc
 */

/**
 * Implementation of hook_field_default_fields().
 */
function aid_basic_profile_field_default_fields() {
  $fields = array();

  // Exported field: 'node-profile-body'
  $fields['node-profile-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 42,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Description',
      'required' => 0,
      'settings' => array(
        'display_summary' => 1,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_affiliations'
  $fields['node-profile-field_profile_affiliations'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_affiliations',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'max_length' => '100',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 15,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_affiliations',
      'label' => 'Affiliations',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_awards'
  $fields['node-profile-field_profile_awards'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_awards',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'max_length' => '60',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 45,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_awards',
      'label' => 'Awards',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_biography'
  $fields['node-profile-field_profile_biography'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_biography',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 21,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_biography',
      'label' => 'Biography',
      'required' => 0,
      'settings' => array(
        'display_summary' => 1,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '10',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_contact_note'
  $fields['node-profile-field_profile_contact_note'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_contact_note',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 18,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_contact_note',
      'label' => 'Contact Note',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '17',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_cv'
  $fields['node-profile-field_profile_cv'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_cv',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 22,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_cv',
      'label' => 'Curriculum Vitae',
      'required' => 0,
      'settings' => array(
        'display_summary' => 1,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_cv_attachment'
  $fields['node-profile-field_profile_cv_attachment'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_cv_attachment',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'file',
      'settings' => array(
        'display_default' => 0,
        'display_field' => 0,
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => 23,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_cv_attachment',
      'label' => 'CV Attachment',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => 'profile/attachments',
        'file_extensions' => 'pdf',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_email'
  $fields['node-profile-field_profile_email'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_email',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'email',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
      ),
      'translatable' => '1',
      'type' => 'email',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'default',
          'weight' => 5,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_email',
      'label' => 'Email Address',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'email',
        'settings' => array(
          'size' => '30',
        ),
        'type' => 'email_textfield',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_fax'
  $fields['node-profile-field_profile_fax'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_fax',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'max_length' => '30',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 19,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_fax',
      'label' => 'Fax Number',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '30',
        ),
        'type' => 'text_textfield',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_first_name'
  $fields['node-profile-field_profile_first_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_first_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'max_length' => '60',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_first_name',
      'label' => 'First Name',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_image'
  $fields['node-profile-field_profile_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 41,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_image',
      'label' => 'Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'file_directory' => 'profile/images',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_last_name'
  $fields['node-profile-field_profile_last_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_last_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'max_length' => '60',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 2,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_last_name',
      'label' => 'Last Name',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_memberships'
  $fields['node-profile-field_profile_memberships'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_memberships',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'max_length' => '60',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 44,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_memberships',
      'label' => 'Memberships',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_middlename'
  $fields['node-profile-field_profile_middlename'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_middlename',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'max_length' => '30',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 7,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_middlename',
      'label' => 'Middle Name or Initial',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '30',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_organization'
  $fields['node-profile-field_profile_organization'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_organization',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'max_length' => '100',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'If this profile is an organization, enter the name of that organization here. This can take the place of First and Last names to serve as the full name of this profile.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 3,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_organization',
      'label' => 'Organization',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_phone'
  $fields['node-profile-field_profile_phone'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_phone',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'max_length' => '30',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 4,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_phone',
      'label' => 'Phone Number',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '30',
        ),
        'type' => 'text_textfield',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_postal_address'
  $fields['node-profile-field_profile_postal_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_postal_address',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'addressfield',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
      ),
      'translatable' => '1',
      'type' => 'addressfield',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => array(
        0 => array(
          'administrative_area' => '',
          'country' => 'DE',
          'dependent_locality' => '',
          'element_key' => 'node|profile|field_profile_postal_address|und|0',
          'locality' => '',
          'name_line' => '',
          'organisation_name' => '',
          'postal_code' => '',
          'premise' => '',
          'sub_administrative_area' => '',
          'sub_premise' => '',
          'thoroughfare' => '',
          'xal' => '',
          'xnl' => '<NameDetails/>
',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'addressfield',
          'settings' => array(),
          'type' => 'addressfield_default',
          'weight' => 25,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_postal_address',
      'label' => 'Postal Address',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'addressfield',
        'settings' => array(
          'available_countries' => array(
            'AD' => 'AD',
            'AE' => 'AE',
            'AF' => 'AF',
            'AG' => 'AG',
            'AI' => 'AI',
            'AL' => 'AL',
            'AM' => 'AM',
            'AN' => 'AN',
            'AO' => 'AO',
            'AQ' => 'AQ',
            'AR' => 'AR',
            'AS' => 'AS',
            'AT' => 'AT',
            'AU' => 'AU',
            'AW' => 'AW',
            'AX' => 'AX',
            'AZ' => 'AZ',
            'BA' => 'BA',
            'BB' => 'BB',
            'BD' => 'BD',
            'BE' => 'BE',
            'BF' => 'BF',
            'BG' => 'BG',
            'BH' => 'BH',
            'BI' => 'BI',
            'BJ' => 'BJ',
            'BL' => 'BL',
            'BM' => 'BM',
            'BN' => 'BN',
            'BO' => 'BO',
            'BR' => 'BR',
            'BS' => 'BS',
            'BT' => 'BT',
            'BV' => 'BV',
            'BW' => 'BW',
            'BY' => 'BY',
            'BZ' => 'BZ',
            'CA' => 'CA',
            'CC' => 'CC',
            'CD' => 'CD',
            'CF' => 'CF',
            'CG' => 'CG',
            'CH' => 'CH',
            'CI' => 'CI',
            'CK' => 'CK',
            'CL' => 'CL',
            'CM' => 'CM',
            'CN' => 'CN',
            'CO' => 'CO',
            'CR' => 'CR',
            'CU' => 'CU',
            'CV' => 'CV',
            'CX' => 'CX',
            'CY' => 'CY',
            'CZ' => 'CZ',
            'DE' => 'DE',
            'DJ' => 'DJ',
            'DK' => 'DK',
            'DM' => 'DM',
            'DO' => 'DO',
            'DZ' => 'DZ',
            'EC' => 'EC',
            'EE' => 'EE',
            'EG' => 'EG',
            'EH' => 'EH',
            'ER' => 'ER',
            'ES' => 'ES',
            'ET' => 'ET',
            'FI' => 'FI',
            'FJ' => 'FJ',
            'FK' => 'FK',
            'FM' => 'FM',
            'FO' => 'FO',
            'FR' => 'FR',
            'GA' => 'GA',
            'GB' => 'GB',
            'GD' => 'GD',
            'GE' => 'GE',
            'GF' => 'GF',
            'GG' => 'GG',
            'GH' => 'GH',
            'GI' => 'GI',
            'GL' => 'GL',
            'GM' => 'GM',
            'GN' => 'GN',
            'GP' => 'GP',
            'GQ' => 'GQ',
            'GR' => 'GR',
            'GS' => 'GS',
            'GT' => 'GT',
            'GU' => 'GU',
            'GW' => 'GW',
            'GY' => 'GY',
            'HK' => 'HK',
            'HM' => 'HM',
            'HN' => 'HN',
            'HR' => 'HR',
            'HT' => 'HT',
            'HU' => 'HU',
            'ID' => 'ID',
            'IE' => 'IE',
            'IL' => 'IL',
            'IM' => 'IM',
            'IN' => 'IN',
            'IO' => 'IO',
            'IQ' => 'IQ',
            'IR' => 'IR',
            'IS' => 'IS',
            'IT' => 'IT',
            'JE' => 'JE',
            'JM' => 'JM',
            'JO' => 'JO',
            'JP' => 'JP',
            'KE' => 'KE',
            'KG' => 'KG',
            'KH' => 'KH',
            'KI' => 'KI',
            'KM' => 'KM',
            'KN' => 'KN',
            'KP' => 'KP',
            'KR' => 'KR',
            'KW' => 'KW',
            'KY' => 'KY',
            'KZ' => 'KZ',
            'LA' => 'LA',
            'LB' => 'LB',
            'LC' => 'LC',
            'LI' => 'LI',
            'LK' => 'LK',
            'LR' => 'LR',
            'LS' => 'LS',
            'LT' => 'LT',
            'LU' => 'LU',
            'LV' => 'LV',
            'LY' => 'LY',
            'MA' => 'MA',
            'MC' => 'MC',
            'MD' => 'MD',
            'ME' => 'ME',
            'MF' => 'MF',
            'MG' => 'MG',
            'MH' => 'MH',
            'MK' => 'MK',
            'ML' => 'ML',
            'MM' => 'MM',
            'MN' => 'MN',
            'MO' => 'MO',
            'MP' => 'MP',
            'MQ' => 'MQ',
            'MR' => 'MR',
            'MS' => 'MS',
            'MT' => 'MT',
            'MU' => 'MU',
            'MV' => 'MV',
            'MW' => 'MW',
            'MX' => 'MX',
            'MY' => 'MY',
            'MZ' => 'MZ',
            'NA' => 'NA',
            'NC' => 'NC',
            'NE' => 'NE',
            'NF' => 'NF',
            'NG' => 'NG',
            'NI' => 'NI',
            'NL' => 'NL',
            'NO' => 'NO',
            'NP' => 'NP',
            'NR' => 'NR',
            'NU' => 'NU',
            'NZ' => 'NZ',
            'OM' => 'OM',
            'PA' => 'PA',
            'PE' => 'PE',
            'PF' => 'PF',
            'PG' => 'PG',
            'PH' => 'PH',
            'PK' => 'PK',
            'PL' => 'PL',
            'PM' => 'PM',
            'PN' => 'PN',
            'PR' => 'PR',
            'PS' => 'PS',
            'PT' => 'PT',
            'PW' => 'PW',
            'PY' => 'PY',
            'QA' => 'QA',
            'RE' => 'RE',
            'RO' => 'RO',
            'RS' => 'RS',
            'RU' => 'RU',
            'RW' => 'RW',
            'SA' => 'SA',
            'SB' => 'SB',
            'SC' => 'SC',
            'SD' => 'SD',
            'SE' => 'SE',
            'SG' => 'SG',
            'SH' => 'SH',
            'SI' => 'SI',
            'SJ' => 'SJ',
            'SK' => 'SK',
            'SL' => 'SL',
            'SM' => 'SM',
            'SN' => 'SN',
            'SO' => 'SO',
            'SR' => 'SR',
            'ST' => 'ST',
            'SV' => 'SV',
            'SY' => 'SY',
            'SZ' => 'SZ',
            'TC' => 'TC',
            'TD' => 'TD',
            'TF' => 'TF',
            'TG' => 'TG',
            'TH' => 'TH',
            'TJ' => 'TJ',
            'TK' => 'TK',
            'TL' => 'TL',
            'TM' => 'TM',
            'TN' => 'TN',
            'TO' => 'TO',
            'TR' => 'TR',
            'TT' => 'TT',
            'TV' => 'TV',
            'TW' => 'TW',
            'TZ' => 'TZ',
            'UA' => 'UA',
            'UG' => 'UG',
            'UM' => 'UM',
            'US' => 'US',
            'UY' => 'UY',
            'UZ' => 'UZ',
            'VA' => 'VA',
            'VC' => 'VC',
            'VE' => 'VE',
            'VG' => 'VG',
            'VI' => 'VI',
            'VN' => 'VN',
            'VU' => 'VU',
            'WF' => 'WF',
            'WS' => 'WS',
            'YE' => 'YE',
            'YT' => 'YT',
            'ZA' => 'ZA',
            'ZM' => 'ZM',
            'ZW' => 'ZW',
          ),
          'name_format' => 'name_line_organisation',
        ),
        'type' => 'addressfield_standard',
        'weight' => '16',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_prefix'
  $fields['node-profile-field_profile_prefix'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_prefix',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'max_length' => '20',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 16,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_prefix',
      'label' => 'Name Prefix',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '20',
        ),
        'type' => 'text_textfield',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_research'
  $fields['node-profile-field_profile_research'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_research',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 27,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_research',
      'label' => 'Current Research',
      'required' => 0,
      'settings' => array(
        'display_summary' => 1,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '26',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_research_interests'
  $fields['node-profile-field_profile_research_interests'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_research_interests',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'max_length' => '60',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 29,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_research_interests',
      'label' => 'Research Interests',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '27',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_suffix'
  $fields['node-profile-field_profile_suffix'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_suffix',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'max_length' => '20',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 17,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_suffix',
      'label' => 'Name Suffix',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '20',
        ),
        'type' => 'text_textfield',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_titles'
  $fields['node-profile-field_profile_titles'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_titles',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 46,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_titles',
      'label' => 'Titles',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_user'
  $fields['node-profile-field_profile_user'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_user',
      'foreign keys' => array(
        'uid' => array(
          'columns' => array(
            'uid' => 'uid',
          ),
          'table' => 'users',
        ),
      ),
      'indexes' => array(
        'uid' => array(
          0 => 'uid',
        ),
      ),
      'module' => 'user_reference',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'referenceable_roles' => array(
          2 => '2',
          3 => '3',
          4 => '4',
          5 => '5',
          6 => '6',
        ),
        'referenceable_status' => array(
          0 => 0,
          1 => '1',
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '1',
      'type' => 'user_reference',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The user account that this profile is attached to.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'user_reference',
          'settings' => array(),
          'type' => 'user_reference_default',
          'weight' => 13,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_user',
      'label' => 'Associated User',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'user_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'user_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'user_reference_autocomplete',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_visitor_address'
  $fields['node-profile-field_profile_visitor_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_visitor_address',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'addressfield',
      'settings' => array(
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
      ),
      'translatable' => '1',
      'type' => 'addressfield',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => array(
        0 => array(
          'administrative_area' => '',
          'country' => 'DE',
          'dependent_locality' => '',
          'element_key' => 'node|profile|field_profile_visitor_address|und|0',
          'locality' => '',
          'name_line' => '',
          'organisation_name' => '',
          'postal_code' => '',
          'premise' => '',
          'sub_administrative_area' => '',
          'sub_premise' => '',
          'thoroughfare' => '',
          'xal' => '',
          'xnl' => '<NameDetails/>
',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'addressfield',
          'settings' => array(),
          'type' => 'addressfield_default',
          'weight' => 24,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_visitor_address',
      'label' => 'Visitor Address',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'addressfield',
        'settings' => array(
          'available_countries' => array(
            'AD' => 'AD',
            'AE' => 'AE',
            'AF' => 'AF',
            'AG' => 'AG',
            'AI' => 'AI',
            'AL' => 'AL',
            'AM' => 'AM',
            'AN' => 'AN',
            'AO' => 'AO',
            'AQ' => 'AQ',
            'AR' => 'AR',
            'AS' => 'AS',
            'AT' => 'AT',
            'AU' => 'AU',
            'AW' => 'AW',
            'AX' => 'AX',
            'AZ' => 'AZ',
            'BA' => 'BA',
            'BB' => 'BB',
            'BD' => 'BD',
            'BE' => 'BE',
            'BF' => 'BF',
            'BG' => 'BG',
            'BH' => 'BH',
            'BI' => 'BI',
            'BJ' => 'BJ',
            'BL' => 'BL',
            'BM' => 'BM',
            'BN' => 'BN',
            'BO' => 'BO',
            'BR' => 'BR',
            'BS' => 'BS',
            'BT' => 'BT',
            'BV' => 'BV',
            'BW' => 'BW',
            'BY' => 'BY',
            'BZ' => 'BZ',
            'CA' => 'CA',
            'CC' => 'CC',
            'CD' => 'CD',
            'CF' => 'CF',
            'CG' => 'CG',
            'CH' => 'CH',
            'CI' => 'CI',
            'CK' => 'CK',
            'CL' => 'CL',
            'CM' => 'CM',
            'CN' => 'CN',
            'CO' => 'CO',
            'CR' => 'CR',
            'CU' => 'CU',
            'CV' => 'CV',
            'CX' => 'CX',
            'CY' => 'CY',
            'CZ' => 'CZ',
            'DE' => 'DE',
            'DJ' => 'DJ',
            'DK' => 'DK',
            'DM' => 'DM',
            'DO' => 'DO',
            'DZ' => 'DZ',
            'EC' => 'EC',
            'EE' => 'EE',
            'EG' => 'EG',
            'EH' => 'EH',
            'ER' => 'ER',
            'ES' => 'ES',
            'ET' => 'ET',
            'FI' => 'FI',
            'FJ' => 'FJ',
            'FK' => 'FK',
            'FM' => 'FM',
            'FO' => 'FO',
            'FR' => 'FR',
            'GA' => 'GA',
            'GB' => 'GB',
            'GD' => 'GD',
            'GE' => 'GE',
            'GF' => 'GF',
            'GG' => 'GG',
            'GH' => 'GH',
            'GI' => 'GI',
            'GL' => 'GL',
            'GM' => 'GM',
            'GN' => 'GN',
            'GP' => 'GP',
            'GQ' => 'GQ',
            'GR' => 'GR',
            'GS' => 'GS',
            'GT' => 'GT',
            'GU' => 'GU',
            'GW' => 'GW',
            'GY' => 'GY',
            'HK' => 'HK',
            'HM' => 'HM',
            'HN' => 'HN',
            'HR' => 'HR',
            'HT' => 'HT',
            'HU' => 'HU',
            'ID' => 'ID',
            'IE' => 'IE',
            'IL' => 'IL',
            'IM' => 'IM',
            'IN' => 'IN',
            'IO' => 'IO',
            'IQ' => 'IQ',
            'IR' => 'IR',
            'IS' => 'IS',
            'IT' => 'IT',
            'JE' => 'JE',
            'JM' => 'JM',
            'JO' => 'JO',
            'JP' => 'JP',
            'KE' => 'KE',
            'KG' => 'KG',
            'KH' => 'KH',
            'KI' => 'KI',
            'KM' => 'KM',
            'KN' => 'KN',
            'KP' => 'KP',
            'KR' => 'KR',
            'KW' => 'KW',
            'KY' => 'KY',
            'KZ' => 'KZ',
            'LA' => 'LA',
            'LB' => 'LB',
            'LC' => 'LC',
            'LI' => 'LI',
            'LK' => 'LK',
            'LR' => 'LR',
            'LS' => 'LS',
            'LT' => 'LT',
            'LU' => 'LU',
            'LV' => 'LV',
            'LY' => 'LY',
            'MA' => 'MA',
            'MC' => 'MC',
            'MD' => 'MD',
            'ME' => 'ME',
            'MF' => 'MF',
            'MG' => 'MG',
            'MH' => 'MH',
            'MK' => 'MK',
            'ML' => 'ML',
            'MM' => 'MM',
            'MN' => 'MN',
            'MO' => 'MO',
            'MP' => 'MP',
            'MQ' => 'MQ',
            'MR' => 'MR',
            'MS' => 'MS',
            'MT' => 'MT',
            'MU' => 'MU',
            'MV' => 'MV',
            'MW' => 'MW',
            'MX' => 'MX',
            'MY' => 'MY',
            'MZ' => 'MZ',
            'NA' => 'NA',
            'NC' => 'NC',
            'NE' => 'NE',
            'NF' => 'NF',
            'NG' => 'NG',
            'NI' => 'NI',
            'NL' => 'NL',
            'NO' => 'NO',
            'NP' => 'NP',
            'NR' => 'NR',
            'NU' => 'NU',
            'NZ' => 'NZ',
            'OM' => 'OM',
            'PA' => 'PA',
            'PE' => 'PE',
            'PF' => 'PF',
            'PG' => 'PG',
            'PH' => 'PH',
            'PK' => 'PK',
            'PL' => 'PL',
            'PM' => 'PM',
            'PN' => 'PN',
            'PR' => 'PR',
            'PS' => 'PS',
            'PT' => 'PT',
            'PW' => 'PW',
            'PY' => 'PY',
            'QA' => 'QA',
            'RE' => 'RE',
            'RO' => 'RO',
            'RS' => 'RS',
            'RU' => 'RU',
            'RW' => 'RW',
            'SA' => 'SA',
            'SB' => 'SB',
            'SC' => 'SC',
            'SD' => 'SD',
            'SE' => 'SE',
            'SG' => 'SG',
            'SH' => 'SH',
            'SI' => 'SI',
            'SJ' => 'SJ',
            'SK' => 'SK',
            'SL' => 'SL',
            'SM' => 'SM',
            'SN' => 'SN',
            'SO' => 'SO',
            'SR' => 'SR',
            'ST' => 'ST',
            'SV' => 'SV',
            'SY' => 'SY',
            'SZ' => 'SZ',
            'TC' => 'TC',
            'TD' => 'TD',
            'TF' => 'TF',
            'TG' => 'TG',
            'TH' => 'TH',
            'TJ' => 'TJ',
            'TK' => 'TK',
            'TL' => 'TL',
            'TM' => 'TM',
            'TN' => 'TN',
            'TO' => 'TO',
            'TR' => 'TR',
            'TT' => 'TT',
            'TV' => 'TV',
            'TW' => 'TW',
            'TZ' => 'TZ',
            'UA' => 'UA',
            'UG' => 'UG',
            'UM' => 'UM',
            'US' => 'US',
            'UY' => 'UY',
            'UZ' => 'UZ',
            'VA' => 'VA',
            'VC' => 'VC',
            'VE' => 'VE',
            'VG' => 'VG',
            'VI' => 'VI',
            'VN' => 'VN',
            'VU' => 'VU',
            'WF' => 'WF',
            'WS' => 'WS',
            'YE' => 'YE',
            'YT' => 'YT',
            'ZA' => 'ZA',
            'ZM' => 'ZM',
            'ZW' => 'ZW',
          ),
          'name_format' => 'name_line_organisation',
        ),
        'type' => 'addressfield_standard',
        'weight' => '15',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Affiliations');
  t('Associated User');
  t('Awards');
  t('Biography');
  t('CV Attachment');
  t('Contact Note');
  t('Current Research');
  t('Curriculum Vitae');
  t('Description');
  t('Email Address');
  t('Fax Number');
  t('First Name');
  t('If this profile is an organization, enter the name of that organization here. This can take the place of First and Last names to serve as the full name of this profile.');
  t('Image');
  t('Last Name');
  t('Memberships');
  t('Middle Name or Initial');
  t('Name Prefix');
  t('Name Suffix');
  t('Organization');
  t('Phone Number');
  t('Postal Address');
  t('Research Interests');
  t('The user account that this profile is attached to.');
  t('Titles');
  t('Visitor Address');

  return $fields;
}
