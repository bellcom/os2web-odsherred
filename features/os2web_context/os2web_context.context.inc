<?php
/**
 * @file
 * os2web_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os2web_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'borgerblokke';
  $context->description = 'Borger sider';
  $context->tag = '';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'taxonomy/term/4' => 'taxonomy/term/4',
      ),
    ),
    'node' => array(
      'values' => array(
        'contentpage' => 'contentpage',
        'galleri' => 'galleri',
        'iframe_selvbetjeningsl_sning_mm' => 'iframe_selvbetjeningsl_sning_mm',
        'os2web_borger_dk_article' => 'os2web_borger_dk_article',
        'sektionsside' => 'sektionsside',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sitestuktur-block_2' => array(
          'module' => 'views',
          'delta' => 'sitestuktur-block_2',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu_block-17' => array(
          'module' => 'menu_block',
          'delta' => '17',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'borgersider',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Borger sider');
  $export['borgerblokke'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'erhvervblokke';
  $context->description = 'Erhverv sider';
  $context->tag = '';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'taxonomy/term/5' => 'taxonomy/term/5',
      ),
    ),
    'node' => array(
      'values' => array(
        'contentpage' => 'contentpage',
        'galleri' => 'galleri',
        'iframe_selvbetjeningsl_sning_mm' => 'iframe_selvbetjeningsl_sning_mm',
        'local_plan' => 'local_plan',
        'os2web_borger_dk_article' => 'os2web_borger_dk_article',
        'referat' => 'referat',
        'sektionsside' => 'sektionsside',
        'webform' => 'webform',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sitestuktur-block_3' => array(
          'module' => 'views',
          'delta' => 'sitestuktur-block_3',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu_block-15' => array(
          'module' => 'menu_block',
          'delta' => '15',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'erhvervssider',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Erhverv sider');
  $export['erhvervblokke'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'planer_og_fritid_blokke';
  $context->description = 'Planer og fritid sider';
  $context->tag = '';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'taxonomy/term/6' => 'taxonomy/term/6',
      ),
    ),
    'node' => array(
      'values' => array(
        'contentpage' => 'contentpage',
        'galleri' => 'galleri',
        'iframe_selvbetjeningsl_sning_mm' => 'iframe_selvbetjeningsl_sning_mm',
        'local_plan' => 'local_plan',
        'os2web_borger_dk_article' => 'os2web_borger_dk_article',
        'sektionsside' => 'sektionsside',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sitestuktur-block_4' => array(
          'module' => 'views',
          'delta' => 'sitestuktur-block_4',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu_block-16' => array(
          'module' => 'menu_block',
          'delta' => '16',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'politiksider',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Planer og fritid sider');
  $export['planer_og_fritid_blokke'] = $context;

  return $export;
}
