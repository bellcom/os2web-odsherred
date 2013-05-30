<?php
/**
 * @file
 * os2web_iframe.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function os2web_iframe_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: full_html_iframe
  $profiles['full_html_iframe'] = array(
    'format' => 'full_html_iframe',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'underline' => 1,
          'justifycenter' => 1,
          'justifyright' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'indent' => 1,
          'link' => 1,
          'unlink' => 1,
          'anchor' => 1,
          'image' => 1,
          'forecolor' => 1,
          'backcolor' => 1,
          'sup' => 1,
          'sub' => 1,
          'blockquote' => 1,
          'code' => 1,
          'cut' => 1,
          'copy' => 1,
          'paste' => 1,
        ),
        'contextmenu' => array(
          'contextmenu' => 1,
        ),
        'paste' => array(
          'pasteword' => 1,
        ),
        'searchreplace' => array(
          'replace' => 1,
        ),
        'style' => array(
          'styleprops' => 1,
        ),
        'media' => array(
          'media' => 1,
        ),
        'xhtmlxtras' => array(
          'ins' => 1,
          'attribs' => 1,
        ),
        'autoresize' => array(
          'autoresize' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'none',
      'css_path' => '',
      'css_classes' => '',
    ),
  );

  return $profiles;
}
