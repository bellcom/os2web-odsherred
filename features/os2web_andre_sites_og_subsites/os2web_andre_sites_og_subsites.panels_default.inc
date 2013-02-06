<?php
/**
 * @file
 * os2web_andre_sites_og_subsites.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function os2web_andre_sites_og_subsites_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'andre_sider_i_odsherred_kommune';
  $mini->category = 'Odsherred';
  $mini->admin_title = 'Andre sider i Odsherred Kommune';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Andre sider i Odsherred Kommune';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Tekst til andre sider',
      'title' => 'Andre sider i Odsherred Kommune',
      'body' => '<p>&nbsp;</p><div>Her kan du få en oversigt over alle kommunens forskellige hjemmesider.&nbsp;</div><div>Lige fra Børnehaven Raketten til Brandvæsnet i Odsherred. Find en helt bestemt&nbsp;hjemmeside med søgningen i toppen, eller få en oversigt over de forskellige områder herunder.</div>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $mini->display = $display;
  $export['andre_sider_i_odsherred_kommune'] = $mini;

  return $export;
}
