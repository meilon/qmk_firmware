#pragma once

#define FORCE_NKRO
#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR
#    define RGB_MATRIX_DEFAULT_HUE 0                             // Sets the default hue value, if none has been set
#    define RGB_MATRIX_DEFAULT_SAT 0                             // Sets the default saturation value, if none has been set
#    define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS // Sets the default brightness value, if none has been set
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#endif
