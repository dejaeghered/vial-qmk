#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED},
  {NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED},
  {NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED},
  {NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED}
}, {
  // LED Index to Physical Position
  { 0,  0 }, { 45,  0 }, { 235,  0 }, { 180,  0 }, { 224,  0 },
  { 224,  45 }, { 180,  64 }, { 135,  64 }, { 90,  64 }, { 0,  64 },
}, {
  // LED Index to Flag
  2, 2, 2, 2, 2,
  2, 2, 2, 2, 2
} };
#endif
