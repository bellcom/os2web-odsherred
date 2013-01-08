<?php
/**
 * @file
 * ofir_job_index_integration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ofir_job_index_integration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ofir_job_lister';
  $view->description = 'Side, block og andre visninger af Jobs fra Ofir.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ofir job lister';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nyeste jobs fra Ofir.dk';
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
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterie: Indhold: Ansøgninsfrist - slutdato (field_period:value2) */
  $handler->display->display_options['sorts']['field_period_value2']['id'] = 'field_period_value2';
  $handler->display->display_options['sorts']['field_period_value2']['table'] = 'field_data_field_period';
  $handler->display->display_options['sorts']['field_period_value2']['field'] = 'field_period_value2';
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
    'ofir_job' => 'ofir_job',
  );
  /* Filterkriterie: Indhold: Ansøgninsfrist - slutdato (field_period:value2) */
  $handler->display->display_options['filters']['field_period_value2']['id'] = 'field_period_value2';
  $handler->display->display_options['filters']['field_period_value2']['table'] = 'field_data_field_period';
  $handler->display->display_options['filters']['field_period_value2']['field'] = 'field_period_value2';
  $handler->display->display_options['filters']['field_period_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_period_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_period_value2']['default_date'] = 'today';
  /* Filterkriterie: Indhold: Ansøgninsfrist -  startdato (field_period) */
  $handler->display->display_options['filters']['field_period_value']['id'] = 'field_period_value';
  $handler->display->display_options['filters']['field_period_value']['table'] = 'field_data_field_period';
  $handler->display->display_options['filters']['field_period_value']['field'] = 'field_period_value';
  $handler->display->display_options['filters']['field_period_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_period_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_period_value']['default_date'] = 'today';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Jobs i Syddjurs Kommune';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Jobagent - header link';
  $handler->display->display_options['header']['area']['content'] = '<p style="padding-top:20px; padding-bottom:20px">Ønsker du at få tilsendt fremtidige stillingsopslag pr. e-mail? <a href="http://job.ofir.dk/Templates/Advertiser.asp?aguid=7DAE0E45-E8C0-43EF-9D3C-350F69BE5C9B&method=jobagent">Klik her for at oprette en jobagent.</a></p><br /><br />';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['path'] = 'job-opslag';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Jobs fra Ofir.dk:';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['ofir_job_lister'] = array(
    t('Master'),
    t('Nyeste jobs fra Ofir.dk'),
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
    t('Page'),
    t('Jobs i Syddjurs Kommune'),
    t('Jobagent - header link'),
    t('<p style="padding-top:20px; padding-bottom:20px">Ønsker du at få tilsendt fremtidige stillingsopslag pr. e-mail? <a href="http://job.ofir.dk/Templates/Advertiser.asp?aguid=7DAE0E45-E8C0-43EF-9D3C-350F69BE5C9B&method=jobagent">Klik her for at oprette en jobagent.</a></p><br /><br />'),
    t('Block'),
    t('Jobs fra Ofir.dk:'),
  );
  $export['ofir_job_lister'] = $view;

  return $export;
}
