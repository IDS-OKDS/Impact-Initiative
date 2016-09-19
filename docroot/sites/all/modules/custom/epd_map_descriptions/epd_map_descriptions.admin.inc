<?php

/**
 * Form builder for map descriptions settings form.
 */
function epd_map_descriptions_settings_form($form, &$form_state) {
  $map_desc_default = variable_get('map_desc_default', array('value' => '', 'format' => ''));
  $form['map_desc_default'] = array(
    '#title' => t('Default'),
    '#type' => 'text_format',
    '#default_value' => $map_desc_default['value'],
    '#format' => $map_desc_default['format'],
  );

  return system_settings_form($form);
}
