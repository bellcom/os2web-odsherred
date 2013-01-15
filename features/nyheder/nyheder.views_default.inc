<?php
/**
 * @file
 * nyheder.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nyheder_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nyheder_moedekalender';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Nyheder - Mødekalender';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nyheder - Mødekalender';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '|';
  /* Forbindelse: Indhold: Type (field_newstype) */
  $handler->display->display_options['relationships']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['relationships']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['relationships']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['relationships']['field_newstype_tid']['required'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Dato */
  $handler->display->display_options['fields']['field_newstypedato']['id'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['field'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['label'] = '';
  $handler->display->display_options['fields']['field_newstypedato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstypedato']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['label'] = '';
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_site_structure']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Indhold: Dato (field_newstypedato) */
  $handler->display->display_options['sorts']['field_newstypedato_value']['id'] = 'field_newstypedato_value';
  $handler->display->display_options['sorts']['field_newstypedato_value']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['sorts']['field_newstypedato_value']['field'] = 'field_newstypedato_value';
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
  /* Filterkriterie: Indhold: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['value'] = array(
    25752 => '25752',
  );
  $handler->display->display_options['filters']['field_newstype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid']['vocabulary'] = 'nyhedstype';
  /* Filterkriterie: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['filters']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['filters']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['filters']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['filters']['field_site_structure_tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['field_site_structure_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_site_structure_tid']['vocabulary'] = 'site_struktur';

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
    'news' => 'news',
  );
  /* Filterkriterie: Indhold: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['value'] = array(
    25752 => '25752',
  );
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['operator_id'] = 'field_newstype_tid_op';
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['label'] = 'Type (field_newstype)';
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['operator'] = 'field_newstype_tid_op';
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['identifier'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid']['vocabulary'] = 'nyhedstype';
  /* Filterkriterie: Indhold: Dato (field_newstypedato) */
  $handler->display->display_options['filters']['field_newstypedato_value']['id'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['filters']['field_newstypedato_value']['field'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_newstypedato_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'moedekalender';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $translatables['nyheder_moedekalender'] = array(
    t('Master'),
    t('Nyheder - Mødekalender'),
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
    t('term fra field_newstype'),
    t('Page'),
    t('Type (field_newstype)'),
    t('Content pane'),
    t('View panes'),
  );
  $export['nyheder_moedekalender'] = $view;

  return $export;
}
