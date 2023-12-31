#include <stdint.h>
#include "st7735.h"

const uint8_t Font_8_Sinclair_InvertedBitmaps[] = {
    0xFA,                                           // char33
    0xB4,                                           // char34
    0x4B, 0xF4, 0x92, 0xFD, 0x20,                   // char35
    0x27, 0xE9, 0xF2, 0xFC, 0x80,                   // char36
    0xC7, 0x21, 0x08, 0x4E, 0x30,                   // char37
    0x21, 0x42, 0x15, 0x89, 0xD0,                   // char38
    0x60,                                           // char39
    0x6A, 0x90,                                     // char40
    0x95, 0x60,                                     // char41
    0x51, 0x3E, 0x45, 0x00,                         // char42
    0x21, 0x3E, 0x42, 0x00,                         // char43
    0x58,                                           // char44
    0xF8,                                           // char45
    0xF0,                                           // char46
    0x08, 0x88, 0x88, 0x00,                         // char47
    0x7A, 0x39, 0x69, 0xC5, 0xE0,                   // char48
    0x65, 0x08, 0x42, 0x7C,                         // char49
    0x7A, 0x10, 0x5E, 0x83, 0xF0,                   // char50
    0x7A, 0x11, 0x81, 0x85, 0xE0,                   // char51
    0x10, 0xC5, 0x24, 0xFC, 0x40,                   // char52
    0xFE, 0x0F, 0x81, 0x85, 0xE0,                   // char53
    0x7A, 0x0F, 0xA1, 0x85, 0xE0,                   // char54
    0xFC, 0x10, 0x84, 0x20, 0x80,                   // char55
    0x7A, 0x17, 0xA1, 0x85, 0xE0,                   // char56
    0x7A, 0x18, 0x5F, 0x05, 0xE0,                   // char57
    0x90,                                           // char58
    0x41, 0x60,                                     // char59
    0x2A, 0x22,                                     // char60
    0xF8, 0x3E,                                     // char61
    0x88, 0xA8,                                     // char62
    0x7A, 0x10, 0x84, 0x00, 0x40,                   // char63
    0x7A, 0x5A, 0xEF, 0x81, 0xE0,                   // char64
    0x7A, 0x18, 0x7F, 0x86, 0x10,                   // char65
    0xFA, 0x1F, 0xA1, 0x87, 0xE0,                   // char66
    0x7A, 0x18, 0x20, 0x85, 0xE0,                   // char67
    0xF2, 0x28, 0x61, 0x8B, 0xC0,                   // char68
    0xFE, 0x0F, 0xA0, 0x83, 0xF0,                   // char69
    0xFE, 0x0F, 0xA0, 0x82, 0x00,                   // char70
    0x7A, 0x18, 0x27, 0x85, 0xE0,                   // char71
    0x86, 0x1F, 0xE1, 0x86, 0x10,                   // char72
    0xF9, 0x08, 0x42, 0x7C,                         // char73
    0x04, 0x10, 0x61, 0x85, 0xE0,                   // char74
    0x8A, 0x4E, 0x24, 0x8A, 0x10,                   // char75
    0x82, 0x08, 0x20, 0x83, 0xF0,                   // char76
    0x87, 0x3B, 0x61, 0x86, 0x10,                   // char77
    0x87, 0x1A, 0x65, 0x8E, 0x10,                   // char78
    0x7A, 0x18, 0x61, 0x85, 0xE0,                   // char79
    0xFA, 0x18, 0x7E, 0x82, 0x00,                   // char80
    0x7A, 0x18, 0x69, 0x95, 0xE0,                   // char81
    0xFA, 0x18, 0x7E, 0x8A, 0x10,                   // char82
    0x7A, 0x07, 0x81, 0x85, 0xE0,                   // char83
    0xFE, 0x20, 0x40, 0x81, 0x02, 0x00,             // char84
    0x86, 0x18, 0x61, 0x85, 0xE0,                   // char85
    0x86, 0x18, 0x61, 0x48, 0xC0,                   // char86
    0x86, 0x18, 0x61, 0xB5, 0x20,                   // char87
    0x85, 0x23, 0x0C, 0x4A, 0x10,                   // char88
    0x82, 0x88, 0xA0, 0x81, 0x02, 0x00,             // char89
    0xFC, 0x21, 0x08, 0x43, 0xF0,                   // char90
    0xF2, 0x49, 0xC0,                               // char91
    0x82, 0x08, 0x20, 0x80,                         // char92
    0xE4, 0x93, 0xC0,                               // char93
    0x23, 0xAA, 0x42, 0x10,                         // char94
    0xFE,                                           // char95
    0x3C, 0x42, 0x99, 0xA1, 0xA1, 0x99, 0x42, 0x3C, // char96
    0xFF, 0x87, 0x7B, 0x7B, 0x03, 0x7B, 0x7B, 0xFF, // char97
    0xFF, 0x07, 0x7B, 0x07, 0x7B, 0x7B, 0x07, 0xFF, // char98
    0xFF, 0x87, 0x7B, 0x7F, 0x7F, 0x7B, 0x87, 0xFF, // char99
    0xFF, 0x0F, 0x77, 0x7B, 0x7B, 0x77, 0x0F, 0xFF, // char100
    0xFF, 0x03, 0x7F, 0x07, 0x7F, 0x7F, 0x03, 0xFF, // char101
    0xFF, 0x03, 0x7F, 0x07, 0x7F, 0x7F, 0x7F, 0xFF, // char102
    0xFF, 0x87, 0x7B, 0x7F, 0x63, 0x7B, 0x87, 0xFF, // char103
    0xFF, 0x7B, 0x7B, 0x03, 0x7B, 0x7B, 0x7B, 0xFF, // char104
    0xFF, 0x83, 0xEF, 0xEF, 0xEF, 0xEF, 0x83, 0xFF, // char105
    0xFF, 0xFB, 0xFB, 0xFB, 0x7B, 0x7B, 0x87, 0xFF, // char106
    0xFF, 0x77, 0x6F, 0x1F, 0x6F, 0x77, 0x7B, 0xFF, // char107
    0xFF, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x03, 0xFF, // char108
    0xFF, 0x7B, 0x33, 0x4B, 0x7B, 0x7B, 0x7B, 0xFF, // char109
    0xFF, 0x7B, 0x3B, 0x5B, 0x6B, 0x73, 0x7B, 0xFF, // char110
    0xFF, 0x87, 0x7B, 0x7B, 0x7B, 0x7B, 0x87, 0xFF, // char111
    0xFF, 0x07, 0x7B, 0x7B, 0x07, 0x7F, 0x7F, 0xFF, // char112
    0xFF, 0x87, 0x7B, 0x7B, 0x5B, 0x6B, 0x87, 0xFF, // char113
    0xFF, 0x07, 0x7B, 0x7B, 0x07, 0x77, 0x7B, 0xFF, // char114
    0xFF, 0x87, 0x7F, 0x87, 0xFB, 0x7B, 0x87, 0xFF, // char115
    0xFF, 0x01, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xFF, // char116
    0xFF, 0x7B, 0x7B, 0x7B, 0x7B, 0x7B, 0x87, 0xFF, // char117
    0xFF, 0x7B, 0x7B, 0x7B, 0x7B, 0xB7, 0xCF, 0xFF, // char118
    0xFF, 0x7B, 0x7B, 0x7B, 0x7B, 0x4B, 0xB7, 0xFF, // char119
    0xFF, 0x7B, 0xB7, 0xCF, 0xCF, 0xB7, 0x7B, 0xFF, // char120
    0xFF, 0x7D, 0xBB, 0xD7, 0xEF, 0xEF, 0xEF, 0xFF, // char121
    0xFF, 0x03, 0xF7, 0xEF, 0xDF, 0xBF, 0x03, 0xFF, // char122
    0x39, 0x30, 0x42, 0x1C,                         // char123
    0xFC,                                           // char124
    0xE1, 0x06, 0x42, 0x70,                         // char125
    0x5A                                            // char126
};

const GFXglyph Font_8_Sinclair_InvertedGlyphs[] = {
    {0, 0, 0, 8, 0, 0},    // char32
    {0, 1, 7, 8, 4, -7},   // char33
    {1, 3, 2, 8, 3, -7},   // char34
    {2, 6, 6, 8, 1, -6},   // char35
    {7, 5, 7, 8, 1, -7},   // char36
    {12, 6, 6, 8, 1, -6},  // char37
    {17, 6, 6, 8, 1, -6},  // char38
    {22, 2, 2, 8, 3, -6},  // char39
    {23, 2, 6, 8, 3, -6},  // char40
    {25, 2, 6, 8, 3, -6},  // char41
    {27, 5, 5, 8, 1, -5},  // char42
    {31, 5, 5, 8, 1, -5},  // char43
    {35, 2, 3, 8, 3, -2},  // char44
    {36, 5, 1, 8, 1, -3},  // char45
    {37, 2, 2, 8, 3, -2},  // char46
    {38, 5, 5, 8, 1, -5},  // char47
    {42, 6, 6, 8, 0, -6},  // char48
    {47, 5, 6, 8, 0, -6},  // char49
    {51, 6, 6, 8, 0, -6},  // char50
    {56, 6, 6, 8, 0, -6},  // char51
    {61, 6, 6, 8, 0, -6},  // char52
    {66, 6, 6, 8, 0, -6},  // char53
    {71, 6, 6, 8, 0, -6},  // char54
    {76, 6, 6, 8, 0, -6},  // char55
    {81, 6, 6, 8, 0, -6},  // char56
    {86, 6, 6, 8, 0, -6},  // char57
    {91, 1, 4, 8, 3, -4},  // char58
    {92, 2, 6, 8, 2, -5},  // char59
    {94, 3, 5, 8, 2, -5},  // char60
    {96, 5, 3, 8, 1, -4},  // char61
    {98, 3, 5, 8, 2, -5},  // char62
    {100, 6, 6, 8, 1, -6}, // char63
    {105, 6, 6, 8, 1, -6}, // char64
    {110, 6, 6, 8, 0, -6}, // char65
    {115, 6, 6, 8, 0, -6}, // char66
    {120, 6, 6, 8, 0, -6}, // char67
    {125, 6, 6, 8, 0, -6}, // char68
    {130, 6, 6, 8, 0, -6}, // char69
    {135, 6, 6, 8, 0, -6}, // char70
    {140, 6, 6, 8, 0, -6}, // char71
    {145, 6, 6, 8, 0, -6}, // char72
    {150, 5, 6, 8, 1, -6}, // char73
    {154, 6, 6, 8, 0, -6}, // char74
    {159, 6, 6, 8, 0, -6}, // char75
    {164, 6, 6, 8, 0, -6}, // char76
    {169, 6, 6, 8, 0, -6}, // char77
    {174, 6, 6, 8, 0, -6}, // char78
    {179, 6, 6, 8, 0, -6}, // char79
    {184, 6, 6, 8, 0, -6}, // char80
    {189, 6, 6, 8, 0, -6}, // char81
    {194, 6, 6, 8, 0, -6}, // char82
    {199, 6, 6, 8, 0, -6}, // char83
    {204, 7, 6, 8, 0, -6}, // char84
    {210, 6, 6, 8, 0, -6}, // char85
    {215, 6, 6, 8, 0, -6}, // char86
    {220, 6, 6, 8, 0, -6}, // char87
    {225, 6, 6, 8, 0, -6}, // char88
    {230, 7, 6, 8, 0, -6}, // char89
    {236, 6, 6, 8, 0, -6}, // char90
    {241, 3, 6, 8, 2, -6}, // char91
    {244, 5, 5, 8, 1, -5}, // char92
    {248, 3, 6, 8, 2, -6}, // char93
    {251, 5, 6, 8, 1, -6}, // char94
    {255, 7, 1, 8, 0, 0},  // char95
    {256, 8, 8, 8, 0, -7}, // char96
    {264, 8, 8, 8, 0, -7}, // char97
    {272, 8, 8, 8, 0, -7}, // char98
    {280, 8, 8, 8, 0, -7}, // char99
    {288, 8, 8, 8, 0, -7}, // char100
    {296, 8, 8, 8, 0, -7}, // char101
    {304, 8, 8, 8, 0, -7}, // char102
    {312, 8, 8, 8, 0, -7}, // char103
    {320, 8, 8, 8, 0, -7}, // char104
    {328, 8, 8, 8, 0, -7}, // char105
    {336, 8, 8, 8, 0, -7}, // char106
    {344, 8, 8, 8, 0, -7}, // char107
    {352, 8, 8, 8, 0, -7}, // char108
    {360, 8, 8, 8, 0, -7}, // char109
    {368, 8, 8, 8, 0, -7}, // char110
    {376, 8, 8, 8, 0, -7}, // char111
    {384, 8, 8, 8, 0, -7}, // char112
    {392, 8, 8, 8, 0, -7}, // char113
    {400, 8, 8, 8, 0, -7}, // char114
    {408, 8, 8, 8, 0, -7}, // char115
    {416, 8, 8, 8, 0, -7}, // char116
    {424, 8, 8, 8, 0, -7}, // char117
    {432, 8, 8, 8, 0, -7}, // char118
    {440, 8, 8, 8, 0, -7}, // char119
    {448, 8, 8, 8, 0, -7}, // char120
    {456, 8, 8, 8, 0, -7}, // char121
    {464, 8, 8, 8, 0, -7}, // char122
    {472, 5, 6, 8, 1, -6}, // char123
    {476, 1, 6, 8, 3, -6}, // char124
    {477, 5, 6, 8, 1, -6}, // char125
    {481, 4, 2, 8, 2, -6}  // char126
};

const GFXfont Font_8_Sinclair_Inverted = {
    (uint8_t *)Font_8_Sinclair_InvertedBitmaps,
    (GFXglyph *)Font_8_Sinclair_InvertedGlyphs,
    32, 126, 8};
