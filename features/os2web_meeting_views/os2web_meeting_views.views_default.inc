<?php
/**
 * @file
 * os2web_meeting_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_meeting_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kommende_m_der_i_mine_udvalg';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Kommende møder i mine udvalg';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kommende møder i mine eller følgende udvalg';
  $handler->display->display_options['css_class'] = 'front-page-content-block';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_meeting_status' => 'field_meeting_status',
    'title' => 'title',
    'php' => 'title',
    'field_date' => 'field_date',
    'field_location' => 'field_location',
    'field_committee' => 'field_committee',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_committee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="help-button" title="Help text goes here"></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Forbindelse: Indhold: Committee (field_committee) */
  $handler->display->display_options['relationships']['field_committee_tid']['id'] = 'field_committee_tid';
  $handler->display->display_options['relationships']['field_committee_tid']['table'] = 'field_data_field_committee';
  $handler->display->display_options['relationships']['field_committee_tid']['field'] = 'field_committee_tid';
  /* Forbindelse: Ord i ordforråd: Bruger som bruger Is part of Committee */
  $handler->display->display_options['relationships']['reverse_field_user_committee_user']['id'] = 'reverse_field_user_committee_user';
  $handler->display->display_options['relationships']['reverse_field_user_committee_user']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_user_committee_user']['field'] = 'reverse_field_user_committee_user';
  $handler->display->display_options['relationships']['reverse_field_user_committee_user']['relationship'] = 'field_committee_tid';
  /* Forbindelse: Ord i ordforråd: Bruger som bruger Follows committees */
  $handler->display->display_options['relationships']['reverse_field_follows_committee_user']['id'] = 'reverse_field_follows_committee_user';
  $handler->display->display_options['relationships']['reverse_field_follows_committee_user']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_follows_committee_user']['field'] = 'reverse_field_follows_committee_user';
  $handler->display->display_options['relationships']['reverse_field_follows_committee_user']['relationship'] = 'field_committee_tid';
  /* Felt: nid hidden */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'nid hidden';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Status */
  $handler->display->display_options['fields']['field_meeting_status']['id'] = 'field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['table'] = 'field_data_field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['field'] = 'field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_status']['alter']['text'] = '<a href="google.com"></a>';
  $handler->display->display_options['fields']['field_meeting_status']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_status']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_meeting_status']['empty'] = '<a href="google.com"></a>';
  $handler->display->display_options['fields']['field_meeting_status']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: indicator - has notes */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'indicator - has notes';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$annotations = annotator_get_notes_by_meeting_id($row->nid);
if (!empty($annotations))
print("<div class=\\"indicator-has-notes\\"></div>");
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Dato';
  $handler->display->display_options['fields']['field_date']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Lokation */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Committee */
  $handler->display->display_options['fields']['field_committee']['id'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['table'] = 'field_data_field_committee';
  $handler->display->display_options['fields']['field_committee']['field'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['label'] = 'Udvalg';
  $handler->display->display_options['fields']['field_committee']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_committee']['type'] = 'taxonomy_term_reference_plain';
  /* Sorteringskriterie: Indhold: Date -  startdato (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['expose']['label'] = 'Start dato';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
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
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Bruger: Aktuelle */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'reverse_field_user_committee_user';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 2;
  /* Filterkriterie: Bruger: Aktuelle */
  $handler->display->display_options['filters']['uid_current_1']['id'] = 'uid_current_1';
  $handler->display->display_options['filters']['uid_current_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current_1']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current_1']['relationship'] = 'reverse_field_follows_committee_user';
  $handler->display->display_options['filters']['uid_current_1']['value'] = '1';
  $handler->display->display_options['filters']['uid_current_1']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'coming_meetings_my_committee';
  $translatables['kommende_m_der_i_mine_udvalg'] = array(
    t('Master'),
    t('Kommende møder i mine eller følgende udvalg'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<div class="help-button" title="Help text goes here"></div>'),
    t('term fra field_committee'),
    t('field_user_committee'),
    t('field_follows_committee'),
    t('Status'),
    t('<a href="google.com"></a>'),
    t('Titel'),
    t('Dato'),
    t('Lokation'),
    t('Udvalg'),
    t('Start dato'),
    t('Block'),
    t('coming_meetings_my_committee'),
  );
  $export['kommende_m_der_i_mine_udvalg'] = $view;

  $view = new view();
  $view->name = 'meeting_bullet_points';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Meeting bullet points';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Meeting bullet points';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Forbindelse: Handler mangler eller er i stykker */
  $handler->display->display_options['relationships']['relation_contains_node']['id'] = 'relation_contains_node';
  $handler->display->display_options['relationships']['relation_contains_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_contains_node']['field'] = 'relation_contains_node';
  $handler->display->display_options['relationships']['relation_contains_node']['label'] = 'indeholder';
  $handler->display->display_options['relationships']['relation_contains_node']['required'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_contains_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'meeting' => 'meeting',
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
    'meeting' => 'meeting',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['meeting_bullet_points'] = array(
    t('Master'),
    t('Meeting bullet points'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('indeholder'),
    t('Alle'),
    t('Block'),
  );
  $export['meeting_bullet_points'] = $view;

  $view = new view();
  $view->name = 'meeting_details';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Meeting details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mødedetaljer';
  $handler->display->display_options['css_class'] = 'bullet-point-attachments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_committee' => 'field_committee',
    'field_date' => 'field_date',
    'field_location' => 'field_location',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_committee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['id'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['table'] = 'field_data_field_ref_bullet_points';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['field'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['label'] = 'Meetings bullet points';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['required'] = TRUE;
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_ref_attachment_target_id']['id'] = 'field_ref_attachment_target_id';
  $handler->display->display_options['relationships']['field_ref_attachment_target_id']['table'] = 'field_data_field_ref_attachment';
  $handler->display->display_options['relationships']['field_ref_attachment_target_id']['field'] = 'field_ref_attachment_target_id';
  $handler->display->display_options['relationships']['field_ref_attachment_target_id']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['relationships']['field_ref_attachment_target_id']['label'] = 'bullet point attachments';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_contains_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Qbrick ref */
  $handler->display->display_options['fields']['field_qbrick_ref']['id'] = 'field_qbrick_ref';
  $handler->display->display_options['fields']['field_qbrick_ref']['table'] = 'field_data_field_qbrick_ref';
  $handler->display->display_options['fields']['field_qbrick_ref']['field'] = 'field_qbrick_ref';
  $handler->display->display_options['fields']['field_qbrick_ref']['label'] = 'Video fra mødet:';
  $handler->display->display_options['fields']['field_qbrick_ref']['hide_empty'] = TRUE;
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
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
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
    'meeting' => 'meeting',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Committee */
  $handler->display->display_options['fields']['field_committee']['id'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['table'] = 'field_data_field_committee';
  $handler->display->display_options['fields']['field_committee']['field'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['label'] = 'Udvalg';
  $handler->display->display_options['fields']['field_committee']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Dato';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_date_1']['id'] = 'field_date_1';
  $handler->display->display_options['fields']['field_date_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_1']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_1']['label'] = 'Slut Dato';
  $handler->display->display_options['fields']['field_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Lokation */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = 'Lokationen';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['field_meeting_type']['id'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['field'] = 'field_meeting_type';
  /* Felt: Indhold: Full doc */
  $handler->display->display_options['fields']['field_full_doc']['id'] = 'field_full_doc';
  $handler->display->display_options['fields']['field_full_doc']['table'] = 'field_data_field_full_doc';
  $handler->display->display_options['fields']['field_full_doc']['field'] = 'field_full_doc';
  $handler->display->display_options['fields']['field_full_doc']['label'] = 'Hent';
  $handler->display->display_options['fields']['field_full_doc']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_full_doc']['alter']['text'] = 'Samlet dokument';
  $handler->display->display_options['fields']['field_full_doc']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_full_doc']['alter']['path'] = '[field_full_doc]';
  $handler->display->display_options['fields']['field_full_doc']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_full_doc']['alter']['alt'] = 'Download hele referatet som samlet dokument';
  $handler->display->display_options['fields']['field_full_doc']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_full_doc']['type'] = 'file_url_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'meeting' => 'meeting',
  );
  $handler->display->display_options['path'] = 'meeting/%';

  /* Display: Video */
  $handler = $view->new_display('attachment', 'Video', 'attachment_1');
  $handler->display->display_options['display_description'] = 'QBrick video for mødet';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="pane-title">Video fra mødet</h2>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Qbrick ref */
  $handler->display->display_options['fields']['field_qbrick_ref']['id'] = 'field_qbrick_ref';
  $handler->display->display_options['fields']['field_qbrick_ref']['table'] = 'field_data_field_qbrick_ref';
  $handler->display->display_options['fields']['field_qbrick_ref']['field'] = 'field_qbrick_ref';
  $handler->display->display_options['fields']['field_qbrick_ref']['label'] = '';
  $handler->display->display_options['fields']['field_qbrick_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_qbrick_ref']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_qbrick_ref']['click_sort_column'] = 'seek';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'meeting' => 'meeting',
  );
  /* Filterkriterie: Indhold: Qbrick ref (field_qbrick_ref:id) */
  $handler->display->display_options['filters']['field_qbrick_ref_id']['id'] = 'field_qbrick_ref_id';
  $handler->display->display_options['filters']['field_qbrick_ref_id']['table'] = 'field_data_field_qbrick_ref';
  $handler->display->display_options['filters']['field_qbrick_ref_id']['field'] = 'field_qbrick_ref_id';
  $handler->display->display_options['filters']['field_qbrick_ref_id']['operator'] = 'not empty';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Bullet points */
  $handler = $view->new_display('attachment', 'Bullet points', 'attachment_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid_1' => 'nid_1',
    'nid' => 'nid',
    'nothing' => 'nothing',
    'title' => 'title',
    'php' => 'title',
    'field_ref_attachment' => 'title',
    'nothing_1' => 'nothing_1',
    'field_qbrick_ref' => 'field_qbrick_ref',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ref_attachment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_qbrick_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['id'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['table'] = 'field_data_field_ref_bullet_points';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['field'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['required'] = TRUE;
  /* Forbindelse: Entity Reference: Refererende entity */
  $handler->display->display_options['relationships']['reverse_field_ref_bullet_point_node']['id'] = 'reverse_field_ref_bullet_point_node';
  $handler->display->display_options['relationships']['reverse_field_ref_bullet_point_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_bullet_point_node']['field'] = 'reverse_field_ref_bullet_point_node';
  $handler->display->display_options['relationships']['reverse_field_ref_bullet_point_node']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['relationships']['reverse_field_ref_bullet_point_node']['label'] = 'bullet point speaking paper';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Meeting id - hidden */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['ui_name'] = 'Meeting id - hidden';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Felt: Bullet point id - hidden */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Bullet point id - hidden';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Bullet points */
  $handler->display->display_options['fields']['field_ref_attachment']['id'] = 'field_ref_attachment';
  $handler->display->display_options['fields']['field_ref_attachment']['table'] = 'field_data_field_ref_attachment';
  $handler->display->display_options['fields']['field_ref_attachment']['field'] = 'field_ref_attachment';
  $handler->display->display_options['fields']['field_ref_attachment']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['fields']['field_ref_attachment']['ui_name'] = 'Bullet points';
  $handler->display->display_options['fields']['field_ref_attachment']['label'] = '';
  $handler->display->display_options['fields']['field_ref_attachment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ref_attachment']['alter']['text'] = '[field_ref_attachment-target_id]';
  $handler->display->display_options['fields']['field_ref_attachment']['alter']['path'] = 'meeting/[nid_1]/bullet-point/[nid]/bullet-point-attachment/[field_ref_attachment-target_id]';
  $handler->display->display_options['fields']['field_ref_attachment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_attachment']['empty'] = 'Intet indhold til dette punkt.';
  $handler->display->display_options['fields']['field_ref_attachment']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_ref_attachment']['settings'] = array(
    'view_mode' => 'meeting_detail_view',
  );
  $handler->display->display_options['fields']['field_ref_attachment']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ref_attachment']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_ref_attachment']['separator'] = '<br/>';
  /* Felt: Indhold: Enclosures */
  $handler->display->display_options['fields']['field_enclosures']['id'] = 'field_enclosures';
  $handler->display->display_options['fields']['field_enclosures']['table'] = 'field_data_field_enclosures';
  $handler->display->display_options['fields']['field_enclosures']['field'] = 'field_enclosures';
  $handler->display->display_options['fields']['field_enclosures']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['fields']['field_enclosures']['label'] = '';
  $handler->display->display_options['fields']['field_enclosures']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enclosures']['alter']['text'] = 'Bilag: [field_enclosures]';
  $handler->display->display_options['fields']['field_enclosures']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enclosures']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_enclosures']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_enclosures']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_enclosures']['field_api_classes'] = TRUE;
  /* Felt: Indhold: Closed */
  $handler->display->display_options['fields']['field_bul_point_closed']['id'] = 'field_bul_point_closed';
  $handler->display->display_options['fields']['field_bul_point_closed']['table'] = 'field_data_field_bul_point_closed';
  $handler->display->display_options['fields']['field_bul_point_closed']['field'] = 'field_bul_point_closed';
  $handler->display->display_options['fields']['field_bul_point_closed']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['fields']['field_bul_point_closed']['label'] = '';
  $handler->display->display_options['fields']['field_bul_point_closed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bul_point_closed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bul_point_closed']['alter']['text'] = '<strong style="float: right;margin-left:1em">([field_bul_point_closed])</strong>';
  $handler->display->display_options['fields']['field_bul_point_closed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bul_point_closed']['hide_empty'] = TRUE;
  /* Felt: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Send to friend link';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['php']['alter']['path'] = 'dagsorden_punkt/[nid]/send_to_friend_form';
  $handler->display->display_options['fields']['php']['alter']['rel'] = 'lightframe';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if (function_exists("os2web_print_send_to_friend_bullet_point_access"))
{
if (os2web_print_send_to_friend_bullet_point_access($row->nid)){
echo \'<span class="bullet-point-send-to-friend"></span>\';
}
}
?> ';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Felt: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Print bullet point link';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['php_1']['alter']['path'] = 'print/dagsorden_punkt/[nid]/print';
  $handler->display->display_options['fields']['php_1']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
if (function_exists("os2web_print_send_to_friend_bullet_point_access"))
{
if (os2web_print_send_to_friend_bullet_point_access($row->nid)){
echo \'<span class="bullet-point-print-link"></span>\';
} 
}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Felt: Bullet point title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Bullet point title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] [field_bul_point_closed] [php] [php_1]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'agenda-bullet-list';
  $handler->display->display_options['fields']['title']['alter']['suffix'] = '<div class="agenda-item">[field_enclosures][field_ref_attachment] </div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Qbrick ref */
  $handler->display->display_options['fields']['field_qbrick_ref']['id'] = 'field_qbrick_ref';
  $handler->display->display_options['fields']['field_qbrick_ref']['table'] = 'field_data_field_qbrick_ref';
  $handler->display->display_options['fields']['field_qbrick_ref']['field'] = 'field_qbrick_ref';
  $handler->display->display_options['fields']['field_qbrick_ref']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['fields']['field_qbrick_ref']['label'] = '';
  $handler->display->display_options['fields']['field_qbrick_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_qbrick_ref']['click_sort_column'] = 'seek';
  $handler->display->display_options['fields']['field_qbrick_ref']['type'] = 'qbrick_movie_seek';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Tillæg */
  $handler = $view->new_display('attachment', 'Tillæg', 'attachment_3');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="pane-title">Tillæg</h2>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Tillæg til (field_addenum_to) - reverse */
  $handler->display->display_options['relationships']['reverse_field_addenum_to_node']['id'] = 'reverse_field_addenum_to_node';
  $handler->display->display_options['relationships']['reverse_field_addenum_to_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_addenum_to_node']['field'] = 'reverse_field_addenum_to_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_addenum_to_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Committee */
  $handler->display->display_options['fields']['field_committee']['id'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['table'] = 'field_data_field_committee';
  $handler->display->display_options['fields']['field_committee']['field'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['relationship'] = 'reverse_field_addenum_to_node';
  $handler->display->display_options['fields']['field_committee']['label'] = 'Udvalg';
  $handler->display->display_options['fields']['field_committee']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['alter']['path'] = 'meeting/[nid]/[field_committee]';
  $handler->display->display_options['fields']['field_committee']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'reverse_field_addenum_to_node';
  $handler->display->display_options['fields']['field_date']['label'] = 'Dato';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Lokation */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'reverse_field_addenum_to_node';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'meeting' => 'meeting',
  );
  /* Filterkriterie: Indhold: Tillæg til (field_addenum_to) */
  $handler->display->display_options['filters']['field_addenum_to_nid']['id'] = 'field_addenum_to_nid';
  $handler->display->display_options['filters']['field_addenum_to_nid']['table'] = 'field_data_field_addenum_to';
  $handler->display->display_options['filters']['field_addenum_to_nid']['field'] = 'field_addenum_to_nid';
  $handler->display->display_options['filters']['field_addenum_to_nid']['operator'] = 'not empty';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Bullet points - Tillæg */
  $handler = $view->new_display('attachment', 'Bullet points - Tillæg', 'attachment_5');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid_1' => 'nid_1',
    'nid' => 'nid',
    'nothing' => 'nothing',
    'title' => 'title',
    'php' => 'title',
    'field_ref_attachment' => 'title',
    'nothing_1' => 'nothing_1',
    'field_qbrick_ref' => 'field_qbrick_ref',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ref_attachment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_qbrick_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="pane-title">Tillægs[field_meeting_type]</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Tillæg til (field_addenum_to) - reverse */
  $handler->display->display_options['relationships']['reverse_field_addenum_to_node']['id'] = 'reverse_field_addenum_to_node';
  $handler->display->display_options['relationships']['reverse_field_addenum_to_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_addenum_to_node']['field'] = 'reverse_field_addenum_to_node';
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['id'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['table'] = 'field_data_field_ref_bullet_points';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['field'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['relationship'] = 'reverse_field_addenum_to_node';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['required'] = TRUE;
  /* Forbindelse: Entity Reference: Refererende entity */
  $handler->display->display_options['relationships']['reverse_field_ref_bullet_point_node']['id'] = 'reverse_field_ref_bullet_point_node';
  $handler->display->display_options['relationships']['reverse_field_ref_bullet_point_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_bullet_point_node']['field'] = 'reverse_field_ref_bullet_point_node';
  $handler->display->display_options['relationships']['reverse_field_ref_bullet_point_node']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['relationships']['reverse_field_ref_bullet_point_node']['label'] = 'bullet point speaking paper';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Meeting id - hidden */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['ui_name'] = 'Meeting id - hidden';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Felt: Bullet point id - hidden */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Bullet point id - hidden';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Enclosures */
  $handler->display->display_options['fields']['field_enclosures']['id'] = 'field_enclosures';
  $handler->display->display_options['fields']['field_enclosures']['table'] = 'field_data_field_enclosures';
  $handler->display->display_options['fields']['field_enclosures']['field'] = 'field_enclosures';
  $handler->display->display_options['fields']['field_enclosures']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['fields']['field_enclosures']['label'] = '';
  $handler->display->display_options['fields']['field_enclosures']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enclosures']['alter']['text'] = 'Bilag: [field_enclosures]';
  $handler->display->display_options['fields']['field_enclosures']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enclosures']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_enclosures']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_enclosures']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_enclosures']['field_api_classes'] = TRUE;
  /* Felt: Bullet points */
  $handler->display->display_options['fields']['field_ref_attachment']['id'] = 'field_ref_attachment';
  $handler->display->display_options['fields']['field_ref_attachment']['table'] = 'field_data_field_ref_attachment';
  $handler->display->display_options['fields']['field_ref_attachment']['field'] = 'field_ref_attachment';
  $handler->display->display_options['fields']['field_ref_attachment']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['fields']['field_ref_attachment']['ui_name'] = 'Bullet points';
  $handler->display->display_options['fields']['field_ref_attachment']['label'] = '';
  $handler->display->display_options['fields']['field_ref_attachment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ref_attachment']['alter']['text'] = '[field_ref_attachment-target_id]';
  $handler->display->display_options['fields']['field_ref_attachment']['alter']['path'] = 'meeting/[nid_1]/bullet-point/[nid]/bullet-point-attachment/[field_ref_attachment-target_id]';
  $handler->display->display_options['fields']['field_ref_attachment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_attachment']['empty'] = 'Intet indhold til dette punkt.';
  $handler->display->display_options['fields']['field_ref_attachment']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_ref_attachment']['settings'] = array(
    'view_mode' => 'meeting_detail_view',
  );
  $handler->display->display_options['fields']['field_ref_attachment']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ref_attachment']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_ref_attachment']['separator'] = '<br/>';
  /* Felt: Indhold: Closed */
  $handler->display->display_options['fields']['field_bul_point_closed']['id'] = 'field_bul_point_closed';
  $handler->display->display_options['fields']['field_bul_point_closed']['table'] = 'field_data_field_bul_point_closed';
  $handler->display->display_options['fields']['field_bul_point_closed']['field'] = 'field_bul_point_closed';
  $handler->display->display_options['fields']['field_bul_point_closed']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['fields']['field_bul_point_closed']['label'] = '';
  $handler->display->display_options['fields']['field_bul_point_closed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bul_point_closed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bul_point_closed']['alter']['text'] = '<strong style="float: right;margin-left:1em">([field_bul_point_closed])</strong>';
  $handler->display->display_options['fields']['field_bul_point_closed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bul_point_closed']['hide_empty'] = TRUE;
  /* Felt: Bullet point title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Bullet point title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] [field_bul_point_closed]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'agenda-bullet-list';
  $handler->display->display_options['fields']['title']['alter']['suffix'] = '<div class="agenda-item">[field_ref_attachment][field_enclosures] </div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Qbrick ref */
  $handler->display->display_options['fields']['field_qbrick_ref']['id'] = 'field_qbrick_ref';
  $handler->display->display_options['fields']['field_qbrick_ref']['table'] = 'field_data_field_qbrick_ref';
  $handler->display->display_options['fields']['field_qbrick_ref']['field'] = 'field_qbrick_ref';
  $handler->display->display_options['fields']['field_qbrick_ref']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['fields']['field_qbrick_ref']['label'] = '';
  $handler->display->display_options['fields']['field_qbrick_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_qbrick_ref']['click_sort_column'] = 'seek';
  $handler->display->display_options['fields']['field_qbrick_ref']['type'] = 'qbrick_movie_seek';
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['field_meeting_type']['id'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['field'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $translatables['meeting_details'] = array(
    t('Master'),
    t('Mødedetaljer'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Meetings bullet points'),
    t('bullet point attachments'),
    t('Video fra mødet:'),
    t('Alle'),
    t('Page'),
    t('Titel'),
    t('Udvalg'),
    t('Dato'),
    t('Slut Dato'),
    t('Lokationen'),
    t('Type'),
    t('Hent'),
    t('Samlet dokument'),
    t('Download hele referatet som samlet dokument'),
    t('Video'),
    t('QBrick video for mødet'),
    t('<h2 class="pane-title">Video fra mødet</h2>'),
    t('Bullet points'),
    t('Indhold entity refereret fra field_ref_bullet_points'),
    t('bullet point speaking paper'),
    t('[field_ref_attachment-target_id]'),
    t('Intet indhold til dette punkt.'),
    t('Bilag: [field_enclosures]'),
    t('<strong style="float: right;margin-left:1em">([field_bul_point_closed])</strong>'),
    t('Send to friend link'),
    t('Print bullet point link'),
    t('_blank'),
    t('[title] [field_bul_point_closed] [php] [php_1]'),
    t('<div class="agenda-item">[field_enclosures][field_ref_attachment] </div>'),
    t('Tillæg'),
    t('<h2 class="pane-title">Tillæg</h2>'),
    t('field_addenum_to'),
    t('Lokation'),
    t('Bullet points - Tillæg'),
    t('<h2 class="pane-title">Tillægs[field_meeting_type]</h2>'),
    t('[title] [field_bul_point_closed]'),
    t('<div class="agenda-item">[field_ref_attachment][field_enclosures] </div>'),
  );
  $export['meeting_details'] = $view;

  $view = new view();
  $view->name = 'meeting_feeds';
  $view->description = 'This is the RSS feeds of meetings';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Meeting feeds';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dagsordner og referater i Syddjurs Kommune';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '300';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
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
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'tid',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Committee */
  $handler->display->display_options['fields']['field_committee']['id'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['table'] = 'field_data_field_committee';
  $handler->display->display_options['fields']['field_committee']['field'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['label'] = '';
  $handler->display->display_options['fields']['field_committee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['field_meeting_type']['id'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['field'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_type']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Beskrivelse */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Beskrivelse';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_meeting_type] af [field_committee] d. [field_date]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Felt: Indholdsversion: Link */
  $handler->display->display_options['fields']['link_to_revision']['id'] = 'link_to_revision';
  $handler->display->display_options['fields']['link_to_revision']['table'] = 'node_revision';
  $handler->display->display_options['fields']['link_to_revision']['field'] = 'link_to_revision';
  $handler->display->display_options['fields']['link_to_revision']['label'] = '';
  $handler->display->display_options['fields']['link_to_revision']['element_label_colon'] = FALSE;
  /* Felt: Titel */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Titel';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_committee] - [field_date]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Committee (field_committee) */
  $handler->display->display_options['arguments']['field_committee_tid']['id'] = 'field_committee_tid';
  $handler->display->display_options['arguments']['field_committee_tid']['table'] = 'field_data_field_committee';
  $handler->display->display_options['arguments']['field_committee_tid']['field'] = 'field_committee_tid';
  $handler->display->display_options['arguments']['field_committee_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_committee_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_committee_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_committee_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_committee_tid']['summary_options']['items_per_page'] = '25';
  /* Kontekstuelt filter: Indhold: Type (field_meeting_type) */
  $handler->display->display_options['arguments']['field_meeting_type_value']['id'] = 'field_meeting_type_value';
  $handler->display->display_options['arguments']['field_meeting_type_value']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['arguments']['field_meeting_type_value']['field'] = 'field_meeting_type_value';
  $handler->display->display_options['arguments']['field_meeting_type_value']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_meeting_type_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_meeting_type_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_meeting_type_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_meeting_type_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_meeting_type_value']['limit'] = '0';
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
    'meeting' => 'meeting',
  );

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'nothing_1';
  $handler->display->display_options['row_options']['link_field'] = 'link_to_revision';
  $handler->display->display_options['row_options']['description_field'] = 'nothing';
  $handler->display->display_options['row_options']['creator_field'] = 'field_committee';
  $handler->display->display_options['row_options']['date_field'] = 'field_date';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'nid',
    'guid_field_is_permalink' => 0,
  );
  $handler->display->display_options['path'] = 'meetings-feed';
  $handler->display->display_options['sitename_title'] = 0;
  $translatables['meeting_feeds'] = array(
    t('Master'),
    t('Dagsordner og referater i Syddjurs Kommune'),
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
    t('[field_meeting_type] af [field_committee] d. [field_date]'),
    t('[field_committee] - [field_date]'),
    t('Alle'),
    t('Feed'),
  );
  $export['meeting_feeds'] = $view;

  $view = new view();
  $view->name = 'meeting_feeds_list';
  $view->description = 'Creates links to all feeds';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Meeting feeds list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Feeds til opdateringer om dagsordner og referater';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Forbindelse: Ord i ordforråd: Indhold som bruger Committee */
  $handler->display->display_options['relationships']['reverse_field_committee_node']['id'] = 'reverse_field_committee_node';
  $handler->display->display_options['relationships']['reverse_field_committee_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_committee_node']['field'] = 'reverse_field_committee_node';
  $handler->display->display_options['relationships']['reverse_field_committee_node']['required'] = TRUE;
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Referater';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'meetings-feed/[tid]/referat';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['alt'] = 'Referat feed';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Dagordner';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'meetings-feed/[tid]/dagsorden';
  $handler->display->display_options['fields']['nothing_1']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['alt'] = 'Feed med dagsordner';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'Alle';
  $handler->display->display_options['fields']['nothing_3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['path'] = 'meetings-feed/[tid]';
  $handler->display->display_options['fields']['nothing_3']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Feeds';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[nothing] / [nothing_1] / [nothing_3]';
  /* Sorteringskriterie: Ord i ordforråd: Navn */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filterkriterie: Ordforråd: Internt navn */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'committee' => 'committee',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'meeting-feeds-list';
  $translatables['meeting_feeds_list'] = array(
    t('Master'),
    t('Feeds til opdateringer om dagsordner og referater'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('field_committee'),
    t('Navn'),
    t('.'),
    t('Referater'),
    t('Referat feed'),
    t('Dagordner'),
    t('Feed med dagsordner'),
    t('Alle'),
    t('Feeds'),
    t('[nothing] / [nothing_1] / [nothing_3]'),
    t('Page'),
  );
  $export['meeting_feeds_list'] = $view;

  $view = new view();
  $view->name = 'meetings_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Meetings search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Søg i dagsordener og referater';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Søg';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'field_date_value' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'bef_filter_description' => '',
      ),
    ),
    'field_date_value2' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'bef_filter_description' => '',
      ),
    ),
    'field_committee_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_committee' => 'field_committee',
    'field_date' => 'field_date',
    'field_location' => 'field_location',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_committee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="help-button" title="Help text goes here"></div>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'meetings_search:block_1';
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view_1']['id'] = 'view_1';
  $handler->display->display_options['footer']['view_1']['table'] = 'views';
  $handler->display->display_options['footer']['view_1']['field'] = 'view';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'meeting/[nid]';
  /* Felt: Indhold: Committee */
  $handler->display->display_options['fields']['field_committee']['id'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['table'] = 'field_data_field_committee';
  $handler->display->display_options['fields']['field_committee']['field'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['label'] = 'Søgeresultat';
  $handler->display->display_options['fields']['field_committee']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Lokation */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Sorteringskriterie: Indhold: Date -  startdato (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
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
    'meeting' => 'meeting',
  );
  /* Filterkriterie: Indhold: Date -  startdato (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date -  start date (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-0:+1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'dagsorden';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_committee' => 'field_committee',
    'field_date' => 'field_date',
    'field_location' => 'field_location',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_committee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="help-button" title="Help text goes here"></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Overskrift: Global: View-område */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'meetings_search:block_3';
  /* Overskrift: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Avanceret søgning';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div class="meetings-advanced-search-link">Du kan søge efter fritekst <a href="/dagsorden-og-referat-avanceret" title="Advanceret søgning">her</a></div>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view_1']['id'] = 'view_1';
  $handler->display->display_options['footer']['view_1']['table'] = 'views';
  $handler->display->display_options['footer']['view_1']['field'] = 'view';
  $handler->display->display_options['footer']['view_1']['view_to_insert'] = 'meetings_search:block_2';
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'meetings_search:block_1';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['group'] = 1;
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'if (count($view->exposed_input)) {
return FALSE; 
} else { 
return TRUE; 
}';
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
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Search meta data (field_meeting_search_meta_date) */
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['id'] = 'field_meeting_search_meta_date_value';
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['table'] = 'field_data_field_meeting_search_meta_date';
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['field'] = 'field_meeting_search_meta_date_value';
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['expose']['operator_id'] = 'field_meeting_search_meta_date_value_op';
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['expose']['operator'] = 'field_meeting_search_meta_date_value_op';
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['expose']['identifier'] = 'search_params';
  /* Filterkriterie: Indhold: Date -  startdato (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'from_date';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now -30 days';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-5:+5';
  /* Filterkriterie: Indhold: Date - slutdato (field_date:value2) */
  $handler->display->display_options['filters']['field_date_value2']['id'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value2']['field'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value2']['expose']['operator_id'] = 'field_date_value2_op';
  $handler->display->display_options['filters']['field_date_value2']['expose']['label'] = 'Til';
  $handler->display->display_options['filters']['field_date_value2']['expose']['operator'] = 'field_date_value2_op';
  $handler->display->display_options['filters']['field_date_value2']['expose']['identifier'] = 'to_date';
  $handler->display->display_options['filters']['field_date_value2']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value2']['default_date'] = 'now +7 day';
  $handler->display->display_options['filters']['field_date_value2']['year_range'] = '-5:+5';
  /* Filterkriterie: Indhold: Committee (field_committee) */
  $handler->display->display_options['filters']['field_committee_tid']['id'] = 'field_committee_tid';
  $handler->display->display_options['filters']['field_committee_tid']['table'] = 'field_data_field_committee';
  $handler->display->display_options['filters']['field_committee_tid']['field'] = 'field_committee_tid';
  $handler->display->display_options['filters']['field_committee_tid']['value'] = array(
    25574 => '25574',
    25579 => '25579',
    25572 => '25572',
    25571 => '25571',
    25581 => '25581',
    25585 => '25585',
    25582 => '25582',
    25575 => '25575',
    25576 => '25576',
    25578 => '25578',
    25584 => '25584',
    25573 => '25573',
    25577 => '25577',
  );
  $handler->display->display_options['filters']['field_committee_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_committee_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_committee_tid']['expose']['operator_id'] = 'field_committee_tid_op';
  $handler->display->display_options['filters']['field_committee_tid']['expose']['operator'] = 'field_committee_tid_op';
  $handler->display->display_options['filters']['field_committee_tid']['expose']['identifier'] = 'committee';
  $handler->display->display_options['filters']['field_committee_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_committee_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_committee_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_committee_tid']['vocabulary'] = 'committee';
  /* Filterkriterie: Addenum */
  $handler->display->display_options['filters']['field_addenum_to_nid']['id'] = 'field_addenum_to_nid';
  $handler->display->display_options['filters']['field_addenum_to_nid']['table'] = 'field_data_field_addenum_to';
  $handler->display->display_options['filters']['field_addenum_to_nid']['field'] = 'field_addenum_to_nid';
  $handler->display->display_options['filters']['field_addenum_to_nid']['ui_name'] = 'Addenum';
  $handler->display->display_options['filters']['field_addenum_to_nid']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_addenum_to_nid']['group'] = 1;
  $handler->display->display_options['path'] = 'dagsorden-og-referat';

  /* Display: Kommende */
  $handler = $view->new_display('block', 'Kommende', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="help-button" title="Seneste møder i alle udvalg med publicerede referater"></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Committee */
  $handler->display->display_options['fields']['field_committee']['id'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['table'] = 'field_data_field_committee';
  $handler->display->display_options['fields']['field_committee']['field'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['label'] = 'Kommende møder med publicerede dagsordner';
  $handler->display->display_options['fields']['field_committee']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
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
    'meeting' => 'meeting',
  );
  /* Filterkriterie: Indhold: Tillæg til (field_addenum_to) */
  $handler->display->display_options['filters']['field_addenum_to_nid']['id'] = 'field_addenum_to_nid';
  $handler->display->display_options['filters']['field_addenum_to_nid']['table'] = 'field_data_field_addenum_to';
  $handler->display->display_options['filters']['field_addenum_to_nid']['field'] = 'field_addenum_to_nid';
  $handler->display->display_options['filters']['field_addenum_to_nid']['operator'] = 'empty';
  /* Filterkriterie: Indhold: Type (field_meeting_type) */
  $handler->display->display_options['filters']['field_meeting_type_value']['id'] = 'field_meeting_type_value';
  $handler->display->display_options['filters']['field_meeting_type_value']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['filters']['field_meeting_type_value']['field'] = 'field_meeting_type_value';
  $handler->display->display_options['filters']['field_meeting_type_value']['value'] = array(
    'Dagsorden' => 'Dagsorden',
  );
  /* Filterkriterie: Indhold: Date -  startdato (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';

  /* Display: Seneste */
  $handler = $view->new_display('block', 'Seneste', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Committee */
  $handler->display->display_options['fields']['field_committee']['id'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['table'] = 'field_data_field_committee';
  $handler->display->display_options['fields']['field_committee']['field'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['label'] = 'Seneste møder med publicerede referater';
  $handler->display->display_options['fields']['field_committee']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Lokation */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
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
    'meeting' => 'meeting',
  );
  /* Filterkriterie: Indhold: Tillæg til (field_addenum_to) */
  $handler->display->display_options['filters']['field_addenum_to_nid']['id'] = 'field_addenum_to_nid';
  $handler->display->display_options['filters']['field_addenum_to_nid']['table'] = 'field_data_field_addenum_to';
  $handler->display->display_options['filters']['field_addenum_to_nid']['field'] = 'field_addenum_to_nid';
  $handler->display->display_options['filters']['field_addenum_to_nid']['operator'] = 'empty';
  /* Filterkriterie: Indhold: Type (field_meeting_type) */
  $handler->display->display_options['filters']['field_meeting_type_value']['id'] = 'field_meeting_type_value';
  $handler->display->display_options['filters']['field_meeting_type_value']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['filters']['field_meeting_type_value']['field'] = 'field_meeting_type_value';
  $handler->display->display_options['filters']['field_meeting_type_value']['value'] = array(
    'Referat' => 'Referat',
  );

  /* Display: Avanceret soegning */
  $handler = $view->new_display('page', 'Avanceret soegning', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'dagsorden';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['id'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['table'] = 'field_data_field_ref_bullet_points';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['field'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'meeting/[nid]';
  /* Felt: Indhold: Committee */
  $handler->display->display_options['fields']['field_committee']['id'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['table'] = 'field_data_field_committee';
  $handler->display->display_options['fields']['field_committee']['field'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['label'] = '';
  $handler->display->display_options['fields']['field_committee']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Lokation */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Search meta data */
  $handler->display->display_options['fields']['field_meeting_search_meta_date']['id'] = 'field_meeting_search_meta_date';
  $handler->display->display_options['fields']['field_meeting_search_meta_date']['table'] = 'field_data_field_meeting_search_meta_date';
  $handler->display->display_options['fields']['field_meeting_search_meta_date']['field'] = 'field_meeting_search_meta_date';
  $handler->display->display_options['fields']['field_meeting_search_meta_date']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_search_meta_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_search_meta_date']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['group'] = 1;
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'if (count($view->exposed_input)) {
return FALSE; 
} else { 
return TRUE; 
}';
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
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Search meta data (field_meeting_search_meta_date) */
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['id'] = 'field_meeting_search_meta_date_value';
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['table'] = 'field_data_field_meeting_search_meta_date';
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['field'] = 'field_meeting_search_meta_date_value';
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['expose']['operator_id'] = 'field_meeting_search_meta_date_value_op';
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['expose']['operator'] = 'field_meeting_search_meta_date_value_op';
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['expose']['identifier'] = 'field_meeting_search_advanced_meta_date_value';
  /* Filterkriterie: Indhold: Committee (field_committee) */
  $handler->display->display_options['filters']['field_committee_tid']['id'] = 'field_committee_tid';
  $handler->display->display_options['filters']['field_committee_tid']['table'] = 'field_data_field_committee';
  $handler->display->display_options['filters']['field_committee_tid']['field'] = 'field_committee_tid';
  $handler->display->display_options['filters']['field_committee_tid']['value'] = array(
    25574 => '25574',
    25579 => '25579',
    25572 => '25572',
    25571 => '25571',
    25581 => '25581',
    25585 => '25585',
    25582 => '25582',
    25575 => '25575',
    25576 => '25576',
    25578 => '25578',
    25584 => '25584',
    25573 => '25573',
    25577 => '25577',
  );
  $handler->display->display_options['filters']['field_committee_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_committee_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_committee_tid']['expose']['operator_id'] = 'field_committee_tid_op';
  $handler->display->display_options['filters']['field_committee_tid']['expose']['operator'] = 'field_committee_tid_op';
  $handler->display->display_options['filters']['field_committee_tid']['expose']['identifier'] = 'committee';
  $handler->display->display_options['filters']['field_committee_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_committee_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_committee_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_committee_tid']['vocabulary'] = 'committee';
  /* Filterkriterie: Addenum */
  $handler->display->display_options['filters']['field_addenum_to_nid']['id'] = 'field_addenum_to_nid';
  $handler->display->display_options['filters']['field_addenum_to_nid']['table'] = 'field_data_field_addenum_to';
  $handler->display->display_options['filters']['field_addenum_to_nid']['field'] = 'field_addenum_to_nid';
  $handler->display->display_options['filters']['field_addenum_to_nid']['ui_name'] = 'Addenum';
  $handler->display->display_options['filters']['field_addenum_to_nid']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_addenum_to_nid']['group'] = 1;
  $handler->display->display_options['path'] = 'dagsorden-og-referat-avanceret';

  /* Display: Blok 3 */
  $handler = $view->new_display('block', 'Blok 3', 'block_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Rediger';
  /* Felt: Indhold: Slet-link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Fjern';
  /* Felt: Global: Kontekstuelle links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'body' => 0,
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
    'os2web_meeting_search_status' => 'os2web_meeting_search_status',
  );
  $translatables['meetings_search'] = array(
    t('Master'),
    t('Søg i dagsordener og referater'),
    t('mere'),
    t('Søg'),
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
    t('<div class="help-button" title="Help text goes here"></div>
'),
    t('Titel'),
    t('Søgeresultat'),
    t('Date -  start date (field_date)'),
    t('Page'),
    t('<div class="help-button" title="Help text goes here"></div>'),
    t('Avanceret søgning'),
    t('<div class="meetings-advanced-search-link">Du kan søge efter fritekst <a href="/dagsorden-og-referat-avanceret" title="Advanceret søgning">her</a></div>'),
    t('Til'),
    t('Kommende'),
    t('<div class="help-button" title="Seneste møder i alle udvalg med publicerede referater"></div>'),
    t('Kommende møder med publicerede dagsordner'),
    t('Seneste'),
    t('Seneste møder med publicerede referater'),
    t('Avanceret soegning'),
    t('Indhold entity refereret fra field_ref_bullet_points'),
    t('Blok 3'),
    t('Rediger'),
    t('Fjern'),
  );
  $export['meetings_search'] = $view;

  $view = new view();
  $view->name = 'seneste_8_m_der_i_de_st_ende_politiske_udvalg_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Seneste 8 møder i de stående politiske udvalg:';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Seneste 8 møder i de stående politiske udvalg';
  $handler->display->display_options['css_class'] = 'front-page-content-block';
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_meeting_status' => 'field_meeting_status',
    'title' => 'title',
    'php' => 'title',
    'field_date' => 'field_date',
    'field_location' => 'field_location',
    'field_committee' => 'field_committee',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_committee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="help-button" title="Help text goes here"></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Forbindelse: Indhold: Committee (field_committee) */
  $handler->display->display_options['relationships']['field_committee_tid']['id'] = 'field_committee_tid';
  $handler->display->display_options['relationships']['field_committee_tid']['table'] = 'field_data_field_committee';
  $handler->display->display_options['relationships']['field_committee_tid']['field'] = 'field_committee_tid';
  /* Forbindelse: Ord i ordforråd: Bruger som bruger Is part of Committee */
  $handler->display->display_options['relationships']['reverse_field_user_committee_user']['id'] = 'reverse_field_user_committee_user';
  $handler->display->display_options['relationships']['reverse_field_user_committee_user']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_user_committee_user']['field'] = 'reverse_field_user_committee_user';
  $handler->display->display_options['relationships']['reverse_field_user_committee_user']['relationship'] = 'field_committee_tid';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Status */
  $handler->display->display_options['fields']['field_meeting_status']['id'] = 'field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['table'] = 'field_data_field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['field'] = 'field_meeting_status';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: indicator - has notes */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'indicator - has notes';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$annotations = annotator_get_notes_by_meeting_id($row->nid);
if (!empty($annotations))
print("<div class=\\"indicator-has-notes\\"></div>");
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Dato';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Lokation */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Committee */
  $handler->display->display_options['fields']['field_committee']['id'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['table'] = 'field_data_field_committee';
  $handler->display->display_options['fields']['field_committee']['field'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['label'] = 'Udvalg';
  $handler->display->display_options['fields']['field_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['type'] = 'taxonomy_term_reference_plain';
  /* Sorteringskriterie: Indhold: Date -  startdato (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
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
    'meeting' => 'meeting',
  );
  /* Filterkriterie: Indhold: Regular (field_meeting_is_regular) */
  $handler->display->display_options['filters']['field_meeting_is_regular_value']['id'] = 'field_meeting_is_regular_value';
  $handler->display->display_options['filters']['field_meeting_is_regular_value']['table'] = 'field_data_field_meeting_is_regular';
  $handler->display->display_options['filters']['field_meeting_is_regular_value']['field'] = 'field_meeting_is_regular_value';
  $handler->display->display_options['filters']['field_meeting_is_regular_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['seneste_8_m_der_i_de_st_ende_politiske_udvalg_'] = array(
    t('Master'),
    t('Seneste 8 møder i de stående politiske udvalg'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<div class="help-button" title="Help text goes here"></div>'),
    t('term fra field_committee'),
    t('field_user_committee'),
    t('Status'),
    t('Titel'),
    t('PHP'),
    t('Dato'),
    t('Lokation'),
    t('Udvalg'),
    t('Block'),
  );
  $export['seneste_8_m_der_i_de_st_ende_politiske_udvalg_'] = $view;

  return $export;
}
