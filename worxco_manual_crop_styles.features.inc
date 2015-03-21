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
    'effects' => array(
      6 => array(
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
    'label' => 'crop_default_landscape',
  );

  // Exported image style: crop_default_portrait.
  $styles['crop_default_portrait'] = array(
    'effects' => array(
      5 => array(
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
    'label' => 'crop_default_portrait',
  );

  // Exported image style: crop_default_square.
  $styles['crop_default_square'] = array(
    'effects' => array(
      9 => array(
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
    'label' => 'crop_default_square',
  );

  // Exported image style: crop_large_landscape.
  $styles['crop_large_landscape'] = array(
    'effects' => array(
      7 => array(
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
    'label' => 'crop_large_landscape',
  );

  // Exported image style: crop_large_square.
  $styles['crop_large_square'] = array(
    'effects' => array(
      10 => array(
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
    'label' => 'crop_large_square',
  );

  // Exported image style: crop_medium_landscape.
  $styles['crop_medium_landscape'] = array(
    'effects' => array(
      8 => array(
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
    'label' => 'crop_medium_landscape',
  );

  // Exported image style: crop_medium_portrait.
  $styles['crop_medium_portrait'] = array(
    'effects' => array(
      3 => array(
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
    'label' => 'crop_medium_portrait',
  );

  // Exported image style: crop_medium_square.
  $styles['crop_medium_square'] = array(
    'effects' => array(
      11 => array(
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
    'label' => 'crop_medium_square',
  );

  return $styles;
}
