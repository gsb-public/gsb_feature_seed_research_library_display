<?php
/**
 * @file
 * gsb_feature_seed_research_library_display.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function gsb_feature_seed_research_library_display_defaultconfig_features() {
  return array(
    'gsb_feature_seed_research_library_display' => array(
      'ds_field_settings_info' => 'ds_field_settings_info',
      'ds_layout_settings_info' => 'ds_layout_settings_info',
      'ds_view_modes_info' => 'ds_view_modes_info',
      'field_default_fields' => 'field_default_fields',
    ),
  );
}

/**
 * Implements hook_defaultconfig_ds_field_settings_info().
 */
function gsb_feature_seed_research_library_display_defaultconfig_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_research_results|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_research_results';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_file_single_public' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-name-field-file-single-public',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_research_results|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|seed_research_project|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'seed_research_project';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_abstract' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h3',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-abstract',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_award_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Award Type - ',
          'lb-el' => 'h5',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-award-type',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_month' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Award Date - ',
          'lb-el' => 'h5',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-month',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_research_locations' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Research Location - ',
          'lb-el' => 'h5',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-research-locations',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_research_results' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h3',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-research-results',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_srl_co_investigators' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h4',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-srl-co-investigators',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_srl_principal_investigator' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h4',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-srl-principal-investigator',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_status' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Status - ',
          'lb-el' => 'h5',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-status',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|seed_research_project|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|seed_research_project|seed_research_project';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'seed_research_project';
  $ds_fieldsetting->view_mode = 'seed_research_project';
  $ds_fieldsetting->settings = array(
    'field_month' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Award Date',
        ),
      ),
    ),
    'field_srl_principal_investigator' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|seed_research_project|seed_research_project'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_defaultconfig_ds_layout_settings_info().
 */
function gsb_feature_seed_research_library_display_defaultconfig_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_research_results|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_research_results';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_link_single',
        1 => 'field_file_single_public',
      ),
    ),
    'fields' => array(
      'field_link_single' => 'ds_content',
      'field_file_single_public' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['field_collection_item|field_research_results|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_srl_co_investigators|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_srl_co_investigators';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_person_fac_single_ref',
        1 => 'field_other_name',
        2 => 'field_school_department',
        3 => 'field_link_single',
      ),
    ),
    'fields' => array(
      'field_person_fac_single_ref' => 'ds_content',
      'field_other_name' => 'ds_content',
      'field_school_department' => 'ds_content',
      'field_link_single' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['field_collection_item|field_srl_co_investigators|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_srl_principal_investigator|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_srl_principal_investigator';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_person_fac_single_ref',
        1 => 'field_other_name',
        2 => 'field_school_department',
        3 => 'field_link_single',
      ),
    ),
    'fields' => array(
      'field_person_fac_single_ref' => 'ds_content',
      'field_other_name' => 'ds_content',
      'field_school_department' => 'ds_content',
      'field_link_single' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['field_collection_item|field_srl_principal_investigator|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|seed_research_project|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'seed_research_project';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_srl_principal_investigator',
        1 => 'field_srl_co_investigators',
        2 => 'field_research_locations',
        3 => 'field_month',
        4 => 'field_year',
        5 => 'field_award_type',
        6 => 'field_status',
        7 => 'field_abstract',
        8 => 'field_research_results',
      ),
    ),
    'fields' => array(
      'field_srl_principal_investigator' => 'ds_content',
      'field_srl_co_investigators' => 'ds_content',
      'field_research_locations' => 'ds_content',
      'field_month' => 'ds_content',
      'field_year' => 'ds_content',
      'field_award_type' => 'ds_content',
      'field_status' => 'ds_content',
      'field_abstract' => 'ds_content',
      'field_research_results' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|seed_research_project|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|seed_research_project|seed_research_project';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'seed_research_project';
  $ds_layout->view_mode = 'seed_research_project';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_srl_principal_investigator',
        1 => 'field_srl_co_investigators',
        2 => 'field_research_locations',
        3 => 'field_month',
        4 => 'field_year',
        5 => 'field_award_type',
        6 => 'field_status',
        7 => 'field_abstract',
        8 => 'field_research_results',
      ),
    ),
    'fields' => array(
      'field_srl_principal_investigator' => 'ds_content',
      'field_srl_co_investigators' => 'ds_content',
      'field_research_locations' => 'ds_content',
      'field_month' => 'ds_content',
      'field_year' => 'ds_content',
      'field_award_type' => 'ds_content',
      'field_status' => 'ds_content',
      'field_abstract' => 'ds_content',
      'field_research_results' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|seed_research_project|seed_research_project'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_defaultconfig_ds_view_modes_info().
 */
function gsb_feature_seed_research_library_display_defaultconfig_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'seed_research_project';
  $ds_view_mode->label = 'Seed Research Project';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['seed_research_project'] = $ds_view_mode;

  return $export;
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function gsb_feature_seed_research_library_display_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'node-seed_research_project-field_abstract'.
  $fields['node-seed_research_project-field_abstract'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_abstract',
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
      'locked' => 0,
      'module' => 'text',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'seed_research_project',
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 7,
        ),
        'seed_research_project' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
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
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_abstract',
      'label' => 'Abstract',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'act' => 0,
            'full_html' => 0,
            'gsb_html_text' => 0,
            'gsb_wysiwyg_text' => 0,
            'image_resource_caption' => 0,
            'image_text_equivalent' => 0,
            'markdown' => 'markdown',
            'markdown_lite_minus_resources' => 0,
            'paragraphed_plain_text' => 0,
            'plain_text' => 0,
            'sidebar' => 0,
            'slideshow' => 0,
          ),
          'allowed_formats_toggle' => 1,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'act' => array(
                'weight' => 0,
              ),
              'full_html' => array(
                'weight' => 1,
              ),
              'gsb_html_text' => array(
                'weight' => -9,
              ),
              'gsb_wysiwyg_text' => array(
                'weight' => -10,
              ),
              'image_resource_caption' => array(
                'weight' => 0,
              ),
              'image_text_equivalent' => array(
                'weight' => 0,
              ),
              'markdown' => array(
                'weight' => 0,
              ),
              'markdown_lite_minus_resources' => array(
                'weight' => 0,
              ),
              'paragraphed_plain_text' => array(
                'weight' => 0,
              ),
              'plain_text' => array(
                'weight' => 10,
              ),
              'sidebar' => array(
                'weight' => 0,
              ),
              'slideshow' => array(
                'weight' => 0,
              ),
            ),
          ),
        ),
        'custom_add_another' => '',
        'custom_remove' => '',
        'linkit' => array(
          'enable' => 0,
          'insert_plugin' => '',
        ),
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'maxlength_js' => '',
          'maxlength_js_enforce' => 0,
          'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
          'maxlength_js_truncate_html' => 0,
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 8,
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-seed_research_project-field_award_type'.
  $fields['node-seed_research_project-field_award_type'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_award_type',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'seed_award_type',
            'parent' => 0,
          ),
        ),
      ),
      'translatable' => 0,
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'seed_research_project',
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => 5,
        ),
        'seed_research_project' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 5,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_award_type',
      'label' => 'Award Type',
      'required' => 1,
      'settings' => array(
        'custom_add_another' => '',
        'custom_remove' => '',
        'use_hierarchical_select_lite' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_hs',
        'weight' => 6,
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-seed_research_project-field_month'.
  $fields['node-seed_research_project-field_month'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_month',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'January',
          1 => 'February',
          2 => 'March',
          3 => 'April',
          4 => 'May',
          5 => 'June',
          6 => 'July',
          7 => 'August',
          8 => 'September',
          9 => 'October',
          10 => 'November',
          11 => 'December',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 0,
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'seed_research_project',
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'list_default',
          'weight' => 3,
        ),
        'seed_research_project' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'list_default',
          'weight' => 3,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_month',
      'label' => 'Month',
      'required' => 1,
      'settings' => array(
        'custom_add_another' => '',
        'custom_remove' => '',
        'use_hierarchical_select_lite' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 56,
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-seed_research_project-field_research_locations'.
  $fields['node-seed_research_project-field_research_locations'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_research_locations',
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
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => 0,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'seed_research_project',
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 2,
        ),
        'seed_research_project' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
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
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_research_locations',
      'label' => 'Research Location(s)',
      'required' => 1,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'act' => 'act',
            'full_html' => 'full_html',
            'gsb_html_text' => 'gsb_html_text',
            'gsb_wysiwyg_text' => 'gsb_wysiwyg_text',
            'image_resource_caption' => 'image_resource_caption',
            'image_text_equivalent' => 'image_text_equivalent',
            'markdown' => 'markdown',
            'markdown_lite_minus_resources' => 'markdown_lite_minus_resources',
            'paragraphed_plain_text' => 'paragraphed_plain_text',
            'plain_text' => 'plain_text',
            'sidebar' => 'sidebar',
            'slideshow' => 'slideshow',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'act' => array(
                'weight' => 0,
              ),
              'full_html' => array(
                'weight' => 1,
              ),
              'gsb_html_text' => array(
                'weight' => -9,
              ),
              'gsb_wysiwyg_text' => array(
                'weight' => -10,
              ),
              'image_resource_caption' => array(
                'weight' => 0,
              ),
              'image_text_equivalent' => array(
                'weight' => 0,
              ),
              'markdown' => array(
                'weight' => 0,
              ),
              'markdown_lite_minus_resources' => array(
                'weight' => 0,
              ),
              'paragraphed_plain_text' => array(
                'weight' => 0,
              ),
              'plain_text' => array(
                'weight' => 10,
              ),
              'sidebar' => array(
                'weight' => 0,
              ),
              'slideshow' => array(
                'weight' => 0,
              ),
            ),
          ),
        ),
        'custom_add_another' => '',
        'custom_remove' => '',
        'linkit' => array(
          'enable' => 0,
          'insert_plugin' => '',
        ),
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'maxlength_js' => 0,
          'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 4,
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-seed_research_project-field_research_results'.
  $fields['node-seed_research_project-field_research_results'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_research_results',
      'foreign keys' => array(),
      'indexes' => array(
        'revision_id' => array(
          0 => 'revision_id',
        ),
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'field_collection',
      'settings' => array(
        'hide_blank_items' => 1,
        'hide_initial_item' => FALSE,
        'path' => '',
      ),
      'translatable' => 0,
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'seed_research_project',
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'conditions' => array(),
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_fields',
          'weight' => 8,
        ),
        'seed_research_project' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'conditions' => array(),
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => 8,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_research_results',
      'label' => 'Research Results',
      'required' => 0,
      'settings' => array(
        'custom_add_another' => '',
        'custom_remove' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => 9,
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-seed_research_project-field_srl_co_investigators'.
  $fields['node-seed_research_project-field_srl_co_investigators'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_srl_co_investigators',
      'foreign keys' => array(),
      'indexes' => array(
        'revision_id' => array(
          0 => 'revision_id',
        ),
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'field_collection',
      'settings' => array(
        'hide_blank_items' => 1,
        'hide_initial_item' => FALSE,
        'path' => '',
      ),
      'translatable' => 0,
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'seed_research_project',
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'conditions' => array(),
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_fields',
          'weight' => 1,
        ),
        'seed_research_project' => array(
          'label' => 'inline',
          'module' => 'field_collection',
          'settings' => array(
            'conditions' => array(),
            'view_mode' => 'teaser',
          ),
          'type' => 'field_collection_fields',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_srl_co_investigators',
      'label' => 'Co-Investigators',
      'required' => 0,
      'settings' => array(
        'custom_add_another' => '',
        'custom_remove' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => 3,
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-seed_research_project-field_srl_principal_investigator'.
  $fields['node-seed_research_project-field_srl_principal_investigator'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_srl_principal_investigator',
      'foreign keys' => array(),
      'indexes' => array(
        'revision_id' => array(
          0 => 'revision_id',
        ),
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'field_collection',
      'settings' => array(
        'hide_blank_items' => 1,
        'hide_initial_item' => FALSE,
        'path' => '',
      ),
      'translatable' => 0,
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'seed_research_project',
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'conditions' => array(),
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_fields',
          'weight' => 0,
        ),
        'seed_research_project' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'conditions' => array(),
            'view_mode' => 'teaser',
          ),
          'type' => 'field_collection_fields',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => 'theme_field',
      'entity_type' => 'node',
      'field_name' => 'field_srl_principal_investigator',
      'label' => 'Principal Investigator',
      'required' => 0,
      'settings' => array(
        'custom_add_another' => '',
        'custom_remove' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => 2,
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-seed_research_project-field_status'.
  $fields['node-seed_research_project-field_status'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_status',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'seed_status',
            'parent' => 0,
          ),
        ),
      ),
      'translatable' => 0,
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'seed_research_project',
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => 6,
        ),
        'seed_research_project' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 6,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_status',
      'label' => 'Status',
      'required' => 1,
      'settings' => array(
        'checkall' => array(
          'checkall' => 0,
          'checkall-check-all' => 1,
          'checkall-toggle' => 1,
          'checkall-uncheck-all' => 1,
        ),
        'custom_add_another' => '',
        'custom_remove' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'checkall' => FALSE,
        ),
        'type' => 'options_buttons',
        'weight' => 7,
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-seed_research_project-field_year'.
  $fields['node-seed_research_project-field_year'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_year',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'date',
      'settings' => array(
        'cache_count' => 4,
        'cache_enabled' => 0,
        'granularity' => array(
          'day' => 0,
          'hour' => 0,
          'minute' => 0,
          'month' => 0,
          'second' => 0,
          'year' => 'year',
        ),
        'repeat' => 0,
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => 0,
      'type' => 'datetime',
    ),
    'field_instance' => array(
      'bundle' => 'seed_research_project',
      'custom_add_another' => '',
      'custom_remove' => '',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'date',
          'settings' => array(
            'conditions' => array(),
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_remaining_days' => FALSE,
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => 4,
        ),
        'seed_research_project' => array(
          'label' => 'hidden',
          'module' => 'date',
          'settings' => array(
            'conditions' => array(),
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_remaining_days' => FALSE,
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => 4,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_year',
      'label' => 'Year',
      'required' => 1,
      'settings' => array(
        'custom_add_another' => '',
        'custom_remove' => '',
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'display_all_day' => 0,
          'increment' => 15,
          'input_format' => 'M j Y - g:i:sa',
          'input_format_custom' => '',
          'label_position' => 'above',
          'no_fieldset' => 0,
          'repeat_collapsed' => 0,
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_text',
        'weight' => 57,
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Abstract');
  t('Award Type');
  t('Co-Investigators');
  t('Month');
  t('Principal Investigator');
  t('Research Location(s)');
  t('Research Results');
  t('Status');
  t('Year');

  return $fields;
}
