<?php
/**
 * @file
 * os2web_webform_downloads.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2web_webform_downloads_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taksonomi|node|webform|form';
  $field_group->group_name = 'group_taksonomi';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = '';
  $export['group_taksonomi|node|webform|form'] = $field_group;

  return $export;
}
