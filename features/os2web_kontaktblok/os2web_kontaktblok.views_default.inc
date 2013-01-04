<?php
/**
 * @file
 * os2web_kontaktblok.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_kontaktblok_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kontaktblok';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Kontaktblok';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kontakt';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/kontakt" title="Gå til kontaktoversigt">Gå til kontaktoversigt</a>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Kontakt [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'kontaktblok-overskrift';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Afdeling */
  $handler->display->display_options['fields']['field_afdeling']['id'] = 'field_afdeling';
  $handler->display->display_options['fields']['field_afdeling']['table'] = 'field_data_field_afdeling';
  $handler->display->display_options['fields']['field_afdeling']['field'] = 'field_afdeling';
  $handler->display->display_options['fields']['field_afdeling']['label'] = '';
  $handler->display->display_options['fields']['field_afdeling']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_afdeling']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_afdeling']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Sted Adresse */
  $handler->display->display_options['fields']['field_stedadresse']['id'] = 'field_stedadresse';
  $handler->display->display_options['fields']['field_stedadresse']['table'] = 'field_data_field_stedadresse';
  $handler->display->display_options['fields']['field_stedadresse']['field'] = 'field_stedadresse';
  $handler->display->display_options['fields']['field_stedadresse']['label'] = '';
  $handler->display->display_options['fields']['field_stedadresse']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Sted Postnr */
  $handler->display->display_options['fields']['field_stedpostnr']['id'] = 'field_stedpostnr';
  $handler->display->display_options['fields']['field_stedpostnr']['table'] = 'field_data_field_stedpostnr';
  $handler->display->display_options['fields']['field_stedpostnr']['field'] = 'field_stedpostnr';
  $handler->display->display_options['fields']['field_stedpostnr']['label'] = '';
  $handler->display->display_options['fields']['field_stedpostnr']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Eget indhold */
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['id'] = 'field_kontaktblok_egetindhold';
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['table'] = 'field_data_field_kontaktblok_egetindhold';
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['field'] = 'field_kontaktblok_egetindhold';
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Telefonnummer */
  $handler->display->display_options['fields']['field_phone1']['id'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['table'] = 'field_data_field_phone1';
  $handler->display->display_options['fields']['field_phone1']['field'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['label'] = '';
  $handler->display->display_options['fields']['field_phone1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone1']['alter']['text'] = '<a id="tlf" href="tel:[field_phone1]" title="Telefon: [field_phone1]">[field_phone1]</a>';
  $handler->display->display_options['fields']['field_phone1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_phone1']['element_class'] = 'telefonnummer, kontaktblok-indhold';
  $handler->display->display_options['fields']['field_phone1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_phone1']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_phone1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Felt: Indhold: Man-Ons, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_manolk']['id'] = 'field_kontaktblok_aa_manolk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manolk']['table'] = 'field_data_field_kontaktblok_aa_manolk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manolk']['field'] = 'field_kontaktblok_aa_manolk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manolk']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manolk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manolk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manolk']['alter']['text'] = ' - [field_kontaktblok_aa_manolk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manolk']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manolk']['hide_empty'] = TRUE;
  /* Felt: Indhold: Man-Ons, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_manons']['id'] = 'field_kontaktblok_aa_manons';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manons']['table'] = 'field_data_field_kontaktblok_aa_manons';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manons']['field'] = 'field_kontaktblok_aa_manons';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manons']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manons']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manons']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manons']['alter']['text'] = '<div class="dag">Mandag - onsdag:</div><div class="aaben"> [field_kontaktblok_aa_manons][field_kontaktblok_aa_manolk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manons']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manons']['hide_empty'] = TRUE;
  /* Felt: Indhold: Mandag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['id'] = 'field_kontaktblok_aa_manlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['table'] = 'field_data_field_kontaktblok_aa_manlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['field'] = 'field_kontaktblok_aa_manlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['alter']['text'] = ' - [field_kontaktblok_aa_manlk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['hide_empty'] = TRUE;
  /* Felt: Indhold: Mandag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['id'] = 'field_kontaktblok_aa_manaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['table'] = 'field_data_field_kontaktblok_aa_manaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['field'] = 'field_kontaktblok_aa_manaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['alter']['text'] = '<div class="dag">Mandag:</div><div class="aaben"> [field_kontaktblok_aa_manaa][field_kontaktblok_aa_manlk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['hide_empty'] = TRUE;
  /* Felt: Indhold: Tirsdag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['id'] = 'field_kontaktblok_aa_tirlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['table'] = 'field_data_field_kontaktblok_aa_tirlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['field'] = 'field_kontaktblok_aa_tirlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['alter']['text'] = ' - [field_kontaktblok_aa_tirlk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['hide_empty'] = TRUE;
  /* Felt: Indhold: Tirsdag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['id'] = 'field_kontaktblok_aa_tiraa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['table'] = 'field_data_field_kontaktblok_aa_tiraa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['field'] = 'field_kontaktblok_aa_tiraa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['alter']['text'] = '<div class="dag">Tirsdag:</div><div class="aaben"> [field_kontaktblok_aa_tiraa][field_kontaktblok_aa_tirlk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['hide_empty'] = TRUE;
  /* Felt: Indhold: Onsdag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['id'] = 'field_kontaktblok_aa_onslk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['table'] = 'field_data_field_kontaktblok_aa_onslk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['field'] = 'field_kontaktblok_aa_onslk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['alter']['text'] = ' - [field_kontaktblok_aa_onslk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['hide_empty'] = TRUE;
  /* Felt: Indhold: Onsdag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['id'] = 'field_kontaktblok_aa_onsaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['table'] = 'field_data_field_kontaktblok_aa_onsaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['field'] = 'field_kontaktblok_aa_onsaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['alter']['text'] = '<div class="dag">Onsdag:</div><div class="aaben"> [field_kontaktblok_aa_onsaa][field_kontaktblok_aa_onslk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['hide_empty'] = TRUE;
  /* Felt: Indhold: Torsdag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['id'] = 'field_kontaktblok_aa_torlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['table'] = 'field_data_field_kontaktblok_aa_torlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['field'] = 'field_kontaktblok_aa_torlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['alter']['text'] = ' - [field_kontaktblok_aa_torlk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['hide_empty'] = TRUE;
  /* Felt: Indhold: Torsdag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['id'] = 'field_kontaktblok_aa_toraa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['table'] = 'field_data_field_kontaktblok_aa_toraa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['field'] = 'field_kontaktblok_aa_toraa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['alter']['text'] = '<div class="dag">Torsdag:</div><div class="aaben"> [field_kontaktblok_aa_toraa][field_kontaktblok_aa_torlk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['hide_empty'] = TRUE;
  /* Felt: Indhold: Fredag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['id'] = 'field_kontaktblok_aa_frelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['table'] = 'field_data_field_kontaktblok_aa_frelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['field'] = 'field_kontaktblok_aa_frelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['alter']['text'] = ' - [field_kontaktblok_aa_frelk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['hide_empty'] = TRUE;
  /* Felt: Indhold: Fredag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['id'] = 'field_kontaktblok_aa_freaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['table'] = 'field_data_field_kontaktblok_aa_freaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['field'] = 'field_kontaktblok_aa_freaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['alter']['text'] = '<div class="dag">Fredag:</div><div class="aaben"> [field_kontaktblok_aa_freaa][field_kontaktblok_aa_frelk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['hide_empty'] = TRUE;
  /* Felt: Indhold: Lørdag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['id'] = 'field_kontaktblok_aa_loelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['table'] = 'field_data_field_kontaktblok_aa_loelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['field'] = 'field_kontaktblok_aa_loelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['alter']['text'] = ' - [field_kontaktblok_aa_loelk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['hide_empty'] = TRUE;
  /* Felt: Indhold: Lørdag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['id'] = 'field_kontaktblok_aa_loeaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['table'] = 'field_data_field_kontaktblok_aa_loeaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['field'] = 'field_kontaktblok_aa_loeaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['alter']['text'] = '<div class="dag">Lørdag:</div><div class="aaben"> [field_kontaktblok_aa_loeaa][field_kontaktblok_aa_loelk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['hide_empty'] = TRUE;
  /* Felt: Indhold: Søndag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['id'] = 'field_kontaktblok_aa_soelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['table'] = 'field_data_field_kontaktblok_aa_soelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['field'] = 'field_kontaktblok_aa_soelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['alter']['text'] = ' - [field_kontaktblok_aa_freaa][field_kontaktblok_aa_frelk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['hide_empty'] = TRUE;
  /* Felt: Indhold: Søndag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['id'] = 'field_kontaktblok_aa_soeaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['table'] = 'field_data_field_kontaktblok_aa_soeaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['field'] = 'field_kontaktblok_aa_soeaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['alter']['text'] = '<div class="dag">Søndag:</div><div class="aaben"> [field_kontaktblok_aa_soeaa][field_kontaktblok_aa_soelk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['hide_empty'] = TRUE;
  /* Felt: Indhold: Vis åbningstider */
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['id'] = 'field_kontaktblok_vis_aabnen';
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['table'] = 'field_data_field_kontaktblok_vis_aabnen';
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['field'] = 'field_kontaktblok_vis_aabnen';
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['alter']['text'] = '[field_kontaktblok_aa_manons]
[field_kontaktblok_aa_manaa]
[field_kontaktblok_aa_tiraa]
[field_kontaktblok_aa_onsaa]
[field_kontaktblok_aa_toraa]
[field_kontaktblok_aa_freaa]
[field_kontaktblok_aa_loeaa]
[field_kontaktblok_aa_soeaa] ';
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['element_class'] = 'aabningstider';
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Vis Callcenter */
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['id'] = 'field_kontaktblok_callcenter';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['table'] = 'field_data_field_kontaktblok_callcenter';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['field'] = 'field_kontaktblok_callcenter';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['alter']['text'] = '<h3>Callcenter</h3>
<div class="telfonnummer"><a href="tel:87535000">87 53 50 00</a></div>
<div class="dag">Mandag-onsdag:</div><div class="aaben">08.30 - 15.00</div>
<div class="dag">Torsdag:</div><div class="aaben"> 08.30 - 17.00</div>
<div class="dag">Fredag:</div><div class="aaben> 08.30 - 12.00</div>

<p>Borgerservice i Hornslet og Ebeltoft har lukket fredag.</p>

<p>Du kan få hjælp til selvbetjening på <a href="http://bibliotek.syddjurs.dk">bibliotekerne</a>.</p>';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['element_label_class'] = 'kontaktblok-indhold';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['empty_zero'] = TRUE;
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
    'title' => 0,
    'field_afdeling' => 0,
    'field_stedadresse' => 0,
    'field_stedpostnr' => 0,
    'field_kontaktblok_egetindhold' => 0,
    'field_email' => 0,
    'field_phone1' => 0,
    'field_kontaktblok_aa_manolk' => 0,
    'field_kontaktblok_aa_manons' => 0,
    'field_kontaktblok_aa_manlk' => 0,
    'field_kontaktblok_aa_manaa' => 0,
    'field_kontaktblok_aa_tirlk' => 0,
    'field_kontaktblok_aa_tiraa' => 0,
    'field_kontaktblok_aa_onslk' => 0,
    'field_kontaktblok_aa_onsaa' => 0,
    'field_kontaktblok_aa_torlk' => 0,
    'field_kontaktblok_aa_toraa' => 0,
    'field_kontaktblok_aa_frelk' => 0,
    'field_kontaktblok_aa_freaa' => 0,
    'field_kontaktblok_aa_loelk' => 0,
    'field_kontaktblok_aa_loeaa' => 0,
    'field_kontaktblok_aa_soelk' => 0,
    'field_kontaktblok_aa_soeaa' => 0,
    'field_kontaktblok_vis_aabnen' => 0,
    'field_kontaktblok_callcenter' => 0,
  );
  /* Felt: Indhold: Vis åbningstider */
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen_1']['id'] = 'field_kontaktblok_vis_aabnen_1';
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen_1']['table'] = 'field_data_field_kontaktblok_vis_aabnen';
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen_1']['field'] = 'field_kontaktblok_vis_aabnen';
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen_1']['exclude'] = TRUE;
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
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = 'if (function_exists(\'os2web_kontaktblok_get_block\')) {
return os2web_kontaktblok_get_block();
}';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'kontaktblok' => 'kontaktblok',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Kontakt [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'kontaktblok-overskrift';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Afdeling */
  $handler->display->display_options['fields']['field_afdeling']['id'] = 'field_afdeling';
  $handler->display->display_options['fields']['field_afdeling']['table'] = 'field_data_field_afdeling';
  $handler->display->display_options['fields']['field_afdeling']['field'] = 'field_afdeling';
  $handler->display->display_options['fields']['field_afdeling']['label'] = '';
  $handler->display->display_options['fields']['field_afdeling']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_afdeling']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_afdeling']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Sted Adresse */
  $handler->display->display_options['fields']['field_stedadresse']['id'] = 'field_stedadresse';
  $handler->display->display_options['fields']['field_stedadresse']['table'] = 'field_data_field_stedadresse';
  $handler->display->display_options['fields']['field_stedadresse']['field'] = 'field_stedadresse';
  $handler->display->display_options['fields']['field_stedadresse']['label'] = '';
  $handler->display->display_options['fields']['field_stedadresse']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Sted Postnr */
  $handler->display->display_options['fields']['field_stedpostnr']['id'] = 'field_stedpostnr';
  $handler->display->display_options['fields']['field_stedpostnr']['table'] = 'field_data_field_stedpostnr';
  $handler->display->display_options['fields']['field_stedpostnr']['field'] = 'field_stedpostnr';
  $handler->display->display_options['fields']['field_stedpostnr']['label'] = '';
  $handler->display->display_options['fields']['field_stedpostnr']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<a href="mailto:[field_email-value]">[field_email]</a>';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Eget indhold */
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['id'] = 'field_kontaktblok_egetindhold';
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['table'] = 'field_data_field_kontaktblok_egetindhold';
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['field'] = 'field_kontaktblok_egetindhold';
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Telefonnummer */
  $handler->display->display_options['fields']['field_phone1']['id'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['table'] = 'field_data_field_phone1';
  $handler->display->display_options['fields']['field_phone1']['field'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['label'] = '';
  $handler->display->display_options['fields']['field_phone1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone1']['alter']['text'] = '<a id="tlf" href="tel:[field_phone1]" title="Telefon: [field_phone1]">[field_phone1]</a>';
  $handler->display->display_options['fields']['field_phone1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_phone1']['element_class'] = 'telefonnummer, kontaktblok-indhold';
  $handler->display->display_options['fields']['field_phone1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_phone1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_phone1']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_phone1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Felt: Indhold: Man-Ons, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_manolk']['id'] = 'field_kontaktblok_aa_manolk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manolk']['table'] = 'field_data_field_kontaktblok_aa_manolk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manolk']['field'] = 'field_kontaktblok_aa_manolk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manolk']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manolk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manolk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manolk']['alter']['text'] = ' - [field_kontaktblok_aa_manolk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manolk']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manolk']['hide_empty'] = TRUE;
  /* Felt: Indhold: Man-Ons, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_manons']['id'] = 'field_kontaktblok_aa_manons';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manons']['table'] = 'field_data_field_kontaktblok_aa_manons';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manons']['field'] = 'field_kontaktblok_aa_manons';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manons']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manons']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manons']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manons']['alter']['text'] = '<div class="dag">Mandag - onsdag:</div><div class="aaben"> [field_kontaktblok_aa_manons][field_kontaktblok_aa_manolk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manons']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manons']['hide_empty'] = TRUE;
  /* Felt: Indhold: Mandag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['id'] = 'field_kontaktblok_aa_manlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['table'] = 'field_data_field_kontaktblok_aa_manlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['field'] = 'field_kontaktblok_aa_manlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['alter']['text'] = ' - [field_kontaktblok_aa_manlk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['hide_empty'] = TRUE;
  /* Felt: Indhold: Mandag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['id'] = 'field_kontaktblok_aa_manaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['table'] = 'field_data_field_kontaktblok_aa_manaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['field'] = 'field_kontaktblok_aa_manaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['alter']['text'] = '<div class="dag">Mandag:</div><div class="aaben"> [field_kontaktblok_aa_manaa][field_kontaktblok_aa_manlk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['hide_empty'] = TRUE;
  /* Felt: Indhold: Tirsdag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['id'] = 'field_kontaktblok_aa_tirlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['table'] = 'field_data_field_kontaktblok_aa_tirlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['field'] = 'field_kontaktblok_aa_tirlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['alter']['text'] = ' - [field_kontaktblok_aa_tirlk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['hide_empty'] = TRUE;
  /* Felt: Indhold: Tirsdag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['id'] = 'field_kontaktblok_aa_tiraa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['table'] = 'field_data_field_kontaktblok_aa_tiraa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['field'] = 'field_kontaktblok_aa_tiraa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['alter']['text'] = '<div class="dag">Tirsdag:</div><div class="aaben"> [field_kontaktblok_aa_tiraa][field_kontaktblok_aa_tirlk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['hide_empty'] = TRUE;
  /* Felt: Indhold: Onsdag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['id'] = 'field_kontaktblok_aa_onslk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['table'] = 'field_data_field_kontaktblok_aa_onslk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['field'] = 'field_kontaktblok_aa_onslk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['alter']['text'] = ' - [field_kontaktblok_aa_onslk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['hide_empty'] = TRUE;
  /* Felt: Indhold: Onsdag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['id'] = 'field_kontaktblok_aa_onsaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['table'] = 'field_data_field_kontaktblok_aa_onsaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['field'] = 'field_kontaktblok_aa_onsaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['alter']['text'] = '<div class="dag">Onsdag:</div><div class="aaben"> [field_kontaktblok_aa_onsaa][field_kontaktblok_aa_onslk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['hide_empty'] = TRUE;
  /* Felt: Indhold: Torsdag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['id'] = 'field_kontaktblok_aa_torlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['table'] = 'field_data_field_kontaktblok_aa_torlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['field'] = 'field_kontaktblok_aa_torlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['alter']['text'] = ' - [field_kontaktblok_aa_torlk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['hide_empty'] = TRUE;
  /* Felt: Indhold: Torsdag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['id'] = 'field_kontaktblok_aa_toraa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['table'] = 'field_data_field_kontaktblok_aa_toraa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['field'] = 'field_kontaktblok_aa_toraa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['alter']['text'] = '<div class="dag">Torsdag:</div><div class="aaben"> [field_kontaktblok_aa_toraa][field_kontaktblok_aa_torlk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['hide_empty'] = TRUE;
  /* Felt: Indhold: Fredag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['id'] = 'field_kontaktblok_aa_frelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['table'] = 'field_data_field_kontaktblok_aa_frelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['field'] = 'field_kontaktblok_aa_frelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['alter']['text'] = ' - [field_kontaktblok_aa_frelk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['hide_empty'] = TRUE;
  /* Felt: Indhold: Fredag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['id'] = 'field_kontaktblok_aa_freaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['table'] = 'field_data_field_kontaktblok_aa_freaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['field'] = 'field_kontaktblok_aa_freaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['alter']['text'] = '<div class="dag">Fredag:</div><div class="aaben"> [field_kontaktblok_aa_freaa][field_kontaktblok_aa_frelk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['hide_empty'] = TRUE;
  /* Felt: Indhold: Lørdag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['id'] = 'field_kontaktblok_aa_loelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['table'] = 'field_data_field_kontaktblok_aa_loelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['field'] = 'field_kontaktblok_aa_loelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['alter']['text'] = ' - [field_kontaktblok_aa_loelk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['hide_empty'] = TRUE;
  /* Felt: Indhold: Lørdag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['id'] = 'field_kontaktblok_aa_loeaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['table'] = 'field_data_field_kontaktblok_aa_loeaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['field'] = 'field_kontaktblok_aa_loeaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['alter']['text'] = '<div class="dag">Lørdag:</div><div class="aaben"> [field_kontaktblok_aa_loeaa][field_kontaktblok_aa_loelk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['hide_empty'] = TRUE;
  /* Felt: Indhold: Søndag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['id'] = 'field_kontaktblok_aa_soelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['table'] = 'field_data_field_kontaktblok_aa_soelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['field'] = 'field_kontaktblok_aa_soelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['alter']['text'] = ' - [field_kontaktblok_aa_freaa][field_kontaktblok_aa_frelk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['hide_empty'] = TRUE;
  /* Felt: Indhold: Søndag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['id'] = 'field_kontaktblok_aa_soeaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['table'] = 'field_data_field_kontaktblok_aa_soeaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['field'] = 'field_kontaktblok_aa_soeaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['alter']['text'] = '<div class="dag">Søndag:</div><div class="aaben"> [field_kontaktblok_aa_soeaa][field_kontaktblok_aa_soelk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['hide_empty'] = TRUE;
  /* Felt: Indhold: Vis åbningstider */
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen_1']['id'] = 'field_kontaktblok_vis_aabnen_1';
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen_1']['table'] = 'field_data_field_kontaktblok_vis_aabnen';
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen_1']['field'] = 'field_kontaktblok_vis_aabnen';
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen_1']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen_1']['alter']['text'] = '<h3>Åbningstider</h3>
[field_kontaktblok_aa_manons]
[field_kontaktblok_aa_manaa]
[field_kontaktblok_aa_tiraa]
[field_kontaktblok_aa_onsaa]
[field_kontaktblok_aa_toraa]
[field_kontaktblok_aa_freaa]
[field_kontaktblok_aa_loeaa]
[field_kontaktblok_aa_soeaa] ';
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen_1']['empty_zero'] = TRUE;
  /* Felt: Indhold: Vis Callcenter */
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['id'] = 'field_kontaktblok_callcenter';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['table'] = 'field_data_field_kontaktblok_callcenter';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['field'] = 'field_kontaktblok_callcenter';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['alter']['text'] = '<h3>Callcenter</h3>
<div class="telfonnummer"><a href="tel:87535000">87 53 50 00</a></div>
<div class="dag">Mandag-onsdag:</div><div class="aaben">08.30 - 15.00</div>
<div class="dag">Torsdag:</div><div class="aaben"> 08.30 - 17.00</div>
<div class="dag">Fredag:</div><div class="aaben> 08.30 - 12.00</div>

<p>Borgerservice i Hornslet og Ebeltoft har lukket fredag.</p>

<p>Du kan få hjælp til selvbetjening på bibliotekerne. Besøg bibliotekets hjemmeside <a href="http://bibliotek.syddjurs.dk">her</a></p>';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['element_label_class'] = 'kontaktblok-indhold';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['empty_zero'] = TRUE;
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
    'title' => 0,
    'field_afdeling' => 0,
    'field_stedadresse' => 0,
    'field_stedpostnr' => 0,
    'field_kontaktblok_egetindhold' => 0,
    'field_email' => 0,
    'field_phone1' => 0,
    'field_kontaktblok_aa_manolk' => 0,
    'field_kontaktblok_aa_manons' => 0,
    'field_kontaktblok_aa_manlk' => 0,
    'field_kontaktblok_aa_manaa' => 0,
    'field_kontaktblok_aa_tirlk' => 0,
    'field_kontaktblok_aa_tiraa' => 0,
    'field_kontaktblok_aa_onslk' => 0,
    'field_kontaktblok_aa_onsaa' => 0,
    'field_kontaktblok_aa_torlk' => 0,
    'field_kontaktblok_aa_toraa' => 0,
    'field_kontaktblok_aa_frelk' => 0,
    'field_kontaktblok_aa_freaa' => 0,
    'field_kontaktblok_aa_loelk' => 0,
    'field_kontaktblok_aa_loeaa' => 0,
    'field_kontaktblok_aa_soelk' => 0,
    'field_kontaktblok_aa_soeaa' => 0,
    'field_kontaktblok_vis_aabnen' => 0,
    'field_kontaktblok_callcenter' => 0,
  );

  /* Display: Kontaktblok */
  $handler = $view->new_display('panel_pane', 'Kontaktblok', 'panel_pane_1');
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
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );
  $translatables['kontaktblok'] = array(
    t('Master'),
    t('Kontakt'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<a href="/kontakt" title="Gå til kontaktoversigt">Gå til kontaktoversigt</a>'),
    t('Kontakt [title]'),
    t('<a id="tlf" href="tel:[field_phone1]" title="Telefon: [field_phone1]">[field_phone1]</a>'),
    t(' - [field_kontaktblok_aa_manolk]'),
    t('<div class="dag">Mandag - onsdag:</div><div class="aaben"> [field_kontaktblok_aa_manons][field_kontaktblok_aa_manolk]</div>'),
    t('Mandag, lukker'),
    t(' - [field_kontaktblok_aa_manlk]'),
    t('<div class="dag">Mandag:</div><div class="aaben"> [field_kontaktblok_aa_manaa][field_kontaktblok_aa_manlk]</div>'),
    t('Tirsdag, lukker'),
    t(' - [field_kontaktblok_aa_tirlk]'),
    t('<div class="dag">Tirsdag:</div><div class="aaben"> [field_kontaktblok_aa_tiraa][field_kontaktblok_aa_tirlk]</div>'),
    t('Onsdag, lukker'),
    t(' - [field_kontaktblok_aa_onslk]'),
    t('<div class="dag">Onsdag:</div><div class="aaben"> [field_kontaktblok_aa_onsaa][field_kontaktblok_aa_onslk]</div>'),
    t('Torsdag, lukker'),
    t(' - [field_kontaktblok_aa_torlk]'),
    t('<div class="dag">Torsdag:</div><div class="aaben"> [field_kontaktblok_aa_toraa][field_kontaktblok_aa_torlk]</div>'),
    t('Fredag, lukker'),
    t(' - [field_kontaktblok_aa_frelk]'),
    t('<div class="dag">Fredag:</div><div class="aaben"> [field_kontaktblok_aa_freaa][field_kontaktblok_aa_frelk]</div>'),
    t('Lørdag, lukker'),
    t(' - [field_kontaktblok_aa_loelk]'),
    t('<div class="dag">Lørdag:</div><div class="aaben"> [field_kontaktblok_aa_loeaa][field_kontaktblok_aa_loelk]</div>'),
    t('Søndag, lukker'),
    t(' - [field_kontaktblok_aa_freaa][field_kontaktblok_aa_frelk]'),
    t('<div class="dag">Søndag:</div><div class="aaben"> [field_kontaktblok_aa_soeaa][field_kontaktblok_aa_soelk]</div>'),
    t('[field_kontaktblok_aa_manons]
[field_kontaktblok_aa_manaa]
[field_kontaktblok_aa_tiraa]
[field_kontaktblok_aa_onsaa]
[field_kontaktblok_aa_toraa]
[field_kontaktblok_aa_freaa]
[field_kontaktblok_aa_loeaa]
[field_kontaktblok_aa_soeaa] '),
    t('<h3>Callcenter</h3>
<div class="telfonnummer"><a href="tel:87535000">87 53 50 00</a></div>
<div class="dag">Mandag-onsdag:</div><div class="aaben">08.30 - 15.00</div>
<div class="dag">Torsdag:</div><div class="aaben"> 08.30 - 17.00</div>
<div class="dag">Fredag:</div><div class="aaben> 08.30 - 12.00</div>

<p>Borgerservice i Hornslet og Ebeltoft har lukket fredag.</p>

<p>Du kan få hjælp til selvbetjening på <a href="http://bibliotek.syddjurs.dk">bibliotekerne</a>.</p>'),
    t('Vis åbningstider'),
    t('Alle'),
    t('Block'),
    t('<a href="mailto:[field_email-value]">[field_email]</a>'),
    t('<h3>Åbningstider</h3>
[field_kontaktblok_aa_manons]
[field_kontaktblok_aa_manaa]
[field_kontaktblok_aa_tiraa]
[field_kontaktblok_aa_onsaa]
[field_kontaktblok_aa_toraa]
[field_kontaktblok_aa_freaa]
[field_kontaktblok_aa_loeaa]
[field_kontaktblok_aa_soeaa] '),
    t('<h3>Callcenter</h3>
<div class="telfonnummer"><a href="tel:87535000">87 53 50 00</a></div>
<div class="dag">Mandag-onsdag:</div><div class="aaben">08.30 - 15.00</div>
<div class="dag">Torsdag:</div><div class="aaben"> 08.30 - 17.00</div>
<div class="dag">Fredag:</div><div class="aaben> 08.30 - 12.00</div>

<p>Borgerservice i Hornslet og Ebeltoft har lukket fredag.</p>

<p>Du kan få hjælp til selvbetjening på bibliotekerne. Besøg bibliotekets hjemmeside <a href="http://bibliotek.syddjurs.dk">her</a></p>'),
    t('Kontaktblok'),
    t('View panes'),
  );
  $export['kontaktblok'] = $view;

  return $export;
}
