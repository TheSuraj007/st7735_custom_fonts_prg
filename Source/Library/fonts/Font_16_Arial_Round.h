#include <stdint.h>
#include "st7735.h"

const uint8_t Font_16_Arial_RoundBitmaps[] = {
    0x6F, 0xFF, 0xFF, 0xFF, 0xFE, 0x66, 0x60, 0x06, 0xFF, 0x60, // char33
    0x63, 0x63, 0xC6, 0xC6, 0xE7, 0xE7, 0x63,                   // char34
    0x0C, 0x60, 0xC6, 0x1C, 0xE1, 0xCE, 0xFF, 0xFF, 0xFF, 0x19, 0xC3, 0x9C, 0x39, 0xC3, 0x98, 0xFF,
    0xFF, 0xFF, 0x73, 0x87, 0x38, 0x73, 0x06, 0x30, 0x63, 0x00, // char35
    0x06, 0x00, 0x60, 0x1F, 0x07, 0xFC, 0x7F, 0xEF, 0x6E, 0xE6, 0xEE, 0x66, 0xF6, 0x07, 0xE0, 0x3F,
    0xC0, 0xFE, 0x06, 0xFC, 0x67, 0xE6, 0x7E, 0x67, 0xF6, 0xE7, 0xFE, 0x1F, 0x80, 0x60, 0x06, 0x00,
    0x60, // char36
    0x78, 0x11, 0xF0, 0x63, 0x30, 0x86, 0x63, 0x0C, 0xC4, 0x19, 0x98, 0x33, 0x20, 0x3C, 0xC0, 0x01,
    0x3C, 0x06, 0xCC, 0x09, 0x98, 0x33, 0x30, 0xC6, 0x61, 0x8C, 0xC6, 0x0F, 0x08, 0x1E, // char37
    0x0F, 0x00, 0x7E, 0x03, 0x9C, 0x0E, 0x70, 0x39, 0xC0, 0x7E, 0x00, 0xE0, 0x0F, 0x84, 0x77, 0x3B,
    0x8E, 0xCE, 0x3F, 0x38, 0x78, 0xF1, 0xF9, 0xFE, 0xF1, 0xF1, 0x80,             // char38
    0x76, 0xEC,                                                                   // char39
    0x08, 0xCE, 0x67, 0x3B, 0x9C, 0xE7, 0x39, 0xCE, 0x71, 0xCE, 0x31, 0xC6, 0x10, // char40
    0x86, 0x38, 0xC7, 0x38, 0xE7, 0x39, 0xCE, 0x73, 0x9D, 0xCE, 0x67, 0x31, 0x00, // char41
    0x18, 0x18, 0x18, 0xDB, 0xFF, 0x18, 0x3C, 0x66, 0x62,                         // char42
    0x0C, 0x03, 0x00, 0xC0, 0x30, 0xFF, 0xFF, 0xF0, 0xC0, 0x30, 0x0C, 0x03, 0x00, // char43
    0xDF, 0xB7, 0x80,                                                             // char44
    0xFF, 0xFF,                                                                   // char45
    0xFF, 0x80,                                                                   // char46
    0x06, 0x1C, 0x38, 0x61, 0xC3, 0x87, 0x0C, 0x38, 0x70, 0xE1, 0x87, 0x0E, 0x1C, 0x30, 0xE1, 0xC3,
    0x00, // char47
    0x1F, 0x83, 0xFC, 0x7F, 0xE7, 0x0E, 0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xE0,
    0x7E, 0x07, 0xE0, 0x7E, 0x07, 0x70, 0xE7, 0xFE, 0x3F, 0xC1, 0xF8, // char48
    0x03, 0x07, 0x0F, 0x1F, 0x3F, 0xFF, 0xE7, 0xC7, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x07, 0x07, // char49
    0x1F, 0x87, 0xFE, 0x7F, 0xEF, 0x0F, 0xE0, 0x7E, 0x07, 0x00, 0x70, 0x0E, 0x01, 0xE0, 0x3C, 0x0F,
    0x81, 0xE0, 0x3C, 0x07, 0x80, 0xF0, 0x0F, 0xFE, 0xFF, 0xFF, 0xFF, // char50
    0x1F, 0x83, 0xFC, 0x7F, 0xEF, 0x1E, 0xE0, 0xE0, 0x0E, 0x01, 0xE0, 0x7C, 0x07, 0xC0, 0x3E, 0x00,
    0xFC, 0x07, 0xE0, 0x7E, 0x0F, 0xF1, 0xE7, 0xFE, 0x3F, 0xC1, 0xF8, // char51
    0x01, 0x80, 0x3C, 0x03, 0xC0, 0x7C, 0x0F, 0xC0, 0xDC, 0x1D, 0xC3, 0x9C, 0x31, 0xC7, 0x1C, 0xE1,
    0xCE, 0x1C, 0xFF, 0xFF, 0xFF, 0x01, 0xC0, 0x1C, 0x01, 0xC0, 0x1C, // char52
    0x7F, 0xF7, 0xFF, 0x7F, 0xE7, 0x00, 0x70, 0x07, 0x00, 0x7F, 0x87, 0xFC, 0x7F, 0xE7, 0x0F, 0x00,
    0x70, 0x07, 0x00, 0x7E, 0x07, 0xF0, 0xEF, 0xFE, 0x7F, 0xC1, 0xF8, // char53
    0x0F, 0x83, 0xFC, 0x7F, 0xE7, 0x0E, 0xF0, 0x6E, 0x00, 0xE0, 0x0E, 0xF8, 0xFF, 0xCF, 0xFE, 0xF0,
    0xFE, 0x07, 0xE0, 0x7E, 0x07, 0x70, 0xF7, 0xFE, 0x3F, 0xC0, 0xF8, // char54
    0xFF, 0xFF, 0xFF, 0x7F, 0xF0, 0x0E, 0x01, 0xC0, 0x1C, 0x03, 0x80, 0x70, 0x07, 0x00, 0xE0, 0x0E,
    0x00, 0xE0, 0x1E, 0x01, 0xC0, 0x1C, 0x01, 0xC0, 0x1C, 0x01, 0x80, // char55
    0x1F, 0x83, 0xFC, 0x7F, 0xE7, 0x9E, 0x70, 0xE7, 0x0E, 0x79, 0xE3, 0xFC, 0x3F, 0xC7, 0x0E, 0xE0,
    0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xF0, 0xF7, 0xFE, 0x3F, 0xC1, 0xF8, // char56
    0x1F, 0x03, 0xFC, 0x7F, 0xEF, 0x0E, 0xE0, 0x7E, 0x07, 0xE0, 0x7F, 0x0F, 0x7F, 0xF3, 0xFF, 0x1F,
    0x70, 0x07, 0x00, 0x76, 0x0F, 0x70, 0xE7, 0xFE, 0x3F, 0xC1, 0xF0, // char57
    0xFF, 0x80, 0x00, 0x1F, 0xF0,                                     // char58
    0xFF, 0x80, 0x00, 0x1B, 0xF6, 0xF4,                               // char59
    0x00, 0x40, 0x70, 0x7C, 0x7F, 0x7E, 0x3E, 0x0E, 0x03, 0xE0, 0x7E, 0x07, 0xF0, 0x7C, 0x07, 0x00,
    0x40,                                                                   // char60
    0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, // char61
    0x80, 0x38, 0x0F, 0x83, 0xF8, 0x1F, 0x81, 0xF0, 0x1C, 0x1F, 0x1F, 0xBF, 0x8F, 0x83, 0x80, 0x80,
    0x00, // char62
    0x1F, 0x07, 0xF9, 0xFF, 0x78, 0xFE, 0x0F, 0xC1, 0xF0, 0x38, 0x0E, 0x03, 0xC0, 0xF0, 0x3C, 0x07,
    0x00, 0xE0, 0x08, 0x00, 0x00, 0x70, 0x0E, 0x01, 0xC0, 0x38, 0x00, // char63
    0x07, 0xC0, 0x7F, 0xC3, 0x83, 0x88, 0x02, 0x47, 0x6D, 0x3F, 0x99, 0x8E, 0x6E, 0x31, 0xB0, 0xC6,
    0xC3, 0x1B, 0x0C, 0xAC, 0x76, 0xDF, 0xF1, 0x3B, 0x86, 0x00, 0xCC, 0x06, 0x1F, 0xF8, 0x1F, 0x80, // char64
    0x03, 0x00, 0x1E, 0x00, 0x78, 0x03, 0xF0, 0x0F, 0xC0, 0x73, 0x01, 0xCE, 0x07, 0x38, 0x38, 0xF0,
    0xE1, 0xC3, 0x87, 0x1F, 0xFE, 0x7F, 0xF9, 0xC0, 0xEE, 0x01, 0xF8, 0x07, 0xC0, 0x1C, // char65
    0xFF, 0x8F, 0xFC, 0xE1, 0xEE, 0x0E, 0xE0, 0xEE, 0x0E, 0xE0, 0xEF, 0xFC, 0xFF, 0xCE, 0x0E, 0xE0,
    0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xE0, 0xFF, 0xFE, 0xFF, 0xC0, // char66
    0x0F, 0xC0, 0xFF, 0x0F, 0x3C, 0xF0, 0xF7, 0x03, 0xF8, 0x0F, 0x80, 0x1C, 0x00, 0xE0, 0x07, 0x00,
    0x38, 0x07, 0xC0, 0x37, 0x03, 0xBC, 0x3C, 0xF3, 0xC3, 0xFC, 0x0F, 0xC0, // char67
    0xFF, 0x0F, 0xFC, 0xE3, 0xCE, 0x1E, 0xE0, 0xEE, 0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xE0,
    0x7E, 0x07, 0xE0, 0xEE, 0x1E, 0xE3, 0xCF, 0xFC, 0xFF, 0x00, // char68
    0xFF, 0xFF, 0xFF, 0x80, 0x70, 0x0E, 0x01, 0xC0, 0x38, 0x07, 0xFE, 0xFF, 0xDC, 0x03, 0x80, 0x70,
    0x0E, 0x01, 0xC0, 0x38, 0x07, 0xFF, 0xFF, 0xE0, // char69
    0xFF, 0xFF, 0xFE, 0x03, 0x80, 0xE0, 0x38, 0x0E, 0x03, 0xFE, 0xFF, 0xB8, 0x0E, 0x03, 0x80, 0xE0,
    0x38, 0x0E, 0x03, 0x80, 0xE0, 0x00, // char70
    0x07, 0xC0, 0x7F, 0xC3, 0x87, 0x9C, 0x0E, 0x70, 0x1F, 0x80, 0x6E, 0x00, 0x38, 0x00, 0xE1, 0xFF,
    0x87, 0xFE, 0x01, 0xF8, 0x07, 0x70, 0x1D, 0xC0, 0x73, 0x87, 0xC7, 0xFE, 0x07, 0xE0, // char71
    0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x7F, 0xFF, 0xFF, 0xFE, 0x07, 0xE0,
    0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x70, // char72
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0,                   // char73
    0x01, 0xC0, 0x70, 0x1C, 0x07, 0x01, 0xC0, 0x70, 0x1C, 0x07, 0x01, 0xC0, 0x7E, 0x1F, 0x87, 0xE1,
    0xFC, 0xF7, 0xF9, 0xFE, 0x1E, 0x00, // char74
    0xE0, 0x37, 0x03, 0xB8, 0x3D, 0xC3, 0xCE, 0x3C, 0x73, 0xC3, 0xBC, 0x1F, 0xE0, 0xFF, 0x87, 0xDE,
    0x3C, 0x71, 0xC3, 0xCE, 0x0F, 0x70, 0x7B, 0x81, 0xFC, 0x07, 0xE0, 0x38, // char75
    0xE0, 0x38, 0x0E, 0x03, 0x80, 0xE0, 0x38, 0x0E, 0x03, 0x80, 0xE0, 0x38, 0x0E, 0x03, 0x80, 0xE0,
    0x38, 0x0E, 0x03, 0xFF, 0xFF, 0xC0, // char76
    0xF8, 0x1F, 0xF8, 0x1F, 0xFC, 0x3F, 0xFC, 0x3F, 0xFC, 0x3F, 0xEC, 0x37, 0xEE, 0x77, 0xEE, 0x77,
    0xEE, 0x77, 0xE6, 0x67, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE3, 0xC7, 0xE3, 0xC7, 0xE3, 0xC7,
    0xE1, 0x87, // char77
    0x60, 0x7F, 0x07, 0xF0, 0x7F, 0x87, 0xF8, 0x7F, 0xC7, 0xEC, 0x7E, 0xE7, 0xE6, 0x7E, 0x77, 0xE3,
    0x7E, 0x3F, 0xE1, 0xFE, 0x1F, 0xE0, 0xFE, 0x0F, 0xE0, 0x70, // char78
    0x0F, 0xC0, 0x7F, 0x83, 0xFF, 0x1E, 0x1E, 0x70, 0x3B, 0xC0, 0xFE, 0x01, 0xF8, 0x07, 0xE0, 0x1F,
    0x80, 0x7E, 0x01, 0xFC, 0x0F, 0x70, 0x39, 0xE1, 0xE3, 0xFF, 0x07, 0xF8, 0x0F, 0xC0, // char79
    0xFF, 0xCF, 0xFE, 0xE0, 0xFE, 0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x0E, 0xFF, 0xEF, 0xF8, 0xE0,
    0x0E, 0x00, 0xE0, 0x0E, 0x00, 0xE0, 0x0E, 0x00, 0xE0, 0x00, // char80
    0x0F, 0xC0, 0x3F, 0xC0, 0xFF, 0xC3, 0xC3, 0xC7, 0x03, 0x9E, 0x03, 0xB8, 0x07, 0x70, 0x0E, 0xE0,
    0x1D, 0xC0, 0x3B, 0x80, 0x77, 0x99, 0xE7, 0x1F, 0x8F, 0x1F, 0x0F, 0xFC, 0x0F, 0xFE, 0x0F, 0xDE,
    0x00, 0x1C, // char81
    0xFF, 0xE7, 0xFF, 0xB8, 0x1F, 0xC0, 0x7E, 0x03, 0xF0, 0x1F, 0x81, 0xFF, 0xFE, 0xFF, 0xC7, 0x1C,
    0x38, 0x71, 0xC3, 0xCE, 0x0F, 0x70, 0x7B, 0x81, 0xFC, 0x07, 0xE0, 0x38, // char82
    0x1F, 0x87, 0xFC, 0x70, 0xEE, 0x0E, 0xE0, 0x6F, 0x00, 0xFC, 0x07, 0xF8, 0x3F, 0xE0, 0x7E, 0x00,
    0xFC, 0x07, 0xE0, 0x7E, 0x07, 0xF0, 0xE7, 0xFE, 0x1F, 0x80, // char83
    0xFF, 0xFF, 0xFF, 0xC1, 0xC0, 0x0E, 0x00, 0x70, 0x03, 0x80, 0x1C, 0x00, 0xE0, 0x07, 0x00, 0x38,
    0x01, 0xC0, 0x0E, 0x00, 0x70, 0x03, 0x80, 0x1C, 0x00, 0xE0, 0x07, 0x00, // char84
    0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xE0,
    0x7E, 0x07, 0xE0, 0x7F, 0x0E, 0x7F, 0xE3, 0xFC, 0x1F, 0x80, // char85
    0xE0, 0x1F, 0x01, 0xF8, 0x0E, 0xE0, 0xE7, 0x07, 0x38, 0x38, 0xE1, 0x87, 0x1C, 0x38, 0xE1, 0xC6,
    0x07, 0x70, 0x3B, 0x81, 0xD8, 0x07, 0xC0, 0x3E, 0x01, 0xE0, 0x07, 0x00, // char86
    0xC1, 0x83, 0xC3, 0xC3, 0xE3, 0xC7, 0xE3, 0xC7, 0xE3, 0xC7, 0x63, 0xC6, 0x66, 0x66, 0x66, 0x66,
    0x76, 0x6E, 0x76, 0x6E, 0x36, 0x6C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x1C, 0x38,
    0x18, 0x18, // char87
    0x60, 0x19, 0xC0, 0xF7, 0x83, 0x8E, 0x1E, 0x3C, 0xF0, 0x7F, 0x80, 0xFE, 0x03, 0xF0, 0x07, 0x80,
    0x3F, 0x01, 0xFE, 0x0F, 0xFC, 0x3C, 0xF1, 0xE1, 0xEF, 0x03, 0xFC, 0x0F, 0xE0, 0x1C, // char88
    0x60, 0x37, 0x81, 0xDC, 0x1C, 0xF0, 0xE3, 0x8E, 0x1E, 0xF0, 0x77, 0x01, 0xF0, 0x0F, 0x80, 0x38,
    0x01, 0xC0, 0x0E, 0x00, 0x70, 0x03, 0x80, 0x1C, 0x00, 0xE0, 0x07, 0x00, // char89
    0x7F, 0xF3, 0xFF, 0x80, 0x3C, 0x01, 0xE0, 0x1E, 0x01, 0xF0, 0x0F, 0x00, 0xF0, 0x0F, 0x00, 0x78,
    0x07, 0x80, 0x78, 0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x1F, 0xFF, 0xFF, 0xF8, // char90
    0xFF, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCF, 0xF0,       // char91
    0x60, 0x78, 0x1C, 0x0F, 0x03, 0x81, 0xC0, 0xF0, 0x38, 0x1C, 0x0F, 0x03, 0x81, 0xC0, 0xF0, 0x38,
    0x1C, 0x0F, 0x03, 0x80,                                                             // char92
    0xFF, 0xC6, 0x31, 0x8C, 0x63, 0x18, 0xC6, 0x31, 0x8C, 0x63, 0x18, 0xC7, 0xFF, 0x80, // char93
    0x0E, 0x07, 0x81, 0xE0, 0x7C, 0x3B, 0x0C, 0xE7, 0x39, 0xC6, 0xE1, 0xC0,             // char94
    0xFF, 0xFF,                                                                         // char95
    0x38, 0xFB, 0x1E, 0x3C, 0x6F, 0x8E, 0x00,                                           // char96
    0x3F, 0x0F, 0xF1, 0x87, 0x20, 0xE0, 0x3C, 0x7F, 0x9E, 0x77, 0x0E, 0xE1, 0xDC, 0x79, 0xFF, 0x1C,
    0x70, // char97
    0xE0, 0x1C, 0x03, 0x80, 0x70, 0x0E, 0x01, 0xDF, 0x3F, 0xF7, 0x8E, 0xF0, 0xFC, 0x1F, 0x83, 0xF0,
    0x7E, 0x0F, 0xE1, 0xFC, 0x77, 0xFE, 0xEF, 0x00, // char98
    0x1F, 0x07, 0xF9, 0xC7, 0x78, 0x7E, 0x05, 0xC0, 0x38, 0x07, 0x02, 0xF0, 0xEE, 0x3C, 0xFF, 0x0F,
    0x80, // char99
    0x00, 0xE0, 0x1C, 0x03, 0x80, 0x70, 0x0E, 0x7D, 0xDF, 0xFB, 0x8F, 0xE1, 0xFC, 0x1F, 0x83, 0xF0,
    0x7E, 0x0F, 0xC3, 0xDC, 0x7B, 0xFF, 0x1E, 0xE0, // char100
    0x1F, 0x07, 0xF1, 0xC7, 0x70, 0x7E, 0x0F, 0xFF, 0xFF, 0xF7, 0x00, 0xE0, 0x4E, 0x1C, 0xFF, 0x0F,
    0x80, // char101
    0x1F, 0x3F, 0x38, 0x38, 0x38, 0xFE, 0xFE, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38,
    0x38, // char102
    0x3E, 0xEF, 0xFD, 0xC7, 0xF0, 0x7E, 0x0F, 0xC1, 0xF8, 0x3F, 0x07, 0xE0, 0xEE, 0x3D, 0xFF, 0x8F,
    0x74, 0x0F, 0xC1, 0xDC, 0x73, 0xFE, 0x1F, 0x00, // char103
    0xE0, 0x38, 0x0E, 0x03, 0x80, 0xE0, 0x3B, 0xCF, 0xFB, 0xCF, 0xE1, 0xF8, 0x7E, 0x1F, 0x87, 0xE1,
    0xF8, 0x7E, 0x1F, 0x87, 0xE1, 0xC0,       // char104
    0xFF, 0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, // char105
    0x1C, 0x71, 0xC0, 0x00, 0x71, 0xC7, 0x1C, 0x71, 0xC7, 0x1C, 0x71, 0xC7, 0x1C, 0x71, 0xC7, 0xFF,
    0xE0, // char106
    0xE0, 0x38, 0x0E, 0x03, 0x80, 0xE0, 0x38, 0x6E, 0x3B, 0x9C, 0xEE, 0x3F, 0x0F, 0xE3, 0xDC, 0xE7,
    0x38, 0xEE, 0x3B, 0x87, 0xE0, 0xC0,       // char107
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, // char108
    0xEF, 0x9E, 0xFF, 0xFF, 0xF1, 0xE7, 0xE1, 0xC7, 0xE1, 0xC7, 0xE1, 0xC7, 0xE1, 0xC7, 0xE1, 0xC7,
    0xE1, 0xC7, 0xE1, 0xC7, 0xE1, 0xC7, 0xE1, 0xC7,                                           // char109
    0xEF, 0x3F, 0xEF, 0x3F, 0x87, 0xE1, 0xF8, 0x7E, 0x1F, 0x87, 0xE1, 0xF8, 0x7E, 0x1F, 0x87, // char110
    0x1F, 0x07, 0xF1, 0xC7, 0x70, 0x7E, 0x0F, 0xC1, 0xF8, 0x3F, 0x07, 0xE0, 0xEE, 0x38, 0xFE, 0x0F,
    0x80, // char111
    0xEF, 0x1F, 0xFB, 0xC7, 0x78, 0x7E, 0x0F, 0xC1, 0xF8, 0x3F, 0x07, 0xF0, 0xFE, 0x3B, 0xFF, 0x77,
    0x8E, 0x01, 0xC0, 0x38, 0x07, 0x00, 0xE0, 0x00, // char112
    0x1E, 0xEF, 0xFD, 0xC7, 0xF0, 0xFE, 0x0F, 0xC1, 0xF8, 0x3F, 0x07, 0xE1, 0xEE, 0x3D, 0xFF, 0x8F,
    0x70, 0x0E, 0x01, 0xC0, 0x38, 0x07, 0x00, 0xE0,                                           // char113
    0xEE, 0xFF, 0xF1, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0,                   // char114
    0x3E, 0x1F, 0xEE, 0x3B, 0x86, 0xF8, 0x1F, 0xC1, 0xF8, 0x0F, 0xE1, 0xFC, 0x77, 0xF8, 0xFC, // char115
    0x38, 0x38, 0x38, 0x38, 0x38, 0x7E, 0xFE, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x3F,
    0x1F,                                                                                     // char116
    0xE1, 0xF8, 0x7E, 0x1F, 0x87, 0xE1, 0xF8, 0x7E, 0x1F, 0x87, 0xE1, 0xFC, 0xF7, 0xFC, 0xF7, // char117
    0xC0, 0xF8, 0x7E, 0x1D, 0x86, 0x73, 0x9C, 0xE3, 0x30, 0xFC, 0x1E, 0x07, 0x81, 0xE0, 0x30, // char118
    0xC1, 0x83, 0xE3, 0xC7, 0xE3, 0xC7, 0x63, 0xC6, 0x67, 0xE6, 0x76, 0x6E, 0x36, 0x6C, 0x36, 0x6C,
    0x3E, 0x7C, 0x1C, 0x38, 0x1C, 0x38, 0x1C, 0x38, // char119
    0xE0, 0xFE, 0x3D, 0xEF, 0x1F, 0xC1, 0xF0, 0x3E, 0x0F, 0xE1, 0xDC, 0x7B, 0xDE, 0x3F, 0x83, 0xE0,
    0x70, // char120
    0xC0, 0xF8, 0x7E, 0x1D, 0x86, 0x73, 0x9C, 0xE3, 0x30, 0xEC, 0x3F, 0x07, 0x81, 0xE0, 0x78, 0x0C,
    0x07, 0x01, 0xC3, 0xE0, 0xF0, 0x00, // char121
    0xFF, 0xFF, 0xFC, 0x07, 0x81, 0xE0, 0x78, 0x1E, 0x07, 0x80, 0xE0, 0x38, 0x0F, 0x03, 0xFF, 0xFF,
    0xF0, // char122
    0x0E, 0x3C, 0xF9, 0xC3, 0x87, 0x0E, 0x1C, 0x38, 0xE3, 0xC7, 0x87, 0x07, 0x0E, 0x1C, 0x38, 0x70,
    0xE1, 0xF1, 0xE1, 0xC0,                               // char123
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, // char124
    0xE1, 0xE3, 0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x38, 0x38, 0x78, 0xF1, 0xC7, 0x0E, 0x1C, 0x38, 0x70,
    0xE7, 0xCF, 0x1C, 0x00,            // char125
    0x78, 0x3F, 0xFF, 0xFF, 0xC1, 0xE0 // char126
};

const GFXglyph Font_16_Arial_RoundGlyphs[] = {
    {0, 0, 0, 16, 0, 0},        // char32
    {0, 4, 19, 16, 6, -23},     // char33
    {10, 8, 7, 16, 4, -21},     // char34
    {17, 12, 17, 16, 2, -21},   // char35
    {43, 12, 22, 16, 2, -23},   // char36
    {76, 15, 16, 16, 0, -22},   // char37
    {106, 14, 15, 16, 1, -19},  // char38
    {133, 4, 4, 16, 7, -23},    // char39
    {135, 5, 20, 16, 5, -23},   // char40
    {148, 5, 20, 16, 6, -23},   // char41
    {161, 8, 9, 16, 5, -16},    // char42
    {170, 10, 10, 16, 3, -17},  // char43
    {183, 3, 6, 16, 6, -7},     // char44
    {186, 8, 2, 16, 4, -13},    // char45
    {188, 3, 3, 16, 6, -7},     // char46
    {190, 7, 19, 16, 5, -23},   // char47
    {207, 12, 18, 16, 2, -22},  // char48
    {234, 8, 18, 16, 3, -22},   // char49
    {252, 12, 18, 16, 2, -22},  // char50
    {279, 12, 18, 16, 2, -22},  // char51
    {306, 12, 18, 16, 2, -22},  // char52
    {333, 12, 18, 16, 2, -22},  // char53
    {360, 12, 18, 16, 2, -22},  // char54
    {387, 12, 18, 16, 2, -22},  // char55
    {414, 12, 18, 16, 2, -22},  // char56
    {441, 12, 18, 16, 2, -22},  // char57
    {468, 3, 12, 16, 6, -18},   // char58
    {473, 3, 16, 16, 6, -16},   // char59
    {479, 10, 13, 16, 3, -19},  // char60
    {496, 12, 8, 16, 2, -15},   // char61
    {508, 10, 13, 16, 3, -20},  // char62
    {525, 11, 19, 16, 2, -23},  // char63
    {552, 14, 18, 16, 1, -19},  // char64
    {584, 14, 17, 16, 1, -21},  // char65
    {614, 12, 17, 16, 2, -21},  // char66
    {640, 13, 17, 16, 1, -21},  // char67
    {668, 12, 17, 16, 2, -21},  // char68
    {694, 11, 17, 16, 3, -21},  // char69
    {718, 10, 17, 16, 4, -21},  // char70
    {740, 14, 17, 16, 1, -21},  // char71
    {770, 12, 17, 16, 2, -21},  // char72
    {796, 3, 17, 16, 6, -21},   // char73
    {803, 10, 17, 16, 1, -21},  // char74
    {825, 13, 17, 16, 2, -21},  // char75
    {853, 10, 17, 16, 3, -21},  // char76
    {875, 16, 17, 16, 0, -21},  // char77
    {909, 12, 17, 16, 2, -21},  // char78
    {935, 14, 17, 16, 1, -21},  // char79
    {965, 12, 17, 16, 2, -21},  // char80
    {991, 15, 18, 16, 1, -21},  // char81
    {1025, 13, 17, 16, 2, -21}, // char82
    {1053, 12, 17, 16, 2, -21}, // char83
    {1079, 13, 17, 16, 1, -21}, // char84
    {1107, 12, 17, 16, 2, -21}, // char85
    {1133, 13, 17, 16, 2, -21}, // char86
    {1161, 16, 17, 16, 0, -21}, // char87
    {1195, 14, 17, 16, 1, -21}, // char88
    {1225, 13, 17, 16, 1, -21}, // char89
    {1253, 13, 17, 16, 1, -21}, // char90
    {1281, 4, 21, 16, 7, -22},  // char91
    {1292, 9, 17, 16, 3, -21},  // char92
    {1312, 5, 21, 16, 4, -22},  // char93
    {1326, 10, 9, 16, 2, -21},  // char94
    {1338, 16, 1, 16, 0, -4},   // char95
    {1340, 7, 7, 16, 1, -21},   // char96
    {1347, 11, 12, 16, 2, -16}, // char97
    {1364, 11, 17, 16, 3, -21}, // char98
    {1388, 11, 12, 16, 2, -16}, // char99
    {1405, 11, 17, 16, 2, -21}, // char100
    {1429, 11, 12, 16, 2, -16}, // char101
    {1446, 8, 17, 16, 3, -21},  // char102
    {1463, 11, 17, 16, 2, -16}, // char103
    {1487, 10, 17, 16, 2, -21}, // char104
    {1509, 3, 17, 16, 6, -21},  // char105
    {1516, 6, 22, 16, 3, -21},  // char106
    {1533, 10, 17, 16, 4, -21}, // char107
    {1555, 3, 17, 16, 6, -21},  // char108
    {1562, 16, 12, 16, 0, -16}, // char109
    {1586, 10, 12, 16, 3, -16}, // char110
    {1601, 11, 12, 16, 1, -16}, // char111
    {1618, 11, 17, 16, 2, -16}, // char112
    {1642, 11, 17, 16, 2, -16}, // char113
    {1666, 8, 12, 16, 4, -16},  // char114
    {1678, 10, 12, 16, 3, -16}, // char115
    {1693, 8, 17, 16, 4, -21},  // char116
    {1710, 10, 12, 16, 3, -16}, // char117
    {1725, 10, 12, 16, 3, -16}, // char118
    {1740, 16, 12, 16, 0, -16}, // char119
    {1764, 11, 12, 16, 2, -16}, // char120
    {1781, 10, 17, 16, 3, -16}, // char121
    {1803, 11, 12, 16, 2, -16}, // char122
    {1820, 7, 22, 16, 5, -23},  // char123
    {1840, 3, 22, 16, 6, -23},  // char124
    {1849, 7, 22, 16, 3, -23},  // char125
    {1869, 11, 4, 16, 2, -20}   // char126
};

const GFXfont Font_16_Arial_Round = {
    (uint8_t *)Font_16_Arial_RoundBitmaps,
    (GFXglyph *)Font_16_Arial_RoundGlyphs,
    32, 126, 24};
