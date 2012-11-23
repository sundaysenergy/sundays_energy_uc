<?php

/**
 * Implementation of hook_strongarm().
 */
function sundays_energy_uc_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_credit_debug';
  $strongarm->value = 0;
  $export['uc_credit_debug'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_payment_credit_gateway';
  $strongarm->value = 'test_gateway';
  $export['uc_payment_credit_gateway'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_payment_method_credit_checkout';
  $strongarm->value = 1;
  $export['uc_payment_method_credit_checkout'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_payment_method_credit_weight';
  $strongarm->value = '2';
  $export['uc_payment_method_credit_weight'] = $strongarm;

  return $export;
}
