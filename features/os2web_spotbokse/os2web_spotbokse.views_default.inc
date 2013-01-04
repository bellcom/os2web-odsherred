<?php
/**
 * @file
 * os2web_spotbokse.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_spotbokse_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'spot_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Spot view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'spotbox-indhold';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Indhold: Spotboxe (field_indholdsside_spotboxe) */
  $handler->display->display_options['relationships']['field_indholdsside_spotboxe_nid']['id'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['relationships']['field_indholdsside_spotboxe_nid']['table'] = 'field_data_field_indholdsside_spotboxe';
  $handler->display->display_options['relationships']['field_indholdsside_spotboxe_nid']['field'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['relationships']['field_indholdsside_spotboxe_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_indholdsside_spotboxe_nid']['delta'] = '-1';
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['text'] = '<img src="[field_lead_image]" alt="[title]" />
<span class="zoom-icon"></span>';
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_lead_image']['alter']['link_class'] = 'overlayclass';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'spotbox_right',
    'image_link' => '',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_lead_image]<br />
[title]';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '24';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<div class="spotImage">[field_lead_image]</div>
<div class="spotTitle">[title]</div>

';
  $handler->display->display_options['fields']['title_1']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'field_indholdsside_spotboxe_nid';
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
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'spotbox' => 'spotbox',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'spotbox-2-vertical';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_indholdsside_spotboxe_nid';
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
    'body' => 0,
    'field_lead_image' => 0,
    'title' => 0,
    'title_1' => 0,
    'field_url' => 0,
  );
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['text'] = '<img src="[field_lead_image]" alt="[title]" />
<span class="zoom-icon"></span>';
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_lead_image']['alter']['link_class'] = 'overlayclass';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['empty'] = '<div class="spotbox_no_picture"><div class="spotbox_no_picture_text"><a href=[field_url]>[body]</a></div></div>';
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'spotbox_right',
    'image_link' => '',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_lead_image]<br />
[title]';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '24';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<div class="spotImage">[field_lead_image]</div>
<div class="spotTitle">[title]</div>

';
  $handler->display->display_options['fields']['title_1']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;

  /* Display: Spotbox */
  $handler = $view->new_display('block', 'Spotbox', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['alter']['text'] = '[field_url] ';
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['type'] = 'text_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_lead_image]<br />
[title]';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'pane-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['text'] = '<img src="[field_lead_image]" alt="[title_1]" />
<span class="zoom-icon"></span>';
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_lead_image']['alter']['link_class'] = 'overlayclass';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['empty'] = '<div class="spotbox_no_picture"><div class="spotbox_no_picture_text"><a href=[field_url]>[body]</a></div></div>';
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'spotbox_right',
    'image_link' => '',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<h3><a href=[field_url]>[title]';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* Felt: Global: Kontekstuelle links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'body' => 0,
    'field_url' => 0,
    'field_lead_image' => 0,
    'title' => 0,
    'title_1' => 0,
  );
  $translatables['spot_view'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('field_indholdsside_spotboxe'),
    t('<img src="[field_lead_image]" alt="[title]" />
<span class="zoom-icon"></span>'),
    t('[field_lead_image]<br />
[title]'),
    t('<div class="spotImage">[field_lead_image]</div>
<div class="spotTitle">[title]</div>

'),
    t('Indhold'),
    t('Alle'),
    t('Content pane'),
    t('<div class="spotbox_no_picture"><div class="spotbox_no_picture_text"><a href=[field_url]>[body]</a></div></div>'),
    t('View panes'),
    t('Spotbox'),
    t('[field_url] '),
    t('<img src="[field_lead_image]" alt="[title_1]" />
<span class="zoom-icon"></span>'),
    t('<h3><a href=[field_url]>[title]'),
    t('Redigér-link'),
  );
  $export['spot_view'] = $view;

  $view = new view();
  $view->name = 'spotboxe';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Spotboxe';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Spotboxe';
  $handler->display->display_options['css_class'] = 'spotbox spotbox-normal';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'grid-3 omega';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['text'] = '<img src="[field_lead_image]" alt="[title_1]" />';
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'spotbox_right',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Intro */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Egenavne / stednavne */
  $handler->display->display_options['fields']['field_termref_sted']['id'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['table'] = 'field_data_field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['field'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_sted']['delta_offset'] = '0';
  /* Felt: Indhold: Forfrem til */
  $handler->display->display_options['fields']['field_promoteto']['id'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['field'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promoteto']['delta_offset'] = '0';
  /* Felt: Indhold: KL Emneord */
  $handler->display->display_options['fields']['field_termref_kle']['id'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['table'] = 'field_data_field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['field'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_kle']['delta_offset'] = '0';
  /* Felt: Indhold: Organisation */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['delta_offset'] = '0';
  /* Felt: Indhold: Politik */
  $handler->display->display_options['fields']['field_politics']['id'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['table'] = 'field_data_field_politics';
  $handler->display->display_options['fields']['field_politics']['field'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_politics']['delta_offset'] = '0';
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
  /* Felt: Indhold: Stikord */
  $handler->display->display_options['fields']['field_editortags']['id'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['table'] = 'field_data_field_editortags';
  $handler->display->display_options['fields']['field_editortags']['field'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_editortags']['delta_offset'] = '0';
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
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
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'spotbox' => 'spotbox',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['nid_type'] = 'nids';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'spotbox' => 'spotbox',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'spotboxe';

  /* Display: Spotbox på node */
  $handler = $view->new_display('panel_pane', 'Spotbox på node', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['text'] = '<a href=[field_url] title=[title] ><img src="[field_lead_image]" alt="[title_1]" /></a>';
  $handler->display->display_options['fields']['field_lead_image']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['empty'] = '<div class="spotbox_no_picture"><div class="spotbox_no_picture_text"><a href=[field_url]>[body]</a></div></div>';
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'spotbox_right',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href=[field_url] title=[title]>[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Intro */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Egenavne / stednavne */
  $handler->display->display_options['fields']['field_termref_sted']['id'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['table'] = 'field_data_field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['field'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_sted']['delta_offset'] = '0';
  /* Felt: Indhold: Forfrem til */
  $handler->display->display_options['fields']['field_promoteto']['id'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['field'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promoteto']['delta_offset'] = '0';
  /* Felt: Indhold: KL Emneord */
  $handler->display->display_options['fields']['field_termref_kle']['id'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['table'] = 'field_data_field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['field'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_kle']['delta_offset'] = '0';
  /* Felt: Indhold: Organisation */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['delta_offset'] = '0';
  /* Felt: Indhold: Politik */
  $handler->display->display_options['fields']['field_politics']['id'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['table'] = 'field_data_field_politics';
  $handler->display->display_options['fields']['field_politics']['field'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_politics']['delta_offset'] = '0';
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
  /* Felt: Indhold: Stikord */
  $handler->display->display_options['fields']['field_editortags']['id'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['table'] = 'field_data_field_editortags';
  $handler->display->display_options['fields']['field_editortags']['field'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_editortags']['delta_offset'] = '0';
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;

  /* Display: Spotboxe / forside - 2tv */
  $handler = $view->new_display('panel_pane', 'Spotboxe / forside - 2tv', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'spotbox spotbox-normal spotbox-2-vertical';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'spotbox-row grid-3 alpha omega';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'redigerlink';
  $handler->display->display_options['fields']['edit_node']['element_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '35';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'pane-title';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['text'] = '<a href=[field_url] title=[title_1]><img src="[field_lead_image]" alt="[title_1]" />
<span class="zoom-icon"></span></a>';
  $handler->display->display_options['fields']['field_lead_image']['alter']['link_class'] = 'overlayclass';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['empty'] = '<div class="spotbox_no_picture"><div class="spotbox_no_picture_text"><a href=[field_url]>[body]</a></div></div>';
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'spotbox_right',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Intro */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['text'] = '<a href=[field_url] title=[field_text]>[field_text]</a>';
  $handler->display->display_options['fields']['field_text']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_text']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_text']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_text']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_text']['empty'] = '[title]';
  $handler->display->display_options['fields']['field_text']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Egenavne / stednavne */
  $handler->display->display_options['fields']['field_termref_sted']['id'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['table'] = 'field_data_field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['field'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_sted']['delta_offset'] = '0';
  /* Felt: Indhold: Forfrem til */
  $handler->display->display_options['fields']['field_promoteto']['id'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['field'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promoteto']['delta_offset'] = '0';
  /* Felt: Indhold: KL Emneord */
  $handler->display->display_options['fields']['field_termref_kle']['id'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['table'] = 'field_data_field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['field'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_kle']['delta_offset'] = '0';
  /* Felt: Indhold: Organisation */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['delta_offset'] = '0';
  /* Felt: Indhold: Politik */
  $handler->display->display_options['fields']['field_politics']['id'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['table'] = 'field_data_field_politics';
  $handler->display->display_options['fields']['field_politics']['field'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_politics']['delta_offset'] = '0';
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
  /* Felt: Indhold: Stikord */
  $handler->display->display_options['fields']['field_editortags']['id'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['table'] = 'field_data_field_editortags';
  $handler->display->display_options['fields']['field_editortags']['field'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_editortags']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'spotbox' => 'spotbox',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['nid_type'] = 'nids';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
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
    'spotbox' => 'spotbox',
  );
  /* Filterkriterie: Indhold: Forfrem til (field_promoteto) */
  $handler->display->display_options['filters']['field_promoteto_tid']['id'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['filters']['field_promoteto_tid']['field'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['value'] = array(
    12264 => '12264',
  );
  $handler->display->display_options['filters']['field_promoteto_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_promoteto_tid']['vocabulary'] = 'forfrem_til';
  $handler->display->display_options['filters']['field_promoteto_tid']['hierarchy'] = 1;
  /* Filterkriterie: Indhold: Video (field_spotbox_video:fid) */
  $handler->display->display_options['filters']['field_spotbox_video_fid']['id'] = 'field_spotbox_video_fid';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['table'] = 'field_data_field_spotbox_video';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['field'] = 'field_spotbox_video_fid';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['operator'] = 'empty';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'ID på Spotboxe',
    ),
  );

  /* Display: Spotboxe / forside - 2th */
  $handler = $view->new_display('panel_pane', 'Spotboxe / forside - 2th', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'spotbox spotbox-horisontal';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '2';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'spotbox-row';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'redigerlink';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title_1']['element_wrapper_class'] = 'pane-title';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['text'] = '<a href=[field_url] title=[title_1]><img src="[field_lead_image]" alt="[title_1]" />
<span class="zoom-icon"></span></a>';
  $handler->display->display_options['fields']['field_lead_image']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_lead_image']['alter']['link_class'] = 'overlayclass';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['empty'] = '<div class="spotbox_no_picture"><div class="spotbox_no_picture_text"><a href=[field_url]  title=[title_1]>[body]</a></div></div>';
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'spotbox_right',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Intro */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['text'] = '<a href=[field_url] title=[title_1]>[field_text]</a>';
  $handler->display->display_options['fields']['field_text']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_text']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_text']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_text']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_text']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_text']['empty'] = '[title]';
  $handler->display->display_options['fields']['field_text']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Egenavne / stednavne */
  $handler->display->display_options['fields']['field_termref_sted']['id'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['table'] = 'field_data_field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['field'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_sted']['delta_offset'] = '0';
  /* Felt: Indhold: Forfrem til */
  $handler->display->display_options['fields']['field_promoteto']['id'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['field'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promoteto']['delta_offset'] = '0';
  /* Felt: Indhold: KL Emneord */
  $handler->display->display_options['fields']['field_termref_kle']['id'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['table'] = 'field_data_field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['field'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_kle']['delta_offset'] = '0';
  /* Felt: Indhold: Organisation */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['delta_offset'] = '0';
  /* Felt: Indhold: Politik */
  $handler->display->display_options['fields']['field_politics']['id'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['table'] = 'field_data_field_politics';
  $handler->display->display_options['fields']['field_politics']['field'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_politics']['delta_offset'] = '0';
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
  /* Felt: Indhold: Stikord */
  $handler->display->display_options['fields']['field_editortags']['id'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['table'] = 'field_data_field_editortags';
  $handler->display->display_options['fields']['field_editortags']['field'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_editortags']['delta_offset'] = '0';
  /* Felt: Global: Kontekstuelle links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'field_url' => 'field_url',
    'title_1' => 'title_1',
    'body' => 'body',
    'field_text' => 'field_text',
    'field_lead_image' => 0,
    'title' => 0,
    'field_termref_sted' => 0,
    'field_promoteto' => 0,
    'field_termref_kle' => 0,
    'field_organization' => 0,
    'field_politics' => 0,
    'field_site_structure' => 0,
    'field_editortags' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'spotbox' => 'spotbox',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['nid_type'] = 'nids';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
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
    'spotbox' => 'spotbox',
  );
  /* Filterkriterie: Indhold: Forfrem til (field_promoteto) */
  $handler->display->display_options['filters']['field_promoteto_tid']['id'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['filters']['field_promoteto_tid']['field'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['value'] = array(
    12264 => '12264',
  );
  $handler->display->display_options['filters']['field_promoteto_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_promoteto_tid']['vocabulary'] = 'forfrem_til';
  $handler->display->display_options['filters']['field_promoteto_tid']['hierarchy'] = 1;
  /* Filterkriterie: Indhold: Video (field_spotbox_video:fid) */
  $handler->display->display_options['filters']['field_spotbox_video_fid']['id'] = 'field_spotbox_video_fid';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['table'] = 'field_data_field_spotbox_video';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['field'] = 'field_spotbox_video_fid';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['operator'] = 'empty';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );

  /* Display: Spotboxe / forside - Høj */
  $handler = $view->new_display('panel_pane', 'Spotboxe / forside - Høj', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'spotbox spotbox-tall';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'spotbox-row-tall';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'redigerlink';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'spotbox-tall-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'aabb[title_1]';
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'pane-title';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Felt: Indhold: Højt billede */
  $handler->display->display_options['fields']['field_spotbox_image_tall']['id'] = 'field_spotbox_image_tall';
  $handler->display->display_options['fields']['field_spotbox_image_tall']['table'] = 'field_data_field_spotbox_image_tall';
  $handler->display->display_options['fields']['field_spotbox_image_tall']['field'] = 'field_spotbox_image_tall';
  $handler->display->display_options['fields']['field_spotbox_image_tall']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_image_tall']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_image_tall']['alter']['text'] = '<a href=[field_url] title=[title_1]><img src="[field_spotbox_image_tall]" alt="[title_1]" />
<span class="zoom-icon-tall"></span></a>';
  $handler->display->display_options['fields']['field_spotbox_image_tall']['alter']['link_class'] = 'overlayclass';
  $handler->display->display_options['fields']['field_spotbox_image_tall']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_image_tall']['empty'] = '[body]';
  $handler->display->display_options['fields']['field_spotbox_image_tall']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_image_tall']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spotbox_image_tall']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_spotbox_image_tall']['settings'] = array(
    'image_style' => 'spotbox-tall',
    'image_link' => '',
  );
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['text'] = '<a href=[field_url] title=[title_1]><img src="[field_lead_image]" alt="[title_1]" /></a>';
  $handler->display->display_options['fields']['field_lead_image']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'spotbox_right',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Primære billede (field_lead_image:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href=[field_url] title=[title_1]>[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Intro */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['text'] = '<a href=[field_url] title=[field_text]>[field_text]</a>';
  $handler->display->display_options['fields']['field_text']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_text']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_text']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_text']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_text']['empty'] = '[title]';
  $handler->display->display_options['fields']['field_text']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Egenavne / stednavne */
  $handler->display->display_options['fields']['field_termref_sted']['id'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['table'] = 'field_data_field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['field'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_sted']['delta_offset'] = '0';
  /* Felt: Indhold: Forfrem til */
  $handler->display->display_options['fields']['field_promoteto']['id'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['field'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promoteto']['delta_offset'] = '0';
  /* Felt: Indhold: KL Emneord */
  $handler->display->display_options['fields']['field_termref_kle']['id'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['table'] = 'field_data_field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['field'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_kle']['delta_offset'] = '0';
  /* Felt: Indhold: Organisation */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['delta_offset'] = '0';
  /* Felt: Indhold: Politik */
  $handler->display->display_options['fields']['field_politics']['id'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['table'] = 'field_data_field_politics';
  $handler->display->display_options['fields']['field_politics']['field'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_politics']['delta_offset'] = '0';
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
  /* Felt: Indhold: Stikord */
  $handler->display->display_options['fields']['field_editortags']['id'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['table'] = 'field_data_field_editortags';
  $handler->display->display_options['fields']['field_editortags']['field'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_editortags']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'spotbox' => 'spotbox',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['nid_type'] = 'nids';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
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
    'spotbox' => 'spotbox',
  );
  /* Filterkriterie: Indhold: Forfrem til (field_promoteto) */
  $handler->display->display_options['filters']['field_promoteto_tid']['id'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['filters']['field_promoteto_tid']['field'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['value'] = array(
    12264 => '12264',
  );
  $handler->display->display_options['filters']['field_promoteto_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_promoteto_tid']['vocabulary'] = 'forfrem_til';
  $handler->display->display_options['filters']['field_promoteto_tid']['hierarchy'] = 1;
  /* Filterkriterie: Indhold: Højt billede (field_spotbox_image_tall:fid) */
  $handler->display->display_options['filters']['field_spotbox_image_tall_fid']['id'] = 'field_spotbox_image_tall_fid';
  $handler->display->display_options['filters']['field_spotbox_image_tall_fid']['table'] = 'field_data_field_spotbox_image_tall';
  $handler->display->display_options['filters']['field_spotbox_image_tall_fid']['field'] = 'field_spotbox_image_tall_fid';
  $handler->display->display_options['filters']['field_spotbox_image_tall_fid']['operator'] = 'not empty';
  /* Filterkriterie: Indhold: Video (field_spotbox_video:fid) */
  $handler->display->display_options['filters']['field_spotbox_video_fid']['id'] = 'field_spotbox_video_fid';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['table'] = 'field_data_field_spotbox_video';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['field'] = 'field_spotbox_video_fid';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['operator'] = 'empty';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );

  /* Display: Spotboxe / forside - Video */
  $handler = $view->new_display('panel_pane', 'Spotboxe / forside - Video', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'spotbox spotbox-video';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'spotbox-row-video';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'redigerlink';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['text'] = '[body_1-value]';
  $handler->display->display_options['fields']['body_1']['alter']['max_length'] = '180';
  $handler->display->display_options['fields']['body_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Intro */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_text']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_text']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'pane-title';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="video-text"><a href=[field_url] title=[title_1]>[body_1]</a>
<h4><a href=[field_url] title=[title_1]>[field_text]</a></h4></div>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Video */
  $handler->display->display_options['fields']['field_spotbox_video']['id'] = 'field_spotbox_video';
  $handler->display->display_options['fields']['field_spotbox_video']['table'] = 'field_data_field_spotbox_video';
  $handler->display->display_options['fields']['field_spotbox_video']['field'] = 'field_spotbox_video';
  $handler->display->display_options['fields']['field_spotbox_video']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_video']['alter']['text'] = '<img src="[field_lead_image]" alt="[title_1]" />
<span class="zoom-icon-video"></span>';
  $handler->display->display_options['fields']['field_spotbox_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spotbox_video']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_spotbox_video']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['text'] = '<img src="[field_lead_image]" alt="[title_1]" />
<span class="zoom-icon-video"></span>';
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_lead_image']['alter']['link_class'] = 'overlayclass';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['empty'] = '[field_spotbox_video]';
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'video_forside',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Egenavne / stednavne */
  $handler->display->display_options['fields']['field_termref_sted']['id'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['table'] = 'field_data_field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['field'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_sted']['delta_offset'] = '0';
  /* Felt: Indhold: Forfrem til */
  $handler->display->display_options['fields']['field_promoteto']['id'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['field'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promoteto']['delta_offset'] = '0';
  /* Felt: Indhold: KL Emneord */
  $handler->display->display_options['fields']['field_termref_kle']['id'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['table'] = 'field_data_field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['field'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_kle']['delta_offset'] = '0';
  /* Felt: Indhold: Organisation */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['delta_offset'] = '0';
  /* Felt: Indhold: Politik */
  $handler->display->display_options['fields']['field_politics']['id'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['table'] = 'field_data_field_politics';
  $handler->display->display_options['fields']['field_politics']['field'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_politics']['delta_offset'] = '0';
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
  /* Felt: Indhold: Stikord */
  $handler->display->display_options['fields']['field_editortags']['id'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['table'] = 'field_data_field_editortags';
  $handler->display->display_options['fields']['field_editortags']['field'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_editortags']['delta_offset'] = '0';
  /* Felt: Global: Kontekstuelle links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'field_url' => 'field_url',
    'title_1' => 'title_1',
    'field_text' => 'field_text',
    'body_1' => 0,
    'title' => 0,
    'field_spotbox_video' => 0,
    'field_lead_image' => 0,
    'delta' => 0,
    'body' => 0,
    'field_termref_sted' => 0,
    'field_promoteto' => 0,
    'field_termref_kle' => 0,
    'field_organization' => 0,
    'field_politics' => 0,
    'field_site_structure' => 0,
    'field_editortags' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'spotbox' => 'spotbox',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['nid_type'] = 'nids';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
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
    'spotbox' => 'spotbox',
  );
  /* Filterkriterie: Indhold: Forfrem til (field_promoteto) */
  $handler->display->display_options['filters']['field_promoteto_tid']['id'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['filters']['field_promoteto_tid']['field'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['value'] = array(
    12264 => '12264',
    12265 => '12265',
  );
  $handler->display->display_options['filters']['field_promoteto_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_promoteto_tid']['vocabulary'] = 'forfrem_til';
  $handler->display->display_options['filters']['field_promoteto_tid']['hierarchy'] = 1;
  /* Filterkriterie: Indhold: Video (field_spotbox_video:fid) */
  $handler->display->display_options['filters']['field_spotbox_video_fid']['id'] = 'field_spotbox_video_fid';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['table'] = 'field_data_field_spotbox_video';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['field'] = 'field_spotbox_video_fid';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['expose']['operator_id'] = 'field_spotbox_video_fid_op';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['expose']['label'] = 'Video (field_spotbox_video:fid)';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['expose']['operator'] = 'field_spotbox_video_fid_op';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['expose']['identifier'] = 'field_spotbox_video_fid';
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
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );

  /* Display: Blok - Spotbox node */
  $handler = $view->new_display('block', 'Blok - Spotbox node', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['text'] = '<a href=[field_url] title=[title_1]><img src="[field_lead_image]" alt="[title_1]" /></a>';
  $handler->display->display_options['fields']['field_lead_image']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['empty'] = '<div class="spotbox_no_picture"><div class="spotbox_no_picture_text"><a href=[field_url]>[body]</a></div></div>';
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'spotbox_right',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href=[field_url] title=[title_1]>[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'hest';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Intro */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Egenavne / stednavne */
  $handler->display->display_options['fields']['field_termref_sted']['id'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['table'] = 'field_data_field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['field'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_sted']['delta_offset'] = '0';
  /* Felt: Indhold: Forfrem til */
  $handler->display->display_options['fields']['field_promoteto']['id'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['field'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promoteto']['delta_offset'] = '0';
  /* Felt: Indhold: KL Emneord */
  $handler->display->display_options['fields']['field_termref_kle']['id'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['table'] = 'field_data_field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['field'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_kle']['delta_offset'] = '0';
  /* Felt: Indhold: Organisation */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['delta_offset'] = '0';
  /* Felt: Indhold: Politik */
  $handler->display->display_options['fields']['field_politics']['id'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['table'] = 'field_data_field_politics';
  $handler->display->display_options['fields']['field_politics']['field'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_politics']['delta_offset'] = '0';
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
  /* Felt: Indhold: Stikord */
  $handler->display->display_options['fields']['field_editortags']['id'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['table'] = 'field_data_field_editortags';
  $handler->display->display_options['fields']['field_editortags']['field'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_editortags']['delta_offset'] = '0';
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['arguments']['field_site_structure_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'spotbox' => 'spotbox',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['nid_type'] = 'nids';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;

  /* Display: Spotboxe portal - 3 */
  $handler = $view->new_display('panel_pane', 'Spotboxe portal - 3', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'spotbox spotbox-horisontal-3';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'spotbox-row grid-3 alpha omega';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'redigerlink';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'pane-title';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['text'] = '<a href=[field_url] title=[title_1]><img src="[field_lead_image]" alt="[title_1]" />
<span class="zoom-icon"></span></a>';
  $handler->display->display_options['fields']['field_lead_image']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_lead_image']['alter']['link_class'] = 'overlayclass';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['empty'] = '<div class="spotbox_no_picture"><div class="spotbox_no_picture_text"><a href=[field_url]>[body]</a></div></div>';
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'spotbox_right',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href=[field_url] title=[title_1]>[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Primære billede (field_lead_image:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Intro */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_text']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Egenavne / stednavne */
  $handler->display->display_options['fields']['field_termref_sted']['id'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['table'] = 'field_data_field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['field'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_sted']['delta_offset'] = '0';
  /* Felt: Indhold: Forfrem til */
  $handler->display->display_options['fields']['field_promoteto']['id'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['field'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promoteto']['delta_offset'] = '0';
  /* Felt: Indhold: KL Emneord */
  $handler->display->display_options['fields']['field_termref_kle']['id'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['table'] = 'field_data_field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['field'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_kle']['delta_offset'] = '0';
  /* Felt: Indhold: Organisation */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['delta_offset'] = '0';
  /* Felt: Indhold: Politik */
  $handler->display->display_options['fields']['field_politics']['id'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['table'] = 'field_data_field_politics';
  $handler->display->display_options['fields']['field_politics']['field'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_politics']['delta_offset'] = '0';
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
  /* Felt: Indhold: Stikord */
  $handler->display->display_options['fields']['field_editortags']['id'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['table'] = 'field_data_field_editortags';
  $handler->display->display_options['fields']['field_editortags']['field'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_editortags']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'spotbox' => 'spotbox',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['nid_type'] = 'nids';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
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
    'spotbox' => 'spotbox',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_site_structure_tid' => array(
      'type' => 'none',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Portalkategori (field_site_structure)',
    ),
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );

  /* Display: Spotboxe portal - 2 */
  $handler = $view->new_display('panel_pane', 'Spotboxe portal - 2', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'spotbox spotbox-horisontal';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'spotbox-row grid-3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'redigerlink';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['text'] = '<a href=[field_url] title=[title_1]><img src="[field_lead_image]" alt="[title_1]" />
<span class="zoom-icon"></span></a>';
  $handler->display->display_options['fields']['field_lead_image']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_lead_image']['alter']['link_class'] = 'overlayclass';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['empty'] = '<div class="spotbox_no_picture"><div class="spotbox_no_picture_text"><a href=[field_url]>[body]</a></div></div>';
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'spotbox_right',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href=[field_url] title=[title]>[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Primære billede (field_lead_image:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Intro */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_text']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Egenavne / stednavne */
  $handler->display->display_options['fields']['field_termref_sted']['id'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['table'] = 'field_data_field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['field'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_sted']['delta_offset'] = '0';
  /* Felt: Indhold: Forfrem til */
  $handler->display->display_options['fields']['field_promoteto']['id'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['field'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promoteto']['delta_offset'] = '0';
  /* Felt: Indhold: KL Emneord */
  $handler->display->display_options['fields']['field_termref_kle']['id'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['table'] = 'field_data_field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['field'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_kle']['delta_offset'] = '0';
  /* Felt: Indhold: Organisation */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['delta_offset'] = '0';
  /* Felt: Indhold: Politik */
  $handler->display->display_options['fields']['field_politics']['id'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['table'] = 'field_data_field_politics';
  $handler->display->display_options['fields']['field_politics']['field'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_politics']['delta_offset'] = '0';
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
  /* Felt: Indhold: Stikord */
  $handler->display->display_options['fields']['field_editortags']['id'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['table'] = 'field_data_field_editortags';
  $handler->display->display_options['fields']['field_editortags']['field'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_editortags']['delta_offset'] = '0';
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
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'spotbox' => 'spotbox',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['nid_type'] = 'nids';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
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
    'spotbox' => 'spotbox',
  );
  /* Filterkriterie: Indhold: Forfrem til (field_promoteto) */
  $handler->display->display_options['filters']['field_promoteto_tid']['id'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['filters']['field_promoteto_tid']['field'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['value'] = array(
    12264 => '12264',
    12265 => '12265',
  );
  $handler->display->display_options['filters']['field_promoteto_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_promoteto_tid']['vocabulary'] = 'forfrem_til';
  $handler->display->display_options['filters']['field_promoteto_tid']['hierarchy'] = 1;

  /* Display: Spotboxe sektion - 3 */
  $handler = $view->new_display('panel_pane', 'Spotboxe sektion - 3', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'spotbox spotbox-horisontal-3';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'spotbox-row grid-3 alpha omega';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'redigerlink';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'pane-title';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['text'] = '<img src="[field_lead_image]" alt="[title_1]" />
<span class="zoom-icon"></span>';
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_lead_image']['alter']['link_class'] = 'overlayclass';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['empty'] = '<div class="spotbox_no_picture"><div class="spotbox_no_picture_text"><a href=[field_url]>[body]</a></div></div>';
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'spotbox_right',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Primære billede (field_lead_image:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Intro */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_text']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Egenavne / stednavne */
  $handler->display->display_options['fields']['field_termref_sted']['id'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['table'] = 'field_data_field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['field'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_sted']['delta_offset'] = '0';
  /* Felt: Indhold: Forfrem til */
  $handler->display->display_options['fields']['field_promoteto']['id'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['field'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promoteto']['delta_offset'] = '0';
  /* Felt: Indhold: KL Emneord */
  $handler->display->display_options['fields']['field_termref_kle']['id'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['table'] = 'field_data_field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['field'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_kle']['delta_offset'] = '0';
  /* Felt: Indhold: Organisation */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['delta_offset'] = '0';
  /* Felt: Indhold: Politik */
  $handler->display->display_options['fields']['field_politics']['id'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['table'] = 'field_data_field_politics';
  $handler->display->display_options['fields']['field_politics']['field'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_politics']['delta_offset'] = '0';
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
  /* Felt: Indhold: Stikord */
  $handler->display->display_options['fields']['field_editortags']['id'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['table'] = 'field_data_field_editortags';
  $handler->display->display_options['fields']['field_editortags']['field'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_editortags']['delta_offset'] = '0';
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
  $handler->display->display_options['arguments']['field_site_structure_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'spotbox' => 'spotbox',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['nid_type'] = 'nids';
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
    'spotbox' => 'spotbox',
  );

  /* Display: Spotboxe sektion - 1 */
  $handler = $view->new_display('panel_pane', 'Spotboxe sektion - 1', 'panel_pane_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'spotbox spotbox-sektion-1';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'spotbox-row grid-3 alpha omega';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'redigerlink';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'pane-title';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['text'] = '<a href=[field_url] title=[title_1]><img src="[field_lead_image]" alt="[title_1]" />
<span class="zoom-icon"></span></a>';
  $handler->display->display_options['fields']['field_lead_image']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_lead_image']['alter']['link_class'] = 'overlayclass';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['empty'] = '<div class="spotbox_no_picture"><div class="spotbox_no_picture_text"><a href=[field_url]>[body]</a></div></div>';
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Fokus sektionsforside */
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['id'] = 'field_fokus_sektionsforside';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['table'] = 'field_data_field_fokus_sektionsforside';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['field'] = 'field_fokus_sektionsforside';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['label'] = '';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['text'] = '<img src="[field_fokus_sektionsforside] " alt="[title_1]" />
<span class="zoom-icon"></span>';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['link_class'] = 'overlayclass';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['empty'] = '<div class="spotbox_no_picture"><div class="spotbox_no_picture_text"><a href=[field_url]>[body]</a></div></div>';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['settings'] = array(
    'image_style' => 'sektion-160',
    'image_link' => '',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href=[field_url] title=[title]>[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Intro */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_text']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Egenavne / stednavne */
  $handler->display->display_options['fields']['field_termref_sted']['id'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['table'] = 'field_data_field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['field'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_sted']['delta_offset'] = '0';
  /* Felt: Indhold: Forfrem til */
  $handler->display->display_options['fields']['field_promoteto']['id'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['field'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promoteto']['delta_offset'] = '0';
  /* Felt: Indhold: KL Emneord */
  $handler->display->display_options['fields']['field_termref_kle']['id'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['table'] = 'field_data_field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['field'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_kle']['delta_offset'] = '0';
  /* Felt: Indhold: Organisation */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['delta_offset'] = '0';
  /* Felt: Indhold: Politik */
  $handler->display->display_options['fields']['field_politics']['id'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['table'] = 'field_data_field_politics';
  $handler->display->display_options['fields']['field_politics']['field'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_politics']['delta_offset'] = '0';
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
  /* Felt: Indhold: Stikord */
  $handler->display->display_options['fields']['field_editortags']['id'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['table'] = 'field_data_field_editortags';
  $handler->display->display_options['fields']['field_editortags']['field'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_editortags']['delta_offset'] = '0';
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
  $handler->display->display_options['arguments']['field_site_structure_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'spotbox' => 'spotbox',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['nid_type'] = 'nids';
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
    'spotbox' => 'spotbox',
  );

  /* Display: Spotboxe subfront */
  $handler = $view->new_display('panel_pane', 'Spotboxe subfront', 'panel_pane_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'spotbox spotbox-subsite-frontpage';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'spotbox-row';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'redigerlink';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['text'] = '<a href=[field_url] title=[title_1]><img src="[field_lead_image]" alt="[title_1]" />
<div class="w80bg"><h3>[title_1]</h3>
<div class="spotbody">[body]</div>
</div>
<span class="zoom-icon"></span></a>';
  $handler->display->display_options['fields']['field_lead_image']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_lead_image']['alter']['link_class'] = 'overlayclass';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_lead_image']['element_wrapper_class'] = 'spotbox-subfront';
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['empty'] = '<div class="spotbox_no_picture"><div class="spotbox_no_picture_text"><a href=[field_url]>[body]</a></div></div>';
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'spotbox-300',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Intro */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_text']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
  /* Felt: Global: Kontekstuelle links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'field_url' => 'field_url',
    'title_1' => 0,
    'body' => 0,
    'field_lead_image' => 0,
    'title' => 0,
    'field_text' => 0,
    'field_site_structure' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'spotbox' => 'spotbox',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['nid_type'] = 'nids';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
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
    'spotbox' => 'spotbox',
  );
  /* Filterkriterie: Indhold: Forfrem til (field_promoteto) */
  $handler->display->display_options['filters']['field_promoteto_tid']['id'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['filters']['field_promoteto_tid']['field'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['value'] = array(
    12264 => '12264',
  );
  $handler->display->display_options['filters']['field_promoteto_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_promoteto_tid']['vocabulary'] = 'forfrem_til';
  $handler->display->display_options['filters']['field_promoteto_tid']['hierarchy'] = 1;
  /* Filterkriterie: Indhold: Video (field_spotbox_video:fid) */
  $handler->display->display_options['filters']['field_spotbox_video_fid']['id'] = 'field_spotbox_video_fid';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['table'] = 'field_data_field_spotbox_video';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['field'] = 'field_spotbox_video_fid';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['operator'] = 'empty';
  /* Filterkriterie: Indhold: Primære billede (field_lead_image:fid) */
  $handler->display->display_options['filters']['field_lead_image_fid']['id'] = 'field_lead_image_fid';
  $handler->display->display_options['filters']['field_lead_image_fid']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['filters']['field_lead_image_fid']['field'] = 'field_lead_image_fid';
  $handler->display->display_options['filters']['field_lead_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );

  /* Display: Spotboxe / forside - 1 */
  $handler = $view->new_display('panel_pane', 'Spotboxe / forside - 1', 'panel_pane_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'spotbox spotbox5';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'spotbox-row';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'redigerlink';
  $handler->display->display_options['fields']['edit_node']['element_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '35';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'pane-title';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Intro */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_text']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_text']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_text']['empty'] = '[title]';
  $handler->display->display_options['fields']['field_text']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['text'] = '<a href=[field_url] title=[title_1]><img src="[field_lead_image]" alt="[title_1]" />
<div class="spotbody">[body]</div>
<span class="zoom-icon"></span></a>';
  $handler->display->display_options['fields']['field_lead_image']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_lead_image']['alter']['link_class'] = 'overlayclass';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['empty'] = '<div class="spotbox_no_picture"><div class="spotbox_no_picture_text"><a href=[field_url]>[body]</a></div></div>';
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'spotbox5',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Stort billede */
  $handler->display->display_options['fields']['field_stort_billede_spot5']['id'] = 'field_stort_billede_spot5';
  $handler->display->display_options['fields']['field_stort_billede_spot5']['table'] = 'field_data_field_stort_billede_spot5';
  $handler->display->display_options['fields']['field_stort_billede_spot5']['field'] = 'field_stort_billede_spot5';
  $handler->display->display_options['fields']['field_stort_billede_spot5']['label'] = '';
  $handler->display->display_options['fields']['field_stort_billede_spot5']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_stort_billede_spot5']['alter']['text'] = '<a href=[field_url] title=[title_1]><img src="[field_stort_billede_spot5]" alt="[title_1]" />
<div class="spotbody">[body]</div>
<span class="zoom-icon"></span></a>



';
  $handler->display->display_options['fields']['field_stort_billede_spot5']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_stort_billede_spot5']['alter']['link_class'] = 'overlayclass';
  $handler->display->display_options['fields']['field_stort_billede_spot5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stort_billede_spot5']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_stort_billede_spot5']['empty'] = '<div class="spotbox_no_picture"><div class="spotbox_no_picture_text"><a href=[field_url]>[body]</a></div></div>';
  $handler->display->display_options['fields']['field_stort_billede_spot5']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_stort_billede_spot5']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_stort_billede_spot5']['settings'] = array(
    'image_style' => 'spotbox5',
    'image_link' => '',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Egenavne / stednavne */
  $handler->display->display_options['fields']['field_termref_sted']['id'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['table'] = 'field_data_field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['field'] = 'field_termref_sted';
  $handler->display->display_options['fields']['field_termref_sted']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_sted']['delta_offset'] = '0';
  /* Felt: Indhold: Forfrem til */
  $handler->display->display_options['fields']['field_promoteto']['id'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['field'] = 'field_promoteto';
  $handler->display->display_options['fields']['field_promoteto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promoteto']['delta_offset'] = '0';
  /* Felt: Indhold: KL Emneord */
  $handler->display->display_options['fields']['field_termref_kle']['id'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['table'] = 'field_data_field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['field'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_kle']['delta_offset'] = '0';
  /* Felt: Indhold: Organisation */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['delta_offset'] = '0';
  /* Felt: Indhold: Politik */
  $handler->display->display_options['fields']['field_politics']['id'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['table'] = 'field_data_field_politics';
  $handler->display->display_options['fields']['field_politics']['field'] = 'field_politics';
  $handler->display->display_options['fields']['field_politics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_politics']['delta_offset'] = '0';
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
  /* Felt: Indhold: Stikord */
  $handler->display->display_options['fields']['field_editortags']['id'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['table'] = 'field_data_field_editortags';
  $handler->display->display_options['fields']['field_editortags']['field'] = 'field_editortags';
  $handler->display->display_options['fields']['field_editortags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_editortags']['delta_offset'] = '0';
  /* Felt: Global: Kontekstuelle links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'field_url' => 'field_url',
    'title_1' => 'title_1',
    'field_text' => 'field_text',
    'body' => 0,
    'field_lead_image' => 0,
    'title' => 0,
    'field_termref_sted' => 0,
    'field_promoteto' => 0,
    'field_termref_kle' => 0,
    'field_organization' => 0,
    'field_politics' => 0,
    'field_site_structure' => 0,
    'field_editortags' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'spotbox' => 'spotbox',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['nid_type'] = 'nids';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
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
    'spotbox' => 'spotbox',
  );
  /* Filterkriterie: Indhold: Forfrem til (field_promoteto) */
  $handler->display->display_options['filters']['field_promoteto_tid']['id'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['filters']['field_promoteto_tid']['field'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['value'] = array(
    12264 => '12264',
  );
  $handler->display->display_options['filters']['field_promoteto_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_promoteto_tid']['vocabulary'] = 'forfrem_til';
  $handler->display->display_options['filters']['field_promoteto_tid']['hierarchy'] = 1;
  /* Filterkriterie: Indhold: Video (field_spotbox_video:fid) */
  $handler->display->display_options['filters']['field_spotbox_video_fid']['id'] = 'field_spotbox_video_fid';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['table'] = 'field_data_field_spotbox_video';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['field'] = 'field_spotbox_video_fid';
  $handler->display->display_options['filters']['field_spotbox_video_fid']['operator'] = 'empty';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'ID på Spotboxe',
    ),
  );
  $translatables['spotboxe'] = array(
    t('Master'),
    t('Spotboxe'),
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
    t('<img src="[field_lead_image]" alt="[title_1]" />'),
    t('Egenavne / stednavne'),
    t('Forfrem til'),
    t('KL Emneord'),
    t('Organisation'),
    t('Politik'),
    t('Portalkategori'),
    t('Stikord'),
    t('Alle'),
    t('Page'),
    t('Spotbox på node'),
    t('<a href=[field_url] title=[title] ><img src="[field_lead_image]" alt="[title_1]" /></a>'),
    t('<div class="spotbox_no_picture"><div class="spotbox_no_picture_text"><a href=[field_url]>[body]</a></div></div>'),
    t('<a href=[field_url] title=[title]>[title]</a>'),
    t('View panes'),
    t('Spotboxe / forside - 2tv'),
    t('<a href=[field_url] title=[title_1]><img src="[field_lead_image]" alt="[title_1]" />
<span class="zoom-icon"></span></a>'),
    t('<a href=[field_url] title=[field_text]>[field_text]</a>'),
    t('[title]'),
    t('Spotboxe / forside - 2th'),
    t('<div class="spotbox_no_picture"><div class="spotbox_no_picture_text"><a href=[field_url]  title=[title_1]>[body]</a></div></div>'),
    t('<a href=[field_url] title=[title_1]>[field_text]</a>'),
    t('Spotboxe / forside - Høj'),
    t('aabb[title_1]'),
    t('<a href=[field_url] title=[title_1]><img src="[field_spotbox_image_tall]" alt="[title_1]" />
<span class="zoom-icon-tall"></span></a>'),
    t('[body]'),
    t('<a href=[field_url] title=[title_1]><img src="[field_lead_image]" alt="[title_1]" /></a>'),
    t('.'),
    t(','),
    t('<a href=[field_url] title=[title_1]>[title]</a>'),
    t('Spotboxe / forside - Video'),
    t('[body_1-value]'),
    t('<div class="video-text"><a href=[field_url] title=[title_1]>[body_1]</a>
<h4><a href=[field_url] title=[title_1]>[field_text]</a></h4></div>'),
    t('<img src="[field_lead_image]" alt="[title_1]" />
<span class="zoom-icon-video"></span>'),
    t('[field_spotbox_video]'),
    t('Video (field_spotbox_video:fid)'),
    t('Blok - Spotbox node'),
    t('Spotboxe portal - 3'),
    t('Spotboxe portal - 2'),
    t('Spotboxe sektion - 3'),
    t('<img src="[field_lead_image]" alt="[title_1]" />
<span class="zoom-icon"></span>'),
    t('Spotboxe sektion - 1'),
    t('<img src="[field_fokus_sektionsforside] " alt="[title_1]" />
<span class="zoom-icon"></span>'),
    t('Spotboxe subfront'),
    t('<a href=[field_url] title=[title_1]><img src="[field_lead_image]" alt="[title_1]" />
<div class="w80bg"><h3>[title_1]</h3>
<div class="spotbody">[body]</div>
</div>
<span class="zoom-icon"></span></a>'),
    t('Spotboxe / forside - 1'),
    t('<a href=[field_url] title=[title_1]><img src="[field_lead_image]" alt="[title_1]" />
<div class="spotbody">[body]</div>
<span class="zoom-icon"></span></a>'),
    t('<a href=[field_url] title=[title_1]><img src="[field_stort_billede_spot5]" alt="[title_1]" />
<div class="spotbody">[body]</div>
<span class="zoom-icon"></span></a>



'),
  );
  $export['spotboxe'] = $view;

  return $export;
}
