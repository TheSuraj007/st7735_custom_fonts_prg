
#ifndef __FONTS_H__
#define __FONTS_H__

#include <stdint.h>

typedef struct
{
    const uint8_t width;
    uint8_t height;
    const uint8_t column;
    const uint8_t offset;
    const uint8_t *data;
} FontDef;

extern FontDef extra_small_font;
extern FontDef decimal_small_font;
extern FontDef small_font;
extern FontDef medium_font;

#endif // __FONTS_H__