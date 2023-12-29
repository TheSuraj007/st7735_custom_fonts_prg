#include <stdint.h>
#include "st7735.h"

const uint8_t Font_32_Arial_Num_PlusBitmaps[] = {
    0x00, 0x3F, 0xC0, 0x00, 0x07, 0xFE, 0x00, 0x01, 0xFF, 0xF8, 0x00, 0x3F, 0xFF, 0xC0, 0x07, 0xFF,
    0xFC, 0x00, 0xFE, 0x07, 0xE0, 0x0F, 0xC0, 0x3F, 0x01, 0xF8, 0x01, 0xF0, 0x1F, 0x00, 0x0F, 0x83,
    0xF0, 0x00, 0xF8, 0x3E, 0x00, 0x07, 0xC3, 0xE0, 0x00, 0x7C, 0x7E, 0x00, 0x07, 0xC7, 0xC0, 0x00,
    0x3E, 0x7C, 0x00, 0x03, 0xE7, 0xC0, 0x00, 0x3E, 0x7C, 0x00, 0x03, 0xEF, 0xC0, 0x00, 0x3F, 0xF8,
    0x00, 0x01, 0xFF, 0x80, 0x00, 0x1F, 0xF8, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x1F, 0xF8, 0x00, 0x01,
    0xFF, 0x80, 0x00, 0x1F, 0xF8, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x1F, 0xF8, 0x00, 0x01, 0xFF, 0x80,
    0x00, 0x1F, 0xFC, 0x00, 0x01, 0xF7, 0xC0, 0x00, 0x3E, 0x7C, 0x00, 0x03, 0xE7, 0xC0, 0x00, 0x3E,
    0x7C, 0x00, 0x03, 0xE3, 0xE0, 0x00, 0x7C, 0x3E, 0x00, 0x07, 0xC3, 0xE0, 0x00, 0x7C, 0x1F, 0x00,
    0x0F, 0x81, 0xF0, 0x00, 0xF8, 0x0F, 0x80, 0x1F, 0x00, 0xFC, 0x03, 0xF0, 0x07, 0xE0, 0x7E, 0x00,
    0x3F, 0xFF, 0xC0, 0x03, 0xFF, 0xF8, 0x00, 0x1F, 0xFF, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x01, 0xF8,
    0x00, // char48
    0x00, 0x0F, 0x00, 0x1F, 0x00, 0x3F, 0x00, 0x7F, 0x00, 0xFF, 0x01, 0xFF, 0x03, 0xFF, 0x07, 0xFF,
    0x1F, 0xFF, 0x3F, 0xDF, 0xFF, 0x1F, 0xFE, 0x1F, 0xF8, 0x1F, 0xF0, 0x1F, 0xC0, 0x1F, 0x00, 0x1F,
    0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F,
    0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F,
    0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F,
    0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, // char49
    0x00, 0x1F, 0xE0, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0xFF, 0xFF, 0x80, 0x0F, 0xFF, 0xFF, 0x00, 0x7F,
    0xFF, 0xFC, 0x07, 0xE0, 0x0F, 0xF0, 0x7E, 0x00, 0x1F, 0x83, 0xE0, 0x00, 0x7C, 0x3E, 0x00, 0x01,
    0xF1, 0xF0, 0x00, 0x0F, 0x9F, 0x00, 0x00, 0x7C, 0xF8, 0x00, 0x01, 0xF7, 0xC0, 0x00, 0x0F, 0x80,
    0x00, 0x00, 0x7C, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00,
    0x0F, 0x80, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x0F, 0xE0,
    0x00, 0x00, 0xFE, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00,
    0xFE, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0xFE, 0x00,
    0x00, 0x0F, 0xE0, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x0F,
    0xE0, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x03, 0xE0, 0x00,
    0x00, 0x3F, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, // char50
    0x00, 0x7F, 0x80, 0x00, 0x3F, 0xFC, 0x00, 0x1F, 0xFF, 0xC0, 0x07, 0xFF, 0xFC, 0x01, 0xFF, 0xFF,
    0xC0, 0x3E, 0x01, 0xFC, 0x0F, 0x80, 0x1F, 0x81, 0xE0, 0x01, 0xF8, 0x7C, 0x00, 0x1F, 0x0F, 0x00,
    0x03, 0xE1, 0xE0, 0x00, 0x7E, 0x3C, 0x00, 0x07, 0xC0, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x3E, 0x00,
    0x00, 0x07, 0xC0, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x07, 0xF0,
    0x00, 0x1F, 0xFC, 0x00, 0x03, 0xFF, 0x80, 0x00, 0x7F, 0xF0, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x07,
    0xF0, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x03, 0xC0, 0x00,
    0x00, 0x7C, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x07, 0xFF,
    0x00, 0x00, 0xFF, 0xE0, 0x00, 0x1F, 0xFC, 0x00, 0x03, 0xEF, 0x80, 0x00, 0xFC, 0xF8, 0x00, 0x1F,
    0x9F, 0x00, 0x07, 0xE3, 0xF0, 0x01, 0xFC, 0x3F, 0x00, 0x7F, 0x03, 0xFC, 0x3F, 0xC0, 0x3F, 0xFF,
    0xF0, 0x03, 0xFF, 0xFC, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0xFF, 0x00, 0x00, // char51
    0x00, 0x00, 0x3C, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00,
    0xFC, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x07, 0xFC, 0x00,
    0x00, 0x7F, 0xC0, 0x00, 0x0F, 0xFC, 0x00, 0x01, 0xF7, 0xC0, 0x00, 0x1F, 0x7C, 0x00, 0x03, 0xE7,
    0xC0, 0x00, 0x3E, 0x7C, 0x00, 0x07, 0xC7, 0xC0, 0x00, 0xF8, 0x7C, 0x00, 0x1F, 0x87, 0xC0, 0x01,
    0xF0, 0x7C, 0x00, 0x3E, 0x07, 0xC0, 0x03, 0xE0, 0x7C, 0x00, 0x7C, 0x07, 0xC0, 0x0F, 0x80, 0x7C,
    0x00, 0xF8, 0x07, 0xC0, 0x1F, 0x00, 0x7C, 0x01, 0xF0, 0x07, 0xC0, 0x3E, 0x00, 0x7C, 0x07, 0xE0,
    0x07, 0xC0, 0x7C, 0x00, 0x7C, 0x0F, 0x80, 0x07, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x07, 0xC0, 0x00, 0x00,
    0x7C, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x7C, 0x00,
    0x00, 0x07, 0xC0, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x07,
    0xC0, // char52
    0x07, 0xFF, 0xFF, 0xC0, 0x7F, 0xFF, 0xFC, 0x07, 0xFF, 0xFF, 0xC0, 0x7F, 0xFF, 0xFC, 0x07, 0xFF,
    0xFF, 0xC0, 0xF8, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x01,
    0xF0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x01, 0xE0, 0x00,
    0x00, 0x3E, 0x00, 0x00, 0x03, 0xE0, 0x3C, 0x00, 0x3E, 0x3F, 0xF8, 0x03, 0xEF, 0xFF, 0xE0, 0x3F,
    0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 0x1F, 0xC7, 0xF8, 0x00, 0xFC, 0x7F, 0x00, 0x07,
    0xE7, 0xC0, 0x00, 0x3E, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x01, 0xF0, 0x00,
    0x00, 0x1F, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x1F,
    0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x3E, 0xFC, 0x00, 0x03, 0xEF, 0xC0, 0x00, 0x3E, 0x7C, 0x00,
    0x03, 0xC7, 0xC0, 0x00, 0x7C, 0x7E, 0x00, 0x0F, 0x83, 0xF0, 0x01, 0xF8, 0x1F, 0x80, 0x7F, 0x00,
    0xFF, 0xFF, 0xE0, 0x0F, 0xFF, 0xFC, 0x00, 0x7F, 0xFF, 0x80, 0x01, 0xFF, 0xE0, 0x00, 0x03, 0xF8,
    0x00, // char53
    0x00, 0x3F, 0xC0, 0x00, 0x0F, 0xFF, 0x80, 0x03, 0xFF, 0xFC, 0x00, 0x7F, 0xFF, 0xE0, 0x0F, 0xFF,
    0xFF, 0x01, 0xF8, 0x01, 0xF8, 0x1F, 0x00, 0x0F, 0xC3, 0xF0, 0x00, 0x7C, 0x3E, 0x00, 0x03, 0xE7,
    0xE0, 0x00, 0x3E, 0x7E, 0x00, 0x03, 0xE7, 0xC0, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x0F, 0xC0, 0x00,
    0x00, 0xFC, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0xFC, 0x0F, 0xC0, 0x0F, 0xC7, 0xFF, 0x00, 0xFD,
    0xFF, 0xF8, 0x0F, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0x0F, 0xFE, 0x03, 0xF8, 0xFF, 0x80, 0x0F,
    0xCF, 0xF8, 0x00, 0xFC, 0xFF, 0x00, 0x07, 0xEF, 0xE0, 0x00, 0x3E, 0xFE, 0x00, 0x03, 0xEF, 0xC0,
    0x00, 0x1F, 0xFC, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x1F, 0xFC, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x1F,
    0xFC, 0x00, 0x01, 0xF7, 0xC0, 0x00, 0x1F, 0x7E, 0x00, 0x01, 0xE7, 0xE0, 0x00, 0x3E, 0x7E, 0x00,
    0x03, 0xE3, 0xE0, 0x00, 0x3E, 0x3F, 0x00, 0x07, 0xC1, 0xFC, 0x00, 0xFC, 0x0F, 0xE0, 0x3F, 0x80,
    0x7F, 0xFF, 0xF0, 0x03, 0xFF, 0xFE, 0x00, 0x1F, 0xFF, 0xC0, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0xFC,
    0x00, // char54
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xF0, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x07, 0xC0,
    0x00, 0x00, 0xF8, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x07,
    0xC0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x3E, 0x00, 0x00,
    0x03, 0xC0, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x0F, 0x80,
    0x00, 0x00, 0xF8, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x03,
    0xE0, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x07, 0xC0, 0x00,
    0x00, 0x7C, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0xF8,
    0x00, 0x00, 0x0F, 0x80, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00,
    0x1F, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x3E, 0x00,
    0x00, // char55
    0x00, 0x3F, 0xC0, 0x00, 0x1F, 0xFF, 0x80, 0x03, 0xFF, 0xFE, 0x00, 0x7F, 0xFF, 0xE0, 0x0F, 0xE0,
    0x7F, 0x01, 0xF8, 0x01, 0xF8, 0x1F, 0x00, 0x0F, 0x83, 0xF0, 0x00, 0xFC, 0x3E, 0x00, 0x07, 0xC3,
    0xE0, 0x00, 0x7C, 0x3E, 0x00, 0x07, 0xC3, 0xE0, 0x00, 0x7C, 0x3E, 0x00, 0x07, 0xC3, 0xE0, 0x00,
    0x7C, 0x1F, 0x00, 0x0F, 0x81, 0xF0, 0x00, 0xF8, 0x0F, 0x80, 0x1F, 0x00, 0x7C, 0x01, 0xE0, 0x03,
    0xF0, 0xFC, 0x00, 0x1F, 0xFF, 0xC0, 0x00, 0xFF, 0xF0, 0x00, 0x1F, 0xFF, 0x80, 0x03, 0xFF, 0xFC,
    0x00, 0xFF, 0xFF, 0xF0, 0x1F, 0xC0, 0x3F, 0x83, 0xF0, 0x00, 0xFC, 0x3E, 0x00, 0x07, 0xC7, 0xE0,
    0x00, 0x7E, 0x7C, 0x00, 0x03, 0xE7, 0xC0, 0x00, 0x3E, 0xF8, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x1F,
    0xF8, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x1F, 0xF8, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x1F, 0x7C, 0x00,
    0x03, 0xE7, 0xC0, 0x00, 0x3E, 0x3E, 0x00, 0x07, 0xC3, 0xE0, 0x00, 0xFC, 0x1F, 0x00, 0x1F, 0x80,
    0xFC, 0x03, 0xF0, 0x07, 0xFF, 0xFE, 0x00, 0x3F, 0xFF, 0xC0, 0x00, 0xFF, 0xF0, 0x00, 0x03, 0xFC,
    0x00, // char56
    0x00, 0x3F, 0xC0, 0x00, 0x0F, 0xFF, 0x00, 0x03, 0xFF, 0xFC, 0x00, 0x7F, 0xFF, 0xE0, 0x0F, 0xFF,
    0xFF, 0x00, 0xFE, 0x07, 0xF8, 0x1F, 0x80, 0x1F, 0x81, 0xF8, 0x01, 0xFC, 0x3F, 0x00, 0x0F, 0xC3,
    0xF0, 0x00, 0xFE, 0x7E, 0x00, 0x07, 0xE7, 0xE0, 0x00, 0x7E, 0x7C, 0x00, 0x03, 0xF7, 0xC0, 0x00,
    0x3F, 0x7C, 0x00, 0x03, 0xF7, 0xC0, 0x00, 0x3F, 0x7C, 0x00, 0x03, 0xF7, 0xC0, 0x00, 0x3F, 0x7E,
    0x00, 0x07, 0xF7, 0xE0, 0x00, 0x7F, 0x3F, 0x00, 0x0F, 0xF3, 0xF0, 0x00, 0xFF, 0x1F, 0x80, 0x1F,
    0xF1, 0xF8, 0x01, 0xFF, 0x0F, 0xE0, 0x7F, 0xF0, 0x7F, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0xF0, 0x3F,
    0xFF, 0xBF, 0x01, 0xFF, 0xE3, 0xF0, 0x07, 0xF8, 0x3F, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x3F,
    0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x07, 0xEF, 0xC0, 0x00, 0x7E, 0xFC, 0x00,
    0x07, 0xC7, 0xC0, 0x00, 0xFC, 0x7E, 0x00, 0x1F, 0x83, 0xF0, 0x03, 0xF8, 0x3F, 0x80, 0xFF, 0x01,
    0xFF, 0xFF, 0xE0, 0x0F, 0xFF, 0xFC, 0x00, 0x7F, 0xFF, 0x80, 0x03, 0xFF, 0xE0, 0x00, 0x0F, 0xF8,
    0x00, // char57
    0x38, 0xFB, 0xFF, 0xFF, 0xEF, 0x8E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x07, 0x1F, 0x7F, 0xFF, 0xFD, 0xF1, 0xC0 // char58
};

const GFXglyph Font_32_Arial_Num_PlusGlyphs[] = {
    {0, 28, 46, 32, 2, -47},    // char48
    {161, 16, 45, 32, 4, -46},  // char49
    {251, 29, 46, 32, 1, -47},  // char50
    {418, 27, 46, 32, 3, -47},  // char51
    {574, 28, 46, 32, 2, -47},  // char52
    {735, 28, 46, 32, 2, -47},  // char53
    {896, 28, 46, 32, 2, -47},  // char54
    {1057, 28, 46, 32, 2, -47}, // char55
    {1218, 28, 46, 32, 2, -47}, // char56
    {1379, 28, 46, 32, 2, -47}, // char57
    {1540, 7, 28, 32, 14, -37}  // char58
};

const GFXfont Font_32_Arial_Num_Plus = {
    (uint8_t *)Font_32_Arial_Num_PlusBitmaps,
    (GFXglyph *)Font_32_Arial_Num_PlusGlyphs,
    48, 58, 50};
