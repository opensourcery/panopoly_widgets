<?php
/**
 * @file
 * Admin forms for Panopoly Widgets Lite.
 */

/**
 * Configuration form.
 */
function panopoly_widgets_configure_form($form, &$form_state) {
  $form = array();

  $form['panopoly_widgets_spotlight_rotation_time'] = array(
    '#title' => t('Spotlight Rotation Time'),
    '#type' => 'textfield',
    '#required' => TRUE,
    '#default_value' => variable_get('panopoly_widgets_spotlight_rotation_time', 4),
    '#description' => t('How many seconds do you want between rotations of the spotlight widget?'),
  );

  return system_settings_form($form);
}
