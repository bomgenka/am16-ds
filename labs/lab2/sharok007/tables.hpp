#ifndef TABLES_HPP
#define TABLES_HPP
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
int koi_to_win[256] = {
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    10,
    11,
    12,
    13,
    14,
    15,
    16,
    17,
    18,
    19,
    20,
    21,
    22,
    23,
    24,
    25,
    26,
    27,
    28,
    29,
    30,
    31,
    32,
    33,
    34,
    35,
    36,
    37,
    38,
    39,
    40,
    41,
    42,
    43,
    44,
    45,
    46,
    47,
    48,
    49,
    50,
    51,
    52,
    53,
    54,
    55,
    56,
    57,
    58,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    67,
    68,
    69,
    70,
    71,
    72,
    73,
    74,
    75,
    76,
    77,
    78,
    79,
    80,
    81,
    82,
    83,
    84,
    85,
    86,
    87,
    88,
    89,
    90,
    91,
    92,
    93,
    94,
    95,
    96,
    97,
    98,
    99,
    100,
    101,
    102,
    103,
    104,
    105,
    106,
    107,
    108,
    109,
    110,
    111,
    112,
    113,
    114,
    115,
    116,
    117,
    118,
    119,
    120,
    121,
    122,
    123,
    124,
    125,
    126,
    127,
    128,
    129,
    130,
    131,
    132,
    133,
    134,
    135,
    136,
    137,
    138,
    139,
    140,
    141,
    142,
    143,
    144,
    145,
    146,
    147,
    148,
    149,
    150,
    151,
    152,
    153,
    154,
    155,
    156,
    157,
    158,
    159,
    160,
    161,
    162,
    184,
    164,
    165,
    166,
    167,
    168,
    169,
    170,
    171,
    172,
    173,
    174,
    175,
    176,
    177,
    178,
    168,
    180,
    181,
    182,
    183,
    184,
    185,
    186,
    187,
    188,
    189,
    190,
    191,
    254,
    224,
    225,
    246,
    228,
    229,
    244,
    227,
    245,
    232,
    233,
    234,
    235,
    236,
    237,
    238,
    239,
    255,
    240,
    241,
    242,
    243,
    230,
    226,
    252,
    251,
    231,
    248,
    253,
    249,
    247,
    250,
    222,
    192,
    193,
    214,
    196,
    197,
    212,
    195,
    213,
    200,
    201,
    202,
    203,
    204,
    205,
    206,
    207,
    223,
    208,
    209,
    210,
    211,
    198,
    194,
    220,
    219,
    199,
    216,
    221,
    217,
    215,
    218
};

int win_to_koi[256] = {
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    10,
    11,
    12,
    13,
    14,
    15,
    16,
    17,
    18,
    19,
    20,
    21,
    22,
    23,
    24,
    25,
    26,
    27,
    28,
    29,
    30,
    31,
    32,
    33,
    34,
    35,
    36,
    37,
    38,
    39,
    40,
    41,
    42,
    43,
    44,
    45,
    46,
    47,
    48,
    49,
    50,
    51,
    52,
    53,
    54,
    55,
    56,
    57,
    58,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    67,
    68,
    69,
    70,
    71,
    72,
    73,
    74,
    75,
    76,
    77,
    78,
    79,
    80,
    81,
    82,
    83,
    84,
    85,
    86,
    87,
    88,
    89,
    90,
    91,
    92,
    93,
    94,
    95,
    96,
    97,
    98,
    99,
    100,
    101,
    102,
    103,
    104,
    105,
    106,
    107,
    108,
    109,
    110,
    111,
    112,
    113,
    114,
    115,
    116,
    117,
    118,
    119,
    120,
    121,
    122,
    123,
    124,
    125,
    126,
    127,
    128,
    129,
    130,
    131,
    132,
    133,
    134,
    135,
    136,
    137,
    138,
    139,
    140,
    141,
    142,
    143,
    144,
    145,
    146,
    147,
    148,
    149,
    150,
    151,
    152,
    153,
    154,
    155,
    156,
    157,
    158,
    159,
    160,
    161,
    162,
    163,
    164,
    165,
    166,
    167,
    179,
    169,
    170,
    171,
    172,
    173,
    174,
    175,
    176,
    177,
    178,
    179,
    180,
    181,
    182,
    183,
    163,
    185,
    186,
    187,
    188,
    189,
    190,
    191,
    225,
    226,
    247,
    231,
    228,
    229,
    246,
    250,
    233,
    234,
    235,
    236,
    237,
    238,
    239,
    240,
    242,
    243,
    244,
    245,
    230,
    232,
    227,
    254,
    251,
    253,
    255,
    249,
    248,
    252,
    224,
    241,
    193,
    194,
    215,
    199,
    196,
    197,
    214,
    218,
    201,
    202,
    203,
    204,
    205,
    206,
    207,
    208,
    210,
    211,
    212,
    213,
    198,
    200,
    195,
    222,
    219,
    221,
    223,
    217,
    216,
    220,
    192,
    209
};

int koi_to_utf[256][2] = {
    {0, 0},
    {1, 0},
    {2, 0},
    {3, 0},
    {4, 0},
    {5, 0},
    {6, 0},
    {7, 0},
    {8, 0},
    {9, 0},
    {10, 0},
    {11, 0},
    {12, 0},
    {13, 0},
    {14, 0},
    {15, 0},
    {16, 0},
    {17, 0},
    {18, 0},
    {19, 0},
    {20, 0},
    {21, 0},
    {22, 0},
    {23, 0},
    {24, 0},
    {25, 0},
    {26, 0},
    {27, 0},
    {28, 0},
    {29, 0},
    {30, 0},
    {31, 0},
    {32, 0},
    {33, 0},
    {34, 0},
    {35, 0},
    {36, 0},
    {37, 0},
    {38, 0},
    {39, 0},
    {40, 0},
    {41, 0},
    {42, 0},
    {43, 0},
    {44, 0},
    {45, 0},
    {46, 0},
    {47, 0},
    {48, 0},
    {49, 0},
    {50, 0},
    {51, 0},
    {52, 0},
    {53, 0},
    {54, 0},
    {55, 0},
    {56, 0},
    {57, 0},
    {58, 0},
    {59, 0},
    {60, 0},
    {61, 0},
    {62, 0},
    {63, 0},
    {64, 0},
    {65, 0},
    {66, 0},
    {67, 0},
    {68, 0},
    {69, 0},
    {70, 0},
    {71, 0},
    {72, 0},
    {73, 0},
    {74, 0},
    {75, 0},
    {76, 0},
    {77, 0},
    {78, 0},
    {79, 0},
    {80, 0},
    {81, 0},
    {82, 0},
    {83, 0},
    {84, 0},
    {85, 0},
    {86, 0},
    {87, 0},
    {88, 0},
    {89, 0},
    {90, 0},
    {91, 0},
    {92, 0},
    {93, 0},
    {94, 0},
    {95, 0},
    {96, 0},
    {97, 0},
    {98, 0},
    {99, 0},
    {100, 0},
    {101, 0},
    {102, 0},
    {103, 0},
    {104, 0},
    {105, 0},
    {106, 0},
    {107, 0},
    {108, 0},
    {109, 0},
    {110, 0},
    {111, 0},
    {112, 0},
    {113, 0},
    {114, 0},
    {115, 0},
    {116, 0},
    {117, 0},
    {118, 0},
    {119, 0},
    {120, 0},
    {121, 0},
    {122, 0},
    {123, 0},
    {124, 0},
    {125, 0},
    {126, 0},
    {127, 0},
    {209, 78},
    {209, 79},
    {209, 80},
    {209, 81},
    {209, 82},
    {209, 83},
    {209, 84},
    {209, 85},
    {209, 86},
    {209, 87},
    {209, 88},
    {209, 89},
    {209, 90},
    {209, 91},
    {209, 92},
    {209, 93},
    {209, 94},
    {209, 95},
    {209, 96},
    {209, 97},
    {209, 98},
    {209, 99},
    {209, 100},
    {209, 101},
    {209, 102},
    {209, 103},
    {209, 104},
    {209, 105},
    {209, 106},
    {209, 107},
    {209, 108},
    {209, 109},
    {209, 110},
    {209, 111},
    {209, 112},
    {209, 145},
    {209, 114},
    {209, 115},
    {209, 116},
    {209, 117},
    {209, 118},
    {209, 119},
    {209, 120},
    {209, 121},
    {209, 122},
    {209, 123},
    {209, 124},
    {209, 125},
    {209, 126},
    {209, 127},
    {209, 128},
    {208, 129},
    {209, 130},
    {209, 131},
    {209, 132},
    {209, 133},
    {209, 134},
    {209, 135},
    {209, 136},
    {209, 137},
    {209, 138},
    {209, 139},
    {209, 140},
    {209, 141},
    {209, 142},
    {208, 176},
    {208, 177},
    {209, 134},
    {208, 180},
    {208, 181},
    {209, 132},
    {208, 179},
    {209, 133},
    {208, 184},
    {208, 185},
    {208, 186},
    {208, 187},
    {208, 188},
    {208, 189},
    {208, 190},
    {208, 191},
    {209, 143},
    {209, 128},
    {209, 129},
    {209, 130},
    {209, 131},
    {208, 182},
    {208, 178},
    {209, 140},
    {209, 139},
    {208, 183},
    {209, 136},
    {209, 141},
    {209, 137},
    {209, 135},
    {209, 138},
    {208, 174},
    {208, 144},
    {208, 145},
    {208, 166},
    {208, 148},
    {208, 149},
    {208, 164},
    {208, 147},
    {208, 165},
    {208, 152},
    {208, 153},
    {208, 154},
    {208, 155},
    {208, 156},
    {208, 157},
    {208, 158},
    {208, 159},
    {208, 175},
    {208, 160},
    {208, 161},
    {208, 162},
    {208, 163},
    {208, 150},
    {208, 146},
    {208, 172},
    {208, 171},
    {208, 151},
    {208, 168},
    {208, 173},
    {208, 169},
    {208, 167},
    {208, 170}
};

int win_to_utf[256][2] = {
    {0, 0},
    {1, 0},
    {2, 0},
    {3, 0},
    {4, 0},
    {5, 0},
    {6, 0},
    {7, 0},
    {8, 0},
    {9, 0},
    {10, 0},
    {11, 0},
    {12, 0},
    {13, 0},
    {14, 0},
    {15, 0},
    {16, 0},
    {17, 0},
    {18, 0},
    {19, 0},
    {20, 0},
    {21, 0},
    {22, 0},
    {23, 0},
    {24, 0},
    {25, 0},
    {26, 0},
    {27, 0},
    {28, 0},
    {29, 0},
    {30, 0},
    {31, 0},
    {32, 0},
    {33, 0},
    {34, 0},
    {35, 0},
    {36, 0},
    {37, 0},
    {38, 0},
    {39, 0},
    {40, 0},
    {41, 0},
    {42, 0},
    {43, 0},
    {44, 0},
    {45, 0},
    {46, 0},
    {47, 0},
    {48, 0},
    {49, 0},
    {50, 0},
    {51, 0},
    {52, 0},
    {53, 0},
    {54, 0},
    {55, 0},
    {56, 0},
    {57, 0},
    {58, 0},
    {59, 0},
    {60, 0},
    {61, 0},
    {62, 0},
    {63, 0},
    {64, 0},
    {65, 0},
    {66, 0},
    {67, 0},
    {68, 0},
    {69, 0},
    {70, 0},
    {71, 0},
    {72, 0},
    {73, 0},
    {74, 0},
    {75, 0},
    {76, 0},
    {77, 0},
    {78, 0},
    {79, 0},
    {80, 0},
    {81, 0},
    {82, 0},
    {83, 0},
    {84, 0},
    {85, 0},
    {86, 0},
    {87, 0},
    {88, 0},
    {89, 0},
    {90, 0},
    {91, 0},
    {92, 0},
    {93, 0},
    {94, 0},
    {95, 0},
    {96, 0},
    {97, 0},
    {98, 0},
    {99, 0},
    {100, 0},
    {101, 0},
    {102, 0},
    {103, 0},
    {104, 0},
    {105, 0},
    {106, 0},
    {107, 0},
    {108, 0},
    {109, 0},
    {110, 0},
    {111, 0},
    {112, 0},
    {113, 0},
    {114, 0},
    {115, 0},
    {116, 0},
    {117, 0},
    {118, 0},
    {119, 0},
    {120, 0},
    {121, 0},
    {122, 0},
    {123, 0},
    {124, 0},
    {125, 0},
    {126, 0},
    {127, 0},
    {209, 16},
    {209, 17},
    {209, 18},
    {209, 19},
    {209, 20},
    {209, 21},
    {209, 22},
    {209, 23},
    {209, 24},
    {209, 25},
    {209, 26},
    {209, 27},
    {209, 28},
    {209, 29},
    {209, 30},
    {209, 31},
    {209, 32},
    {209, 33},
    {209, 34},
    {209, 35},
    {209, 36},
    {209, 37},
    {209, 38},
    {209, 39},
    {209, 40},
    {209, 41},
    {209, 42},
    {209, 43},
    {209, 44},
    {209, 45},
    {209, 46},
    {209, 47},
    {209, 48},
    {209, 49},
    {209, 50},
    {209, 51},
    {209, 52},
    {209, 53},
    {209, 54},
    {209, 55},
    {208, 129},
    {209, 57},
    {209, 58},
    {209, 59},
    {209, 60},
    {209, 61},
    {209, 62},
    {209, 63},
    {209, 64},
    {209, 65},
    {209, 66},
    {209, 67},
    {209, 68},
    {209, 69},
    {209, 70},
    {209, 71},
    {209, 145},
    {209, 73},
    {209, 74},
    {209, 75},
    {209, 76},
    {209, 77},
    {209, 78},
    {209, 79},
    {208, 144},
    {208, 145},
    {208, 146},
    {208, 147},
    {208, 148},
    {208, 149},
    {208, 150},
    {208, 151},
    {208, 152},
    {208, 153},
    {208, 154},
    {208, 155},
    {208, 156},
    {208, 157},
    {208, 158},
    {208, 159},
    {208, 160},
    {208, 161},
    {208, 162},
    {208, 163},
    {208, 164},
    {208, 165},
    {208, 166},
    {208, 167},
    {208, 168},
    {208, 169},
    {208, 170},
    {208, 171},
    {208, 172},
    {208, 173},
    {208, 174},
    {208, 175},
    {208, 176},
    {208, 177},
    {208, 178},
    {208, 179},
    {208, 180},
    {208, 181},
    {208, 182},
    {208, 183},
    {208, 184},
    {208, 185},
    {208, 186},
    {208, 187},
    {208, 188},
    {208, 189},
    {208, 190},
    {208, 191},
    {209, 128},
    {209, 129},
    {209, 130},
    {209, 131},
    {209, 132},
    {209, 133},
    {209, 134},
    {209, 135},
    {209, 136},
    {209, 137},
    {209, 138},
    {209, 139},
    {209, 140},
    {209, 141},
    {209, 142},
    {209, 143}
};
#endif // TABLES_HPP

