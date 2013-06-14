<?php
/**
 * @file
 * odsherred_web.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function odsherred_web_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'odsherred_forsiden';
  $delta->name = 'Odsherred Forsiden';
  $delta->description = '';
  $delta->theme = 'odsherredweb';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_odsherredweb_settings' => array(
      'toggle_secondary_menu' => 1,
      'default_favicon' => 1,
      'favicon_path' => '',
      'alpha_css' => array(
        'alpha-reset.css' => 'alpha-reset.css',
        'alpha-mobile.css' => 'alpha-mobile.css',
        'alpha-alpha.css' => 'alpha-alpha.css',
        'omega-text.css' => 'omega-text.css',
        'omega-branding.css' => 'omega-branding.css',
        'omega-menu.css' => 'omega-menu.css',
        'omega-forms.css' => 'omega-forms.css',
        'omega-visuals.css' => 'omega-visuals.css',
        'global.css' => 'global.css',
        'jquery.vegas.css' => 'jquery.vegas.css',
        'global-fs.css' => 0,
        'global-menu.css' => 0,
        'global-jobcenter.css' => 0,
        'global-blue.css' => 0,
        'forms.css' => 0,
      ),
      'alpha_debug_block_active' => 0,
      'alpha_debug_grid_roles' => array(
        1 => '1',
        2 => '2',
        6 => 0,
        4 => 0,
        7 => 0,
        3 => 0,
        5 => 0,
        8 => 0,
        12 => 0,
        11 => 0,
        15 => 0,
      ),
      'alpha_region_header_first_prefix' => '1',
      'alpha_region_header_first_columns' => '7',
    ),
    'color_odsherredweb_files' => NULL,
    'color_odsherredweb_logo' => NULL,
    'color_odsherredweb_palette' => NULL,
    'color_odsherredweb_stylesheets' => NULL,
    'color_odsherredweb_screenshot' => NULL,
  );
  $export['odsherred_forsiden'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'odshrred_forside';
  $delta->name = 'odshrred forside';
  $delta->description = '';
  $delta->theme = 'odsherredweb';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_odsherredweb_settings' => array(
      'toggle_secondary_menu' => 1,
      'favicon_path' => 'public://favicon_0.ico',
      'alpha_css' => array(
        'alpha-reset.css' => 'alpha-reset.css',
        'alpha-mobile.css' => 'alpha-mobile.css',
        'alpha-alpha.css' => 'alpha-alpha.css',
        'omega-text.css' => 'omega-text.css',
        'omega-branding.css' => 'omega-branding.css',
        'omega-menu.css' => 'omega-menu.css',
        'omega-forms.css' => 'omega-forms.css',
        'omega-visuals.css' => 'omega-visuals.css',
        'global.css' => 'global.css',
        'jquery.vegas.css' => 'jquery.vegas.css',
        'global-fs.css' => 0,
        'global-menu.css' => 0,
        'global-jobcenter.css' => 0,
        'global-blue.css' => 0,
        'forms.css' => 0,
      ),
      'alpha_debug_block_active' => 0,
      'alpha_debug_grid_roles' => array(
        1 => '1',
        2 => '2',
        6 => 0,
        4 => 0,
        7 => 0,
        3 => 0,
        5 => 0,
        8 => 0,
        12 => 0,
        10 => 0,
        9 => 0,
        14 => 0,
        13 => 0,
        11 => 0,
      ),
      'alpha_region_sidebar_first_zone' => 'postscript',
      'alpha_region_sidebar_first_columns' => '1',
      'alpha_zone_header_wrapper' => 0,
      'alpha_zone_header_section' => NULL,
      'alpha_region_content_columns' => '12',
    ),
    'color_odsherredweb_files' => NULL,
    'color_odsherredweb_logo' => NULL,
    'color_odsherredweb_palette' => NULL,
    'color_odsherredweb_stylesheets' => NULL,
    'color_odsherredweb_screenshot' => NULL,
  );
  $export['odshrred_forside'] = $delta;

  return $export;
}
