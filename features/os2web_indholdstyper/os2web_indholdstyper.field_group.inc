<?php
/**
 * @file
 * os2web_indholdstyper.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2web_indholdstyper_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_billeder|node|contentpage|form';
  $field_group->group_name = 'group_billeder';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indholdsside';
  $field_group->data = array(
    'label' => 'Billeder og filer',
    'weight' => '5',
    'children' => array(
      0 => 'field_lead_image',
      1 => 'field_mediafile',
      2 => 'field_billede',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_billeder|node|contentpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_billede|node|news|form';
  $field_group->group_name = 'group_billede';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Billede',
    'weight' => '1',
    'children' => array(
      0 => 'field_lead_image',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'label' => 'Billede',
    ),
  );
  $export['group_billede|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_document|node|contentpage|default';
  $field_group->group_name = 'group_document';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hentet fra kommunens sagssystem',
    'weight' => '4',
    'children' => array(
      0 => 'field_case',
      1 => 'field_doc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Hentet fra kommunens sagssystem',
      'instance_settings' => array(
        'classes' => 'attached-documents',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_document|node|contentpage|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_esdh|node|contentpage|form';
  $field_group->group_name = 'group_esdh';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indholdsside';
  $field_group->data = array(
    'label' => 'Sager og dokumenter',
    'weight' => '6',
    'children' => array(
      0 => 'field_case',
      1 => 'field_doc',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Sager og dokumenter',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_esdh|node|contentpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_extras|node|contentpage|form';
  $field_group->group_name = 'group_extras';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indholdsside';
  $field_group->data = array(
    'label' => 'Emneord',
    'weight' => '7',
    'children' => array(
      0 => 'field_editortags',
      1 => 'field_termref_sted',
      2 => 'field_organization',
      3 => 'field_politics',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_extras|node|contentpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|contentpage|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indholdsside';
  $field_group->data = array(
    'label' => 'Tekst',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_resume_long',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Tekst',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_general|node|contentpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gruppe3|node|contentpage|form';
  $field_group->group_name = 'group_gruppe3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indholdsside';
  $field_group->data = array(
    'label' => 'Indstillinger',
    'weight' => '8',
    'children' => array(
      0 => 'field_rotate_publish',
      1 => 'field_node_reference_kontaktblok',
      2 => 'field_indholdsside_spotboxe',
      3 => 'field_noderef_selvbtjn',
      4 => 'field_skjul_relaterede_links',
      5 => 'group_hidden',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_gruppe3|node|contentpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|contentpage|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gruppe3';
  $field_group->data = array(
    'label' => 'Skjult',
    'weight' => '18',
    'children' => array(
      0 => 'field_source_id',
      1 => 'field_site_structure',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_hidden|node|contentpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|galleri|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'galleri';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Skjult',
    'weight' => '6',
    'children' => array(
      0 => 'field_inherit_right_column',
      1 => 'field_lead_image',
      2 => 'field_parent_node',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_hidden|node|galleri|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|news|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indstillinger';
  $field_group->data = array(
    'label' => 'Skjult',
    'weight' => '46',
    'children' => array(
      0 => 'field_additional_info',
      1 => 'field_related',
      2 => 'field_related_tema',
      3 => 'field_source_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_hidden|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indholdsside|node|contentpage|form';
  $field_group->group_name = 'group_indholdsside';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Indholdsside',
    'weight' => '2',
    'children' => array(
      0 => 'group_billeder',
      1 => 'group_esdh',
      2 => 'group_extras',
      3 => 'group_general',
      4 => 'group_gruppe3',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_indholdsside|node|contentpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indstillinger|node|news|form';
  $field_group->group_name = 'group_indstillinger';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_news_tabs';
  $field_group->data = array(
    'label' => 'Indstillinger',
    'weight' => '3',
    'children' => array(
      0 => 'field_promoteto',
      1 => 'path',
      2 => 'group_hidden',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Indstillinger',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_indstillinger|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_tabs|node|news|form';
  $field_group->group_name = 'group_news_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'News',
    'weight' => '0',
    'children' => array(
      0 => 'group_indstillinger',
      1 => 'group_taksonomi',
      2 => 'group_tekst',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_news_tabs|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taksonomi|node|galleri|form';
  $field_group->group_name = 'group_taksonomi';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'galleri';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taksonomi',
    'weight' => '4',
    'children' => array(
      0 => 'field_termref_kle',
      1 => 'field_termref_sted',
      2 => 'field_organization',
      3 => 'field_editortags',
      4 => 'field_politics',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_taksonomi|node|galleri|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taksonomi|node|iframe_selvbetjeningsl_sning_mm|form';
  $field_group->group_name = 'group_taksonomi';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'iframe_selvbetjeningsl_sning_mm';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taksonomi',
    'weight' => '8',
    'children' => array(
      0 => 'field_termref_kle',
      1 => 'field_editortags',
      2 => 'field_organization',
      3 => 'field_termref_sted',
      4 => 'field_politics',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_taksonomi|node|iframe_selvbetjeningsl_sning_mm|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taksonomi|node|news|form';
  $field_group->group_name = 'group_taksonomi';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_news_tabs';
  $field_group->data = array(
    'label' => 'Emneord',
    'weight' => '2',
    'children' => array(
      0 => 'field_termref_kle',
      1 => 'field_organization',
      2 => 'field_editortags',
      3 => 'field_termref_sted',
      4 => 'field_politics',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Emneord',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_taksonomi|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tekst|node|news|form';
  $field_group->group_name = 'group_tekst';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_news_tabs';
  $field_group->data = array(
    'label' => 'Tekst',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_lead_image',
      2 => 'field_resume_long',
      3 => 'field_site_structure',
      4 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Tekst',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tekst|node|news|form'] = $field_group;

  return $export;
}
