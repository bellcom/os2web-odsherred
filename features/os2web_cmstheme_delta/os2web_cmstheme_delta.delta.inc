<?php
/**
 * @file
 * os2web_cmstheme_delta.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function os2web_cmstheme_delta_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'os2web_cmstheme_forside';
  $delta->name = 'OS2Web CMStheme forside';
  $delta->description = 'CMS Theme Forside';
  $delta->theme = 'cmstheme';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_cmstheme_settings' => array(
      'alpha_css' => array(
        'alpha-reset.css' => 'alpha-reset.css',
        'alpha-alpha.css' => 'alpha-alpha.css',
        'omega-text.css' => 'omega-text.css',
        'omega-branding.css' => 'omega-branding.css',
        'omega-menu.css' => 'omega-menu.css',
        'omega-forms.css' => 'omega-forms.css',
        'omega-visuals.css' => 'omega-visuals.css',
        'global.css' => 'global.css',
        'global-fs.css' => 'global-fs.css',
        'global-menu.css' => 'global-menu.css',
        'forms.css' => 'forms.css',
        'jquery.vegas.css' => 'jquery.vegas.css',
        'alpha-mobile.css' => 0,
        'global-jobcenter.css' => 0,
        'global-blue.css' => 0,
      ),
      'alpha_region_sidebar_first_zone' => NULL,
      'alpha_region_sidebar_first_equal_height_element' => FALSE,
      'alpha_region_sidebar_second_zone' => NULL,
      'alpha_region_sidebar_second_equal_height_element' => FALSE,
      'alpha_region_content_columns' => '12',
      'alpha_region_content_weight' => '0',
    ),
    'color_cmstheme_files' => NULL,
    'color_cmstheme_logo' => NULL,
    'color_cmstheme_palette' => NULL,
    'color_cmstheme_stylesheets' => NULL,
    'color_cmstheme_screenshot' => NULL,
  );
  $export['os2web_cmstheme_forside'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'os2web_theme_uden_h_jre_sidebar';
  $delta->name = 'OS2Web Theme uden højre sidebar';
  $delta->description = 'OS2Web Theme';
  $delta->theme = 'cmstheme';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_cmstheme_settings' => array(
      'alpha_region_sidebar_second_zone' => NULL,
      'alpha_region_sidebar_second_equal_height_element' => FALSE,
      'alpha_region_content_columns' => '9',
    ),
    'color_cmstheme_files' => NULL,
    'color_cmstheme_logo' => NULL,
    'color_cmstheme_palette' => NULL,
    'color_cmstheme_stylesheets' => NULL,
    'color_cmstheme_screenshot' => NULL,
  );
  $export['os2web_theme_uden_h_jre_sidebar'] = $delta;

  return $export;
}
