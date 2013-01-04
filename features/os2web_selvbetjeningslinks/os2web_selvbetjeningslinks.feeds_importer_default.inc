<?php
/**
 * @file
 * os2web_selvbetjeningslinks.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function os2web_selvbetjeningslinks_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'borger_online';
  $feeds_importer->config = array(
    'name' => 'Borgeronline',
    'description' => 'Importerer selvbetjeningslinks fra Borgeronline (Dafolo)',
    'fetcher' => array(
      'plugin_key' => 'FeedsSOAPFetcher',
      'config' => array(
        'wsdl_url' => 'https://www.borgeronline.dk/Webservice/Service.asmx?wsdl',
        'service_method_name' => 'menuXML',
        'method_parameters' => 'municipalityId=706
password=706web',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'concat( filnavn, netborger )',
          'xpathparser:1' => 'titel',
          'xpathparser:2' => 'netborger',
          'xpathparser:3' => '\'Borgeronline\'',
          'xpathparser:4' => 'concat(substring(\'https://www.borgeronline.dk/Default.aspx\',1, number(starts-with(blanketUrl, \'?municipalityId=\'))* string-length(\'https://www.borgeronline.dk/Default.aspx\')),blanketUrl)',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
        ),
        'context' => '//blanket',
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
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'selvbetjeningslinks',
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
            'target' => 'field_gruppe_id',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_kilde',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_selvbetjening_direkte',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['borger_online'] = $feeds_importer;

  return $export;
}
