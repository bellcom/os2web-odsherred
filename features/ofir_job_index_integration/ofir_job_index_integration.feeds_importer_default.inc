<?php
/**
 * @file
 * ofir_job_index_integration.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ofir_job_index_integration_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ofir_job_import';
  $feeds_importer->config = array(
    'name' => 'Ofir jobs',
    'description' => 'Importere job opslag fra Ofir.',
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
          'xpathparser:0' => '@id',
          'xpathparser:1' => 'title',
          'xpathparser:2' => 'concat(substring(fromDate,1,4),\'-\',substring(fromDate,5,2),\'-\',substring(fromDate,7,2))',
          'xpathparser:3' => 'concat(substring(toDate,1,4),\'-\',substring(toDate,5,2),\'-\',substring(toDate,7,2))',
          'xpathparser:4' => 'text',
          'xpathparser:5' => 'logofile',
          'xpathparser:6' => 'logofile',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
        ),
        'context' => '/ofirjobs/job',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'ofir_job',
        'expire' => '31536000',
        'author' => '1',
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
            'target' => 'field_period:start',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_period:end',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_text',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_logo',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '10800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['ofir_job_import'] = $feeds_importer;

  return $export;
}
