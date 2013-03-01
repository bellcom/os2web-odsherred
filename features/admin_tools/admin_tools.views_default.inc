<?php
/**
 * @file
 * admin_tools.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function admin_tools_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'indholdsliste';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Indholdsliste';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Indholdsliste';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    7 => '7',
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_site_structure' => 'title',
    'field_termref_kle' => 'title',
    'delta' => 'title',
    'promote' => 'promote',
    'publishcontent' => 'publishcontent',
    'edit_node' => 'publishcontent',
    'field_newstype' => 'field_newstype',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_site_structure' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_termref_kle' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delta' => array(
      'align' => 'views-align-left',
      'separator' => '/',
      'empty_column' => 0,
    ),
    'promote' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'publishcontent' => array(
      'align' => 'views-align-left',
      'separator' => '/',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_newstype' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '/',
      'empty_column' => 1,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/indholdsliste">ALLE</a> - <a href="/indholdsliste/news">Nyheder</a> - <a href="/indholdsliste/selvbetjeningslinks">Selvbetjeningslinks</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_site_structure']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: KL Emneord */
  $handler->display->display_options['fields']['field_termref_kle']['id'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['table'] = 'field_data_field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['field'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['label'] = 'KLE';
  $handler->display->display_options['fields']['field_termref_kle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_termref_kle']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_termref_kle']['delta_offset'] = '0';
  /* Felt: Indhold: Forfrem til (field_promoteto:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = 'Forfrem til';
  $handler->display->display_options['fields']['delta']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['delta']['empty_zero'] = TRUE;
  /* Felt: Indhold: Forfremmet til forside */
  $handler->display->display_options['fields']['promote']['id'] = 'promote';
  $handler->display->display_options['fields']['promote']['table'] = 'node';
  $handler->display->display_options['fields']['promote']['field'] = 'promote';
  $handler->display->display_options['fields']['promote']['not'] = 0;
  /* Felt: Indhold: Publish link */
  $handler->display->display_options['fields']['publishcontent']['id'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['table'] = 'node';
  $handler->display->display_options['fields']['publishcontent']['field'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['label'] = 'Publicer';
  $handler->display->display_options['fields']['publishcontent']['unpublish'] = 'Afpublicer';
  $handler->display->display_options['fields']['publishcontent']['publish'] = 'Publicer';
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Redigér';
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['field_newstype']['id'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['fields']['field_newstype']['field'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['label'] = 'Nyhedstype';
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  $handler->display->display_options['arguments']['type']['case'] = 'lower';
  $handler->display->display_options['arguments']['type']['transform_dash'] = TRUE;
  $handler->display->display_options['arguments']['type']['break_phrase'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'indholdsliste';
  $translatables['indholdsliste'] = array(
    t('Master'),
    t('Indholdsliste'),
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
    t('<a href="/indholdsliste">ALLE</a> - <a href="/indholdsliste/news">Nyheder</a> - <a href="/indholdsliste/selvbetjeningslinks">Selvbetjeningslinks</a>'),
    t('Titel'),
    t('Portalkategori'),
    t('KLE'),
    t('Forfrem til'),
    t('.'),
    t(','),
    t('Forfremmet til forside'),
    t('Publicer'),
    t('Afpublicer'),
    t('Redigér'),
    t('Nyhedstype'),
    t('Type'),
    t('Alle'),
    t('Page'),
  );
  $export['indholdsliste'] = $view;

  return $export;
}
