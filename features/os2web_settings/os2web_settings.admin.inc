<?php
/**
 * @file
 * This file describes the admin form for os21web
 *
 * @author Jesper Mathiassen <jm@bellcom.dk>
 * @copyright Bellcom Open Source aps.
 */
function os2web_settings_settings_form($form, $form_state) {
  $form['dummy'] = array(
    '#type' => 'markup',
    '#value' => 'Placeholder until more settings are needed.',
  );
  $form['themesettings'] = array(
    '#type' => 'fieldset',
    '#collapsible' => FALSE,
    '#title' => 'Display settings',
    '#description' => 'Settings for theme and layout',
  );
  $form['themesettings']['os2web_default_menu'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('os2web_default_menu', 'navigation'),
    '#title' => t('Default menu for first sidebar'),
    '#description' => t('Machine name for the menu to be inserted in blank left sidebars'),
  );

  // Proxy setups
  $form['os2web_pws_proxy_group'] = array(
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    '#collapsed' => !variable_get('os2web_pws_proxy'),
    '#title' => t('Proxy configuration'),
    '#weight' => 10,
  );
  $form['os2web_pws_proxy_group']['os2web_pws_proxy'] = array(
    '#type' => 'checkbox',
    '#default_value' => variable_get('os2web_pws_proxy'),
    '#title' => t('Use proxy?'),
  );
  $form['os2web_pws_proxy_group']['os2web_pws_proxy_host'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('os2web_pws_proxy_host'),
    '#title' => t('Proxy hostname or IP'),
  );
  $form['os2web_pws_proxy_group']['os2web_pws_proxy_port'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('os2web_pws_proxy_port'),
    '#title' => t('Proxy port number.'),
  );
  return system_settings_form($form);
}
