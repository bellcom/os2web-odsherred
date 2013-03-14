<?php
/**
 * @file
 * os2web_node_feedback.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function os2web_node_feedback_field_default_fields() {
  $fields = array();

  // Exported field: 'feedback-feedback-field_feedback_email'.
  $fields['feedback-feedback-field_feedback_email'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_feedback_email',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'feedback',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'feedback',
      'field_name' => 'field_feedback_email',
      'label' => 'E-mail',
      'required' => 1,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'blokindhold' => 'blokindhold',
            'filtered_html' => 'filtered_html',
            'full_html' => 'full_html',
            'full_html_iframe' => 0,
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'raw' => 'raw',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'blokindhold' => array(
                'weight' => '-7',
              ),
              'filtered_html' => array(
                'weight' => '-10',
              ),
              'full_html' => array(
                'weight' => '-9',
              ),
              'full_html_iframe' => array(
                'weight' => '0',
              ),
              'php_code' => array(
                'weight' => '-6',
              ),
              'plain_text' => array(
                'weight' => '-8',
              ),
              'raw' => array(
                'weight' => '0',
              ),
            ),
          ),
        ),
        'linkit' => array(
          'enable' => 0,
          'insert_plugin' => '',
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'feedback-feedback-field_feedback_navn'.
  $fields['feedback-feedback-field_feedback_navn'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_feedback_navn',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'feedback',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'feedback',
      'field_name' => 'field_feedback_navn',
      'label' => 'Navn',
      'required' => 1,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'blokindhold' => 'blokindhold',
            'filtered_html' => 'filtered_html',
            'full_html' => 'full_html',
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'raw' => 'raw',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'blokindhold' => array(
                'weight' => '-7',
              ),
              'filtered_html' => array(
                'weight' => '-10',
              ),
              'full_html' => array(
                'weight' => '-9',
              ),
              'php_code' => array(
                'weight' => '-6',
              ),
              'plain_text' => array(
                'weight' => '-8',
              ),
              'raw' => array(
                'weight' => '0',
              ),
            ),
          ),
        ),
        'linkit' => array(
          'enable' => 0,
          'insert_plugin' => '',
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '4',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('E-mail');
  t('Navn');

  return $fields;
}
