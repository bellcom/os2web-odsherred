<?php
/**
 * @file
 * os2web_planer_i_h_ring.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function os2web_planer_i_h_ring_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'hoering';
  $feeds_importer->config = array(
    'name' => 'Planer i høring',
    'description' => 'Importerer planer i høring fra GIS',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 1,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'col[@name=\'id\']/text()',
          'xpathparser:1' => 'col[@name=\'plannavn\']/text()',
          'xpathparser:2' => 'col[@name=\'doklink\']/text()',
          'xpathparser:3' => 'concat(substring(col[@name=\'datoslut\']/text(),1,4),\'-\',substring(col[@name=\'datoslut\']/text(),5,2),\'-\',substring(col[@name=\'datoslut\']/text(),7,2),\' 00:00:00\')',
          'xpathparser:4' => 'concat(substring(col[@name=\'datostart\']/text(),1,4),\'-\',substring(col[@name=\'datostart\']/text(),5,2),\'-\',substring(col[@name=\'datostart\']/text(),7,2),\' 00:00:00\')',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
        ),
        'context' => '/pcollection/pcomposite/rowlist/row',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'hoering',
        'expire' => '-1',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_slutdato:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_startdato:start',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '43200',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['hoering'] = $feeds_importer;

  return $export;
}
