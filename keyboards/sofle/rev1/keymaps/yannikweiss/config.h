#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
#undef MANUFACTURER
#define MANUFACTURER "Yannik Weiß"

#undef ENCODER_RESOLUTION
#define ENCODER_RESOLUTION 4

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define CAPS_WORD_INVERT_ON_SHIFT
