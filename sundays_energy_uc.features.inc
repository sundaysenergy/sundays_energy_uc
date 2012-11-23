<?php

/**
 * Implementation of hook_uc_product_default_classes().
 */
function sundays_energy_uc_uc_product_default_classes() {
  $items = array(
    'product' => array(
      'name' => t('Product'),
      'module' => 'uc_product',
      'description' => t('This node displays the representation of a product for sale on the website. It includes all the unique information that can be attributed to a specific model number.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
