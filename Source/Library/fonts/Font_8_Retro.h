#include <stdint.h>
#include "st7735.h"

const uint8_t Font_8_RetroBitmaps[] = {
  0xFF,0xCC,	// char33
  0x99,0x99,0x99,	// char34
  0x49,0x24,0x92,0xFF,0xF4,0x92,0xFF,0xF4,0x92,0x49,0x20,	// char35
  0x21,0x1E,0xFA,0x51,0xCE,0x29,0x7D,0xE2,0x10,	// char36
  0xC7,0x1C,0xB2,0x10,0x42,0x08,0x4D,0x38,0xE3,	// char37
  0x61,0x89,0x24,0x92,0x46,0x18,0x96,0x58,0xA2,0x75,0xD0,	// char38
  0xFC,	// char39
  0x25,0x29,0x24,0x91,0x22,0x40,	// char40
  0x91,0x22,0x49,0x25,0x29,0x00,	// char41
  0x21,0x2B,0x57,0x38,0x84,0x73,0xAB,0x52,0x10,	// char42
  0x21,0x08,0x4F,0xFC,0x84,0x21,0x00,	// char43
  0x55,0xA0,	// char44
  0xFF,0xF0,	// char45
  0xC0,	// char46
  0x04,0x10,0x82,0x10,0x42,0x08,0x41,0x08,0x20,	// char47
  0x79,0xE8,0x61,0x8E,0x3B,0x6D,0xC7,0x18,0x61,0x79,0xE0,	// char48
  0x4B,0x64,0x92,0x49,0x2F,0xC0,	// char49
  0x79,0xE8,0x61,0x04,0x13,0x8E,0x41,0x08,0x20,0xFF,0xF0,	// char50
  0xFF,0xF0,0x41,0x08,0x23,0x8E,0x04,0x18,0x61,0x79,0xE0,	// char51
  0x08,0x21,0x86,0x28,0xA4,0x92,0xFF,0xF0,0x82,0x08,0x20,	// char52
  0xFF,0xF8,0x20,0xFB,0xE0,0x41,0x04,0x18,0x61,0x79,0xE0,	// char53
  0x3C,0xF4,0x10,0x82,0x0F,0xBE,0x86,0x18,0x61,0x79,0xE0,	// char54
  0xFF,0xF0,0x41,0x08,0x21,0x04,0x20,0x82,0x08,0x20,0x80,	// char55
  0x79,0xE8,0x61,0x86,0x17,0x9E,0x86,0x18,0x61,0x79,0xE0,	// char56
  0x79,0xE8,0x61,0x86,0x17,0xDF,0x04,0x10,0x82,0xF3,0xC0,	// char57
  0xCC,	// char58
  0x50,0x55,0x80,	// char59
  0x11,0x22,0x44,0x88,0x44,0x22,0x11,	// char60
  0xFF,0xF0,0x00,0xFF,0xF0,	// char61
  0x88,0x44,0x22,0x11,0x22,0x44,0x88,	// char62
  0x5A,	// char63
  0x79,0xE8,0x61,0x96,0x5A,0xEB,0x9A,0x68,0x20,0x7D,0xF0,	// char64
  0x30,0xC4,0x92,0x86,0x18,0x61,0xFF,0xF8,0x61,0x86,0x10,	// char65
  0xFB,0xE8,0x61,0x86,0x1F,0xBE,0x86,0x18,0x61,0xFB,0xE0,	// char66
  0x79,0xE8,0x61,0x82,0x08,0x20,0x82,0x08,0x61,0x79,0xE0,	// char67
  0xFB,0xE8,0x61,0x86,0x18,0x61,0x86,0x18,0x61,0xFB,0xE0,	// char68
  0xFF,0xF8,0x20,0x82,0x0F,0xBE,0x82,0x08,0x20,0xFF,0xF0,	// char69
  0xFF,0xF8,0x20,0x82,0x0F,0xBE,0x82,0x08,0x20,0x82,0x00,	// char70
  0x7D,0xF8,0x20,0x82,0x08,0x27,0x9E,0x18,0x61,0x7D,0xF0,	// char71
  0x86,0x18,0x61,0x86,0x1F,0xFF,0x86,0x18,0x61,0x86,0x10,	// char72
  0xFD,0x24,0x92,0x49,0x2F,0xC0,	// char73
  0x04,0x10,0x41,0x04,0x10,0x41,0x04,0x18,0x61,0x79,0xE0,	// char74
  0x86,0x18,0xA2,0x92,0x4E,0x38,0x92,0x48,0xA2,0x86,0x10,	// char75
  0x82,0x08,0x20,0x82,0x08,0x20,0x82,0x08,0x20,0xFF,0xF0,	// char76
  0x86,0x1C,0xF3,0xB6,0xDB,0x6D,0x86,0x18,0x61,0x86,0x10,	// char77
  0x86,0x1C,0x71,0xA6,0x9B,0x6D,0x96,0x58,0xE3,0x86,0x10,	// char78
  0x79,0xE8,0x61,0x86,0x18,0x61,0x86,0x18,0x61,0x79,0xE0,	// char79
  0xFB,0xE8,0x61,0x86,0x1F,0xBE,0x82,0x08,0x20,0x82,0x00,	// char80
  0x79,0xE8,0x61,0x86,0x18,0x61,0x96,0x58,0xA2,0x75,0xD0,	// char81
  0xFB,0xE8,0x61,0x86,0x1F,0xBE,0x92,0x48,0xA2,0x86,0x10,	// char82
  0x79,0xE8,0x61,0x82,0x07,0x9E,0x04,0x18,0x61,0x79,0xE0,	// char83
  0xFF,0xC8,0x42,0x10,0x84,0x21,0x08,0x42,0x10,	// char84
  0x86,0x18,0x61,0x86,0x18,0x61,0x86,0x18,0x61,0x79,0xE0,	// char85
  0x86,0x18,0x61,0x86,0x18,0x61,0x86,0x14,0x92,0x30,0xC0,	// char86
  0x86,0x18,0x61,0x86,0x1B,0x6D,0xB6,0xDC,0xF3,0x86,0x10,	// char87
  0x86,0x18,0x61,0x49,0x23,0x0C,0x49,0x28,0x61,0x86,0x10,	// char88
  0x8C,0x63,0x15,0x28,0x84,0x21,0x08,0x42,0x10,	// char89
  0xFF,0xF0,0x41,0x08,0x23,0x0C,0x41,0x08,0x20,0xFF,0xF0,	// char90
  0xFF,0xFC,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xFF,0xF0,	// char91
  0x82,0x04,0x10,0x20,0x81,0x04,0x08,0x20,0x41,	// char92
  0xFF,0xF0,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC3,0xFF,0xF0,	// char93
  0x21,0x14,0xA8,0xC4,	// char94
  0xFF,0xF0,	// char95
  0x91,0x22,0x40,	// char96
  0x79,0xE0,0x41,0x7D,0xF8,0x61,0x7D,0xF0,	// char97
  0x82,0x08,0x20,0xFB,0xE8,0x61,0x86,0x18,0x61,0xFB,0xE0,	// char98
  0x7D,0xF8,0x20,0x82,0x08,0x20,0x7D,0xF0,	// char99
  0x04,0x10,0x41,0x7D,0xF8,0x61,0x86,0x18,0x61,0x7D,0xF0,	// char100
  0x79,0xE8,0x61,0xFF,0xF8,0x20,0x7D,0xF0,	// char101
  0x38,0xE4,0x51,0x41,0x0F,0xBE,0x41,0x04,0x10,0x41,0x00,	// char102
  0x79,0xE8,0x61,0x86,0x17,0xDF,0x04,0x17,0x9E,	// char103
  0x82,0x08,0x20,0xFB,0xE8,0x61,0x86,0x18,0x61,0x86,0x10,	// char104
  0x48,0x0D,0x92,0x49,0x2F,0xC0,	// char105
  0x08,0x40,0x07,0xBC,0x21,0x08,0x42,0x18,0xC5,0xCE,	// char106
  0x82,0x08,0x20,0x86,0x18,0xA2,0xF3,0xC8,0xA2,0x86,0x10,	// char107
  0xD9,0x24,0x92,0x49,0x2F,0xC0,	// char108
  0xCF,0x3B,0x6D,0xB6,0xDB,0x6D,0x86,0x10,	// char109
  0xFB,0xE8,0x61,0x86,0x18,0x61,0x86,0x10,	// char110
  0x79,0xE8,0x61,0x86,0x18,0x61,0x79,0xE0,	// char111
  0xFB,0xE8,0x61,0x86,0x1F,0xBE,0x82,0x08,0x20,	// char112
  0x7D,0xF8,0x61,0x86,0x17,0xDF,0x04,0x10,0x41,	// char113
  0xBE,0xFC,0x30,0x82,0x08,0x20,0x82,0x00,	// char114
  0x7D,0xF8,0x20,0x79,0xE0,0x41,0xFB,0xE0,	// char115
  0x20,0x82,0x08,0xFB,0xE2,0x08,0x20,0x82,0x49,0x18,0x60,	// char116
  0x86,0x18,0x61,0x86,0x18,0xE3,0x75,0xD0,	// char117
  0x86,0x18,0x61,0x86,0x14,0x92,0x30,0xC0,	// char118
  0x86,0x18,0x61,0xB6,0xDB,0x6D,0xCF,0x30,	// char119
  0x86,0x14,0x92,0x30,0xC4,0x92,0x86,0x10,	// char120
  0x86,0x18,0x61,0x86,0x17,0xDF,0x04,0x17,0x9E,	// char121
  0xFF,0xF0,0x82,0x30,0xC4,0x10,0xFF,0xF0,	// char122
  0x1C,0x73,0x0C,0x30,0xCE,0x38,0x30,0xC3,0x0C,0x1C,0x70,	// char123
  0xFF,0xFC,	// char124
  0xE3,0x83,0x0C,0x30,0xC1,0xC7,0x30,0xC3,0x0C,0xE3,0x80,	// char125
  0x4A,0x6B,0x59,0x48	// char126
};

const GFXglyph Font_8_RetroGlyphs[] = {
  { 0, 0, 0, 8, 0, 0 },	// char32
  { 0, 1, 14, 8, 3, -15 },	// char33
  { 2, 4, 6, 8, 2, -15 },	// char34
  { 5, 6, 14, 8, 1, -15 },	// char35
  { 16, 5, 14, 8, 1, -15 },	// char36
  { 25, 6, 12, 8, 1, -13 },	// char37
  { 34, 6, 14, 8, 1, -15 },	// char38
  { 45, 1, 6, 8, 3, -15 },	// char39
  { 46, 3, 14, 8, 1, -15 },	// char40
  { 52, 3, 14, 8, 3, -15 },	// char41
  { 58, 5, 14, 8, 1, -15 },	// char42
  { 67, 5, 10, 8, 1, -13 },	// char43
  { 74, 2, 6, 8, 3, -7 },	// char44
  { 76, 6, 2, 8, 1, -9 },	// char45
  { 78, 1, 2, 8, 3, -3 },	// char46
  { 79, 6, 12, 8, 1, -13 },	// char47
  { 88, 6, 14, 8, 1, -15 },	// char48
  { 99, 3, 14, 8, 3, -15 },	// char49
  { 105, 6, 14, 8, 1, -15 },	// char50
  { 116, 6, 14, 8, 1, -15 },	// char51
  { 127, 6, 14, 8, 1, -15 },	// char52
  { 138, 6, 14, 8, 1, -15 },	// char53
  { 149, 6, 14, 8, 1, -15 },	// char54
  { 160, 6, 14, 8, 1, -15 },	// char55
  { 171, 6, 14, 8, 1, -15 },	// char56
  { 182, 6, 14, 8, 1, -15 },	// char57
  { 193, 1, 6, 8, 3, -11 },	// char58
  { 194, 2, 9, 8, 3, -11 },	// char59
  { 197, 4, 14, 8, 2, -15 },	// char60
  { 204, 6, 6, 8, 1, -11 },	// char61
  { 209, 4, 14, 8, 2, -15 },	// char62
  { 216, 2, 4, 8, 1, -15 },	// char63
  { 217, 6, 14, 8, 1, -15 },	// char64
  { 228, 6, 14, 8, 1, -15 },	// char65
  { 239, 6, 14, 8, 1, -15 },	// char66
  { 250, 6, 14, 8, 1, -15 },	// char67
  { 261, 6, 14, 8, 1, -15 },	// char68
  { 272, 6, 14, 8, 1, -15 },	// char69
  { 283, 6, 14, 8, 1, -15 },	// char70
  { 294, 6, 14, 8, 1, -15 },	// char71
  { 305, 6, 14, 8, 1, -15 },	// char72
  { 316, 3, 14, 8, 2, -15 },	// char73
  { 322, 6, 14, 8, 1, -15 },	// char74
  { 333, 6, 14, 8, 1, -15 },	// char75
  { 344, 6, 14, 8, 1, -15 },	// char76
  { 355, 6, 14, 8, 1, -15 },	// char77
  { 366, 6, 14, 8, 1, -15 },	// char78
  { 377, 6, 14, 8, 1, -15 },	// char79
  { 388, 6, 14, 8, 1, -15 },	// char80
  { 399, 6, 14, 8, 1, -15 },	// char81
  { 410, 6, 14, 8, 1, -15 },	// char82
  { 421, 6, 14, 8, 1, -15 },	// char83
  { 432, 5, 14, 8, 1, -15 },	// char84
  { 441, 6, 14, 8, 1, -15 },	// char85
  { 452, 6, 14, 8, 1, -15 },	// char86
  { 463, 6, 14, 8, 1, -15 },	// char87
  { 474, 6, 14, 8, 1, -15 },	// char88
  { 485, 5, 14, 8, 1, -15 },	// char89
  { 494, 6, 14, 8, 1, -15 },	// char90
  { 505, 6, 14, 8, 1, -15 },	// char91
  { 516, 6, 12, 8, 1, -13 },	// char92
  { 525, 6, 14, 8, 1, -15 },	// char93
  { 536, 5, 6, 8, 1, -11 },	// char94
  { 540, 6, 2, 8, 1, -3 },	// char95
  { 542, 3, 6, 8, 2, -15 },	// char96
  { 545, 6, 10, 8, 1, -11 },	// char97
  { 553, 6, 14, 8, 1, -15 },	// char98
  { 564, 6, 10, 8, 1, -11 },	// char99
  { 572, 6, 14, 8, 1, -15 },	// char100
  { 583, 6, 10, 8, 1, -11 },	// char101
  { 591, 6, 14, 8, 1, -15 },	// char102
  { 602, 6, 12, 8, 1, -11 },	// char103
  { 611, 6, 14, 8, 1, -15 },	// char104
  { 622, 3, 14, 8, 2, -15 },	// char105
  { 628, 5, 16, 8, 1, -15 },	// char106
  { 638, 6, 14, 8, 1, -15 },	// char107
  { 649, 3, 14, 8, 2, -15 },	// char108
  { 655, 6, 10, 8, 1, -11 },	// char109
  { 663, 6, 10, 8, 1, -11 },	// char110
  { 671, 6, 10, 8, 1, -11 },	// char111
  { 679, 6, 12, 8, 1, -11 },	// char112
  { 688, 6, 12, 8, 1, -11 },	// char113
  { 697, 6, 10, 8, 1, -11 },	// char114
  { 705, 6, 10, 8, 1, -11 },	// char115
  { 713, 6, 14, 8, 1, -15 },	// char116
  { 724, 6, 10, 8, 1, -11 },	// char117
  { 732, 6, 10, 8, 1, -11 },	// char118
  { 740, 6, 10, 8, 1, -11 },	// char119
  { 748, 6, 10, 8, 1, -11 },	// char120
  { 756, 6, 12, 8, 1, -11 },	// char121
  { 765, 6, 10, 8, 1, -11 },	// char122
  { 773, 6, 14, 8, 1, -15 },	// char123
  { 784, 1, 14, 8, 3, -15 },	// char124
  { 786, 6, 14, 8, 1, -15 },	// char125
  { 797, 5, 6, 8, 1, -11 }	// char126
};

const GFXfont Font_8_Retro = {
 (uint8_t *)Font_8_RetroBitmaps,
 (GFXglyph *)Font_8_RetroGlyphs,
 32, 126, 16};
