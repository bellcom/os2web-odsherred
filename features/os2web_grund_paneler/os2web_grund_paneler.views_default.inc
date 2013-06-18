<?php
/**
 * @file
 * os2web_grund_paneler.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_grund_paneler_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'aktuelt';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Aktuelt';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['class'] = 'front-background nyheder-forside';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Standard',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'tid_2' => 0,
    'tid_1' => 0,
    'tid' => 0,
    'title' => 0,
    'field_resume_long' => 0,
    'field_lead_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'tid' => 'tid',
    'tid_2' => 0,
    'tid_1' => 0,
    'title' => 0,
    'field_resume_long' => 0,
    'field_lead_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_hover'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollLeft';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['label'] = '';
  $handler->display->display_options['fields']['field_site_structure']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_site_structure']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_lead_image']['element_wrapper_class'] = 'background-images';
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Sorteringskriterie: Indhold: Klæbrig */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_site_structure_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate']['fail'] = 'ignore';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Aktuelt - Sektionsforside */
  $handler = $view->new_display('panel_pane', 'Aktuelt - Sektionsforside', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['pane_category']['name'] = 'CMS Theme';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Aktuelt - Portalforside */
  $handler = $view->new_display('panel_pane', 'Aktuelt - Portalforside', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filterkriterie: Indhold: Forfrem til (field_promoteto) */
  $handler->display->display_options['filters']['field_promoteto_tid']['id'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['filters']['field_promoteto_tid']['field'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['value'] = array(
    12265 => '12265',
  );
  $handler->display->display_options['filters']['field_promoteto_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_promoteto_tid']['vocabulary'] = 'forfrem_til';
  $handler->display->display_options['pane_category']['name'] = 'CMS Theme';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Aktuelt - forside slideshow */
  $handler = $view->new_display('panel_pane', 'Aktuelt - forside slideshow', 'panel_pane_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['relationships']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['relationships']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['relationships']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  /* Forbindelse: Ord i ordforråd: Overordnet term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'field_site_structure_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['fields']['tid_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_2']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_2']['relationship'] = 'field_site_structure_tid';
  $handler->display->display_options['fields']['tid_2']['label'] = '';
  $handler->display->display_options['fields']['tid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_2']['separator'] = '';
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['empty'] = '[tid_2]';
  $handler->display->display_options['fields']['tid_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['text'] = '<i class="bullet term-[tid_1]"></i>';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class="text-container">[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'term-[tid_1]';
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['text'] = '<span class="text-container">[field_resume_long-value]</span>';
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_wrapper_class'] = 'term-[tid_1]';
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_lead_image']['element_wrapper_class'] = 'background-images';
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Baggrundsbillede */
  $handler->display->display_options['fields']['field_side_baggrungsbillede']['id'] = 'field_side_baggrungsbillede';
  $handler->display->display_options['fields']['field_side_baggrungsbillede']['table'] = 'field_data_field_side_baggrungsbillede';
  $handler->display->display_options['fields']['field_side_baggrungsbillede']['field'] = 'field_side_baggrungsbillede';
  $handler->display->display_options['fields']['field_side_baggrungsbillede']['label'] = '';
  $handler->display->display_options['fields']['field_side_baggrungsbillede']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_side_baggrungsbillede']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_side_baggrungsbillede']['element_wrapper_class'] = 'background-images';
  $handler->display->display_options['fields']['field_side_baggrungsbillede']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_side_baggrungsbillede']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_side_baggrungsbillede']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_side_baggrungsbillede']['settings'] = array(
    'image_style' => 'fullscreen',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['value'] = array(
    25769 => '25769',
  );
  $handler->display->display_options['filters']['field_newstype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid']['vocabulary'] = 'nyhedstype';
  $handler->display->display_options['filters']['field_newstype_tid']['hierarchy'] = 1;
  /* Filterkriterie: Indhold: Baggrundsbillede (field_side_baggrungsbillede:alt) */
  $handler->display->display_options['filters']['field_side_baggrungsbillede_alt']['id'] = 'field_side_baggrungsbillede_alt';
  $handler->display->display_options['filters']['field_side_baggrungsbillede_alt']['table'] = 'field_data_field_side_baggrungsbillede';
  $handler->display->display_options['filters']['field_side_baggrungsbillede_alt']['field'] = 'field_side_baggrungsbillede_alt';
  $handler->display->display_options['filters']['field_side_baggrungsbillede_alt']['operator'] = 'not empty';

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Forside - Portalnyhed - 1 */
  $handler = $view->new_display('panel_pane', 'Forside - Portalnyhed - 1', 'panel_pane_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_lead_image' => 'field_lead_image',
    'title' => 'title',
    'field_site_structure' => 'field_site_structure',
    'field_resume_long' => 'field_resume_long',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_lead_image']['element_wrapper_class'] = 'billede';
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => '316_243',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Sti */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '/[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['label'] = '';
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_site_structure']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_site_structure']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['text'] = '<span class="title">[title]</span>
<span class="text">[field_resume_long]</span>';
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_resume_long']['element_class'] = 'overlay';
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_site_structure_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_site_structure_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['argument_input'] = array(
    'field_site_structure_tid' => array(
      'type' => 'user',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Portalkategori ID',
    ),
  );

  /* Display: Forside - Portalnyhed - 2-5 */
  $handler = $view->new_display('panel_pane', 'Forside - Portalnyhed - 2-5', 'panel_pane_5');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['label'] = '';
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_site_structure']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_site_structure']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_lead_image']['element_wrapper_class'] = 'background-images';
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd. M o';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_site_structure_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_site_structure_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['argument_input'] = array(
    'field_site_structure_tid' => array(
      'type' => 'user',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Portalkategori ID',
    ),
  );

  /* Display: Aktuelt - breaking news */
  $handler = $view->new_display('panel_pane', 'Aktuelt - breaking news', 'panel_pane_6');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Breaking news';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_resume_long] ';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Forfrem til (field_promoteto) */
  $handler->display->display_options['filters']['field_promoteto_tid']['id'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['filters']['field_promoteto_tid']['field'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['value'] = array(
    0 => '25751',
  );
  $handler->display->display_options['filters']['field_promoteto_tid']['expose']['operator_id'] = 'field_promoteto_tid_op';
  $handler->display->display_options['filters']['field_promoteto_tid']['expose']['label'] = 'Forfrem til (field_promoteto)';
  $handler->display->display_options['filters']['field_promoteto_tid']['expose']['operator'] = 'field_promoteto_tid_op';
  $handler->display->display_options['filters']['field_promoteto_tid']['expose']['identifier'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_promoteto_tid']['vocabulary'] = 'forfrem_til';
  $handler->display->display_options['filters']['field_promoteto_tid']['error_message'] = FALSE;
  $translatables['aktuelt'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Alle'),
    t('Aktuelt - Sektionsforside'),
    t('CMS Theme'),
    t('Aktuelt - Portalforside'),
    t('Aktuelt - forside slideshow'),
    t('term fra field_site_structure'),
    t('Overordnet element'),
    t('.'),
    t('[tid_2]'),
    t('<i class="bullet term-[tid_1]"></i>'),
    t(','),
    t('<span class="text-container">[title]</span>'),
    t('<span class="text-container">[field_resume_long-value]</span>'),
    t('View panes'),
    t('Blok'),
    t('Forside - Portalnyhed - 1'),
    t('/[path]'),
    t('<span class="title">[title]</span>
<span class="text">[field_resume_long]</span>'),
    t('Forside - Portalnyhed - 2-5'),
    t('Aktuelt - breaking news'),
    t('Breaking news'),
    t('[field_resume_long] '),
    t('Forfrem til (field_promoteto)'),
  );
  $export['aktuelt'] = $view;

  $view = new view();
  $view->name = 'kle_lonks_boks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KLE Links boks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'KLE Links boks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Kontekstuelt filter: Indhold: Har taksonomiterm ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['tid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['exception']['title'] = '%1 %2 %3';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'error_log(print_r($argument, 1));';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'kle' => 'kle',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['arguments']['tid']['add_table'] = TRUE;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: KL Emneord (field_termref_kle) */
  $handler->display->display_options['filters']['field_termref_kle_tid']['id'] = 'field_termref_kle_tid';
  $handler->display->display_options['filters']['field_termref_kle_tid']['table'] = 'field_data_field_termref_kle';
  $handler->display->display_options['filters']['field_termref_kle_tid']['field'] = 'field_termref_kle_tid';
  $handler->display->display_options['filters']['field_termref_kle_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_termref_kle_tid']['value'] = '';
  $handler->display->display_options['filters']['field_termref_kle_tid']['vocabulary'] = 'kle';
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'baggrund' => 'baggrund',
    'rotating_image' => 'rotating_image',
    'borger_dk_permalink' => 'borger_dk_permalink',
    'borgerservices' => 'borgerservices',
    'bullet_point_attachment' => 'bullet_point_attachment',
    'right_column' => 'right_column',
    'kontaktblok' => 'kontaktblok',
    'media' => 'media',
    'panel' => 'panel',
    'selvbetjeningslinks' => 'selvbetjeningslinks',
    'spotbox' => 'spotbox',
    'tema' => 'tema',
  );
  /* Filterkriterie: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$node = node_load(arg(1));
$field = array_shift(array_shift(field_get_items(\'node\',$node,\'field_skjul_relaterede_links\')));
return $field==1?true:false;';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'kle_links_boks');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'node_edit_form.field-termref-kle',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Har taksonomiterm ID',
    ),
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:node.field_bpa_id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );
  $translatables['kle_lonks_boks'] = array(
    t('Master'),
    t('KLE Links boks'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Alle'),
    t('%1 %2 %3'),
    t('Block'),
    t('Content pane'),
    t('View panes'),
  );
  $export['kle_lonks_boks'] = $view;

  $view = new view();
  $view->name = 'megadd_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'MegaDD News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Aktuelle emner';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['label'] = '';
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_site_structure']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_site_structure_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_site_structure_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate_options']['type'] = 'convert';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filterkriterie: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['filters']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['filters']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['filters']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['filters']['field_site_structure_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_site_structure_tid']['value'] = '';
  $handler->display->display_options['filters']['field_site_structure_tid']['vocabulary'] = 'site_struktur';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'field_site_structure_tid' => array(
      'type' => 'user',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Portalkategori (field_site_structure)',
    ),
  );

  /* Display: 2 nyheder m billede */
  $handler = $view->new_display('panel_pane', '2 nyheder m billede', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => '80_60',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['label'] = '';
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_site_structure']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'j. M - Y';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filterkriterie: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['filters']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['filters']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['filters']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['filters']['field_site_structure_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_site_structure_tid']['value'] = '';
  $handler->display->display_options['filters']['field_site_structure_tid']['vocabulary'] = 'site_struktur';
  /* Filterkriterie: Indhold: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['value'] = array(
    0 => '25753',
  );
  $handler->display->display_options['filters']['field_newstype_tid']['vocabulary'] = 'nyhedstype';
  $handler->display->display_options['argument_input'] = array(
    'field_site_structure_tid' => array(
      'type' => 'user',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Portalkategori (field_site_structure)',
    ),
  );
  $translatables['megadd_news'] = array(
    t('Master'),
    t('Aktuelle emner'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Alle'),
    t('Block'),
    t('Content pane'),
    t('View panes'),
    t('2 nyheder m billede'),
  );
  $export['megadd_news'] = $view;

  $view = new view();
  $view->name = 'newslist';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Newslist';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '1';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'news-cycle-small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.y';
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long_1']['id'] = 'field_resume_long_1';
  $handler->display->display_options['fields']['field_resume_long_1']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long_1']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long_1']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['max_length'] = '88';
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long_1']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['text'] = '<div class="news-list-left">[field_lead_image]</div>
<div class="news-list-right"><p>[created]</p><p><a href="node/[nid]">[field_resume_long_1]</a></p></div>
<div class="news-list-next"></div>';
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_site_structure_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_site_structure_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="rss-ikon"><a href="/nyheder/feed/alle-nyheder" title="Abonnér på rss-feed" class="rssikon">RSS Feed</a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'news-cycle-small',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.y';
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long_1']['id'] = 'field_resume_long_1';
  $handler->display->display_options['fields']['field_resume_long_1']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long_1']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long_1']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long_1']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['text'] = '<div class="news-list-left"><a href="node/[nid]" title=[field_resume_long_1] ><img src=[field_lead_image] alt=[field_resume_long_1]/></a></div>
<div class="news-list-right"><p>[created]</p><p><a href="node/[nid]" title=[field_resume_long_1] >[field_resume_long_1]</a></p></div>
<div class="news-list-next"></div>';
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'news-cycle-small',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.y';
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long_1']['id'] = 'field_resume_long_1';
  $handler->display->display_options['fields']['field_resume_long_1']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long_1']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long_1']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['max_length'] = '88';
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long_1']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['text'] = '<div class="news-list-left"><a href="node/[nid]" title=[field_resume_long_1]><img src=[field_lead_image] alt=[field_resume_long_1]/></a></div>
<div class="news-list-right"><p>[created]</p><p><a href="node/[nid]" title=[field_resume_long_1]>[field_resume_long_1]</a></p></div>
<div class="news-list-next"></div>';
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Alle taksonomitermer */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'site_struktur' => 0,
    'acadremmcomittee' => 0,
    'egennavne_stednavne' => 0,
    'kle' => 0,
    'organisation' => 0,
    'politik' => 0,
    'portalkategori' => 0,
    'redaktoertags' => 0,
    'sidevisning' => 0,
  );
  $handler->display->display_options['path'] = 'news';

  /* Display: Newslist */
  $handler = $view->new_display('panel_pane', 'Newslist', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['text'] = '<img src=[field_lead_image]  alt=[field_resume_long_1]>';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'news-cycle-medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.y';
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long_1']['id'] = 'field_resume_long_1';
  $handler->display->display_options['fields']['field_resume_long_1']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long_1']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long_1']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['max_length'] = '88';
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long_1']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['text'] = '<div class="news-list-left"><a href="node/[nid]" title=[field_resume_long_1]><img src=[field_lead_image] alt=[field_resume_long_1] /></a></div>
<div class="news-list-right"><p>[created]</p><p><a href="node/[nid]" title=[field_resume_long_1]>[field_resume_long_1]</a></p></div>
<div class="news-list-next"></div>';
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Portalnews */
  $handler = $view->new_display('panel_pane', 'Portalnews', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'news-cycle-medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.y';
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long_1']['id'] = 'field_resume_long_1';
  $handler->display->display_options['fields']['field_resume_long_1']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long_1']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long_1']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['max_length'] = '88';
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long_1']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['text'] = '<div class="news-list-left"><a href="node/[nid]" title=[field_resume_long_1]><img src=[field_lead_image] alt=[field_resume_long_1] /></a></div>
<div class="news-list-right"><p>[created]</p><p><a href="node/[nid]" title=[field_resume_long_1]>[field_resume_long_1]</a></p></div>
<div class="news-list-next"></div>';
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Portalnews-big */
  $handler = $view->new_display('panel_pane', 'Portalnews-big', 'panel_pane_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'portalnews-big';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'news_big',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.y';
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long_1']['id'] = 'field_resume_long_1';
  $handler->display->display_options['fields']['field_resume_long_1']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long_1']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long_1']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['max_length'] = '88';
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long_1']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['text'] = '<div class="news-list-left"><a href="node/[nid]" title=[field_resume_long_1] ><img src=[field_lead_image] alt=[field_resume_long_1]/></a></div>
<div class="news-list-right"><p class="date">[created]</p><h3><a href="node/[nid]" title=[field_resume_long_1] >[field_resume_long_1]</a></h3></div>
<div class="news-list-next"></div>';
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Hovednyhed - Portalside */
  $handler = $view->new_display('panel_pane', 'Hovednyhed - Portalside', 'panel_pane_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'hovenyhed-portalside';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => '455_265',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.y';
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long_1']['id'] = 'field_resume_long_1';
  $handler->display->display_options['fields']['field_resume_long_1']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long_1']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long_1']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['path'] = 'node/[tnid] ';
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['max_length'] = '88';
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filterkriterie: Indhold: Forfrem til (field_promoteto) */
  $handler->display->display_options['filters']['field_promoteto_tid']['id'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['filters']['field_promoteto_tid']['field'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['value'] = array(
    12265 => '12265',
  );
  $handler->display->display_options['filters']['field_promoteto_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_promoteto_tid']['vocabulary'] = 'forfrem_til';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['newslist'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<div class="news-list-left">[field_lead_image]</div>
<div class="news-list-right"><p>[created]</p><p><a href="node/[nid]">[field_resume_long_1]</a></p></div>
<div class="news-list-next"></div>'),
    t('Alle'),
    t('Block'),
    t('<div class="rss-ikon"><a href="/nyheder/feed/alle-nyheder" title="Abonnér på rss-feed" class="rssikon">RSS Feed</a></div>'),
    t('<div class="news-list-left"><a href="node/[nid]" title=[field_resume_long_1] ><img src=[field_lead_image] alt=[field_resume_long_1]/></a></div>
<div class="news-list-right"><p>[created]</p><p><a href="node/[nid]" title=[field_resume_long_1] >[field_resume_long_1]</a></p></div>
<div class="news-list-next"></div>'),
    t('Page'),
    t('<div class="news-list-left"><a href="node/[nid]" title=[field_resume_long_1]><img src=[field_lead_image] alt=[field_resume_long_1]/></a></div>
<div class="news-list-right"><p>[created]</p><p><a href="node/[nid]" title=[field_resume_long_1]>[field_resume_long_1]</a></p></div>
<div class="news-list-next"></div>'),
    t('Newslist'),
    t('<img src=[field_lead_image]  alt=[field_resume_long_1]>'),
    t('<div class="news-list-left"><a href="node/[nid]" title=[field_resume_long_1]><img src=[field_lead_image] alt=[field_resume_long_1] /></a></div>
<div class="news-list-right"><p>[created]</p><p><a href="node/[nid]" title=[field_resume_long_1]>[field_resume_long_1]</a></p></div>
<div class="news-list-next"></div>'),
    t('View panes'),
    t('Portalnews'),
    t('Portalnews-big'),
    t('<div class="news-list-left"><a href="node/[nid]" title=[field_resume_long_1] ><img src=[field_lead_image] alt=[field_resume_long_1]/></a></div>
<div class="news-list-right"><p class="date">[created]</p><h3><a href="node/[nid]" title=[field_resume_long_1] >[field_resume_long_1]</a></h3></div>
<div class="news-list-next"></div>'),
    t('Hovednyhed - Portalside'),
    t('[title]'),
  );
  $export['newslist'] = $view;

  $view = new view();
  $view->name = 'redaktoer_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Redaktoer info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Redaktør info';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Forbindelse: Indhold: Forfatter */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Felt: Indhold: Forfatter uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Forfatter';
  /* Felt: Bruger: Full name */
  $handler->display->display_options['fields']['field_user_full_name']['id'] = 'field_user_full_name';
  $handler->display->display_options['fields']['field_user_full_name']['table'] = 'field_data_field_user_full_name';
  $handler->display->display_options['fields']['field_user_full_name']['field'] = 'field_user_full_name';
  $handler->display->display_options['fields']['field_user_full_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_full_name']['label'] = 'Fulde navn';
  $handler->display->display_options['fields']['field_user_full_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_full_name']['hide_empty'] = TRUE;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '/';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Felt: Bruger: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  $handler->display->display_options['fields']['mail']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  /* Felt: Bruger: Seneste login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'uid';
  $handler->display->display_options['fields']['login']['date_format'] = 'long';
  /* Felt: Bruger: Seneste tilgang */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Indløb / Udløb */
  $handler->display->display_options['fields']['field_rotate_publish']['id'] = 'field_rotate_publish';
  $handler->display->display_options['fields']['field_rotate_publish']['table'] = 'field_data_field_rotate_publish';
  $handler->display->display_options['fields']['field_rotate_publish']['field'] = 'field_rotate_publish';
  $handler->display->display_options['fields']['field_rotate_publish']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rotate_publish']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Publish link */
  $handler->display->display_options['fields']['publishcontent']['id'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['table'] = 'node';
  $handler->display->display_options['fields']['publishcontent']['field'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['label'] = '';
  $handler->display->display_options['fields']['publishcontent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['publishcontent']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['publishcontent']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['publishcontent']['unpublish'] = 'Denne side er synlig - Afpublicer';
  $handler->display->display_options['fields']['publishcontent']['publish'] = 'Denne side er ikke synlig - Pubicer nu';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['redaktoer_info'] = array(
    t('Master'),
    t('Redaktør info'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('forfatter'),
    t('Forfatter'),
    t('Fulde navn'),
    t('/'),
    t('E-mail'),
    t('Seneste login'),
    t('Seneste tilgang'),
    t('Indløb / Udløb'),
    t('Type'),
    t('Denne side er synlig - Afpublicer'),
    t('Denne side er ikke synlig - Pubicer nu'),
    t('Alle'),
    t('Block'),
  );
  $export['redaktoer_info'] = $view;

  $view = new view();
  $view->name = 'rotating_image_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Rotating image view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Rotating image view';
  $handler->display->display_options['css_class'] = 'custom-slideshow billedrotator ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Standard',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title_1' => 'title_1',
    'field_rotating_link' => 0,
    'title' => 0,
    'field_rotate_image' => 0,
    'body' => 0,
    'field_rotate_image_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_hover'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_rotating_link' => 0,
    'title' => 0,
    'field_rotate_image' => 0,
    'body' => 0,
    'field_rotate_image_1' => 0,
    'title_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['field_rotating_link']['id'] = 'field_rotating_link';
  $handler->display->display_options['fields']['field_rotating_link']['table'] = 'field_data_field_rotating_link';
  $handler->display->display_options['fields']['field_rotating_link']['field'] = 'field_rotating_link';
  $handler->display->display_options['fields']['field_rotating_link']['label'] = '';
  $handler->display->display_options['fields']['field_rotating_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rotating_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotating_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_rotating_link']['type'] = 'link_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_rotate_image']['id'] = 'field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image']['table'] = 'field_data_field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image']['field'] = 'field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image']['label'] = '';
  $handler->display->display_options['fields']['field_rotate_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rotate_image']['alter']['text'] = '<a href="[field_rotating_link]">[field_rotate_image]</a>';
  $handler->display->display_options['fields']['field_rotate_image']['alter']['path'] = '[field_rotating_link]';
  $handler->display->display_options['fields']['field_rotate_image']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_rotate_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotate_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rotate_image']['settings'] = array(
    'image_style' => 'rotating_image',
    'image_link' => '',
  );
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<a href="[field_rotating_link]"><span>[title]</span> [body]</a>';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '155';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['empty'] = '<a href="[field_rotating_link]"><span>[title]</span></a>';
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_rotate_image_1']['id'] = 'field_rotate_image_1';
  $handler->display->display_options['fields']['field_rotate_image_1']['table'] = 'field_data_field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image_1']['field'] = 'field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_rotate_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rotate_image_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rotate_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotate_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rotate_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_rotate_image_1']['settings'] = array(
    'image_style' => 'rotating_image_small',
    'image_link' => '',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<div class="item-bg" title=\'[field_rotate_image_1]\'>[title]</div>';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Felt: Global: Kontekstuelle links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'field_rotating_link' => 0,
    'title' => 0,
    'field_rotate_image' => 0,
    'body' => 0,
    'field_rotate_image_1' => 0,
    'title_1' => 0,
  );
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'rotating_image' => 'rotating_image',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Indløb / Udløb -  startdato (field_rotate_publish) */
  $handler->display->display_options['filters']['field_rotate_publish_value']['id'] = 'field_rotate_publish_value';
  $handler->display->display_options['filters']['field_rotate_publish_value']['table'] = 'field_data_field_rotate_publish';
  $handler->display->display_options['filters']['field_rotate_publish_value']['field'] = 'field_rotate_publish_value';
  $handler->display->display_options['filters']['field_rotate_publish_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_rotate_publish_value']['group'] = 1;
  $handler->display->display_options['filters']['field_rotate_publish_value']['default_date'] = 'now';
  /* Filterkriterie: Indhold: Indløb / Udløb - slutdato (field_rotate_publish:value2) */
  $handler->display->display_options['filters']['field_rotate_publish_value2']['id'] = 'field_rotate_publish_value2';
  $handler->display->display_options['filters']['field_rotate_publish_value2']['table'] = 'field_data_field_rotate_publish';
  $handler->display->display_options['filters']['field_rotate_publish_value2']['field'] = 'field_rotate_publish_value2';
  $handler->display->display_options['filters']['field_rotate_publish_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_rotate_publish_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_rotate_publish_value2']['default_date'] = 'now';
  /* Filterkriterie: Indhold: Forfrem til (field_promoteto) */
  $handler->display->display_options['filters']['field_promoteto_tid']['id'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['filters']['field_promoteto_tid']['field'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['value'] = array(
    0 => '12264',
  );
  $handler->display->display_options['filters']['field_promoteto_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_promoteto_tid']['expose']['operator_id'] = 'field_promoteto_tid_op';
  $handler->display->display_options['filters']['field_promoteto_tid']['expose']['label'] = 'Forfrem til (field_promoteto)';
  $handler->display->display_options['filters']['field_promoteto_tid']['expose']['operator'] = 'field_promoteto_tid_op';
  $handler->display->display_options['filters']['field_promoteto_tid']['expose']['identifier'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['vocabulary'] = 'forfrem_til';
  $handler->display->display_options['filters']['field_promoteto_tid']['error_message'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Stor rotator - single */
  $handler = $view->new_display('block', 'Stor rotator - single', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'custom-slideshow billedrotator  slideshow_big';
  $handler->display->display_options['display_description'] = 'Vise kun en ad gangen, bruges bland andet på erhvervssiden';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['wrapper_class'] = 'item-list ';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Standard',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 'title',
    'field_rotating_link' => 0,
    'field_rotate_image' => 0,
    'body' => 0,
    'field_rotate_image_1' => 0,
    'title_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_rotating_link' => 0,
    'title' => 0,
    'field_rotate_image' => 0,
    'body' => 0,
    'field_rotate_image_1' => 0,
    'title_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['field_rotating_link']['id'] = 'field_rotating_link';
  $handler->display->display_options['fields']['field_rotating_link']['table'] = 'field_data_field_rotating_link';
  $handler->display->display_options['fields']['field_rotating_link']['field'] = 'field_rotating_link';
  $handler->display->display_options['fields']['field_rotating_link']['label'] = '';
  $handler->display->display_options['fields']['field_rotating_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rotating_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotating_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_rotating_link']['type'] = 'link_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_rotate_image']['id'] = 'field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image']['table'] = 'field_data_field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image']['field'] = 'field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image']['label'] = '';
  $handler->display->display_options['fields']['field_rotate_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotate_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rotate_image']['settings'] = array(
    'image_style' => 'rotating_image',
    'image_link' => '',
  );
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<a href="[field_rotating_link]"><span>[title]</span> [body]</a>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['empty'] = '<a href="[field_rotating_link]"><span>[title]</span></a>';
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_rotate_image_1']['id'] = 'field_rotate_image_1';
  $handler->display->display_options['fields']['field_rotate_image_1']['table'] = 'field_data_field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image_1']['field'] = 'field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_rotate_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rotate_image_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rotate_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotate_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rotate_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_rotate_image_1']['settings'] = array(
    'image_style' => 'rotating_image_small',
    'image_link' => '',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<div class="item-bg" title=\'[field_rotate_image_1]\'>[title]</div>';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_site_structure_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'rotating_image' => 'rotating_image',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Indløb / Udløb -  startdato (field_rotate_publish) */
  $handler->display->display_options['filters']['field_rotate_publish_value']['id'] = 'field_rotate_publish_value';
  $handler->display->display_options['filters']['field_rotate_publish_value']['table'] = 'field_data_field_rotate_publish';
  $handler->display->display_options['filters']['field_rotate_publish_value']['field'] = 'field_rotate_publish_value';
  $handler->display->display_options['filters']['field_rotate_publish_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_rotate_publish_value']['group'] = 1;
  $handler->display->display_options['filters']['field_rotate_publish_value']['default_date'] = 'now';
  /* Filterkriterie: Indhold: Indløb / Udløb - slutdato (field_rotate_publish:value2) */
  $handler->display->display_options['filters']['field_rotate_publish_value2']['id'] = 'field_rotate_publish_value2';
  $handler->display->display_options['filters']['field_rotate_publish_value2']['table'] = 'field_data_field_rotate_publish';
  $handler->display->display_options['filters']['field_rotate_publish_value2']['field'] = 'field_rotate_publish_value2';
  $handler->display->display_options['filters']['field_rotate_publish_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_rotate_publish_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_rotate_publish_value2']['default_date'] = 'now';
  /* Filterkriterie: Indhold: Har taksonomiterm */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '12265',
  );
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Har taksonomiterm';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'forfrem_til';

  /* Display: Stor rotator - single2 */
  $handler = $view->new_display('block', 'Stor rotator - single2', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'custom-slideshow billedrotator  slideshow_big';
  $handler->display->display_options['display_description'] = 'Vise kun en ad gangen, bruges bland andet på erhvervssiden';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['wrapper_class'] = 'item-list ';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Standard',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 'title',
    'field_rotating_link' => 0,
    'field_rotate_image' => 0,
    'body' => 0,
    'field_rotate_image_1' => 0,
    'title_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_rotating_link' => 0,
    'title' => 0,
    'field_rotate_image' => 0,
    'body' => 0,
    'field_rotate_image_1' => 0,
    'title_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['field_rotating_link']['id'] = 'field_rotating_link';
  $handler->display->display_options['fields']['field_rotating_link']['table'] = 'field_data_field_rotating_link';
  $handler->display->display_options['fields']['field_rotating_link']['field'] = 'field_rotating_link';
  $handler->display->display_options['fields']['field_rotating_link']['label'] = '';
  $handler->display->display_options['fields']['field_rotating_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rotating_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotating_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_rotating_link']['type'] = 'link_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_rotate_image']['id'] = 'field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image']['table'] = 'field_data_field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image']['field'] = 'field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image']['label'] = '';
  $handler->display->display_options['fields']['field_rotate_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotate_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rotate_image']['settings'] = array(
    'image_style' => 'rotating_image',
    'image_link' => '',
  );
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<a href="[field_rotating_link]"><span>[title]</span> [body]</a>';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['empty'] = '<a href="[field_rotating_link]"><span>[title]</span></a>';
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_rotate_image_1']['id'] = 'field_rotate_image_1';
  $handler->display->display_options['fields']['field_rotate_image_1']['table'] = 'field_data_field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image_1']['field'] = 'field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_rotate_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rotate_image_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_rotate_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotate_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rotate_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_rotate_image_1']['settings'] = array(
    'image_style' => 'rotating_image_small',
    'image_link' => '',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<div class="item-bg" title=\'[field_rotate_image_1]\'>[title]</div>';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_site_structure_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'rotating_image' => 'rotating_image',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $translatables['rotating_image_view'] = array(
    t('Master'),
    t('Rotating image view'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<a href="[field_rotating_link]">[field_rotate_image]</a>'),
    t('<a href="[field_rotating_link]"><span>[title]</span> [body]</a>'),
    t('<a href="[field_rotating_link]"><span>[title]</span></a>'),
    t('<div class="item-bg" title=\'[field_rotate_image_1]\'>[title]</div>'),
    t('Forfrem til (field_promoteto)'),
    t('Block'),
    t('Stor rotator - single'),
    t('Vise kun en ad gangen, bruges bland andet på erhvervssiden'),
    t('Alle'),
    t('Har taksonomiterm'),
    t('Stor rotator - single2'),
  );
  $export['rotating_image_view'] = $view;

  $view = new view();
  $view->name = 'selvbetjening';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Selvbetjening';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Selvbetjening';
  $handler->display->display_options['css_class'] = 'selvbetjening';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Felt: Felt: Link til side */
  $handler->display->display_options['fields']['field_attached_node']['id'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['table'] = 'field_data_field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['field'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['label'] = '';
  $handler->display->display_options['fields']['field_attached_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['text'] = 'node/[field_attached_node-nid]';
  $handler->display->display_options['fields']['field_attached_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['type'] = 'balk_custom_node_reference_nid';
  $handler->display->display_options['fields']['field_attached_node']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_attached_node']['delta_offset'] = '0';
  /* Felt: Indhold: Direkte link */
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['id'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['table'] = 'field_data_field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['label'] = '';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['text'] = '[field_selvbetjening_direkte-value]';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty'] = '[field_attached_node]';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['type'] = 'text_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_selvbetjening_direkte]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_site_structure_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['vocabularies'] = array(
    'portalkategori' => 'portalkategori',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
  $handler->display->display_options['path'] = 'selvbetjening';
  $handler->display->display_options['menu']['title'] = 'dsafg';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'dsv';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
  $handler->display->display_options['path'] = 'selvbetjening.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: SB-block-forside */
  $handler = $view->new_display('block', 'SB-block-forside', 'sb_block_forside');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'selvbetjening selvbetjening-block-forside';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'sb-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3><a href="/selvbetjening">Selvbetjening</a></h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'selvbetjening:sb_block_forside_att_1';
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view_1']['id'] = 'view_1';
  $handler->display->display_options['footer']['view_1']['table'] = 'views';
  $handler->display->display_options['footer']['view_1']['field'] = 'view';
  $handler->display->display_options['footer']['view_1']['view_to_insert'] = 'selvbetjening:sb_block_forside_att_2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Link til side */
  $handler->display->display_options['fields']['field_attached_node']['id'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['table'] = 'field_data_field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['field'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['label'] = '';
  $handler->display->display_options['fields']['field_attached_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['text'] = 'node/[field_attached_node-nid]';
  $handler->display->display_options['fields']['field_attached_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['type'] = 'balk_custom_node_reference_nid';
  $handler->display->display_options['fields']['field_attached_node']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_attached_node']['delta_offset'] = '0';
  /* Felt: Indhold: Direkte link */
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['id'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['table'] = 'field_data_field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['label'] = '';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['text'] = '[field_selvbetjening_direkte-value]';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty'] = '[field_attached_node]';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['type'] = 'text_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_selvbetjening_direkte]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
  /* Filterkriterie: Indhold: Type (field_selvbetjeningslink_type) */
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['id'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['table'] = 'field_data_field_selvbetjeningslink_type';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['field'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['value'] = array(
    'handling' => 'handling',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: selvbetjening-megamenu */
  $handler = $view->new_display('block', 'selvbetjening-megamenu', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'selvbetjening selvbetjening-megamenu';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3><a href="/selvbetjening">Selvbetjening</a></h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Link til side */
  $handler->display->display_options['fields']['field_attached_node']['id'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['table'] = 'field_data_field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['field'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['label'] = '';
  $handler->display->display_options['fields']['field_attached_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['text'] = 'node/[field_attached_node-nid]';
  $handler->display->display_options['fields']['field_attached_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['type'] = 'balk_custom_node_reference_nid';
  $handler->display->display_options['fields']['field_attached_node']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_attached_node']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[field_attached_node]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Direkte link */
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['id'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['table'] = 'field_data_field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['label'] = '';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['path'] = '[field_selvbetjening_direkte-value]';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty'] = '<a href="/[field_attached_node]" title="[title]">[title]</a>';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Vægt: Vægt */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_site_structure_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
  /* Filterkriterie: Indhold: Type (field_selvbetjeningslink_type) */
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['id'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['table'] = 'field_data_field_selvbetjeningslink_type';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['field'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['value'] = array(
    'megamenu' => 'megamenu',
  );

  /* Display: SB-block-forside-att-1 */
  $handler = $view->new_display('block', 'SB-block-forside-att-1', 'sb_block_forside_att_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'sb-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="knapper"><a class="kviksvar" href="/kviksvar">Kviksvar</a><a class="nemindsigt" href="http://webkort.syddjurs.dk/?profile=lokalplaner-borger">Kort</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filterkriterie: Indhold: Type (field_selvbetjeningslink_type) */
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['id'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['table'] = 'field_data_field_selvbetjeningslink_type';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['field'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['value'] = array(
    'emne' => 'emne',
  );

  /* Display: SB-block-forside-att-2 */
  $handler = $view->new_display('block', 'SB-block-forside-att-2', 'sb_block_forside_att_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Aktuelle Genvej';
  $handler->display->display_options['header']['area']['content'] = '<div class="aktuel-genvej>Aktuelle Genveje</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="selbetjening-bund"><a class="nemid" href="http://nemid.dk" title="NemID">NEMID</a><a class="borgerdk" href="https://www.borger.dk/Sider/default.aspx?KommuneId=706" title="Borger.dk">Borger.dk</a><a class="virkdk" href="http://virk.dk" title="Virk.dk">Virk.dk</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Link til side */
  $handler->display->display_options['fields']['field_attached_node']['id'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['table'] = 'field_data_field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['field'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['label'] = '';
  $handler->display->display_options['fields']['field_attached_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['text'] = 'node/[field_attached_node-nid]';
  $handler->display->display_options['fields']['field_attached_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['type'] = 'balk_custom_node_reference_nid';
  $handler->display->display_options['fields']['field_attached_node']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_attached_node']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_attached_node]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Direkte link */
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['id'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['table'] = 'field_data_field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['label'] = '';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['text'] = '<a href=[field_selvbetjening_direkte] title="[title]">[title]</a>';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty'] = '<a href="[field_attached_node]" title="[title]">[title]</a>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filterkriterie: Indhold: Type (field_selvbetjeningslink_type) */
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['id'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['table'] = 'field_data_field_selvbetjeningslink_type';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['field'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['value'] = array(
    'liste' => 'liste',
  );
  $handler->display->display_options['block_description'] = 'Aktuelle genveje';

  /* Display: SB-block-portal */
  $handler = $view->new_display('block', 'SB-block-portal', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'selvbetjening selvbetjening-block-forside selvbetjening-block-portal';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'sb-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3><a href="/selvbetjening">Selvbetjening</a></h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'selvbetjening:sb_block_portal_att_1';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view_1']['id'] = 'view_1';
  $handler->display->display_options['footer']['view_1']['table'] = 'views';
  $handler->display->display_options['footer']['view_1']['field'] = 'view';
  $handler->display->display_options['footer']['view_1']['view_to_insert'] = 'selvbetjening:sb_block_portal_att_2';
  $handler->display->display_options['footer']['view_1']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Link til side */
  $handler->display->display_options['fields']['field_attached_node']['id'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['table'] = 'field_data_field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['field'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['label'] = '';
  $handler->display->display_options['fields']['field_attached_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['text'] = 'node/[field_attached_node-nid]';
  $handler->display->display_options['fields']['field_attached_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['type'] = 'balk_custom_node_reference_nid';
  $handler->display->display_options['fields']['field_attached_node']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_attached_node']['delta_offset'] = '0';
  /* Felt: Indhold: Direkte link */
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['id'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['table'] = 'field_data_field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['label'] = '';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['text'] = '[field_selvbetjening_direkte-value]';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty'] = '[field_attached_node]';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['type'] = 'text_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_selvbetjening_direkte]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_site_structure_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_site_structure_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
  /* Filterkriterie: Indhold: Type (field_selvbetjeningslink_type) */
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['id'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['table'] = 'field_data_field_selvbetjeningslink_type';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['field'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['value'] = array(
    'handling' => 'handling',
    'emne' => 'emne',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '0';

  /* Display: Selvbetjening - footerlinks */
  $handler = $view->new_display('block', 'Selvbetjening - footerlinks', 'block_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Link til side */
  $handler->display->display_options['fields']['field_attached_node']['id'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['table'] = 'field_data_field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['field'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['label'] = '';
  $handler->display->display_options['fields']['field_attached_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['type'] = 'node_reference_path';
  $handler->display->display_options['fields']['field_attached_node']['settings'] = array(
    'alias' => 1,
    'absolute' => 1,
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_selvbetjening_direkte]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Direkte link */
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['id'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['table'] = 'field_data_field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['label'] = '';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['text'] = '<a href=[field_selvbetjening_direkte-value] title="[title]">[title]</a>';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['path'] = '[field_selvbetjening_direkte]';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty'] = '<a href="[field_attached_node]" title="[title]">[title]</a>';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: SB-block-portal-att-1 */
  $handler = $view->new_display('block', 'SB-block-portal-att-1', 'sb_block_portal_att_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'sb-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Link til side */
  $handler->display->display_options['fields']['field_attached_node']['id'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['table'] = 'field_data_field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['field'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['label'] = '';
  $handler->display->display_options['fields']['field_attached_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['text'] = 'node/[field_attached_node-nid]';
  $handler->display->display_options['fields']['field_attached_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['type'] = 'balk_custom_node_reference_nid';
  $handler->display->display_options['fields']['field_attached_node']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_attached_node']['delta_offset'] = '0';
  /* Felt: Indhold: Direkte link */
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['id'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['table'] = 'field_data_field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['label'] = '';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['text'] = '[field_selvbetjening_direkte-value]';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty'] = '[field_attached_node]';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['type'] = 'text_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_selvbetjening_direkte]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_site_structure_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
  /* Filterkriterie: Indhold: Type (field_selvbetjeningslink_type) */
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['id'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['table'] = 'field_data_field_selvbetjeningslink_type';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['field'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['value'] = array(
    'emne' => 'emne',
  );

  /* Display: SB-block-portal-att-2 */
  $handler = $view->new_display('block', 'SB-block-portal-att-2', 'sb_block_portal_att_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Aktuelle Genvej';
  $handler->display->display_options['header']['area']['content'] = '<div class="aktuel-genvej-portal">Aktuelle Genveje</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="selbetjening-bund"><a class="nemid" href="http://nemid.dk" title="NemID">NEMID</a><a class="borgerdk" href="https://www.borger.dk/Sider/default.aspx?KommuneId=706" title="Borger.dk">Borger.dk</a><a class="virkdk" href="http://virk.dk" title="Virk.dk">Virk.dk</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Link til side */
  $handler->display->display_options['fields']['field_attached_node']['id'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['table'] = 'field_data_field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['field'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['label'] = '';
  $handler->display->display_options['fields']['field_attached_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['text'] = 'node/[field_attached_node-nid]';
  $handler->display->display_options['fields']['field_attached_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['type'] = 'balk_custom_node_reference_nid';
  $handler->display->display_options['fields']['field_attached_node']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_attached_node']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_selvbetjening_direkte]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Direkte link */
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['id'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['table'] = 'field_data_field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['label'] = '';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['text'] = '<a href="[field_selvbetjening_direkte-value]" title="[title]">[title]</a>';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty'] = '<a href="[field_attached_node]" title="[title]">[title]</a>';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_site_structure_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['vocabularies'] = array(
    'portalkategori' => 'portalkategori',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
  /* Filterkriterie: Indhold: Type (field_selvbetjeningslink_type) */
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['id'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['table'] = 'field_data_field_selvbetjeningslink_type';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['field'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['value'] = array(
    'liste' => 'liste',
  );
  $handler->display->display_options['block_description'] = 'Aktuelle genveje';

  /* Display: SB-block-sektion */
  $handler = $view->new_display('block', 'SB-block-sektion', 'block_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'selvbetjening selvbetjening-block-forside selvbetjening-block-portal selvbetjening-block-sektion';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3><a href="/selvbetjening">Selvbetjening</a></h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view_1']['id'] = 'view_1';
  $handler->display->display_options['footer']['view_1']['table'] = 'views';
  $handler->display->display_options['footer']['view_1']['field'] = 'view';
  $handler->display->display_options['footer']['view_1']['view_to_insert'] = 'selvbetjening:sb_block_portal_att_2';
  $handler->display->display_options['footer']['view_1']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Link til side */
  $handler->display->display_options['fields']['field_attached_node']['id'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['table'] = 'field_data_field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['field'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['label'] = '';
  $handler->display->display_options['fields']['field_attached_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['text'] = 'node/[field_attached_node-nid]';
  $handler->display->display_options['fields']['field_attached_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['type'] = 'balk_custom_node_reference_nid';
  $handler->display->display_options['fields']['field_attached_node']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_attached_node']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_selvbetjening_direkte]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Direkte link */
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['id'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['table'] = 'field_data_field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['label'] = '';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['text'] = '<a href="[field_selvbetjening_direkte-value]" title="[title]">[title]</a>';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty'] = '<a href="[field_attached_node]" title="[title]">[title]</a>';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['type'] = 'text_plain';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_site_structure_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
  /* Filterkriterie: Indhold: Type (field_selvbetjeningslink_type) */
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['id'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['table'] = 'field_data_field_selvbetjeningslink_type';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['field'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['value'] = array(
    'handling' => 'handling',
  );

  /* Display: SB-block-sektion2 */
  $handler = $view->new_display('block', 'SB-block-sektion2', 'block_5');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Aktuelle Genvej';
  $handler->display->display_options['header']['area']['content'] = '<div class="aktuel-genvej-portal>Blanketter</div>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="selbetjening-bund"><a class="nemid" href="http://nemid.dk">NEMID</a><a class="borgerdk" href="https://www.borger.dk/Sider/default.aspx?KommuneId=706">Borger.dk</a><a class="virkdk" href="http://virk.dk">Virk.dk</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Link til side */
  $handler->display->display_options['fields']['field_attached_node']['id'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['table'] = 'field_data_field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['field'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['label'] = '';
  $handler->display->display_options['fields']['field_attached_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['text'] = 'node/[field_attached_node-nid]';
  $handler->display->display_options['fields']['field_attached_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['type'] = 'balk_custom_node_reference_nid';
  $handler->display->display_options['fields']['field_attached_node']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_attached_node']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_attached_node]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Direkte link */
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['id'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['table'] = 'field_data_field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['label'] = '';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['text'] = '<a href="[field_selvbetjening_direkte-value]" title="[title]">[title]</a>';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty'] = '<a href="[field_attached_node]" title="[title]">[title]</a>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_site_structure_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['vocabularies'] = array(
    'portalkategori' => 'portalkategori',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
  /* Filterkriterie: Indhold: Type (field_selvbetjeningslink_type) */
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['id'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['table'] = 'field_data_field_selvbetjeningslink_type';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['field'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['value'] = array(
    'liste' => 'liste',
  );
  $handler->display->display_options['block_description'] = 'Aktuelle genveje';

  /* Display: selvbetjening-indholdsside */
  $handler = $view->new_display('block', 'selvbetjening-indholdsside', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Selvbetjening';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'selvbetjening selvbetjening-indholdsside';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Selvbetjeningslinks (field_noderef_selvbtjn) */
  $handler->display->display_options['relationships']['field_noderef_selvbtjn_nid']['id'] = 'field_noderef_selvbtjn_nid';
  $handler->display->display_options['relationships']['field_noderef_selvbtjn_nid']['table'] = 'field_data_field_noderef_selvbtjn';
  $handler->display->display_options['relationships']['field_noderef_selvbtjn_nid']['field'] = 'field_noderef_selvbtjn_nid';
  $handler->display->display_options['relationships']['field_noderef_selvbtjn_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_noderef_selvbtjn_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Link til side */
  $handler->display->display_options['fields']['field_attached_node']['id'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['table'] = 'field_data_field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['field'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['label'] = '';
  $handler->display->display_options['fields']['field_attached_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['text'] = 'node/[field_attached_node-nid]';
  $handler->display->display_options['fields']['field_attached_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['type'] = 'balk_custom_node_reference_nid';
  $handler->display->display_options['fields']['field_attached_node']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_attached_node']['delta_offset'] = '0';
  /* Felt: Felt: Link til side */
  $handler->display->display_options['fields']['field_attached_node_1']['id'] = 'field_attached_node_1';
  $handler->display->display_options['fields']['field_attached_node_1']['table'] = 'field_data_field_attached_node';
  $handler->display->display_options['fields']['field_attached_node_1']['field'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node_1']['relationship'] = 'field_noderef_selvbtjn_nid';
  $handler->display->display_options['fields']['field_attached_node_1']['label'] = '';
  $handler->display->display_options['fields']['field_attached_node_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node_1']['type'] = 'node_reference_path';
  $handler->display->display_options['fields']['field_attached_node_1']['settings'] = array(
    'alias' => 1,
    'absolute' => 0,
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_noderef_selvbtjn_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="node/[field_attached_node]" title="[title] ">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_selvbetjening_direkte]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Sti */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_noderef_selvbtjn_nid';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Direkte link */
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['id'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['table'] = 'field_data_field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['relationship'] = 'field_noderef_selvbtjn_nid';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['label'] = '';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['text'] = '<a href="[field_selvbetjening_direkte]" title="[title]">[title]</a>';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty'] = '<a href="[field_attached_node_1]" title="[title]">[title]</a>';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_noderef_selvbtjn_nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_noderef_selvbtjn_nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );

  /* Display: References */
  $handler = $view->new_display('references', 'References', 'references_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'references_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_selvbetjening_direkte]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
  /* Filterkriterie: Indhold: Type (field_selvbetjeningslink_type) */
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['id'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['table'] = 'field_data_field_selvbetjeningslink_type';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['field'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['value'] = array(
    'liste' => 'liste',
  );
  $translatables['selvbetjening'] = array(
    t('Master'),
    t('Selvbetjening'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('node/[field_attached_node-nid]'),
    t('[field_selvbetjening_direkte-value]'),
    t('[field_attached_node]'),
    t('[title]'),
    t('Alle'),
    t('Page'),
    t('Feed'),
    t('SB-block-forside'),
    t('<h3><a href="/selvbetjening">Selvbetjening</a></h3>'),
    t('selvbetjening-megamenu'),
    t('<a href="/[field_attached_node]" title="[title]">[title]</a>'),
    t('SB-block-forside-att-1'),
    t('<div class="knapper"><a class="kviksvar" href="/kviksvar">Kviksvar</a><a class="nemindsigt" href="http://webkort.syddjurs.dk/?profile=lokalplaner-borger">Kort</a></div>'),
    t('SB-block-forside-att-2'),
    t('Aktuelle Genvej'),
    t('<div class="aktuel-genvej>Aktuelle Genveje</div>'),
    t('<div class="selbetjening-bund"><a class="nemid" href="http://nemid.dk" title="NemID">NEMID</a><a class="borgerdk" href="https://www.borger.dk/Sider/default.aspx?KommuneId=706" title="Borger.dk">Borger.dk</a><a class="virkdk" href="http://virk.dk" title="Virk.dk">Virk.dk</a></div>'),
    t('<a href=[field_selvbetjening_direkte] title="[title]">[title]</a>'),
    t('<a href="[field_attached_node]" title="[title]">[title]</a>'),
    t('Aktuelle genveje'),
    t('SB-block-portal'),
    t('Selvbetjening - footerlinks'),
    t('<a href=[field_selvbetjening_direkte-value] title="[title]">[title]</a>'),
    t('SB-block-portal-att-1'),
    t('SB-block-portal-att-2'),
    t('<div class="aktuel-genvej-portal">Aktuelle Genveje</div>'),
    t('<a href="[field_selvbetjening_direkte-value]" title="[title]">[title]</a>'),
    t('SB-block-sektion'),
    t('SB-block-sektion2'),
    t('<div class="aktuel-genvej-portal>Blanketter</div>'),
    t('<div class="selbetjening-bund"><a class="nemid" href="http://nemid.dk">NEMID</a><a class="borgerdk" href="https://www.borger.dk/Sider/default.aspx?KommuneId=706">Borger.dk</a><a class="virkdk" href="http://virk.dk">Virk.dk</a></div>'),
    t('selvbetjening-indholdsside'),
    t('field_noderef_selvbtjn'),
    t('<a href="node/[field_attached_node]" title="[title] ">[title]</a>'),
    t('<a href="[field_selvbetjening_direkte]" title="[title]">[title]</a>'),
    t('<a href="[field_attached_node_1]" title="[title]">[title]</a>'),
    t('References'),
  );
  $export['selvbetjening'] = $view;

  $view = new view();
  $view->name = 'sitestuktur';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Sitestuktur';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Felt: Ord i ordforråd: Subsite logo */
  $handler->display->display_options['fields']['field_subsite_logo']['id'] = 'field_subsite_logo';
  $handler->display->display_options['fields']['field_subsite_logo']['table'] = 'field_data_field_subsite_logo';
  $handler->display->display_options['fields']['field_subsite_logo']['field'] = 'field_subsite_logo';
  $handler->display->display_options['fields']['field_subsite_logo']['label'] = '';
  $handler->display->display_options['fields']['field_subsite_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subsite_logo']['empty'] = '[name]';
  $handler->display->display_options['fields']['field_subsite_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_subsite_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Kontekstuelt filter: Ord i ordforråd: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Ordforråd: Internt navn */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'site_struktur' => 'site_struktur',
  );

  /* Display: Logo */
  $handler = $view->new_display('block', 'Logo', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Logo - Borger */
  $handler = $view->new_display('block', 'Logo - Borger', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Ord i ordforråd: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['argument'] = '4';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Logo - Erhverv */
  $handler = $view->new_display('block', 'Logo - Erhverv', 'block_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Ord i ordforråd: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['argument'] = '5';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Logo - Politik og planer */
  $handler = $view->new_display('block', 'Logo - Politik og planer', 'block_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Ord i ordforråd: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['argument'] = '6';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $translatables['sitestuktur'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Term ID'),
    t('.'),
    t(','),
    t('[name]'),
    t('Alle'),
    t('Logo'),
    t('Logo - Borger'),
    t('Logo - Erhverv'),
    t('Logo - Politik og planer'),
  );
  $export['sitestuktur'] = $view;

  return $export;
}
