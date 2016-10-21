<?php

/**
 * Form builder for map descriptions settings form.
 */
function epd_copyright_licensing_settings_form($form, &$form_state) {
  $epd_copyright_licensing = variable_get('epd_copyright_licensing', array('value' => '', 'format' => ''));
  $form['epd_copyright_licensing'] = array(
    '#title' => t('Default'),
    '#type' => 'text_format',
    '#default_value' => $epd_copyright_licensing['value'],
    '#format' => $epd_copyright_licensing['format'],
  );

  return system_settings_form($form);
}
