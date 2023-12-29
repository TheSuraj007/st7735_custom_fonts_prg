#include <stdint.h>
#include "st7735.h"

const uint8_t Font_32_Matrix_NumBitmaps[] = {
    0x01, 0xC7, 0x1C, 0x00, 0x1F, 0x7D, 0xF0, 0x00, 0xFB, 0xEF, 0x80, 0x07, 0xDF, 0x7C, 0x00, 0x1C,
    0x71, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x0E, 0xF8, 0x00, 0x00,
    0xFF, 0xC0, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x3E, 0xE0, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0xC0, 0x00, 0x01, 0xDF, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0xFF, 0xC0, 0x00,
    0x07, 0xDC, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x3B,
    0xE0, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0xFB, 0x80, 0x00, 0x03, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x7C, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x03,
    0xFF, 0x00, 0x00, 0x1F, 0x70, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0,
    0x00, 0x00, 0xEF, 0x80, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x03, 0xEE, 0x00, 0x00,
    0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0xC7, 0x00, 0x07, 0xDF, 0x7C, 0x00,
    0x3E, 0xFB, 0xE0, 0x01, 0xF7, 0xDF, 0x00, 0x07, 0x1C, 0x70, 0x00, // char48
    0x01, 0xC0, 0x01, 0xF0, 0x00, 0xF8, 0x00, 0x7C, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE3,
    0x80, 0xFB, 0xE0, 0x7D, 0xF0, 0x3E, 0xF8, 0x0E, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00,
    0x07, 0xC0, 0x03, 0xE0, 0x01, 0xF0, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x0F,
    0x80, 0x07, 0xC0, 0x03, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x1F, 0x00,
    0x0F, 0x80, 0x07, 0xC0, 0x01, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x3E, 0x00, 0x1F,
    0x00, 0x0F, 0x80, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x71, 0xDF, 0x7D, 0xFF, 0xBE, 0xFF,
    0xDF, 0x7D, 0xC7, 0x1C, // char49
    0x71, 0xC7, 0x1C, 0x07, 0xDF, 0x7D, 0xF0, 0x3E, 0xFB, 0xEF, 0x81, 0xF7, 0xDF, 0x7C, 0x07, 0x1C,
    0x71, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
    0xF8, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xC0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00,
    0x07, 0xC0, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE3, 0x8E, 0x00,
    0x0F, 0xBE, 0xF8, 0x00, 0x7D, 0xF7, 0xC0, 0x03, 0xEF, 0xBE, 0x00, 0x0E, 0x38, 0xE0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00,
    0x1F, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0,
    0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x0E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x71, 0xC7, 0x1D, 0xF7, 0xDF, 0x7D, 0xFF,
    0xBE, 0xFB, 0xEF, 0xFD, 0xF7, 0xDF, 0x7D, 0xC7, 0x1C, 0x71, 0xC0, // char50
    0x71, 0xC7, 0x1C, 0x07, 0xDF, 0x7D, 0xF0, 0x3E, 0xFB, 0xEF, 0x81, 0xF7, 0xDF, 0x7C, 0x07, 0x1C,
    0x71, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
    0xF8, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xC0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00,
    0x07, 0xC0, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE3, 0x8E, 0x00,
    0x0F, 0xBE, 0xF8, 0x00, 0x7D, 0xF7, 0xC0, 0x03, 0xEF, 0xBE, 0x00, 0x0E, 0x38, 0xE0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x03,
    0xE0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xE0, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00,
    0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x71, 0xC7, 0x01, 0xF7, 0xDF, 0x7C, 0x0F,
    0xBE, 0xFB, 0xE0, 0x7D, 0xF7, 0xDF, 0x01, 0xC7, 0x1C, 0x70, 0x00, // char51
    0x70, 0x00, 0x00, 0x77, 0xC0, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x01, 0xF7, 0x00,
    0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x0E, 0xF8, 0x00, 0x00,
    0xFF, 0xC0, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x3E, 0xE0, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0xC0, 0x00, 0x01, 0xDF, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0xFF, 0xC0, 0x00,
    0x07, 0xDC, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0xE3, 0x8E, 0x3B,
    0xEF, 0xBE, 0xFB, 0xFF, 0x7D, 0xF7, 0xDF, 0xFB, 0xEF, 0xBE, 0xFB, 0x8E, 0x38, 0xE3, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x03,
    0xE0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xE0, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00,
    0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x01, 0xF0,
    0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x01, 0xC0, // char52
    0x71, 0xC7, 0x1C, 0x77, 0xDF, 0x7D, 0xF7, 0xFE, 0xFB, 0xEF, 0xBF, 0xF7, 0xDF, 0x7D, 0xF7, 0x1C,
    0x71, 0xC7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00,
    0x07, 0xC0, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0xC0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x07, 0xC0, 0x00,
    0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0xE3, 0x8E, 0x03,
    0xEF, 0xBE, 0xF8, 0x1F, 0x7D, 0xF7, 0xC0, 0xFB, 0xEF, 0xBE, 0x03, 0x8E, 0x38, 0xE0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x03,
    0xE0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xE0, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00,
    0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x71, 0xC7, 0x01, 0xF7, 0xDF, 0x7C, 0x0F,
    0xBE, 0xFB, 0xE0, 0x7D, 0xF7, 0xDF, 0x01, 0xC7, 0x1C, 0x70, 0x00, // char53
    0x01, 0xC7, 0x1C, 0x00, 0x1F, 0x7D, 0xF0, 0x00, 0xFB, 0xEF, 0x80, 0x07, 0xDF, 0x7C, 0x00, 0x1C,
    0x71, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00,
    0x07, 0xC0, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0xC0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x07, 0xC0, 0x00,
    0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0xE3, 0x8E, 0x03,
    0xEF, 0xBE, 0xF8, 0x1F, 0x7D, 0xF7, 0xC0, 0xFB, 0xEF, 0xBE, 0x03, 0x8E, 0x38, 0xE0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x7C, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x03,
    0xFF, 0x00, 0x00, 0x1F, 0x70, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0,
    0x00, 0x00, 0xEF, 0x80, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x03, 0xEE, 0x00, 0x00,
    0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0xC7, 0x00, 0x07, 0xDF, 0x7C, 0x00,
    0x3E, 0xFB, 0xE0, 0x01, 0xF7, 0xDF, 0x00, 0x07, 0x1C, 0x70, 0x00, // char54
    0x71, 0xC7, 0x1C, 0x77, 0xDF, 0x7D, 0xF7, 0xFE, 0xFB, 0xEF, 0xBF, 0xF7, 0xDF, 0x7D, 0xF7, 0x1C,
    0x71, 0xC7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
    0xF8, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xC0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00,
    0x07, 0xC0, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00,
    0x00, 0x00, 0xF8, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x3E, 0x00,
    0x00, 0x01, 0xF0, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x80, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x38, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x0F,
    0x80, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x01, 0xC0, 0x00, 0x00, 0x00, // char55
    0x01, 0xC7, 0x1C, 0x00, 0x1F, 0x7D, 0xF0, 0x00, 0xFB, 0xEF, 0x80, 0x07, 0xDF, 0x7C, 0x00, 0x1C,
    0x71, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x0E, 0xF8, 0x00, 0x00,
    0xFF, 0xC0, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x3E, 0xE0, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0xC0, 0x00, 0x01, 0xDF, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0xFF, 0xC0, 0x00,
    0x07, 0xDC, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE3, 0x8E, 0x00,
    0x0F, 0xBE, 0xF8, 0x00, 0x7D, 0xF7, 0xC0, 0x03, 0xEF, 0xBE, 0x00, 0x0E, 0x38, 0xE0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x7C, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x03,
    0xFF, 0x00, 0x00, 0x1F, 0x70, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0,
    0x00, 0x00, 0xEF, 0x80, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x03, 0xEE, 0x00, 0x00,
    0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0xC7, 0x00, 0x07, 0xDF, 0x7C, 0x00,
    0x3E, 0xFB, 0xE0, 0x01, 0xF7, 0xDF, 0x00, 0x07, 0x1C, 0x70, 0x00, // char56
    0x01, 0xC7, 0x1C, 0x00, 0x1F, 0x7D, 0xF0, 0x00, 0xFB, 0xEF, 0x80, 0x07, 0xDF, 0x7C, 0x00, 0x1C,
    0x71, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x0E, 0xF8, 0x00, 0x00,
    0xFF, 0xC0, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x3E, 0xE0, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0xC0, 0x00, 0x01, 0xDF, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0xFF, 0xC0, 0x00,
    0x07, 0xDC, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE3, 0x8E, 0x38,
    0x0F, 0xBE, 0xFB, 0xE0, 0x7D, 0xF7, 0xDF, 0x03, 0xEF, 0xBE, 0xF8, 0x0E, 0x38, 0xE3, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x03,
    0xE0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xE0, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00,
    0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0xC7, 0x00, 0x07, 0xDF, 0x7C, 0x00,
    0x3E, 0xFB, 0xE0, 0x01, 0xF7, 0xDF, 0x00, 0x07, 0x1C, 0x70, 0x00 // char57
};

const GFXglyph Font_32_Matrix_NumGlyphs[] = {
    {0, 29, 47, 32, 1, -48},    // char48
    {171, 17, 47, 32, 7, -48},  // char49
    {271, 29, 47, 32, 1, -48},  // char50
    {442, 29, 47, 32, 1, -48},  // char51
    {613, 29, 47, 32, 1, -48},  // char52
    {784, 29, 47, 32, 1, -48},  // char53
    {955, 29, 47, 32, 1, -48},  // char54
    {1126, 29, 47, 32, 1, -48}, // char55
    {1297, 29, 47, 32, 1, -48}, // char56
    {1468, 29, 47, 32, 1, -48}  // char57
};

const GFXfont Font_32_Matrix_Num = {
    (uint8_t *)Font_32_Matrix_NumBitmaps,
    (GFXglyph *)Font_32_Matrix_NumGlyphs,
    48, 57, 50};
