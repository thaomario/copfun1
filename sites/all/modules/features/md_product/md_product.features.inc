<?php
/**
 * @file
 * md_product.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function md_product_commerce_product_default_types() {
  $items = array(
    'jersey_print' => array(
      'type' => 'jersey_print',
      'name' => 'Jersey print',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
    'product' => array(
      'type' => 'product',
      'name' => 'Product',
      'description' => 'A basic product type.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function md_product_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function md_product_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function md_product_flag_default_flags() {
  $flags = array();
  // Exported flag: "Wishlist".
  $flags['wishlist'] = array(
    'entity_type' => 'node',
    'title' => 'Wishlist',
    'global' => 0,
    'types' => array(
      0 => 'shop_product',
    ),
    'flag_short' => 'Add Wishlist',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Wishlist',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'modal_content' => 0,
      'email_plain' => 0,
      'email_html' => 0,
      'email_textalt' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'md_product',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Wishlist Product".
  $flags['wishlist_product'] = array(
    'entity_type' => 'commerce_product',
    'title' => 'Wishlist Product',
    'global' => 0,
    'types' => array(
      0 => 'jersey_print',
      1 => 'product',
    ),
    'flag_short' => 'Add wishlist',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove wishlist',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'attribute_view' => 0,
      'token' => 0,
      'line_item' => 0,
      'commerce_line_item_display' => 0,
      'commerce_line_item_token' => 0,
      'node_full' => 0,
      'node_teaser' => 0,
      'node_rss' => 0,
      'node_search_index' => 0,
      'node_search_result' => 0,
      'node_modal_content' => 0,
      'node_email_plain' => 0,
      'node_email_html' => 0,
      'node_email_textalt' => 0,
      'node_token' => 0,
      'node_modal_product_detail' => 0,
      'commerce_discount_offer_token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'md_product',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function md_product_image_default_styles() {
  $styles = array();

  // Exported image style: lookbook.
  $styles['lookbook'] = array(
    'label' => 'LookBook (970 x 500)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 970,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: lookbook_thumbnail.
  $styles['lookbook_thumbnail'] = array(
    'label' => 'LookBook Thumbnail (272 x 324)',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 272,
          'height' => 324,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_demo.
  $styles['product_demo'] = array(
    'label' => 'Product Demo (270x490)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 490,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_demo_colum.
  $styles['product_demo_colum'] = array(
    'label' => 'Product Demo Colum (400x400)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_demo_large.
  $styles['product_demo_large'] = array(
    'label' => 'Product Demo Large (485x760)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 485,
          'height' => 760,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_demo_small.
  $styles['product_demo_small'] = array(
    'label' => 'Product Demo Small (270x340)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 340,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_full.
  $styles['product_full'] = array(
    'label' => 'Product Full(555x580)',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 555,
          'height' => 580,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: product_list_small.
  $styles['product_list_small'] = array(
    'label' => 'Product List Small (216x300)',
    'effects' => array(
      17 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 216,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: product_modal.
  $styles['product_modal'] = array(
    'label' => 'Product Modal (270x380)',
    'effects' => array(
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 364,
          'height' => 380,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: product_modal_slider.
  $styles['product_modal_slider'] = array(
    'label' => 'Product Modal Slider (370x560)',
    'effects' => array(
      13 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 370,
          'height' => 560,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: product_slider_thumbnail.
  $styles['product_slider_thumbnail'] = array(
    'label' => 'Product Slider Thumbnail',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 128,
          'height' => 146,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: product_teaser.
  $styles['product_teaser'] = array(
    'label' => 'Product Teaser (270x380)',
    'effects' => array(
      15 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 270,
          'height' => 380,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function md_product_node_info() {
  $items = array(
    'lookbook' => array(
      'name' => t('LookBook'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'shop_product' => array(
      'name' => t('Shop Product'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
