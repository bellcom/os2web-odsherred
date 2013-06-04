<?php
/**
 * @file
 * odsherred_web.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function odsherred_web_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'spotbox_megadd';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Spotbox megaDD';
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
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'spotbox';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Felt: Indhold: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['type'] = 'text_plain';
  /* Felt: Felt: Spotboxe Bund */
  $handler->display->display_options['fields']['field_attached_node']['id'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['table'] = 'field_data_field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['field'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['label'] = '';
  $handler->display->display_options['fields']['field_attached_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['empty'] = '[field_url]';
  $handler->display->display_options['fields']['field_attached_node']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['type'] = 'node_reference_path';
  $handler->display->display_options['fields']['field_attached_node']['settings'] = array(
    'alias' => 1,
    'absolute' => 1,
  );
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['path'] = '[field_attached_node]';
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['alt'] = '[title_1]';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => '181_128',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_attached_node]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'titel';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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

  /* Display: Spot 181 */
  $handler = $view->new_display('panel_pane', 'Spot 181', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Felt: Indhold: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['type'] = 'text_plain';
  /* Felt: Felt: Spotboxe Bund */
  $handler->display->display_options['fields']['field_attached_node']['id'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['table'] = 'field_data_field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['field'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['label'] = '';
  $handler->display->display_options['fields']['field_attached_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['empty'] = '[field_url]';
  $handler->display->display_options['fields']['field_attached_node']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['type'] = 'node_reference_path';
  $handler->display->display_options['fields']['field_attached_node']['settings'] = array(
    'alias' => 1,
    'absolute' => 1,
  );
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['path'] = '[field_attached_node]';
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['alt'] = '[title_1]';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => '181_128',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['id'] = 'field_fokus_sektionsforside';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['table'] = 'field_data_field_fokus_sektionsforside';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['field'] = 'field_fokus_sektionsforside';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['label'] = '';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['path'] = '[field_attached_node]';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['settings'] = array(
    'image_style' => '181_128',
    'image_link' => '',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_attached_node]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'titel';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Node ID',
    ),
  );

  /* Display: Spot 240 */
  $handler = $view->new_display('panel_pane', 'Spot 240', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Felt: Indhold: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['type'] = 'text_plain';
  /* Felt: Felt: Spotboxe Bund */
  $handler->display->display_options['fields']['field_attached_node']['id'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['table'] = 'field_data_field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['field'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['label'] = '';
  $handler->display->display_options['fields']['field_attached_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['empty'] = '[field_url]';
  $handler->display->display_options['fields']['field_attached_node']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['type'] = 'node_reference_path';
  $handler->display->display_options['fields']['field_attached_node']['settings'] = array(
    'alias' => 1,
    'absolute' => 1,
  );
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['path'] = '[field_attached_node]';
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['alt'] = '[title_1]';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => '240_150',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['id'] = 'field_fokus_sektionsforside';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['table'] = 'field_data_field_fokus_sektionsforside';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['field'] = 'field_fokus_sektionsforside';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['label'] = '';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['path'] = '[field_attached_node]';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['settings'] = array(
    'image_style' => '240_150',
    'image_link' => '',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_attached_node]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Node ID',
    ),
  );
  $translatables['spotbox_megadd'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('[field_url]'),
    t('[title_1]'),
    t('Alle'),
    t('Spot 181'),
    t('View panes'),
    t('Spot 240'),
  );
  $export['spotbox_megadd'] = $view;

  return $export;
}
