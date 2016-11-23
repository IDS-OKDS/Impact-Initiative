<?php

/**
 * Form builder for map descriptions settings form.
 */
function epd_copyright_licensing_settings_form($form, &$form_state) {
  $epd_copyright_licensing = variable_get('epd_copyright_licensing', array('value' => '', 'format' => ''));
  $epd_about_impact_lab = variable_get('epd_about_impact_lab', array('value' => '', 'format' => ''));

  $form['epd_copyright_licensing'] = array(
    '#title' => t('Copyright Information'),
    '#type' => 'text_format',
    '#default_value' => $epd_copyright_licensing['value'],
    '#format' => $epd_copyright_licensing['format'],
  );

  $form['epd_about_impact_lab'] = array(
    '#title' => t('About The Impact Lab'),
    '#type' => 'text_format',
    '#default_value' => $epd_about_impact_lab['value'],
    '#format' => $epd_about_impact_lab['format'],
  );

  return system_settings_form($form);
}
