#include <stdint.h>
#include "st7735.h"

const uint8_t Font_16_DefaultBitmaps[] = {
    0x77, 0xFF, 0xFF, 0xFD, 0xCE, 0x00, 0x1C, 0xE7, 0x00, // symbol '!'
    0xE3, 0xF1, 0xF8, 0xFC, 0x76, 0x30,                   // symbol
    0x18, 0x60, 0x61, 0x81, 0x86, 0x3F, 0xFF, 0xFF, 0xFC, 0x61, 0x81, 0x86, 0x06, 0x18, 0x18, 0x63,
    0xFF, 0xFF, 0xFF, 0xC6, 0x18, 0x18, 0x60, 0x61, 0x80, // symbol '#'
    0x12, 0x04, 0x87, 0xFF, 0xFF, 0xD2, 0x34, 0x8F, 0xF9, 0xFF, 0x12, 0xC4, 0xBF, 0xFF, 0xFE, 0x12,
    0x04, 0x80,                                                                               // symbol '$'
    0xE1, 0xE3, 0xE7, 0x0E, 0x1C, 0x38, 0x70, 0xE7, 0xC7, 0x87,                               // symbol '%'
    0x78, 0x33, 0x0C, 0xC3, 0x30, 0x78, 0x1E, 0x17, 0xCF, 0x3F, 0xC7, 0xB1, 0xCC, 0xF9, 0xF3, // symbol '&'
    0x77, 0x7E,                                                                               // symbol '''
    0x0F, 0x1C, 0x38, 0x70, 0xE0, 0xE0, 0xE0, 0xE0, 0x70, 0x38, 0x1C, 0x0F,                   // symbol '('
    0xF0, 0x38, 0x1C, 0x0E, 0x07, 0x07, 0x07, 0x07, 0x0E, 0x1C, 0x38, 0xF0,                   // symbol ')'
    0x06, 0x04, 0x62, 0x26, 0x41, 0xF8, 0x1F, 0x8F, 0xFF, 0xFF, 0xF1, 0xF8, 0x1F, 0x82, 0x64, 0x46,
    0x20, 0x60,                                     // symbol '*'
    0x18, 0x18, 0x18, 0xFF, 0xFF, 0x18, 0x18, 0x18, // symbol '+'
    0x77, 0x7E,                                     // symbol ','
    0xFF, 0xFF, 0xF0,                               // symbol '-'
    0xFF, 0x80,                                     // symbol '.'
    0x00, 0x10, 0x03, 0x00, 0x70, 0x0E, 0x01, 0xC0, 0x38, 0x07, 0x00, 0xE0, 0x1C, 0x03, 0x80, 0x70,
    0x0E, 0x00,                                                                               // symbol '/'
    0x7F, 0xB8, 0x7E, 0x3F, 0x9F, 0xE7, 0xFB, 0x7E, 0xDF, 0xE7, 0xF9, 0xFC, 0x7E, 0x1D, 0xFE, // digit '0'
    0x0C, 0x06, 0x07, 0x1F, 0x8F, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x07, 0x1F, 0xF0,       // digit '1'
    0x7F, 0x38, 0xEE, 0x1C, 0x07, 0x03, 0x81, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x7E, 0x1F, 0xFF, // digit '2'
    0x7F, 0x38, 0xEE, 0x1C, 0x07, 0x03, 0x87, 0x81, 0xE0, 0x0E, 0x01, 0xF8, 0x7E, 0x39, 0xFC, // digit '3'
    0x07, 0x03, 0xC1, 0xF0, 0xDC, 0x67, 0x31, 0xCF, 0xFF, 0xFF, 0x07, 0x01, 0xC0, 0x70, 0x7F, // digit '4'
    0xFF, 0xF8, 0x0E, 0x03, 0x80, 0xE0, 0x3F, 0xCF, 0xF8, 0x0F, 0x01, 0xF8, 0x7E, 0x39, 0xFC, // digit '5'
    0x1F, 0x0E, 0x07, 0x03, 0x80, 0xE0, 0x3F, 0xEF, 0xFF, 0x87, 0xE1, 0xF8, 0x7E, 0x1D, 0xFE, // digit '6'
    0xFF, 0xFC, 0x1F, 0x83, 0xF0, 0x70, 0x0E, 0x03, 0x80, 0xE0, 0x38, 0x0E, 0x03, 0x80, 0x70, 0x0E,
    0x00,                                                                                           // digit '7'
    0x7F, 0xB8, 0x7E, 0x1F, 0x87, 0xF9, 0xCF, 0xC3, 0xF3, 0x9F, 0xE1, 0xF8, 0x7E, 0x1D, 0xFE,       // digit '8'
    0x7F, 0xB8, 0x7E, 0x1F, 0x87, 0xE1, 0xFF, 0xF7, 0xFC, 0x07, 0x01, 0xC0, 0xE0, 0x70, 0xF8,       // digit '9'
    0xFF, 0x81, 0xFF,                                                                               // symbol ':'
    0x77, 0x70, 0x07, 0x77, 0xE0,                                                                   // symbol ';'
    0x03, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x81, 0xC0, 0x70, 0x1C, 0x07, 0x01, 0xC0, 0x70, 0x1C, // symbol '<'
    0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,                                           // symbol '='
    0xE0, 0x38, 0x0E, 0x03, 0x80, 0xE0, 0x38, 0x0E, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, // symbol '>'
    0x1E, 0x1F, 0xEF, 0x3F, 0x07, 0x01, 0xC0, 0xE0, 0x70, 0x38, 0x0E, 0x00, 0x00, 0x00, 0x38, 0x0E,
    0x03, 0x80, // symbol '?'
    0x7F, 0xDC, 0x1F, 0x83, 0xF0, 0x7E, 0x0F, 0xCF, 0xF9, 0xFF, 0x3F, 0xE7, 0xFC, 0x03, 0x80, 0x70,
    0x0F, 0xF8, 0x7F, 0x80,                                                                   // symbol '@'
    0x1E, 0x0F, 0xC7, 0x3B, 0x87, 0xE1, 0xF8, 0x7E, 0x1F, 0xFF, 0xE1, 0xF8, 0x7E, 0x1F, 0x87, // eng 'A'
    0xFF, 0x9C, 0x77, 0x1D, 0xC7, 0x71, 0xDF, 0xE7, 0xF9, 0xC7, 0x71, 0xDC, 0x77, 0x1F, 0xFE, // eng 'B'
    0x3F, 0x9C, 0x7E, 0x1F, 0x80, 0xE0, 0x38, 0x0E, 0x03, 0x80, 0xE0, 0x38, 0x77, 0x1C, 0xFE, // eng 'C'
    0xFF, 0x1C, 0xE7, 0x1D, 0xC7, 0x71, 0xDC, 0x77, 0x1D, 0xC7, 0x71, 0xDC, 0x77, 0x3B, 0xFC, // eng 'D'
    0xFF, 0xDC, 0x37, 0x05, 0xC0, 0x71, 0x9F, 0xE7, 0xF9, 0xC6, 0x70, 0x1C, 0x17, 0x0F, 0xFF, // eng 'E'
    0xFF, 0xDC, 0x37, 0x05, 0xC0, 0x71, 0x9F, 0xE7, 0xF9, 0xC6, 0x70, 0x1C, 0x07, 0x03, 0xE0, // eng 'F'
    0x3F, 0x9C, 0x7E, 0x1F, 0x87, 0xE0, 0x38, 0x0E, 0x03, 0x9F, 0xE1, 0xF8, 0x77, 0x1C, 0xFF, // eng 'G'
    0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0xFF, 0xFF, 0xC7, 0xE3, 0xF1, 0xF8, 0xFC, 0x70,       // eng 'H'
    0xFE, 0x70, 0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x38, 0x70, 0xE7, 0xF0,                         // eng 'I'
    0x07, 0xF0, 0x1C, 0x01, 0xC0, 0x1C, 0x01, 0xC0, 0x1C, 0x01, 0xCE, 0x1C, 0xE1, 0xCE, 0x1C, 0xE1,
    0xC3, 0xF8,                                                                               // eng 'J'
    0xF1, 0xDC, 0x77, 0x39, 0xDC, 0x7E, 0x1F, 0x07, 0xC1, 0xF8, 0x77, 0x1C, 0xE7, 0x1F, 0xC7, // eng 'K'
    0xF8, 0x1C, 0x07, 0x01, 0xC0, 0x70, 0x1C, 0x07, 0x01, 0xC0, 0x70, 0x5C, 0x37, 0x1F, 0xFF, // eng 'L'
    0xE0, 0xFE, 0x3F, 0xEF, 0xFF, 0xFF, 0xFF, 0xDD, 0xF9, 0x3F, 0x07, 0xE0, 0xFC, 0x1F, 0x83, 0xF0,
    0x70, // eng 'M'
    0xE0, 0xFC, 0x1F, 0xC3, 0xFC, 0x7F, 0xCF, 0xDD, 0xF9, 0xFF, 0x1F, 0xE1, 0xFC, 0x1F, 0x83, 0xF0,
    0x70, // eng 'N'
    0x1F, 0x07, 0xF1, 0xC7, 0x70, 0x7E, 0x0F, 0xC1, 0xF8, 0x3F, 0x07, 0xE0, 0xEE, 0x38, 0xFE, 0x0F,
    0x80,                                                                                     // eng 'O'
    0xFF, 0x9C, 0x77, 0x1D, 0xC7, 0x71, 0xDF, 0xE7, 0xF9, 0xC0, 0x70, 0x1C, 0x07, 0x03, 0xE0, // eng 'P'
    0x1F, 0x0F, 0x79, 0xC7, 0x70, 0x7E, 0x0F, 0xC1, 0xF8, 0x3F, 0x1F, 0xE7, 0xEF, 0xF9, 0xFF, 0x00,
    0xE0, 0x7E,                                                                               // eng 'Q'
    0xFF, 0x9C, 0x77, 0x1D, 0xC7, 0x71, 0xDF, 0xE7, 0xF9, 0xCE, 0x71, 0xDC, 0x77, 0x1F, 0xC7, // eng 'R'
    0x7F, 0xB8, 0x7E, 0x1F, 0x87, 0xE0, 0x1F, 0xC3, 0xF8, 0x07, 0xE1, 0xF8, 0x7E, 0x1D, 0xFE, // eng 'S'
    0xFF, 0xF9, 0xCE, 0x38, 0x87, 0x00, 0xE0, 0x1C, 0x03, 0x80, 0x70, 0x0E, 0x01, 0xC0, 0x38, 0x1F,
    0xC0,                                                                               // eng 'T'
    0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xF8, 0xEF, 0xE0, // eng 'U'
    0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xBB, 0x8F, 0x83, 0x80, // eng 'V'
    0xE0, 0xFC, 0x1F, 0x83, 0xF0, 0x7E, 0x0F, 0xC9, 0xF9, 0x3F, 0x27, 0x7F, 0xCF, 0xF8, 0xEE, 0x1D,
    0xC0,                                                                                     // eng 'W'
    0xE3, 0xF1, 0xF8, 0xEE, 0xE3, 0xE0, 0xE0, 0x70, 0x7C, 0x77, 0x71, 0xF8, 0xFC, 0x70,       // eng 'X'
    0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3B, 0xB8, 0xF8, 0x38, 0x1C, 0x0E, 0x07, 0x0F, 0xE0,       // eng 'Y'
    0xFF, 0xF8, 0x7C, 0x1E, 0x0E, 0x07, 0x03, 0x81, 0xC0, 0xE0, 0x70, 0x78, 0x3E, 0x1F, 0xFF, // eng 'Z'
    0xFF, 0xC3, 0x87, 0x0E, 0x1C, 0x38, 0x70, 0xE1, 0xC3, 0x87, 0xF0,                         // symbol '['
    0x80, 0x06, 0x00, 0x38, 0x00, 0xE0, 0x03, 0x80, 0x0E, 0x00, 0x38, 0x00, 0xE0, 0x03, 0x80, 0x0E,
    0x00, 0x38, 0x00, 0x70,                                                                         // symbol '\'
    0xFE, 0x1C, 0x38, 0x70, 0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x3F, 0xF0,                               // symbol ']'
    0x0C, 0x07, 0x83, 0xF1, 0xCE, 0xE1, 0xC0,                                                       // symbol '^'
    0xFF, 0xFF, 0xFF, 0xFC,                                                                         // symbol '_'
    0xE7, 0x0E, 0x70,                                                                               // symbol '`'
    0x7F, 0x00, 0xE0, 0x39, 0xFE, 0xE3, 0xB8, 0xEE, 0x39, 0xFB,                                     // eng 'a'
    0xF0, 0x1C, 0x07, 0x01, 0xC0, 0x7F, 0x9C, 0x77, 0x1D, 0xC7, 0x71, 0xDC, 0x77, 0x1F, 0x7E,       // eng 'b'
    0x7F, 0x71, 0xF8, 0xFC, 0x0E, 0x07, 0x1F, 0x8E, 0xFE,                                           // eng 'c'
    0x07, 0xC0, 0xE0, 0x38, 0x0E, 0x7F, 0xB8, 0xEE, 0x3B, 0x8E, 0xE3, 0xB8, 0xEE, 0x39, 0xFB,       // eng 'd'
    0x7F, 0x71, 0xF8, 0xFF, 0xFE, 0x07, 0x1F, 0x8E, 0xFE,                                           // eng 'e'
    0x1F, 0x1D, 0xCE, 0xE7, 0x03, 0x87, 0xFB, 0xFC, 0x70, 0x38, 0x1C, 0x0E, 0x1F, 0xC0,             // eng 'f'
    0x7E, 0xF8, 0xEE, 0x3B, 0x8E, 0xE3, 0x9F, 0xE3, 0xF8, 0x0E, 0xE3, 0x9F, 0xC0,                   // eng 'g'
    0xF0, 0x1C, 0x07, 0x01, 0xC0, 0x77, 0x9E, 0x77, 0x9D, 0xC7, 0x71, 0xDC, 0x77, 0x1F, 0xC7,       // eng 'h'
    0x1C, 0x0E, 0x07, 0x00, 0x0F, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x07, 0x1F, 0xF0,             // eng 'i'
    0x03, 0x81, 0xC0, 0xE0, 0x01, 0xF8, 0x1C, 0x0E, 0x07, 0x03, 0x81, 0xC0, 0xFC, 0x76, 0x79, 0xF8, // eng 'j'
    0xF0, 0x1C, 0x07, 0x01, 0xC0, 0x71, 0xDC, 0xE7, 0x71, 0xF8, 0x77, 0x1C, 0xE7, 0x1F, 0xC7,       // eng 'k'
    0xFC, 0x0E, 0x07, 0x03, 0x81, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x07, 0x1F, 0xF0,             // eng 'l'
    0xFF, 0xDC, 0x9F, 0x93, 0xF2, 0x7E, 0x4F, 0xC9, 0xF9, 0x3F, 0x27,                               // eng 'm'
    0xFF, 0x71, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7,                                           // eng 'n'
    0x7F, 0x71, 0xF8, 0xFC, 0x7E, 0x3F, 0x1F, 0x8E, 0xFE,                                           // eng 'o'
    0xDF, 0x9C, 0x77, 0x1D, 0xC7, 0x71, 0xDC, 0x77, 0xF9, 0xC0, 0x70, 0x3E, 0x00,                   // eng 'p'
    0x7E, 0xF8, 0xEE, 0x3B, 0x8E, 0xE3, 0xB8, 0xE7, 0xF8, 0x0E, 0x03, 0x81, 0xF0,                   // eng 'q'
    0xF7, 0x9F, 0xF7, 0x9D, 0xC0, 0x70, 0x1C, 0x07, 0x03, 0xE0,                                     // eng 'r'
    0x7F, 0x70, 0xF8, 0x6F, 0x81, 0xF6, 0x1F, 0x0E, 0xFE,                                           // eng 's'
    0x08, 0x0C, 0x0E, 0x1F, 0xF3, 0x81, 0xC0, 0xE0, 0x70, 0x3B, 0x9D, 0xC7, 0xC0,                   // eng 't'
    0xE3, 0xB8, 0xEE, 0x3B, 0x8E, 0xE3, 0xB8, 0xEE, 0x39, 0xFB,                                     // eng 'u'
    0xE3, 0xF1, 0xF8, 0xFC, 0x7E, 0x3B, 0xB8, 0xF8, 0x38,                                           // eng 'v'
    0xE0, 0xFC, 0x1F, 0x83, 0xF2, 0x7E, 0x4E, 0xFF, 0x8E, 0xE1, 0xDC,                               // eng 'w'
    0xE7, 0xE7, 0x7E, 0x3C, 0x3C, 0x7E, 0xE7, 0xE7,                                                 // eng 'x'
    0x71, 0xDC, 0x77, 0x1D, 0xC7, 0x71, 0xCF, 0xE1, 0xF0, 0x1C, 0x0E, 0x3F, 0x00,                   // eng 'y'
    0xFF, 0xC7, 0x8E, 0x1C, 0x38, 0x71, 0xE3, 0xFF,                                                 // eng 'z'
    0x0F, 0xC7, 0x01, 0xC0, 0x70, 0x38, 0x38, 0x0E, 0x00, 0xE0, 0x1C, 0x07, 0x01, 0xC0, 0x3F,       // symbol '{'
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,                                                             // symbol '|'
    0xFC, 0x03, 0x80, 0xE0, 0x38, 0x07, 0x00, 0x70, 0x1C, 0x1C, 0x0E, 0x03, 0x80, 0xE3, 0xF0,       // symbol '}'
    0x7C, 0x7E, 0xE7, 0xE7, 0x7E, 0x3E                                                              // symbol '~'
};

const GFXglyph Font_16_DefaultGlyphs[] = {
    {0, 0, 0, 16, 0, 0},        // SPC
    {0, 5, 13, 16, 4, -13},     // symbol '!'
    {9, 9, 5, 16, 4, -14},      // symbol
    {15, 14, 14, 16, 1, -14},   // symbol '#'
    {40, 10, 14, 16, 3, -14},   // symbol '$'
    {58, 8, 10, 16, 4, -12},    // symbol '%'
    {68, 10, 12, 16, 3, -13},   // symbol '&'
    {83, 4, 4, 16, 4, -13},     // symbol '''
    {85, 8, 12, 16, 4, -13},    // symbol '('
    {97, 8, 12, 16, 4, -13},    // symbol ')'
    {109, 12, 12, 16, 2, -13},  // symbol '*'
    {127, 8, 8, 16, 4, -11},    // symbol '+'
    {135, 4, 4, 16, 4, -4},     // symbol ','
    {137, 10, 2, 16, 3, -8},    // symbol '-'
    {140, 3, 3, 16, 5, -4},     // symbol '.'
    {142, 12, 12, 16, 3, -13},  // symbol '/'
    {160, 10, 12, 16, 3, -13},  // digit '0'
    {175, 9, 12, 16, 3, -13},   // digit '1'
    {189, 10, 12, 16, 3, -13},  // digit '2'
    {204, 10, 12, 16, 3, -13},  // digit '3'
    {219, 10, 12, 16, 3, -13},  // digit '4'
    {234, 10, 12, 16, 3, -13},  // digit '5'
    {249, 10, 12, 16, 3, -13},  // digit '6'
    {264, 11, 12, 16, 3, -13},  // digit '7'
    {281, 10, 12, 16, 3, -13},  // digit '8'
    {296, 10, 12, 16, 3, -13},  // digit '9'
    {311, 3, 8, 16, 6, -11},    // symbol ':'
    {314, 4, 9, 16, 5, -11},    // symbol ';'
    {319, 9, 14, 16, 3, -14},   // symbol '<'
    {335, 12, 6, 16, 2, -10},   // symbol '='
    {344, 9, 14, 16, 3, -14},   // symbol '>'
    {360, 10, 14, 16, 3, -14},  // symbol '?'
    {378, 11, 14, 16, 3, -14},  // symbol '@'
    {398, 10, 12, 16, 3, -13},  // eng 'A'
    {413, 10, 12, 16, 3, -13},  // eng 'B'
    {428, 10, 12, 16, 3, -13},  // eng 'C'
    {443, 10, 12, 16, 3, -13},  // eng 'D'
    {458, 10, 12, 16, 3, -13},  // eng 'E'
    {473, 10, 12, 16, 3, -13},  // eng 'F'
    {488, 10, 12, 16, 3, -13},  // eng 'G'
    {503, 9, 12, 16, 3, -13},   // eng 'H'
    {517, 7, 12, 16, 4, -13},   // eng 'I'
    {528, 12, 12, 16, 2, -13},  // eng 'J'
    {546, 10, 12, 16, 3, -13},  // eng 'K'
    {561, 10, 12, 16, 3, -13},  // eng 'L'
    {576, 11, 12, 16, 3, -13},  // eng 'M'
    {593, 11, 12, 16, 3, -13},  // eng 'N'
    {610, 11, 12, 16, 3, -13},  // eng 'O'
    {627, 10, 12, 16, 3, -13},  // eng 'P'
    {642, 11, 13, 16, 3, -13},  // eng 'Q'
    {660, 10, 12, 16, 3, -13},  // eng 'R'
    {675, 10, 12, 16, 3, -13},  // eng 'S'
    {690, 11, 12, 16, 3, -13},  // eng 'T'
    {707, 9, 12, 16, 3, -13},   // eng 'U'
    {721, 9, 12, 16, 3, -13},   // eng 'V'
    {735, 11, 12, 16, 3, -13},  // eng 'W'
    {752, 9, 12, 16, 3, -13},   // eng 'X'
    {766, 9, 12, 16, 3, -13},   // eng 'Y'
    {780, 10, 12, 16, 3, -13},  // eng 'Z'
    {795, 7, 12, 16, 5, -13},   // symbol '['
    {806, 13, 12, 16, 3, -13},  // symbol '\'
    {826, 7, 12, 16, 5, -13},   // symbol ']'
    {837, 10, 5, 16, 3, -14},   // symbol '^'
    {844, 15, 2, 16, 1, -1},    // symbol '_'
    {848, 5, 4, 16, 3, -13},    // symbol '`'
    {851, 10, 8, 16, 3, -9},    // eng 'a'
    {861, 10, 12, 16, 3, -13},  // eng 'b'
    {876, 9, 8, 16, 3, -9},     // eng 'c'
    {885, 10, 12, 16, 3, -13},  // eng 'd'
    {900, 9, 8, 16, 3, -9},     // eng 'e'
    {909, 9, 12, 16, 3, -13},   // eng 'f'
    {923, 10, 10, 16, 3, -9},   // eng 'g'
    {936, 10, 12, 16, 3, -13},  // eng 'h'
    {951, 9, 12, 16, 4, -13},   // eng 'i'
    {965, 9, 14, 16, 3, -13},   // eng 'j'
    {981, 10, 12, 16, 3, -13},  // eng 'k'
    {996, 9, 12, 16, 4, -13},   // eng 'l'
    {1010, 11, 8, 16, 3, -9},   // eng 'm'
    {1021, 9, 8, 16, 3, -9},    // eng 'n'
    {1030, 9, 8, 16, 3, -9},    // eng 'o'
    {1039, 10, 10, 16, 3, -9},  // eng 'p'
    {1052, 10, 10, 16, 2, -9},  // eng 'q'
    {1065, 10, 8, 16, 3, -9},   // eng 'r'
    {1075, 9, 8, 16, 3, -9},    // eng 's'
    {1084, 9, 11, 16, 3, -12},  // eng 't'
    {1097, 10, 8, 16, 3, -9},   // eng 'u'
    {1107, 9, 8, 16, 3, -9},    // eng 'v'
    {1116, 11, 8, 16, 3, -9},   // eng 'w'
    {1127, 8, 8, 16, 3, -9},    // eng 'x'
    {1135, 10, 10, 16, 3, -9},  // eng 'y'
    {1148, 8, 8, 16, 3, -9},    // eng 'z'
    {1156, 10, 12, 16, 3, -13}, // symbol '{'
    {1171, 3, 14, 16, 7, -14},  // symbol '|'
    {1177, 10, 12, 16, 3, -13}, // symbol '}'
    {1192, 12, 4, 16, 2, -13}   // symbol '~'
};

const GFXfont Font_16_Default = {
    (uint8_t *)Font_16_DefaultBitmaps,
    (GFXglyph *)Font_16_DefaultGlyphs,
    32, 126, 16};
