<?php

/**
 * @file
 * Calls results to administration's pages.
 */

/**
 * Form constructor for Module Weight form.
 *
 * @param array $form
 *   The form element.
 * @param array $form_state
 *   The form state.
 */
function modules_weight_admin_config_page_form(array $form, array &$form_state) {
  $form['modules']['#tree'] = TRUE;

  // Getting the module list.
  $modules = _modules_weight_modules_list();
  // Iterate over each of the modules.
  foreach ($modules as $module) {
    // The rows info.
    // Module name.
    $form['modules'][$module->name]['name'] = array(
      '#markup' => $module->info['name'],
    );
    // Module description.
    $form['modules'][$module->name]['description'] = array(
      '#markup' => $module->info['description'],
    );
    // Module weight.
    $form['modules'][$module->name]['weight'] = array(
      '#type' => 'weight',
      '#default_value' => $module->weight,
      '#delta' => _modules_weight_prepare_delta($module->weight),
    );
    // Module old weight value, used to see if we need to update the weight.
    $form['modules'][$module->name]['old_weight_value'] = array(
      '#type' => 'hidden',
      '#value' => $module->weight,
    );
    // Module package.
    $form['modules'][$module->name]['package'] = array(
      '#markup' => $module->info['package'],
    );
  }
  // The form button.
  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array('#type' => 'submit', '#value' => t('Save Changes'));
  return $form;
}

/**
 * Form submit handler for the modules_weight_admin_config_page_form form.
 *
 * @param array $form
 *   The form element.
 * @param array $form_state
 *   The form state.
 */
function modules_weight_admin_config_page_form_submit(array $form, array &$form_state) {
  // Variable to see if we have uptaded some module weight.
  $update = FALSE;

  foreach ($form_state['values']['modules'] as $name => $weight) {
    if ($weight['weight'] != $weight['old_weight_value']) {
      // Setting the new weight.
      _modules_weight_module_set_weight($name, $weight['weight']);
      $update = TRUE;
    }
  }
  // Printing the update message.
  if ($update) {
    drupal_set_message(t('The modules weight was updated.'));
  }
}

/**
 * Form constructor for Module Weight Configuration form.
 *
 * @param array $form
 *   The form element.
 * @param array $form_state
 *   The form state.
 */
function modules_weight_configuration_form(array $form, array &$form_state) {
  $form['show_system_modules'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show system modules'),
    '#return_value' => 1,
    '#default_value' => variable_get('show_system_modules', 0),
    '#description' => t("Cautions: This module just display non-core modules by default, if you check this option you will be able to change the core modules weight and as you might notice, all core modules has 0 as weight value by default."),
  );

  return system_settings_form($form);
}
