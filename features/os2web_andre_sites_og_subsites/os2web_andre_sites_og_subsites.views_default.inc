<?php
/**
 * @file
 * os2web_andre_sites_og_subsites.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_andre_sites_og_subsites_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'andre_sider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Andre sider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Andre sider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'grid-3';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Her kan du få en oversigt over alle kommunens forskellige hjemmesider. 
Lige fra Børnehaven Raketten til Brandvæsnet i Odsherred. Find en helt bestemt 
hjemmeside med søgningen i toppen, eller få en oversigt over de forskellige områder herunder.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Felt: Ordforråd: Internt navn */
  $handler->display->display_options['fields']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['fields']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['fields']['machine_name']['label'] = '';
  $handler->display->display_options['fields']['machine_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['machine_name']['element_label_colon'] = FALSE;
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Felt: Felt: Subsite banner */
  $handler->display->display_options['fields']['field_subsite_banner']['id'] = 'field_subsite_banner';
  $handler->display->display_options['fields']['field_subsite_banner']['table'] = 'field_data_field_subsite_banner';
  $handler->display->display_options['fields']['field_subsite_banner']['field'] = 'field_subsite_banner';
  $handler->display->display_options['fields']['field_subsite_banner']['label'] = '';
  $handler->display->display_options['fields']['field_subsite_banner']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_subsite_banner']['alter']['path'] = 'subsites-og-sites/[name]';
  $handler->display->display_options['fields']['field_subsite_banner']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_subsite_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subsite_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_subsite_banner']['settings'] = array(
    'image_style' => 'grid3',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_subsite_banner']['delta_offset'] = '0';
  /* Filterkriterie: Ordforråd: Internt navn */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'site_struktur' => 'site_struktur',
  );
  /* Filterkriterie: Ord i ordforråd: Is subsite (field_is_subsite) */
  $handler->display->display_options['filters']['field_is_subsite_value']['id'] = 'field_is_subsite_value';
  $handler->display->display_options['filters']['field_is_subsite_value']['table'] = 'field_data_field_is_subsite';
  $handler->display->display_options['filters']['field_is_subsite_value']['field'] = 'field_is_subsite_value';
  $handler->display->display_options['filters']['field_is_subsite_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'grid-3 andre-sider-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ordforråd: Internt navn */
  $handler->display->display_options['fields']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['fields']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['fields']['machine_name']['label'] = '';
  $handler->display->display_options['fields']['machine_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['machine_name']['element_label_colon'] = FALSE;
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Felt: Felt: Subsite banner */
  $handler->display->display_options['fields']['field_subsite_banner']['id'] = 'field_subsite_banner';
  $handler->display->display_options['fields']['field_subsite_banner']['table'] = 'field_data_field_subsite_banner';
  $handler->display->display_options['fields']['field_subsite_banner']['field'] = 'field_subsite_banner';
  $handler->display->display_options['fields']['field_subsite_banner']['label'] = '';
  $handler->display->display_options['fields']['field_subsite_banner']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_subsite_banner']['alter']['path'] = 'subsites-og-sites/[name]';
  $handler->display->display_options['fields']['field_subsite_banner']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_subsite_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subsite_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_subsite_banner']['settings'] = array(
    'image_style' => 'grid3',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_subsite_banner']['delta_offset'] = '0';
  /* Felt: Ord i ordforråd: Beskrivelse af term */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['text'] = '<div class="border"><a href="/subsites-og-sites/[name]">GOGOGO</a></div>
<h3><a href="/subsites-og-sites/[name]">[name]</a></h3>
<div class="tekst"><a href="/subsites-og-sites/[name]">[description]</a></div>';
  $handler->display->display_options['fields']['description']['element_type'] = 'div';
  $handler->display->display_options['fields']['description']['element_class'] = 'beskrivelse';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  $handler->display->display_options['path'] = 'andre-sider';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $translatables['andre_sider'] = array(
    t('Master'),
    t('Andre sider'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Her kan du få en oversigt over alle kommunens forskellige hjemmesider. 
Lige fra Børnehaven Raketten til Brandvæsnet i Odsherred. Find en helt bestemt 
hjemmeside med søgningen i toppen, eller få en oversigt over de forskellige områder herunder.'),
    t('Page'),
    t('<div class="border"><a href="/subsites-og-sites/[name]">GOGOGO</a></div>
<h3><a href="/subsites-og-sites/[name]">[name]</a></h3>
<div class="tekst"><a href="/subsites-og-sites/[name]">[description]</a></div>'),
    t('Entity Reference'),
  );
  $export['andre_sider'] = $view;

  $view = new view();
  $view->name = 'subsites_og_sites';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Subsites og sites';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Subsites og sites';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'grid-3';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Ingen sites';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Felt: Indhold: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['type'] = 'text_plain';
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
  /* Felt: Felt: Subsite banner */
  $handler->display->display_options['fields']['field_subsite_banner']['id'] = 'field_subsite_banner';
  $handler->display->display_options['fields']['field_subsite_banner']['table'] = 'field_data_field_subsite_banner';
  $handler->display->display_options['fields']['field_subsite_banner']['field'] = 'field_subsite_banner';
  $handler->display->display_options['fields']['field_subsite_banner']['label'] = '';
  $handler->display->display_options['fields']['field_subsite_banner']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_subsite_banner']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_subsite_banner']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_subsite_banner']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_subsite_banner']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_subsite_banner']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_subsite_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subsite_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_subsite_banner']['settings'] = array(
    'image_style' => 'grid3',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_subsite_banner']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_subsite_banner']['delta_offset'] = '0';
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Rediger';
  /* Felt: Global: Kontekstuelle links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'field_url' => 'field_url',
    'title' => 'title',
    'edit_node' => 'edit_node',
    'field_subsite_banner' => 0,
  );
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Har taksonomiterm ID (med dybde) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '4';
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
    'subsites_og_sites' => 'subsites_og_sites',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'subsites-og-sites';
  $translatables['subsites_og_sites'] = array(
    t('Master'),
    t('Subsites og sites'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Ingen sites'),
    t('[title]'),
    t('_blank'),
    t('Rediger'),
    t('Alle'),
    t('%1'),
    t('Page'),
  );
  $export['subsites_og_sites'] = $view;

  return $export;
}