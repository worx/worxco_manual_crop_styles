<?php
/**
 * @file
 * worxco_manual_crop_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function worxco_manual_crop_styles_image_default_styles() {
  $styles = array();

  // Exported image style: crop_default_landscape.
  $styles['crop_default_landscape'] = array(
    'name' => 'crop_default_landscape',
    'effects' => array(
      6 => array(
        'label' => 'Manual Crop: Crop and scale',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 200,
          'height' => 150,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'crop_default_landscape',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: crop_default_portrait.
  $styles['crop_default_portrait'] = array(
    'name' => 'crop_default_portrait',
    'effects' => array(
      5 => array(
        'label' => 'Manual Crop: Crop and scale',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 200,
          'height' => 266,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'crop_default_portrait',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: crop_default_square.
  $styles['crop_default_square'] = array(
    'name' => 'crop_default_square',
    'effects' => array(
      9 => array(
        'label' => 'Manual Crop: Crop and scale',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 200,
          'height' => 200,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'crop_default_square',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: crop_large_landscape.
  $styles['crop_large_landscape'] = array(
    'name' => 'crop_large_landscape',
    'effects' => array(
      7 => array(
        'label' => 'Manual Crop: Crop and scale',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 480,
          'height' => 360,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'crop_large_landscape',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: crop_large_square.
  $styles['crop_large_square'] = array(
    'name' => 'crop_large_square',
    'effects' => array(
      10 => array(
        'label' => 'Manual Crop: Crop and scale',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 480,
          'height' => 480,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'crop_large_square',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: crop_medium_landscape.
  $styles['crop_medium_landscape'] = array(
    'name' => 'crop_medium_landscape',
    'effects' => array(
      8 => array(
        'label' => 'Manual Crop: Crop and scale',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 220,
          'height' => 165,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'crop_medium_landscape',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: crop_medium_portrait.
  $styles['crop_medium_portrait'] = array(
    'name' => 'crop_medium_portrait',
    'effects' => array(
      3 => array(
        'label' => 'Manual Crop: Crop and scale',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 220,
          'height' => 293,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'crop_medium_portrait',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: crop_medium_square.
  $styles['crop_medium_square'] = array(
    'name' => 'crop_medium_square',
    'effects' => array(
      11 => array(
        'label' => 'Manual Crop: Crop and scale',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 220,
          'height' => 220,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'crop_medium_square',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}
