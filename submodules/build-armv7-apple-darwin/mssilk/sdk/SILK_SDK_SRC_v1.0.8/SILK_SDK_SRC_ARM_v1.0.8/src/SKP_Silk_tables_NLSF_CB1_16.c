/***********************************************************************
Copyright (c) 2006-2011, Skype Limited. All rights reserved. 
Redistribution and use in source and binary forms, with or without 
modification, (subject to the limitations in the disclaimer below) 
are permitted provided that the following conditions are met:
- Redistributions of source code must retain the above copyright notice,
this list of conditions and the following disclaimer.
- Redistributions in binary form must reproduce the above copyright 
notice, this list of conditions and the following disclaimer in the 
documentation and/or other materials provided with the distribution.
- Neither the name of Skype Limited, nor the names of specific 
contributors, may be used to endorse or promote products derived from 
this software without specific prior written permission.
NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED 
BY THIS LICENSE. THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND 
CONTRIBUTORS ''AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND 
FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE 
COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF 
USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON 
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
***********************************************************************/

/**********************************************/
/* This file has been automatically generated */
/*                                            */
/* ROM usage:  0.29 + 3.57 kB                 */
/**********************************************/

#include "SKP_Silk_structs.h"
#include "SKP_Silk_tables_NLSF_CB1_16.h"
#include "SKP_Silk_tables.h"

const SKP_uint16 SKP_Silk_NLSF_MSVQ_CB1_16_CDF[ NLSF_MSVQ_CB1_16_VECTORS + NLSF_MSVQ_CB1_16_STAGES ] =
{
            0,
        19099,
        26957,
        30639,
        34242,
        37546,
        40447,
        43287,
        46005,
        48445,
        49865,
        51284,
        52673,
        53975,
        55221,
        56441,
        57267,
        58025,
        58648,
        59232,
        59768,
        60248,
        60729,
        61210,
        61690,
        62171,
        62651,
        63132,
        63613,
        64093,
        64574,
        65054,
        65535,
            0,
        28808,
        38775,
        46801,
        51785,
        55886,
        59410,
        62572,
        65535,
            0,
        27376,
        38639,
        45052,
        51465,
        55448,
        59021,
        62594,
        65535,
            0,
        33403,
        39569,
        45102,
        49961,
        54047,
        57959,
        61788,
        65535,
            0,
        25851,
        43356,
        47828,
        52204,
        55964,
        59413,
        62507,
        65535,
            0,
        34277,
        40337,
        45432,
        50311,
        54326,
        58171,
        61853,
        65535,
            0,
        33538,
        39865,
        45302,
        50076,
        54549,
        58478,
        62159,
        65535,
            0,
        27445,
        35258,
        40665,
        46072,
        51362,
        56540,
        61086,
        65535,
            0,
        22080,
        30779,
        37065,
        43085,
        48849,
        54613,
        60133,
        65535,
            0,
        13417,
        21748,
        30078,
        38231,
        46383,
        53091,
        59515,
        65535
};

const SKP_uint16 * const SKP_Silk_NLSF_MSVQ_CB1_16_CDF_start_ptr[ NLSF_MSVQ_CB1_16_STAGES ] =
{
     &SKP_Silk_NLSF_MSVQ_CB1_16_CDF[   0 ],
     &SKP_Silk_NLSF_MSVQ_CB1_16_CDF[  33 ],
     &SKP_Silk_NLSF_MSVQ_CB1_16_CDF[  42 ],
     &SKP_Silk_NLSF_MSVQ_CB1_16_CDF[  51 ],
     &SKP_Silk_NLSF_MSVQ_CB1_16_CDF[  60 ],
     &SKP_Silk_NLSF_MSVQ_CB1_16_CDF[  69 ],
     &SKP_Silk_NLSF_MSVQ_CB1_16_CDF[  78 ],
     &SKP_Silk_NLSF_MSVQ_CB1_16_CDF[  87 ],
     &SKP_Silk_NLSF_MSVQ_CB1_16_CDF[  96 ],
     &SKP_Silk_NLSF_MSVQ_CB1_16_CDF[ 105 ]
};

const SKP_int SKP_Silk_NLSF_MSVQ_CB1_16_CDF_middle_idx[ NLSF_MSVQ_CB1_16_STAGES ] =
{
       5,
       2,
       2,
       2,
       2,
       2,
       2,
       3,
       3,
       4
};

const SKP_int16 SKP_Silk_NLSF_MSVQ_CB1_16_rates_Q5[ NLSF_MSVQ_CB1_16_VECTORS ] =
{
               57,               98,
              133,              134,
              138,              144,
              145,              147,
              152,              177,
              177,              178,
              181,              183,
              184,              202,
              206,              215,
              218,              222,
              227,              227,
              227,              227,
              227,              227,
              227,              227,
              227,              227,
              227,              227,
               38,               87,
               97,              119,
              128,              135,
              140,              143,
               40,               81,
              107,              107,
              129,              134,
              134,              143,
               31,              109,
              114,              120,
              128,              130,
              131,              132,
               43,               61,
              124,              125,
              132,              136,
              141,              142,
               30,              110,
              118,              120,
              129,              131,
              133,              133,
               31,              108,
              115,              121,
              124,              130,
              133,              137,
               40,               98,
              115,              115,
              116,              117,
              123,              124,
               50,               93,
              108,              110,
              112,              112,
              114,              115,
               73,               95,
               95,               96,
               96,              105,
              107,              110
};

const SKP_int SKP_Silk_NLSF_MSVQ_CB1_16_ndelta_min_Q15[ 16 + 1 ] =
{
              148,
                3,
               60,
               68,
              117,
               86,
              121,
              124,
              152,
              153,
              207,
              151,
              225,
              239,
              126,
              183,
              792
};

const SKP_int16 SKP_Silk_NLSF_MSVQ_CB1_16_Q15[ 16 * NLSF_MSVQ_CB1_16_VECTORS ] =
{
             1309,             3060,             5071,             6996,
             9028,            10938,            12934,            14891,
            16933,            18854,            20792,            22764,
            24753,            26659,            28626,            30501,
             1264,             2745,             4610,             6408,
             8286,            10043,            12084,            14108,
            16118,            18163,            20095,            22164,
            24264,            26316,            28329,            30251,
             1044,             2080,             3672,             5179,
             7140,             9100,            11070,            13065,
            15423,            17790,            19931,            22101,
            24290,            26361,            28499,            30418,
             1131,             2476,             4478,             6149,
             7902,             9875,            11938,            13809,
            15869,            17730,            19948,            21707,
            23761,            25535,            27426,            28917,
             1040,             2004,             4026,             6100,
             8432,            10494,            12610,            14694,
            16797,            18775,            20799,            22782,
            24772,            26682,            28631,            30516,
             2310,             3812,             5913,             7933,
            10033,            11881,            13885,            15798,
            17751,            19576,            21482,            23276,
            25157,            27010,            28833,            30623,
             1254,             2847,             5013,             6781,
             8626,            10370,            12726,            14633,
            16281,            17852,            19870,            21472,
            23002,            24629,            26710,            27960,
             1468,             3059,             4987,             7026,
             8741,            10412,            12281,            14020,
            15970,            17723,            19640,            21522,
            23472,            25661,            27986,            30225,
             2171,             3566,             5605,             7384,
             9404,            11220,            13030,            14758,
            16687,            18417,            20346,            22091,
            24055,            26212,            28356,            30397,
             2409,             4676,             7543,             9786,
            11419,            12935,            14368,            15653,
            17366,            18943,            20762,            22477,
            24440,            26327,            28284,            30242,
             2354,             4222,             6820,             9107,
            11596,            13934,            15973,            17682,
            19158,            20517,            21991,            23420,
            25178,            26936,            28794,            30527,
             1323,             2414,             4184,             6039,
             7534,             9398,            11099,            13097,
            14799,            16451,            18434,            20887,
            23490,            25838,            28046,            30225,
             1361,             3243,             6048,             8511,
            11001,            13145,            15073,            16608,
            18126,            19381,            20912,            22607,
            24660,            26668,            28663,            30566,
             1216,             2648,             5901,             8422,
            10037,            11425,            12973,            14603,
            16686,            18600,            20555,            22415,
            24450,            26280,            28206,            30077,
             2417,             4048,             6316,             8433,
            10510,            12757,            15072,            17295,
            19573,            21503,            23329,            24782,
            26235,            27689,            29214,            30819,
             1012,             2345,             4991,             7377,
             9465,            11916,            14296,            16566,
            18672,            20544,            22292,            23838,
            25415,            27050,            28848,            30551,
             1937,             3693,             6267,             8019,
            10372,            12194,            14287,            15657,
            17431,            18864,            20769,            22206,
            24037,            25463,            27383,            28602,
             1969,             3305,             5017,             6726,
             8375,             9993,            11634,            13280,
            15078,            16751,            18464,            20119,
            21959,            23858,            26224,            29298,
             1198,             2647,             5428,             7423,
             9775,            12155,            14665,            16344,
            18121,            19790,            21557,            22847,
            24484,            25742,            27639,            28711,
             1636,             3353,             5447,             7597,
             9837,            11647,            13964,            16019,
            17862,            20116,            22319,            24037,
            25966,            28086,            29914,            31294,
             2676,             4105,             6378,             8223,
            10058,            11549,            13072,            14453,
            15956,            17355,            18931,            20402,
            22183,            23884,            25717,            27723,
             1373,             2593,             4449,             5633,
             7300,             8425,             9474,            10818,
            12769,            15722,            19002,            21429,
            23682,            25924,            28135,            30333,
             1596,             3183,             5378,             7164,
             8670,            10105,            11470,            12834,
            13991,            15042,            16642,            17903,
            20759,            25283,            27770,            30240,
             2037,             3987,             6237,             8117,
             9954,            12245,            14217,            15892,
            17775,            20114,            22314,            25942,
            26305,            26483,            26796,            28561,
             2181,             3858,             5760,             7924,
            10041,            11577,            13769,            15700,
            17429,            19879,            23583,            24538,
            25212,            25693,            28688,            30507,
             1992,             3882,             6474,             7883,
             9381,            12672,            14340,            15701,
            16658,            17832,            20850,            22885,
            24677,            26457,            28491,            30460,
             2391,             3988,             5448,             7432,
            11014,            12579,            13140,            14146,
            15898,            18592,            21104,            22993,
            24673,            27186,            28142,            29612,
             1713,             5102,             6989,             7798,
             8670,            10110,            12746,            14881,
            16709,            18407,            20126,            22107,
            24181,            26198,            28237,            30137,
             1612,             3617,             6148,             8359,
             9576,            11528,            14936,            17809,
            18287,            18729,            19001,            21111,
            24631,            26596,            28740,            30643,
             2266,             4168,             7862,             9546,
             9618,             9703,            10134,            13897,
            16265,            18432,            20587,            22605,
            24754,            26994,            29125,            30840,
             1840,             3917,             6272,             7809,
             9714,            11438,            13767,            15799,
            19244,            21972,            22980,            23180,
            23723,            25650,            29117,            31085,
             1458,             3612,             6008,             7488,
             9827,            11893,            14086,            15734,
            17440,            19535,            22424,            24767,
            29246,            29928,            30516,            30947,
             -102,             -121,              -31,               -6,
                5,               -2,                8,              -18,
               -4,                6,               14,               -2,
              -12,              -16,              -12,              -60,
             -126,             -353,             -574,             -677,
             -657,             -617,             -498,             -393,
             -348,             -277,             -225,             -164,
             -102,              -70,              -31,               33,
                4,              379,              387,              551,
              605,              620,              532,              482,
              442,              454,              385,              347,
              322,              299,              266,              200,
             1168,              951,              672,              246,
               60,             -161,             -259,             -234,
             -253,             -282,             -203,             -187,
             -155,             -176,             -198,             -178,
               10,              170,              393,              609,
              555,              208,             -330,             -571,
             -769,             -633,             -319,              -43,
               95,              105,              106,              116,
             -152,             -140,             -125,                5,
              173,              274,              264,              331,
              -37,             -293,             -609,             -786,
             -959,             -814,             -645,             -238,
              -91,               36,              -11,             -101,
             -279,             -227,              -40,               90,
              530,              677,              890,             1104,
              999,              835,              564,              295,
             -280,             -364,             -340,             -331,
             -284,              288,              761,              880,
              988,              627,              146,             -226,
             -203,             -181,             -142,               39,
               24,              -26,             -107,              -92,
             -161,             -135,             -131,              -88,
             -160,             -156,              -75,              -43,
              -36,               -6,              -33,               33,
             -324,             -415,             -108,              124,
              157,              191,              203,              197,
              144,              109,              152,              176,
              190,              122,              101,              159,
              663,              668,              480,              400,
              379,              444,              446,              458,
              343,              351,              310,              228,
              133,               44,               75,               63,
              -84,               39,              -29,               35,
              -94,             -233,             -261,             -354,
               77,              262,              -24,             -145,
             -333,             -409,             -404,             -597,
             -488,             -300,              910,              592,
              412,              120,              130,              -51,
              -37,              -77,             -172,             -181,
             -159,             -148,              -72,              -62,
              510,              516,              113,             -585,
            -1075,             -957,             -417,             -195,
                9,                7,              -88,             -173,
              -91,               54,               98,               95,
              -28,              197,             -527,             -621,
              157,              122,             -168,              147,
              309,              300,              336,              315,
              396,              408,              376,              106,
             -162,             -170,             -315,               98,
              821,              908,              570,              -33,
             -312,             -568,             -572,             -378,
             -107,               23,              156,               93,
             -129,              -87,               20,              -72,
              -37,               40,               21,               27,
               48,               75,               77,               65,
               46,               71,               66,               47,
              136,              344,              236,              322,
              170,              283,              269,              291,
              162,              -43,             -204,             -259,
             -240,             -305,             -350,             -312,
              447,              348,              345,              257,
               71,             -131,              -77,             -190,
             -202,              -40,               35,              133,
              261,              365,              438,              303,
               -8,               22,              140,              137,
             -300,             -641,             -764,             -268,
              -23,              -25,               73,             -162,
             -150,             -212,              -72,                6,
               39,               78,              104,              -93,
             -308,             -136,              117,              -71,
             -513,             -820,             -700,             -450,
             -161,              -23,               29,               78,
              337,              106,             -406,             -782,
             -112,              233,              383,               62,
             -126,                6,              -77,              -29,
             -146,             -123,              -51,              -27,
              -27,             -381,             -641,              402,
              539,                8,             -207,             -366,
              -36,              -27,             -204,             -227,
             -237,             -189,              -64,               51,
              -92,             -137,             -281,               62,
              233,               92,              148,              294,
              363,              416,              564,              625,
              370,              -36,             -469,             -462,
              102,              168,               32,              117,
              -21,               97,              139,               89,
              104,               35,                4,               82,
               66,               58,               73,               93,
              -76,             -320,             -236,             -189,
             -203,             -142,              -27,              -73,
                9,               -9,              -25,               12,
              -15,                4,                4,              -50,
              314,              180,              162,              -49,
              199,             -108,             -227,              -66,
             -447,              -67,             -264,             -394,
                5,               55,             -133,             -176,
             -116,             -241,              272,              109,
              282,              262,              192,              -64,
             -392,             -514,              156,              203,
              154,               72,              -34,             -160,
              -73,                3,              -33,             -431,
              321,               18,             -567,             -590,
             -108,               88,               66,               51,
              -31,             -193,              -46,               65,
              -29,              -23,              215,              -31,
              101,             -113,               32,              304,
               88,              320,              448,                5,
             -439,             -562,             -508,             -135,
              -13,             -171,               -8,              182,
              -99,             -181,             -149,              376,
              476,               64,             -396,             -652,
             -150,              176,              222,               65,
             -590,              719,              271,              399,
              245,               72,             -156,             -152,
             -176,               59,               94,              125,
               -9,               -7,                9,                1,
              -61,             -116,              -82,                1,
               79,               22,              -44,              -15,
              -48,              -65,              -62,             -101,
             -102,              -54,              -70,              -78,
              -80,              -25,              398,               71,
              139,               38,               90,              194,
              222,              249,              165,               94,
              221,              262,              163,               91,
             -206,              573,              200,             -287,
             -147,                5,              -18,              -85,
              -74,             -125,              -87,               85,
              141,                4,               -4,               28,
              234,               48,             -150,             -111,
             -506,              237,             -209,              345,
               94,             -124,               77,              121,
              143,               12,              -80,              -48,
              191,              144,              -93,              -65,
             -151,             -643,              435,              106,
               87,                7,               65,              102,
               94,               68,                5,               99,
              222,               93,               94,              355,
              -13,              -89,             -228,             -503,
              287,              109,              108,              449,
              253,              -29,             -109,             -116,
               15,              -73,              -20,              131,
             -147,               72,               59,             -150,
             -594,              273,              316,              132,
              199,              106,              198,              212,
              220,               82,               45,              -13,
              223,              137,              270,               38,
              252,              135,             -177,             -207,
             -360,             -102,              403,              406,
              -14,               83,               64,               51,
               -7,              -99,              -97,              -88,
             -124,              -65,               42,               32,
               28,               29,               12,               20,
              119,              -26,             -212,             -201,
              373,              251,              141,              103,
               36,              -52,               66,               18,
               -6,              -95,             -196,                5,
               98,              -85,             -108,              218,
             -164,               20,              356,              172,
               37,              266,               23,              112,
              -24,              -99,              -92,             -178,
               29,             -278,              388,              -60,
             -220,              300,              -13,              154,
              191,               15,              -37,             -110,
             -153,             -150,             -114,               -7,
              -94,              -31,              -62,             -177,
                4,              -70,               35,              453,
              147,             -247,             -328,              101,
               20,             -114,              147,              108,
             -119,             -109,             -102,             -238,
               55,             -102,              173,              -89,
              129,              138,             -330,             -160,
              485,              154,              -59,             -170,
              -20,              -34,             -261,              -40,
             -129,               77,              -84,               69,
               83,              160,              169,               63,
             -516,               30,              336,               52,
               -0,              -52,             -124,              158,
               19,              197,              -10,             -375,
              405,              285,              114,             -395,
              -47,              196,               62,               87,
             -106,              -65,              -75,              -69,
              -13,               34,               99,               59,
               83,               98,               44,                0,
               24,               18,               17,               70,
              -22,              194,              208,              144,
              -79,              -15,               32,             -104,
              -28,             -105,             -186,             -212,
             -228,              -79,              -76,               51,
              -71,               72,              118,              -34,
               -3,             -171,                5,                2,
             -108,             -125,               62,              -58,
               58,             -121,               73,             -466,
               92,               63,              -94,              -78,
              -76,              212,               36,             -225,
              -71,             -354,              152,              143,
              -79,             -246,              -51,              -31,
               -6,             -270,              240,              210,
               30,             -157,             -231,               74,
             -146,               88,             -273,              156,
               92,               56,               71,                2,
              318,              164,               32,             -110,
              -35,              -41,              -95,             -106,
               11,              132,              -68,               55,
              123,              -83,             -149,              212,
              132,                0,             -194,               55,
              206,             -108,             -353,              289,
             -195,                1,              233,              -22,
              -60,               20,               26,               68,
              166,               27,              -58,              130,
              112,              107,               27,             -165,
              115,              -93,              -37,               38,
               83,              483,               65,             -229,
              -13,              157,               85,               50,
              136,               10,               32,               83,
               82,               55,                5,               -9,
              -52,              -78,              -81,              -51,
               40,               18,             -127,             -224,
              -41,               53,             -210,             -113,
               24,              -17,             -187,              -89,
                8,              121,               83,               77,
               91,              -74,              -35,             -112,
             -161,             -173,              102,              132,
             -125,              -61,              103,             -260,
               52,              166,              -32,             -156,
              -87,              -56,               60,              -70,
             -124,              242,              114,             -251,
             -166,              201,              127,               28,
              -11,               23,              -80,             -115,
              -20,              -51,             -348,              340,
              -34,              133,               13,               92,
             -124,             -136,             -120,              -26,
               -6,               17,               28,               21,
              120,             -168,              160,              -35,
              115,               28,                9,                7,
              -56,               39,              156,              256,
              -18,                1,              277,               82,
              -70,             -144,              -88,              -13,
              -59,             -157,                8,             -134,
               21,              -40,               58,              -21,
              194,             -276,               97,              279,
              -56,             -140,              125,               57,
             -184,             -204,              -70,               -2,
              128,             -202,              -78,              230,
              -23,              161,             -102,                1,
                1,              180,              -31,              -86,
             -167,              -57,              -60,               27,
              -13,               99,              108,              111,
               76,               69,               34,              -21,
               53,               38,               34,               78,
               73,              219,               51,               15,
              -72,             -103,             -207,               30,
              213,              -14,               31,              -94,
              -40,             -144,               67,                4,
              105,               59,             -240,               25,
              244,               69,               58,               23,
              -24,               -5,              -15,             -133,
              -71,              -67,              181,               29,
              -45,              121,               96,               51,
              -72,              -53,               56,             -153,
              -27,               85,              183,              211,
              105,              -34,              -46,               43,
              -72,              -93,               36,             -128,
               29,              111,              -95,             -156,
             -179,             -235,               21,              -39,
              -71,              -33,              -61,             -252,
              230,             -131,              157,              -21,
              -85,              -28,             -123,               80,
             -160,               63,               47,               -6,
              -49,              -96,              -19,               17,
              -58,               17,               -0,              -13,
             -170,               25,              -35,               59,
               10,              -31,             -413,               81,
               62,               18,             -164,              245,
               92,             -165,               42,               26,
              126,             -248,              193,              -55,
               16,               39,               14,               50
};

const SKP_Silk_NLSF_CBS SKP_Silk_NLSF_CB1_16_Stage_info[ NLSF_MSVQ_CB1_16_STAGES ] =
{
        {  32, &SKP_Silk_NLSF_MSVQ_CB1_16_Q15[ 16 *   0 ], &SKP_Silk_NLSF_MSVQ_CB1_16_rates_Q5[   0 ] },
        {   8, &SKP_Silk_NLSF_MSVQ_CB1_16_Q15[ 16 *  32 ], &SKP_Silk_NLSF_MSVQ_CB1_16_rates_Q5[  32 ] },
        {   8, &SKP_Silk_NLSF_MSVQ_CB1_16_Q15[ 16 *  40 ], &SKP_Silk_NLSF_MSVQ_CB1_16_rates_Q5[  40 ] },
        {   8, &SKP_Silk_NLSF_MSVQ_CB1_16_Q15[ 16 *  48 ], &SKP_Silk_NLSF_MSVQ_CB1_16_rates_Q5[  48 ] },
        {   8, &SKP_Silk_NLSF_MSVQ_CB1_16_Q15[ 16 *  56 ], &SKP_Silk_NLSF_MSVQ_CB1_16_rates_Q5[  56 ] },
        {   8, &SKP_Silk_NLSF_MSVQ_CB1_16_Q15[ 16 *  64 ], &SKP_Silk_NLSF_MSVQ_CB1_16_rates_Q5[  64 ] },
        {   8, &SKP_Silk_NLSF_MSVQ_CB1_16_Q15[ 16 *  72 ], &SKP_Silk_NLSF_MSVQ_CB1_16_rates_Q5[  72 ] },
        {   8, &SKP_Silk_NLSF_MSVQ_CB1_16_Q15[ 16 *  80 ], &SKP_Silk_NLSF_MSVQ_CB1_16_rates_Q5[  80 ] },
        {   8, &SKP_Silk_NLSF_MSVQ_CB1_16_Q15[ 16 *  88 ], &SKP_Silk_NLSF_MSVQ_CB1_16_rates_Q5[  88 ] },
        {   8, &SKP_Silk_NLSF_MSVQ_CB1_16_Q15[ 16 *  96 ], &SKP_Silk_NLSF_MSVQ_CB1_16_rates_Q5[  96 ] }
};

const SKP_Silk_NLSF_CB_struct SKP_Silk_NLSF_CB1_16 =
{
        NLSF_MSVQ_CB1_16_STAGES,
        SKP_Silk_NLSF_CB1_16_Stage_info,
        SKP_Silk_NLSF_MSVQ_CB1_16_ndelta_min_Q15,
        SKP_Silk_NLSF_MSVQ_CB1_16_CDF,
        SKP_Silk_NLSF_MSVQ_CB1_16_CDF_start_ptr,
        SKP_Silk_NLSF_MSVQ_CB1_16_CDF_middle_idx
};

