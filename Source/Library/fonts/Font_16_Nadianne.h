#include <stdint.h>
#include "st7735.h"

const uint8_t Font_16_NadianneBitmaps[] = {
    0x3C, 0xE3, 0x8E, 0x30, 0xC3, 0x10, 0xE3, 0x8C, 0x00,                                           // char33
    0x77, 0x66, 0x66, 0x44, 0xCC, 0xCC,                                                             // char34
    0x0C, 0xC1, 0x10, 0x22, 0x0C, 0x47, 0xFE, 0x22, 0x0C, 0x47, 0xFE, 0x22, 0x0C, 0xC1, 0x98, 0x00, // char35
    0x02, 0x01, 0xFC, 0xFF, 0xBA, 0x07, 0x40, 0xFC, 0x0F, 0xE0, 0x7E, 0x09, 0xD9, 0x3B, 0xFE, 0x3F,
    0x01, 0x00, 0x20, 0x00, // char36
    0x3C, 0x31, 0x99, 0x8C, 0x6C, 0x31, 0xA0, 0xCD, 0x81, 0xED, 0xE0, 0x6C, 0xC1, 0x63, 0x0D, 0x8C,
    0x66, 0x63, 0x0F, 0x00, // char37
    0x00, 0xF8, 0x07, 0xE0, 0x30, 0x01, 0xC0, 0x37, 0x01, 0xDC, 0xEE, 0x7B, 0xB0, 0xFC, 0xC3, 0xE1,
    0xFF, 0xF3, 0xE7, 0xC0,                                                       // char38
    0x76, 0x64, 0xCC,                                                             // char39
    0x0C, 0x63, 0x9C, 0xF3, 0x8E, 0x38, 0xE1, 0x86, 0x0C,                         // char40
    0x30, 0x61, 0x87, 0x1C, 0x71, 0xCF, 0x39, 0xC6, 0x30,                         // char41
    0x0E, 0x0B, 0x87, 0xC8, 0xFF, 0x3F, 0xBF, 0xC4, 0xF8, 0x74, 0x1C, 0x00,       // char42
    0x07, 0x01, 0x80, 0x60, 0x38, 0xFF, 0xFF, 0xF0, 0xC0, 0x70, 0x1C, 0x07, 0x00, // char43
    0x39, 0xCC, 0xE6, 0x60,                                                       // char44
    0xFF, 0xC0,                                                                   // char45
    0x7F, 0x00,                                                                   // char46
    0x18, 0xC4, 0x63, 0x18, 0x8C, 0x63, 0x11, 0x8C, 0x00,                         // char47
    0x0F, 0xC1, 0xFE, 0x3C, 0x77, 0x07, 0xF0, 0x7E, 0x07, 0xE0, 0xFE, 0x0E, 0xE3, 0xC7, 0xF8, 0x3F,
    0x00,                                                                                           // char48
    0x0C, 0xFF, 0xFF, 0x38, 0xE3, 0x8E, 0x31, 0xC7, 0x00,                                           // char49
    0x1F, 0x0F, 0xE2, 0x1C, 0x07, 0x03, 0xC1, 0xE0, 0xF0, 0xF8, 0xF8, 0x3F, 0xEF, 0xF8,             // char50
    0x3F, 0xC7, 0xFC, 0x03, 0x81, 0xE0, 0xF0, 0x1E, 0x00, 0xF0, 0x0E, 0x83, 0xDF, 0xF1, 0xF8, 0x00, // char51
    0x0F, 0x0F, 0x0F, 0x07, 0x07, 0x3F, 0x9F, 0xFC, 0xFE, 0x07, 0x03, 0x83, 0x80,                   // char52
    0x1F, 0xE3, 0xFC, 0x70, 0x1C, 0x03, 0xF8, 0x3F, 0x80, 0x70, 0x0E, 0x83, 0x9F, 0xF1, 0xF8, 0x00, // char53
    0x07, 0xC3, 0xFD, 0xF0, 0xB8, 0x0F, 0xF1, 0xFF, 0x3C, 0x77, 0x0E, 0xE3, 0xCF, 0xF0, 0x7C, 0x00, // char54
    0xFF, 0x7F, 0xC0, 0xE0, 0x6F, 0xF7, 0xF0, 0x38, 0x38, 0x38, 0x3C, 0x3C, 0x00,                   // char55
    0x0F, 0xC1, 0xFF, 0x38, 0x73, 0x8F, 0x1F, 0xC3, 0xF8, 0x7B, 0xCE, 0x0E, 0xE0, 0xE7, 0xFC, 0x3F,
    0x80, // char56
    0x1F, 0x07, 0xF9, 0xE3, 0x38, 0x77, 0x1E, 0x7F, 0xC7, 0xF8, 0x0E, 0x03, 0xD0, 0xF3, 0xFC, 0x3E,
    0x00,                                                                               // char57
    0x37, 0x60, 0x06, 0xEC,                                                             // char58
    0x0C, 0x71, 0x80, 0x00, 0xE3, 0x8C, 0x71, 0x8C, 0x00,                               // char59
    0x00, 0x40, 0x70, 0x78, 0x78, 0x70, 0x30, 0x07, 0x00, 0x78, 0x07, 0x80, 0x70, 0x04, // char60
    0x7F, 0xEF, 0xFC, 0x00, 0x7F, 0xEF, 0xFC,                                           // char61
    0x80, 0x38, 0x07, 0x80, 0x78, 0x03, 0x80, 0x30, 0x38, 0x78, 0x78, 0x38, 0x08, 0x00, // char62
    0x7C, 0xFE, 0x87, 0x07, 0x0E, 0x1C, 0x30, 0x00, 0x70, 0x70, 0x60,                   // char63
    0x0F, 0x83, 0x86, 0x77, 0xF6, 0xFD, 0xCC, 0xDD, 0x99, 0xD9, 0x9D, 0xBA, 0xDD, 0xA6, 0xDE, 0x70,
    0xC1, 0xF0, // char64
    0x00, 0x38, 0x03, 0xF0, 0x1D, 0xC0, 0xE7, 0x07, 0x1B, 0xFE, 0xEF, 0xFB, 0x8E, 0x0E, 0x70, 0x31,
    0xC1, 0xCE, 0x03, 0xC0, // char65
    0x38, 0x70, 0xE7, 0x63, 0xB1, 0xCE, 0x8F, 0x3C, 0x38, 0xD1, 0xE7, 0x9E, 0x1E, 0x3C, 0x70, 0x73,
    0xC1, 0xCE, 0x0F, 0x00, 0x78, 0x3F, 0xC0, 0xFC, 0x00, // char66
    0x07, 0xC1, 0xFE, 0x3C, 0x37, 0x83, 0xF0, 0xFE, 0x3E, 0xE3, 0xCE, 0x00, 0x70, 0x63, 0xFE, 0x0F,
    0x80, // char67
    0x3F, 0x0F, 0xFC, 0x80, 0xE7, 0x87, 0x70, 0x77, 0x07, 0x70, 0xFE, 0x0E, 0xE3, 0xEF, 0xF8, 0xFE,
    0x00,                                                                                           // char68
    0xFF, 0xFF, 0xFC, 0x00, 0x38, 0x0F, 0xF9, 0xFF, 0x38, 0x07, 0x00, 0xE0, 0x8F, 0xF0, 0xFC, 0x00, // char69
    0x7F, 0xCF, 0xFC, 0x03, 0x00, 0xE0, 0x1C, 0x7F, 0xCF, 0xF8, 0x1C, 0x03, 0x80, 0x70, 0x1C, 0x43,
    0x8F, 0xE0, 0xF0, 0x00, // char70
    0x07, 0xF0, 0xFF, 0xCF, 0x06, 0xF0, 0x0F, 0x07, 0x70, 0x7B, 0x87, 0x9C, 0xEC, 0x7E, 0xE1, 0xE7,
    0x00, 0x70, 0x07, 0x87, 0xF8, 0x3F, 0x00, // char71
    0x38, 0x39, 0xC1, 0xCE, 0x1C, 0x70, 0xEF, 0xFF, 0x7F, 0xF9, 0xC3, 0x8E, 0x1C, 0x70, 0xE7, 0x07,
    0x38, 0x3C, // char72
    0x1F, 0xC7, 0xFF, 0x40, 0x6C, 0x0E, 0xE0, 0xEF, 0x1C, 0x79, 0xC1, 0x1C, 0x23, 0x87, 0xF0, 0x3C,
    0x00, // char73
    0x1F, 0x8F, 0xFF, 0x03, 0x60, 0xEE, 0x1C, 0xE3, 0x08, 0xE0, 0x1C, 0x03, 0x80, 0x70, 0x1C, 0x03,
    0x81, 0xE0, 0x38, 0x00, // char74
    0x38, 0x3C, 0xE1, 0xC3, 0x8E, 0x0E, 0x70, 0x33, 0x81, 0xDE, 0x07, 0xFC, 0x1E, 0x70, 0x79, 0xE3,
    0xC3, 0xEE, 0x07, 0x00, // char75
    0x01, 0xF0, 0x7F, 0x0E, 0x01, 0xC0, 0x1C, 0x03, 0xC0, 0x38, 0x03, 0x00, 0x7C, 0x2F, 0xFE, 0x43,
    0xC0, // char76
    0x1E, 0x0F, 0x1F, 0x1F, 0x03, 0x9E, 0x0D, 0xB6, 0x0D, 0xB6, 0x0D, 0xEE, 0x1D, 0xEC, 0x19, 0xCC,
    0x39, 0xCC, 0x31, 0x8C, 0x71, 0x8E, 0xE0, 0x00, 0x40, 0x00, // char77
    0x07, 0x3C, 0x1E, 0x30, 0x79, 0xC1, 0xE7, 0x0F, 0x9C, 0x3E, 0x60, 0xDD, 0x87, 0x76, 0x1C, 0xF8,
    0xE3, 0xC7, 0x87, 0x3C, 0x00, 0x40, 0x00, // char78
    0x0F, 0xC1, 0xFF, 0x1F, 0x04, 0xE0, 0xEF, 0x03, 0xF0, 0x1F, 0x80, 0xFC, 0x0E, 0x60, 0xF1, 0xFF,
    0x07, 0xE0, // char79
    0x1C, 0x70, 0x73, 0xE1, 0xDD, 0xC7, 0xE7, 0x3B, 0x3C, 0xF8, 0xE3, 0xC7, 0x8E, 0xFC, 0x7B, 0xC1,
    0xC0, 0x07, 0x00, 0x38, 0x00, 0xE0, 0x00, // char80
    0x07, 0xC0, 0xFF, 0x8E, 0x1E, 0xE0, 0x7E, 0x03, 0xF0, 0x1F, 0x80, 0xDC, 0x0D, 0x70, 0x79, 0xFF,
    0x87, 0xF0, // char81
    0x38, 0x78, 0xE7, 0x73, 0xB1, 0xCE, 0xCF, 0x3E, 0x39, 0xF7, 0xC7, 0x9C, 0x1E, 0x38, 0x70, 0xE3,
    0xC3, 0xEE, 0x07, 0x00, // char82
    0x0F, 0xE3, 0xFF, 0x70, 0x37, 0x00, 0x7E, 0x03, 0xFC, 0x07, 0xE0, 0x0E, 0xC0, 0xEF, 0xFC, 0x7F,
    0x00, // char83
    0x1F, 0xFB, 0xFF, 0xD8, 0x01, 0x87, 0x8E, 0x38, 0x79, 0xC1, 0x9C, 0x00, 0xE0, 0x07, 0x00, 0x1F,
    0x80, 0x7C, // char84
    0x38, 0x39, 0xC3, 0xDE, 0x1C, 0xE1, 0xE7, 0x1F, 0x38, 0xBB, 0x8F, 0x9C, 0xDC, 0xEC, 0xE7, 0xC7,
    0x1C, 0x3C, // char85
    0x38, 0x7B, 0xF1, 0xFB, 0x9E, 0x9C, 0xE0, 0xE6, 0x07, 0x70, 0x3F, 0x01, 0xF0, 0x0F, 0x80, 0x78,
    0x03, 0x80, // char86
    0xE1, 0x8F, 0xE3, 0x87, 0xE3, 0x86, 0xE3, 0x8E, 0xE7, 0x8E, 0xE7, 0x9C, 0xED, 0x9C, 0xFD, 0xF8,
    0xF8, 0xF0, 0xF8, 0xF0, 0x70, 0xE0, // char87
    0x0E, 0x1C, 0x38, 0xE0, 0x77, 0x01, 0xF8, 0x07, 0xC0, 0x1E, 0x00, 0x78, 0x03, 0xF0, 0x1F, 0xC0,
    0xF7, 0xC7, 0x8C, 0x3C, 0x00, 0x40, 0x00, // char88
    0x70, 0x77, 0x8F, 0x70, 0xE7, 0x1E, 0x63, 0xEE, 0x3E, 0xE6, 0xCE, 0xDC, 0x79, 0xC3, 0x3C, 0x03,
    0x84, 0x78, 0xFF, 0x07, 0xC0,                                                                   // char89
    0x7F, 0xCF, 0xFC, 0x03, 0x80, 0xE7, 0xFE, 0xFF, 0xC7, 0x83, 0xE0, 0xF0, 0x1F, 0xF9, 0xFF, 0x00, // char90
    0x1E, 0x3C, 0xE1, 0xC3, 0x06, 0x0C, 0x38, 0x60, 0xC1, 0x87, 0x8F, 0x00,                         // char91
    0xCC, 0xC4, 0x66, 0x66, 0x62, 0x33, 0x30,                                                       // char92
    0x1F, 0x1F, 0x06, 0x06, 0x0E, 0x0E, 0x0C, 0x0C, 0x1C, 0x1C, 0x18, 0xF8, 0xF8,                   // char93
    0x10, 0x70, 0xA2, 0x28, 0x20,                                                                   // char94
    0xFF, 0xFF,                                                                                     // char95
    0x7D, 0xCF, 0x1E, 0x77, 0xC0,                                                                   // char96
    0x1F, 0xDF, 0xF7, 0x1B, 0xCE, 0xE7, 0xBB, 0xEF, 0xB9, 0xCF,                                     // char97
    0x38, 0x0E, 0x03, 0x80, 0xCE, 0x77, 0xDF, 0x77, 0x9D, 0xCF, 0xE3, 0xBF, 0xC7, 0xE0,             // char98
    0x1F, 0x3F, 0x70, 0xE0, 0xE0, 0xE2, 0x7E, 0x3C,                                                 // char99
    0x00, 0xE0, 0x1C, 0x03, 0x8F, 0xE3, 0xFC, 0xE3, 0xBC, 0x77, 0x1E, 0xEF, 0x9F, 0x70, 0xCF, 0x00, // char100
    0x0F, 0x1F, 0xDC, 0xFF, 0xEF, 0xC7, 0x09, 0xFC, 0x7C,                                           // char101
    0x03, 0x87, 0xC3, 0x87, 0xF3, 0xF8, 0xE0, 0x70, 0x30, 0x38, 0x1C, 0x0E, 0x07, 0x07, 0x07, 0x83,
    0x80,                                                                                           // char102
    0x1F, 0xDF, 0xF7, 0x9B, 0xCE, 0xE7, 0xBB, 0xEF, 0xB9, 0xDC, 0x07, 0x03, 0xCF, 0xE3, 0xE0,       // char103
    0x38, 0x0E, 0x03, 0x80, 0xE6, 0x33, 0xDD, 0x77, 0x9D, 0xCE, 0x73, 0xB8, 0xEE, 0x3C,             // char104
    0x39, 0xCC, 0x07, 0x39, 0xCE, 0xE7, 0x3C,                                                       // char105
    0x0E, 0x1C, 0x30, 0x01, 0xC3, 0x87, 0x0C, 0x38, 0x70, 0xE3, 0x8F, 0x1C, 0x00,                   // char106
    0x38, 0x0E, 0x03, 0x80, 0xEF, 0x37, 0x1D, 0x87, 0xE1, 0xFC, 0x77, 0x3D, 0xCE, 0x3C,             // char107
    0x39, 0xCE, 0x67, 0x39, 0xCC, 0xE7, 0x3C,                                                       // char108
    0x73, 0x1C, 0xEF, 0x7D, 0xDF, 0xBB, 0xDE, 0x77, 0x3D, 0xCE, 0x73, 0xB9, 0xC7, 0x73, 0x8F,       // char109
    0x31, 0x9C, 0xF7, 0x5D, 0xE7, 0x73, 0x9C, 0xEE, 0x3B, 0x8F,                                     // char110
    0x1F, 0x1F, 0xEF, 0x1F, 0x87, 0xE3, 0xF8, 0xF7, 0xF8, 0xF8,                                     // char111
    0x39, 0xC7, 0x7C, 0xFB, 0x9E, 0x73, 0x9E, 0xE3, 0x9F, 0xF3, 0xF8, 0x70, 0x0C, 0x03, 0x80, 0x00, // char112
    0x1F, 0xE7, 0xFD, 0xE3, 0x78, 0xEE, 0x3D, 0xDB, 0xBE, 0x71, 0x9C, 0x03, 0x80, 0x70, 0x0E, 0x00, // char113
    0x71, 0xB9, 0xDD, 0x8F, 0x07, 0x03, 0x83, 0x81, 0xC0,                                           // char114
    0x1F, 0x9F, 0xDC, 0x0F, 0xE1, 0xFC, 0x1F, 0xFD, 0xFC,                                           // char115
    0x1C, 0x18, 0x38, 0xFF, 0xFF, 0x30, 0x70, 0x70, 0x70, 0x7E, 0x3E,                               // char116
    0x71, 0xDC, 0x77, 0x39, 0xCE, 0xE7, 0xBB, 0xEF, 0x39, 0x8F,                                     // char117
    0xEF, 0xE7, 0xEE, 0xEE, 0xFC, 0x7C, 0x78, 0x70,                                                 // char118
    0xE7, 0x7F, 0x79, 0xF3, 0xCD, 0xBE, 0xED, 0xBE, 0x79, 0xF3, 0xCF, 0x1C, 0x70,                   // char119
    0x38, 0xE3, 0x38, 0x7E, 0x0F, 0x81, 0xF0, 0x7E, 0x1F, 0xE7, 0x9E,                               // char120
    0x71, 0xDC, 0x77, 0x39, 0xCE, 0xE7, 0xBB, 0xEF, 0xB9, 0x9C, 0x07, 0x23, 0xCF, 0xE0,             // char121
    0x7F, 0xBF, 0xC1, 0xE3, 0xE3, 0xC7, 0x83, 0xFD, 0xFE,                                           // char122
    0x07, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x30, 0x30, 0xE0, 0x60, 0x60, 0x60, 0xC0, 0xC0, 0xC0, 0x70, // char123
    0xFF, 0xFF,                                                                                     // char124
    0x0E, 0x03, 0x03, 0x03, 0x06, 0x06, 0x06, 0x06, 0x07, 0x0C, 0x0C, 0x18, 0x18, 0x18, 0x30, 0xE0, // char125
    0x3C, 0x2F, 0xFA, 0x1F, 0x00                                                                    // char126
};

const GFXglyph Font_16_NadianneGlyphs[] = {
    {0, 0, 0, 16, 0, 0},        // char32
    {0, 6, 11, 16, 5, -12},     // char33
    {9, 8, 6, 16, 6, -12},      // char34
    {15, 11, 11, 16, 2, -12},   // char35
    {31, 11, 14, 16, 2, -13},   // char36
    {51, 14, 11, 16, 1, -12},   // char37
    {71, 14, 11, 16, 1, -12},   // char38
    {91, 4, 6, 16, 8, -12},     // char39
    {94, 6, 12, 16, 5, -13},    // char40
    {103, 6, 12, 16, 3, -13},   // char41
    {112, 10, 9, 16, 5, -11},   // char42
    {124, 10, 10, 16, 4, -12},  // char43
    {137, 5, 6, 16, 4, -6},     // char44
    {141, 5, 2, 16, 5, -7},     // char45
    {143, 3, 3, 16, 6, -5},     // char46
    {145, 5, 13, 16, 6, -14},   // char47
    {154, 12, 11, 16, 2, -12},  // char48
    {171, 6, 11, 16, 5, -12},   // char49
    {180, 10, 11, 16, 3, -12},  // char50
    {194, 11, 11, 16, 2, -12},  // char51
    {210, 9, 11, 16, 4, -12},   // char52
    {223, 11, 11, 16, 2, -12},  // char53
    {239, 11, 11, 16, 3, -12},  // char54
    {255, 9, 11, 16, 5, -12},   // char55
    {268, 12, 11, 16, 2, -12},  // char56
    {285, 11, 12, 16, 3, -12},  // char57
    {302, 4, 8, 16, 6, -11},    // char58
    {306, 6, 11, 16, 4, -11},   // char59
    {315, 10, 11, 16, 2, -12},  // char60
    {329, 11, 5, 16, 2, -8},    // char61
    {336, 10, 11, 16, 4, -12},  // char62
    {350, 8, 11, 16, 4, -12},   // char63
    {361, 12, 12, 16, 2, -13},  // char64
    {379, 14, 11, 16, 2, -12},  // char65
    {399, 14, 14, 16, 2, -13},  // char66
    {424, 12, 11, 16, 2, -12},  // char67
    {441, 12, 11, 16, 2, -12},  // char68
    {458, 11, 11, 16, 4, -12},  // char69
    {474, 11, 14, 16, 2, -13},  // char70
    {494, 13, 14, 16, 2, -13},  // char71
    {517, 13, 11, 16, 2, -12},  // char72
    {535, 12, 11, 16, 3, -12},  // char73
    {552, 11, 14, 16, 4, -13},  // char74
    {572, 14, 11, 16, 2, -12},  // char75
    {592, 12, 11, 16, 2, -12},  // char76
    {609, 16, 13, 16, 0, -12},  // char77
    {635, 14, 13, 16, 0, -12},  // char78
    {658, 13, 11, 16, 2, -12},  // char79
    {676, 14, 13, 16, 2, -12},  // char80
    {699, 13, 11, 16, 2, -12},  // char81
    {717, 14, 11, 16, 1, -12},  // char82
    {737, 12, 11, 16, 3, -12},  // char83
    {754, 13, 11, 16, 2, -12},  // char84
    {772, 13, 11, 16, 2, -12},  // char85
    {790, 13, 11, 16, 1, -12},  // char86
    {808, 16, 11, 16, 0, -12},  // char87
    {830, 14, 13, 16, 2, -12},  // char88
    {853, 12, 14, 16, 2, -13},  // char89
    {874, 11, 11, 16, 3, -12},  // char90
    {890, 7, 13, 16, 5, -13},   // char91
    {902, 4, 13, 16, 6, -14},   // char92
    {909, 8, 13, 16, 3, -13},   // char93
    {922, 7, 5, 16, 5, -15},    // char94
    {927, 16, 1, 16, 0, 0},     // char95
    {929, 7, 5, 16, 8, -13},    // char96
    {934, 10, 8, 16, 4, -10},   // char97
    {944, 10, 11, 16, 4, -13},  // char98
    {958, 8, 8, 16, 5, -10},    // char99
    {966, 11, 11, 16, 2, -13},  // char100
    {982, 9, 8, 16, 4, -10},    // char101
    {991, 9, 15, 16, 4, -14},   // char102
    {1008, 10, 12, 16, 4, -11}, // char103
    {1023, 10, 11, 16, 2, -13}, // char104
    {1037, 5, 11, 16, 6, -13},  // char105
    {1044, 7, 14, 16, 4, -13},  // char106
    {1057, 10, 11, 16, 3, -13}, // char107
    {1071, 5, 11, 16, 6, -13},  // char108
    {1078, 15, 8, 16, 0, -10},  // char109
    {1093, 10, 8, 16, 4, -10},  // char110
    {1103, 10, 8, 16, 3, -10},  // char111
    {1113, 11, 11, 16, 2, -10}, // char112
    {1129, 11, 11, 16, 2, -10}, // char113
    {1145, 9, 8, 16, 4, -10},   // char114
    {1154, 9, 8, 16, 4, -10},   // char115
    {1163, 8, 11, 16, 4, -13},  // char116
    {1174, 10, 8, 16, 2, -10},  // char117
    {1184, 8, 8, 16, 4, -10},   // char118
    {1192, 13, 8, 16, 2, -10},  // char119
    {1205, 11, 8, 16, 3, -10},  // char120
    {1216, 10, 11, 16, 3, -10}, // char121
    {1230, 9, 8, 16, 4, -10},   // char122
    {1239, 8, 16, 16, 5, -15},  // char123
    {1255, 1, 16, 16, 8, -15},  // char124
    {1257, 8, 16, 16, 4, -15},  // char125
    {1273, 11, 3, 16, 4, -12}   // char126
};

const GFXfont Font_16_Nadianne = {
    (uint8_t *)Font_16_NadianneBitmaps,
    (GFXglyph *)Font_16_NadianneGlyphs,
    32, 126, 16};
