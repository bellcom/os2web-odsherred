<?php
/**
 * @file
 * os2web_a2aa_index.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_a2aa_index_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'a_aa_index';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'a-å index';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'a-å index';
  $handler->display->display_options['css_class'] = 'hvidbg';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/a-aa-index">Alle</a> - <a href="/a-aa-index/a">A</a> - <a href="/a-aa-index/b">B</a> - <a href="/a-aa-index/c,d">CD</a> - <a href="/a-aa-index/e">E</a> - <a href="/a-aa-index/f">F</a> - <a href="/a-aa-index/g">G</a> - <a href="/a-aa-index/h">H</a> - <a href="/a-aa-index/i">I</a> - <a href="/a-aa-index/j">J</a> - <a href="/a-aa-index/k">K</a> - <a href="/a-aa-index/l">L</a> - <a href="/a-aa-index/m">M</a> - <a href="/a-aa-index/n">N</a> - <a href="/a-aa-index/o">O</a> - <a href="/a-aa-index/p">P</a> - <a href="/a-aa-index/q,r">QR</a> - <a href="/a-aa-index/s">S</a> - <a href="/a-aa-index/t">T</a> - <a href="/a-aa-index/u,v,w">UVW</a> - <a href="/a-aa-index/x,y,z,æ,ø,å">XYZÆØÅ</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Kontekstuelt filter: Indhold: Titel */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['title']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['title']['title'] = 'Index - %1';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['break_phrase'] = TRUE;
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
    'contentpage' => 'contentpage',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'a-aa-index';
  $translatables['a_aa_index'] = array(
    t('Master'),
    t('a-å index'),
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
    t('<a href="/a-aa-index">Alle</a> - <a href="/a-aa-index/a">A</a> - <a href="/a-aa-index/b">B</a> - <a href="/a-aa-index/c,d">CD</a> - <a href="/a-aa-index/e">E</a> - <a href="/a-aa-index/f">F</a> - <a href="/a-aa-index/g">G</a> - <a href="/a-aa-index/h">H</a> - <a href="/a-aa-index/i">I</a> - <a href="/a-aa-index/j">J</a> - <a href="/a-aa-index/k">K</a> - <a href="/a-aa-index/l">L</a> - <a href="/a-aa-index/m">M</a> - <a href="/a-aa-index/n">N</a> - <a href="/a-aa-index/o">O</a> - <a href="/a-aa-index/p">P</a> - <a href="/a-aa-index/q,r">QR</a> - <a href="/a-aa-index/s">S</a> - <a href="/a-aa-index/t">T</a> - <a href="/a-aa-index/u,v,w">UVW</a> - <a href="/a-aa-index/x,y,z,æ,ø,å">XYZÆØÅ</a>'),
    t('Alle'),
    t('Index - %1'),
    t('Page'),
  );
  $export['a_aa_index'] = $view;

  return $export;
}
