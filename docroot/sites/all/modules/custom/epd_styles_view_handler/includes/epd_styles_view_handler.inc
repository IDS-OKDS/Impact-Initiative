<?php

/**
 * @file
 * Custom views handler definition.
 */

/**
 * Custom handler class.
 *
 * @ingroup views_field_handlers
 */
class epd_styles_view_handler extends views_handler_field {

  /**
   * {@inheritdoc}
   *
   * Modify any end user views settings here. Debug $options to view the field
   * settings you can change.
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['styles_to_add'] = array('default' => '');
    return $options;
  }

  /**
   * {@inheritdoc}
   *
   * Make changes to the field settings form seen by the end user when adding
   * your field.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['styles_to_add'] = array(
      '#type' => 'textfield',
      '#title' => t('Styles'),
      '#default_value' => $this->options['styles_to_add'],
    );
  }

  /**
   * Render callback handler.
   *
   * Return the markup that will appear in the rendered field.
   */
  function render($values) {

    $styles = $this->tokenize_value($this->options['styles_to_add']);

    return theme('html_tag', array(
      'element' => array(
        '#tag' => 'div',
        '#attributes' => array(
          'style' => $styles,
          ),
        '#value' => $values->{$this->field_alias},
      ),
    ));
  }
}
