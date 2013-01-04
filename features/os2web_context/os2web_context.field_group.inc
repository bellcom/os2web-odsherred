<?php
/**
 * @file
 * os2web_context.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2web_context_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taksonomi|node|esdh_dokument|form';
  $field_group->group_name = 'group_taksonomi';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'esdh_dokument';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = '';
  $export['group_taksonomi|node|esdh_dokument|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|esdh_sag|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'esdh_sag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = '';
  $export['group_taxonomy|node|esdh_sag|form'] = $field_group;

  return $export;
}
