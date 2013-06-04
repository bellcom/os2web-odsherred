<?php
/**
 * @file
 * odsherred_web.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function odsherred_web_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new stdClass();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'link_indhold';
  $linkit_profile->admin_title = 'Link indhold';
  $linkit_profile->data = array(
    'plugins' => array(
      'entity:node' => array(
        'weight' => '1',
        'enabled' => 1,
      ),
      'entity:taxonomy_term' => array(
        'weight' => '2',
        'enabled' => 1,
      ),
      'entity:file' => array(
        'weight' => '3',
        'enabled' => 1,
      ),
      'entity:user' => array(
        'weight' => '4',
        'enabled' => 0,
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'contentpage' => 'contentpage',
        'news' => 'news',
        'iframe_selvbetjeningsl_sning_mm' => 'iframe_selvbetjeningsl_sning_mm',
        'arp_case' => 0,
        'arp_document' => 0,
        'andre_sider' => 0,
        'baggrund' => 0,
        'rotating_image' => 0,
        'os2web_borger_dk_article' => 0,
        'borger_dk_permalink' => 0,
        'borgerservices' => 0,
        'bullet_point' => 0,
        'bullet_point_attachment' => 0,
        'files' => 0,
        'esdh_dokument' => 0,
        'esdh_sag' => 0,
        'galleri' => 0,
        'right_column' => 0,
        'institution' => 0,
        'kontaktblok' => 0,
        'knactivity' => 0,
        'local_plan' => 0,
        'media' => 0,
        'meeting' => 0,
        'os2web_meeting_search_status' => 0,
        'ofir_job' => 0,
        'panel' => 0,
        'person' => 0,
        'hoering' => 0,
        'politician' => 0,
        'politikker' => 0,
        'referat' => 0,
        'sektionsside' => 0,
        'selvbetjeningslinks' => 0,
        'speaker_paper' => 0,
        'spotbox' => 0,
        'subsites_og_sites' => 0,
        'tema' => 0,
        'webform' => 0,
      ),
      'group_by_bundle' => 0,
      'reverse_menu_trail' => 0,
      'include_unpublished' => 1,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'document' => 'document',
        'image' => 'image',
        'audio' => 0,
        'video' => 0,
      ),
      'group_by_bundle' => 0,
      'reverse_menu_trail' => 0,
      'show_scheme' => 1,
      'group_by_scheme' => 0,
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'organisation' => 'organisation',
        'site_struktur' => 0,
        'acadremmcomittee' => 0,
        'egennavne_stednavne' => 0,
        'kle' => 0,
        'politik' => 0,
        'portalkategori' => 0,
        'redaktoertags' => 0,
        'forfrem_til' => 0,
        'committee' => 0,
        'lokation' => 0,
        'meetin_status' => 0,
        'tags' => 0,
        'user_position' => 0,
        'media_folders' => 0,
        'nyhedstype' => 0,
      ),
      'group_by_bundle' => 1,
      'reverse_menu_trail' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
      'reverse_menu_trail' => 0,
    ),
    'autocomplete' => array(
      'charLimit' => 3,
      'wait' => 350,
      'remoteTimeout' => 100000,
    ),
    'attributes' => array(
      'rel' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'class' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'accesskey' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'id' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'title' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
    ),
  );
  $linkit_profile->role_rids = array(
    2 => 1,
  );
  $linkit_profile->weight = 0;
  $export['link_indhold'] = $linkit_profile;

  return $export;
}
