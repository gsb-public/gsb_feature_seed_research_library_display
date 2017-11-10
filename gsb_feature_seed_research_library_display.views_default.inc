<?php
/**
 * @file
 * gsb_feature_seed_research_library_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_seed_research_library_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'seed_research_filters';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Seed Research Filters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'content-pane-listing';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 1,
      'secondary_label' => 'Narrow your results',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_search_field_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_status_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_award_type_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'gsb_wysiwyg_text';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Show more';
  $handler->display->display_options['pager']['options']['use_go_to_top_link'] = 1;
  $handler->display->display_options['pager']['options']['use_go_to_top_text'] = 'Back to the Top';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, we could not find any projects that matched your search. Please adjust the filters for the search.';
  $handler->display->display_options['empty']['area']['format'] = 'gsb_wysiwyg_text';
  /* Relationship: Content: Principal Investigator (field_srl_principal_investigator) */
  $handler->display->display_options['relationships']['field_srl_principal_investigator_value']['id'] = 'field_srl_principal_investigator_value';
  $handler->display->display_options['relationships']['field_srl_principal_investigator_value']['table'] = 'field_data_field_srl_principal_investigator';
  $handler->display->display_options['relationships']['field_srl_principal_investigator_value']['field'] = 'field_srl_principal_investigator_value';
  $handler->display->display_options['relationships']['field_srl_principal_investigator_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Name */
  $handler->display->display_options['fields']['field_other_name']['id'] = 'field_other_name';
  $handler->display->display_options['fields']['field_other_name']['table'] = 'field_data_field_other_name';
  $handler->display->display_options['fields']['field_other_name']['field'] = 'field_other_name';
  $handler->display->display_options['fields']['field_other_name']['relationship'] = 'field_srl_principal_investigator_value';
  $handler->display->display_options['fields']['field_other_name']['label'] = '';
  $handler->display->display_options['fields']['field_other_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_other_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Field collection item: School or Department */
  $handler->display->display_options['fields']['field_school_department']['id'] = 'field_school_department';
  $handler->display->display_options['fields']['field_school_department']['table'] = 'field_data_field_school_department';
  $handler->display->display_options['fields']['field_school_department']['field'] = 'field_school_department';
  $handler->display->display_options['fields']['field_school_department']['relationship'] = 'field_srl_principal_investigator_value';
  $handler->display->display_options['fields']['field_school_department']['label'] = '';
  $handler->display->display_options['fields']['field_school_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_school_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_school_department']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_school_department']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_school_department']['delta_offset'] = '0';
  /* Field: Content: Research Location(s) */
  $handler->display->display_options['fields']['field_research_locations']['id'] = 'field_research_locations';
  $handler->display->display_options['fields']['field_research_locations']['table'] = 'field_data_field_research_locations';
  $handler->display->display_options['fields']['field_research_locations']['field'] = 'field_research_locations';
  $handler->display->display_options['fields']['field_research_locations']['label'] = '';
  $handler->display->display_options['fields']['field_research_locations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_research_locations']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_research_locations']['alter']['text'] = '<span class="label-inline">Research Location – </span> [field_research_locations]<br>';
  $handler->display->display_options['fields']['field_research_locations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_research_locations']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_research_locations']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_research_locations']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_research_locations']['delta_offset'] = '0';
  /* Field: Content: Month */
  $handler->display->display_options['fields']['field_month']['id'] = 'field_month';
  $handler->display->display_options['fields']['field_month']['table'] = 'field_data_field_month';
  $handler->display->display_options['fields']['field_month']['field'] = 'field_month';
  $handler->display->display_options['fields']['field_month']['label'] = '';
  $handler->display->display_options['fields']['field_month']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_month']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Field: Graduation Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['label'] = '';
  $handler->display->display_options['fields']['field_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2>[title]</h2>
<span class="label-inline">Principal Investigator – </span>[field_other_name]<br>
<span class="label-inline">School/Department – </span>[field_school_department]<br>
[field_research_locations]
<span class="label-inline">Award Date – </span>[field_month] [field_year]<br>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Graduation Year (field_year) */
  $handler->display->display_options['sorts']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['sorts']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['order'] = 'DESC';
  /* Sort criterion: Content: Month (field_month) */
  $handler->display->display_options['sorts']['field_month_value']['id'] = 'field_month_value';
  $handler->display->display_options['sorts']['field_month_value']['table'] = 'field_data_field_month';
  $handler->display->display_options['sorts']['field_month_value']['field'] = 'field_month_value';
  $handler->display->display_options['sorts']['field_month_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'seed_research_project' => 'seed_research_project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Award Type (field_award_type) */
  $handler->display->display_options['filters']['field_award_type_tid']['id'] = 'field_award_type_tid';
  $handler->display->display_options['filters']['field_award_type_tid']['table'] = 'field_data_field_award_type';
  $handler->display->display_options['filters']['field_award_type_tid']['field'] = 'field_award_type_tid';
  $handler->display->display_options['filters']['field_award_type_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_award_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_award_type_tid']['expose']['operator_id'] = 'field_award_type_tid_op';
  $handler->display->display_options['filters']['field_award_type_tid']['expose']['label'] = 'Award Type';
  $handler->display->display_options['filters']['field_award_type_tid']['expose']['operator'] = 'field_award_type_tid_op';
  $handler->display->display_options['filters']['field_award_type_tid']['expose']['identifier'] = 'field_award_type_tid';
  $handler->display->display_options['filters']['field_award_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_award_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    256 => 0,
    21 => 0,
    71 => 0,
    241 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    326 => 0,
    66 => 0,
    201 => 0,
    221 => 0,
    216 => 0,
    226 => 0,
    231 => 0,
    246 => 0,
    236 => 0,
    31 => 0,
    36 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
    206 => 0,
    211 => 0,
    251 => 0,
    261 => 0,
    266 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
    296 => 0,
    301 => 0,
    101 => 0,
  );
  $handler->display->display_options['filters']['field_award_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_award_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_award_type_tid']['vocabulary'] = 'seed_award_type';
  $handler->display->display_options['filters']['field_award_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator_id'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['identifier'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    256 => 0,
    21 => 0,
    71 => 0,
    241 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    326 => 0,
    66 => 0,
    201 => 0,
    221 => 0,
    216 => 0,
    226 => 0,
    231 => 0,
    246 => 0,
    236 => 0,
    31 => 0,
    36 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
    206 => 0,
    211 => 0,
    251 => 0,
    261 => 0,
    266 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
    296 => 0,
    301 => 0,
    101 => 0,
  );
  $handler->display->display_options['filters']['field_status_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'seed_status';
  $handler->display->display_options['filters']['field_status_tid']['error_message'] = FALSE;

  /* Display: Seed Research Filters */
  $handler = $view->new_display('panel_pane', 'Seed Research Filters', 'seed_research_filters_pane');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'content-pane-listing';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_award_type_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_status_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'gsb_wysiwyg_text';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Principal Investigator (field_srl_principal_investigator) */
  $handler->display->display_options['relationships']['field_srl_principal_investigator_value']['id'] = 'field_srl_principal_investigator_value';
  $handler->display->display_options['relationships']['field_srl_principal_investigator_value']['table'] = 'field_data_field_srl_principal_investigator';
  $handler->display->display_options['relationships']['field_srl_principal_investigator_value']['field'] = 'field_srl_principal_investigator_value';
  $handler->display->display_options['relationships']['field_srl_principal_investigator_value']['delta'] = '-1';
  $handler->display->display_options['pane_title'] = 'Seed Research: Multiple Criteria';
  $handler->display->display_options['pane_category']['name'] = 'Customizable Content Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['set_view_mode'] = 0;
  $handler->display->display_options['allow']['set_style_plugin'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'field_award_type_tid' => '',
      'field_status_tid' => '',
      'field_research_locations_value' => '',
      'field_school_department_tid' => '',
    ),
  );
  $export['seed_research_filters'] = $view;

  $view = new view();
  $view->name = 'seed_research_listing';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Seed Research Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 1,
      'secondary_label' => 'Narrow your results',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_search_field_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_status_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_award_type_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'gsb_wysiwyg_text';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Show more';
  $handler->display->display_options['pager']['options']['use_go_to_top_link'] = 1;
  $handler->display->display_options['pager']['options']['use_go_to_top_text'] = 'Back to the Top';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, we could not find any projects that matched your search. Please adjust the filters for the search.';
  $handler->display->display_options['empty']['area']['format'] = 'gsb_wysiwyg_text';
  /* Relationship: Content: Principal Investigator (field_srl_principal_investigator) */
  $handler->display->display_options['relationships']['field_srl_principal_investigator_value']['id'] = 'field_srl_principal_investigator_value';
  $handler->display->display_options['relationships']['field_srl_principal_investigator_value']['table'] = 'field_data_field_srl_principal_investigator';
  $handler->display->display_options['relationships']['field_srl_principal_investigator_value']['field'] = 'field_srl_principal_investigator_value';
  $handler->display->display_options['relationships']['field_srl_principal_investigator_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_status']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Field collection item: School or Department */
  $handler->display->display_options['fields']['field_school_department']['id'] = 'field_school_department';
  $handler->display->display_options['fields']['field_school_department']['table'] = 'field_data_field_school_department';
  $handler->display->display_options['fields']['field_school_department']['field'] = 'field_school_department';
  $handler->display->display_options['fields']['field_school_department']['relationship'] = 'field_srl_principal_investigator_value';
  $handler->display->display_options['fields']['field_school_department']['label'] = '';
  $handler->display->display_options['fields']['field_school_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_school_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_school_department']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_school_department']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_school_department']['delta_offset'] = '0';
  /* Field: Content: Award Type */
  $handler->display->display_options['fields']['field_award_type']['id'] = 'field_award_type';
  $handler->display->display_options['fields']['field_award_type']['table'] = 'field_data_field_award_type';
  $handler->display->display_options['fields']['field_award_type']['field'] = 'field_award_type';
  $handler->display->display_options['fields']['field_award_type']['label'] = '';
  $handler->display->display_options['fields']['field_award_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_award_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_award_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_award_type']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_award_type']['delta_offset'] = '0';
  /* Field: Content: Month */
  $handler->display->display_options['fields']['field_month']['id'] = 'field_month';
  $handler->display->display_options['fields']['field_month']['table'] = 'field_data_field_month';
  $handler->display->display_options['fields']['field_month']['field'] = 'field_month';
  $handler->display->display_options['fields']['field_month']['label'] = '';
  $handler->display->display_options['fields']['field_month']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_month']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Field: Graduation Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['label'] = '';
  $handler->display->display_options['fields']['field_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2>[title]</h2>
<span class="label-inline">School/Department – </span>[field_school_department]<br>
<span class="label-inline">Project Status – </span>[field_status]<br>
<span class="label-inline">Award Type – </span>[field_award_type]<br>
<span class="label-inline">Award Date – </span>[field_month] [field_year]<br>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Graduation Year (field_year) */
  $handler->display->display_options['sorts']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['sorts']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['order'] = 'DESC';
  /* Sort criterion: Content: Month (field_month) */
  $handler->display->display_options['sorts']['field_month_value']['id'] = 'field_month_value';
  $handler->display->display_options['sorts']['field_month_value']['table'] = 'field_data_field_month';
  $handler->display->display_options['sorts']['field_month_value']['field'] = 'field_month_value';
  $handler->display->display_options['sorts']['field_month_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'seed_research_project' => 'seed_research_project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Seed Research List */
  $handler = $view->new_display('panel_pane', 'Seed Research List', 'seed_research_pane');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'seed_research_project' => 'seed_research_project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Search field (field_search_field) */
  $handler->display->display_options['filters']['field_search_field_value']['id'] = 'field_search_field_value';
  $handler->display->display_options['filters']['field_search_field_value']['table'] = 'field_data_field_search_field';
  $handler->display->display_options['filters']['field_search_field_value']['field'] = 'field_search_field_value';
  $handler->display->display_options['filters']['field_search_field_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_search_field_value']['group'] = 1;
  $handler->display->display_options['filters']['field_search_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_search_field_value']['expose']['operator_id'] = 'field_search_field_value_op';
  $handler->display->display_options['filters']['field_search_field_value']['expose']['operator'] = 'field_search_field_value_op';
  $handler->display->display_options['filters']['field_search_field_value']['expose']['identifier'] = 'field_search_field_value';
  $handler->display->display_options['filters']['field_search_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    256 => 0,
    21 => 0,
    71 => 0,
    241 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    201 => 0,
    221 => 0,
    216 => 0,
    226 => 0,
    231 => 0,
    246 => 0,
    236 => 0,
    31 => 0,
    36 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
    206 => 0,
    211 => 0,
    251 => 0,
    261 => 0,
    266 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
    296 => 0,
    301 => 0,
    101 => 0,
    326 => 0,
  );
  $handler->display->display_options['filters']['field_search_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_search_field_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_search_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_search_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_search_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator_id'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['identifier'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    256 => 0,
    21 => 0,
    71 => 0,
    241 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    326 => 0,
    66 => 0,
    201 => 0,
    221 => 0,
    216 => 0,
    226 => 0,
    231 => 0,
    246 => 0,
    236 => 0,
    31 => 0,
    36 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
    206 => 0,
    211 => 0,
    251 => 0,
    261 => 0,
    266 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
    296 => 0,
    301 => 0,
    101 => 0,
  );
  $handler->display->display_options['filters']['field_status_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'seed_status';
  $handler->display->display_options['filters']['field_status_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Award Type (field_award_type) */
  $handler->display->display_options['filters']['field_award_type_tid']['id'] = 'field_award_type_tid';
  $handler->display->display_options['filters']['field_award_type_tid']['table'] = 'field_data_field_award_type';
  $handler->display->display_options['filters']['field_award_type_tid']['field'] = 'field_award_type_tid';
  $handler->display->display_options['filters']['field_award_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_award_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_award_type_tid']['expose']['operator_id'] = 'field_award_type_tid_op';
  $handler->display->display_options['filters']['field_award_type_tid']['expose']['label'] = 'Award Type';
  $handler->display->display_options['filters']['field_award_type_tid']['expose']['operator'] = 'field_award_type_tid_op';
  $handler->display->display_options['filters']['field_award_type_tid']['expose']['identifier'] = 'field_award_type_tid';
  $handler->display->display_options['filters']['field_award_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_award_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    256 => 0,
    21 => 0,
    71 => 0,
    241 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    326 => 0,
    66 => 0,
    201 => 0,
    221 => 0,
    216 => 0,
    226 => 0,
    231 => 0,
    246 => 0,
    236 => 0,
    31 => 0,
    36 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
    206 => 0,
    211 => 0,
    251 => 0,
    261 => 0,
    266 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
    296 => 0,
    301 => 0,
    101 => 0,
  );
  $handler->display->display_options['filters']['field_award_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_award_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_award_type_tid']['vocabulary'] = 'seed_award_type';
  $handler->display->display_options['filters']['field_award_type_tid']['error_message'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Seed Research';
  $handler->display->display_options['pane_category']['name'] = 'Non-customizable Content Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['seed_research_listing'] = $view;

  return $export;
}
