<?php
/**
 * @file
 * gsb_feature_seed_research_library_display.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_seed_research_library_display_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|seed_research_project|compact';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'seed_research_project';
  $ds_fieldsetting->view_mode = 'compact';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
  );
  $export['node|seed_research_project|compact'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|seed_research_project|expanded';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'seed_research_project';
  $ds_fieldsetting->view_mode = 'expanded';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'field_month' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Award Date – ',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|seed_research_project|expanded'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_seed_research_library_display_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|seed_research_project|compact';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'seed_research_project';
  $ds_layout->view_mode = 'compact';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
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
  $export['node|seed_research_project|compact'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|seed_research_project|expanded';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'seed_research_project';
  $ds_layout->view_mode = 'expanded';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_srl_principal_investigator',
        2 => 'field_month',
        3 => 'field_year',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_srl_principal_investigator' => 'ds_content',
      'field_month' => 'ds_content',
      'field_year' => 'ds_content',
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
  $export['node|seed_research_project|expanded'] = $ds_layout;

  return $export;
}
