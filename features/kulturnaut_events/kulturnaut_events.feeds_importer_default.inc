<?php
/**
 * @file
 * kulturnaut_events.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function kulturnaut_events_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'kulturnaut_events_import';
  $feeds_importer->config = array(
    'name' => 'Kulturnaut begivenheder',
    'description' => 'Importere kulturnaut begivenheder fra Kulturnaut.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:1' => 'overskrift',
          'xpathparser:2' => 'beskrivelse',
          'xpathparser:4' => 'concat(\'http://www.djurslive.dk\', substring-after(url,\'.dk\'))',
          'xpathparser:7' => 'sted',
          'xpathparser:13' => 'startdato',
          'xpathparser:14' => 'slutdato',
          'xpathparser:15' => 'url',
        ),
        'rawXML' => array(
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:4' => 0,
          'xpathparser:7' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
        ),
        'context' => '/main/arrlist/arr',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:4' => 0,
            'xpathparser:7' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'knactivity',
        'expire' => '31536000',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:1',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_beskrivelse',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_homepage',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_stednavn',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_dato:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_dato:end',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:15',
            'target' => 'url',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['kulturnaut_events_import'] = $feeds_importer;

  return $export;
}
