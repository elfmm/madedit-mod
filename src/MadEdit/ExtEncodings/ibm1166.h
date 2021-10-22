/* Tables for conversion from and to IBM1166.
   Copyright (C) 2005-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Masahide Washizawa <washi@jp.ibm.com>, 2005.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#include "gap.h"

/*
 * IBM1166
 */

static const unsigned short ibm1166_2uni[256] =
{
  /*[0x00] =*/ 0x0000, /*[0x01] =*/ 0x0001, /*[0x02] =*/ 0x0002, /*[0x03] =*/ 0x0003,
  /*[0x04] =*/ 0x009c, /*[0x05] =*/ 0x0009, /*[0x06] =*/ 0x0086, /*[0x07] =*/ 0x007f,
  /*[0x08] =*/ 0x0097, /*[0x09] =*/ 0x008d, /*[0x0a] =*/ 0x008e, /*[0x0b] =*/ 0x000b,
  /*[0x0c] =*/ 0x000c, /*[0x0d] =*/ 0x000d, /*[0x0e] =*/ 0x000e, /*[0x0f] =*/ 0x000f,
  /*[0x10] =*/ 0x0010, /*[0x11] =*/ 0x0011, /*[0x12] =*/ 0x0012, /*[0x13] =*/ 0x0013,
  /*[0x14] =*/ 0x009d, /*[0x15] =*/ 0x0085, /*[0x16] =*/ 0x0008, /*[0x17] =*/ 0x0087,
  /*[0x18] =*/ 0x0018, /*[0x19] =*/ 0x0019, /*[0x1a] =*/ 0x0092, /*[0x1b] =*/ 0x008f,
  /*[0x1c] =*/ 0x001c, /*[0x1d] =*/ 0x001d, /*[0x1e] =*/ 0x001e, /*[0x1f] =*/ 0x001f,
  /*[0x20] =*/ 0x0080, /*[0x21] =*/ 0x0081, /*[0x22] =*/ 0x0082, /*[0x23] =*/ 0x0083,
  /*[0x24] =*/ 0x0084, /*[0x25] =*/ 0x000a, /*[0x26] =*/ 0x0017, /*[0x27] =*/ 0x001b,
  /*[0x28] =*/ 0x0088, /*[0x29] =*/ 0x0089, /*[0x2a] =*/ 0x008a, /*[0x2b] =*/ 0x008b,
  /*[0x2c] =*/ 0x008c, /*[0x2d] =*/ 0x0005, /*[0x2e] =*/ 0x0006, /*[0x2f] =*/ 0x0007,
  /*[0x30] =*/ 0x0090, /*[0x31] =*/ 0x0091, /*[0x32] =*/ 0x0016, /*[0x33] =*/ 0x0093,
  /*[0x34] =*/ 0x0094, /*[0x35] =*/ 0x0095, /*[0x36] =*/ 0x0096, /*[0x37] =*/ 0x0004,
  /*[0x38] =*/ 0x0098, /*[0x39] =*/ 0x0099, /*[0x3a] =*/ 0x009a, /*[0x3b] =*/ 0x009b,
  /*[0x3c] =*/ 0x0014, /*[0x3d] =*/ 0x0015, /*[0x3e] =*/ 0x009e, /*[0x3f] =*/ 0x001a,
  /*[0x40] =*/ 0x0020, /*[0x41] =*/ 0x00a0, /*[0x42] =*/ 0x04d9, /*[0x43] =*/ 0x0493,
  /*[0x44] =*/ 0x0451, /*[0x45] =*/ 0x0454, /*[0x46] =*/ 0x0455, /*[0x47] =*/ 0x0456,
  /*[0x48] =*/ 0x049b, /*[0x49] =*/ 0x0458, /*[0x4a] =*/ 0x005b, /*[0x4b] =*/ 0x002e,
  /*[0x4c] =*/ 0x003c, /*[0x4d] =*/ 0x0028, /*[0x4e] =*/ 0x002b, /*[0x4f] =*/ 0x0021,
  /*[0x50] =*/ 0x0026, /*[0x51] =*/ 0x04a3, /*[0x52] =*/ 0x04e9, /*[0x53] =*/ 0x04b1,
  /*[0x54] =*/ 0x04af, /*[0x55] =*/ 0x045e, /*[0x56] =*/ 0x04bb, /*[0x57] =*/ 0x042a,
  /*[0x58] =*/ 0x2116, /*[0x59] =*/ 0x04d8, /*[0x5a] =*/ 0x005d, /*[0x5b] =*/ 0x0024,
  /*[0x5c] =*/ 0x002a, /*[0x5d] =*/ 0x0029, /*[0x5e] =*/ 0x003b, /*[0x5f] =*/ 0x005e,
  /*[0x60] =*/ 0x002d, /*[0x61] =*/ 0x002f, /*[0x62] =*/ 0x0492, /*[0x63] =*/ 0x0401,
  /*[0x64] =*/ 0x0404, /*[0x65] =*/ 0x0405, /*[0x66] =*/ 0x0406, /*[0x67] =*/ 0x049a,
  /*[0x68] =*/ 0x0408, /*[0x69] =*/ 0x04a2, /*[0x6a] =*/ 0x007c, /*[0x6b] =*/ 0x002c,
  /*[0x6c] =*/ 0x0025, /*[0x6d] =*/ 0x005f, /*[0x6e] =*/ 0x003e, /*[0x6f] =*/ 0x003f,
  /*[0x70] =*/ 0x04e8, /*[0x71] =*/ 0x04b0, /*[0x72] =*/ 0x04ae, /*[0x73] =*/ 0x00ad,
  /*[0x74] =*/ 0x040e, /*[0x75] =*/ 0x04ba, /*[0x76] =*/ 0x044e, /*[0x77] =*/ 0x0430,
  /*[0x78] =*/ 0x0431, /*[0x79] =*/ 0x0060, /*[0x7a] =*/ 0x003a, /*[0x7b] =*/ 0x0023,
  /*[0x7c] =*/ 0x0040, /*[0x7d] =*/ 0x0027, /*[0x7e] =*/ 0x003d, /*[0x7f] =*/ 0x0022,
  /*[0x80] =*/ 0x0446, /*[0x81] =*/ 0x0061, /*[0x82] =*/ 0x0062, /*[0x83] =*/ 0x0063,
  /*[0x84] =*/ 0x0064, /*[0x85] =*/ 0x0065, /*[0x86] =*/ 0x0066, /*[0x87] =*/ 0x0067,
  /*[0x88] =*/ 0x0068, /*[0x89] =*/ 0x0069, /*[0x8a] =*/ 0x0434, /*[0x8b] =*/ 0x0435,
  /*[0x8c] =*/ 0x0444, /*[0x8d] =*/ 0x0433, /*[0x8e] =*/ 0x0445, /*[0x8f] =*/ 0x0438,
  /*[0x90] =*/ 0x0439, /*[0x91] =*/ 0x006a, /*[0x92] =*/ 0x006b, /*[0x93] =*/ 0x006c,
  /*[0x94] =*/ 0x006d, /*[0x95] =*/ 0x006e, /*[0x96] =*/ 0x006f, /*[0x97] =*/ 0x0070,
  /*[0x98] =*/ 0x0071, /*[0x99] =*/ 0x0072, /*[0x9a] =*/ 0x043a, /*[0x9b] =*/ 0x043b,
  /*[0x9c] =*/ 0x043c, /*[0x9d] =*/ 0x043d, /*[0x9e] =*/ 0x043e, /*[0x9f] =*/ 0x043f,
  /*[0xa0] =*/ 0x044f, /*[0xa1] =*/ 0x007e, /*[0xa2] =*/ 0x0073, /*[0xa3] =*/ 0x0074,
  /*[0xa4] =*/ 0x0075, /*[0xa5] =*/ 0x0076, /*[0xa6] =*/ 0x0077, /*[0xa7] =*/ 0x0078,
  /*[0xa8] =*/ 0x0079, /*[0xa9] =*/ 0x007a, /*[0xaa] =*/ 0x0440, /*[0xab] =*/ 0x0441,
  /*[0xac] =*/ 0x0442, /*[0xad] =*/ 0x0443, /*[0xae] =*/ 0x0436, /*[0xaf] =*/ 0x0432,
  /*[0xb0] =*/ 0x044c, /*[0xb1] =*/ 0x044b, /*[0xb2] =*/ 0x0437, /*[0xb3] =*/ 0x0448,
  /*[0xb4] =*/ 0x044d, /*[0xb5] =*/ 0x0449, /*[0xb6] =*/ 0x0447, /*[0xb7] =*/ 0x044a,
  /*[0xb8] =*/ 0x042e, /*[0xb9] =*/ 0x0410, /*[0xba] =*/ 0x0411, /*[0xbb] =*/ 0x0426,
  /*[0xbc] =*/ 0x0414, /*[0xbd] =*/ 0x0415, /*[0xbe] =*/ 0x0424, /*[0xbf] =*/ 0x0413,
  /*[0xc0] =*/ 0x007b, /*[0xc1] =*/ 0x0041, /*[0xc2] =*/ 0x0042, /*[0xc3] =*/ 0x0043,
  /*[0xc4] =*/ 0x0044, /*[0xc5] =*/ 0x0045, /*[0xc6] =*/ 0x0046, /*[0xc7] =*/ 0x0047,
  /*[0xc8] =*/ 0x0048, /*[0xc9] =*/ 0x0049, /*[0xca] =*/ 0x0425, /*[0xcb] =*/ 0x0418,
  /*[0xcc] =*/ 0x0419, /*[0xcd] =*/ 0x041a, /*[0xce] =*/ 0x041b, /*[0xcf] =*/ 0x041c,
  /*[0xd0] =*/ 0x007d, /*[0xd1] =*/ 0x004a, /*[0xd2] =*/ 0x004b, /*[0xd3] =*/ 0x004c,
  /*[0xd4] =*/ 0x004d, /*[0xd5] =*/ 0x004e, /*[0xd6] =*/ 0x004f, /*[0xd7] =*/ 0x0050,
  /*[0xd8] =*/ 0x0051, /*[0xd9] =*/ 0x0052, /*[0xda] =*/ 0x041d, /*[0xdb] =*/ 0x041e,
  /*[0xdc] =*/ 0x041f, /*[0xdd] =*/ 0x042f, /*[0xde] =*/ 0x0420, /*[0xdf] =*/ 0x0421,
  /*[0xe0] =*/ 0x005c, /*[0xe1] =*/ 0x20ac, /*[0xe2] =*/ 0x0053, /*[0xe3] =*/ 0x0054,
  /*[0xe4] =*/ 0x0055, /*[0xe5] =*/ 0x0056, /*[0xe6] =*/ 0x0057, /*[0xe7] =*/ 0x0058,
  /*[0xe8] =*/ 0x0059, /*[0xe9] =*/ 0x005a, /*[0xea] =*/ 0x0422, /*[0xeb] =*/ 0x0423,
  /*[0xec] =*/ 0x0416, /*[0xed] =*/ 0x0412, /*[0xee] =*/ 0x042c, /*[0xef] =*/ 0x042b,
  /*[0xf0] =*/ 0x0030, /*[0xf1] =*/ 0x0031, /*[0xf2] =*/ 0x0032, /*[0xf3] =*/ 0x0033,
  /*[0xf4] =*/ 0x0034, /*[0xf5] =*/ 0x0035, /*[0xf6] =*/ 0x0036, /*[0xf7] =*/ 0x0037,
  /*[0xf8] =*/ 0x0038, /*[0xf9] =*/ 0x0039, /*[0xfa] =*/ 0x0417, /*[0xfb] =*/ 0x0428,
  /*[0xfc] =*/ 0x042d, /*[0xfd] =*/ 0x0429, /*[0xfe] =*/ 0x0427, /*[0xff] =*/ 0x009f
};

static int
ibm1166_mbtowc (ucs4_t *pwc, const unsigned char *s, int n)
{
   unsigned char c = *s;
   *pwc = (ucs4_t) ibm1166_2uni[c];
   return 1;
}

static const unsigned char ibm1166_page00[] = {
  0x00, 0x01, 0x02, 0x03, 0x37, 0x2d, 0x2e, 0x2f,
  0x16, 0x05, 0x25, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
  0x10, 0x11, 0x12, 0x13, 0x3c, 0x3d, 0x32, 0x26,
  0x18, 0x19, 0x3f, 0x27, 0x1c, 0x1d, 0x1e, 0x1f,
  0x40, 0x4f, 0x7f, 0x7b, 0x5b, 0x6c, 0x50, 0x7d,
  0x4d, 0x5d, 0x5c, 0x4e, 0x6b, 0x60, 0x4b, 0x61,
  0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7,
  0xf8, 0xf9, 0x7a, 0x5e, 0x4c, 0x7e, 0x6e, 0x6f,
  0x7c, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7,
  0xc8, 0xc9, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6,
  0xd7, 0xd8, 0xd9, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6,
  0xe7, 0xe8, 0xe9, 0x4a, 0xe0, 0x5a, 0x5f, 0x6d,
  0x79, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87,
  0x88, 0x89, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96,
  0x97, 0x98, 0x99, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6,
  0xa7, 0xa8, 0xa9, 0xc0, 0x6a, 0xd0, 0xa1, 0x07,
  0x20, 0x21, 0x22, 0x23, 0x24, 0x15, 0x06, 0x17,
  0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x09, 0x0a, 0x1b,
  0x30, 0x31, 0x1a, 0x33, 0x34, 0x35, 0x36, 0x08,
  0x38, 0x39, 0x3a, 0x3b, 0x04, 0x14, 0x3e, 0xff,
  0x41, 0x73, 0x63, 0x00, 0x00, 0x64, 0x65, 0x66,
  0x00, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x74,
  0x00, 0xb9, 0xba, 0xed, 0xbf, 0xbc, 0xbd, 0xec,
  0xfa, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xda, 0xdb,
  0xdc, 0xde, 0xdf, 0xea, 0xeb, 0xbe, 0xca, 0xbb,
  0xfe, 0xfb, 0xfd, 0x57, 0xef, 0xee, 0xfc, 0xb8,
  0xdd, 0x77, 0x78, 0xaf, 0x8d, 0x8a, 0x8b, 0xae,
  0xb2, 0x8f, 0x90, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e,
  0x9f, 0xaa, 0xab, 0xac, 0xad, 0x8c, 0x8e, 0x80,
  0xb6, 0xb3, 0xb5, 0xb7, 0xb1, 0xb0, 0xb4, 0x76,
  0xa0, 0x00, 0x44, 0x00, 0x00, 0x45, 0x46, 0x47,
  0x00, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55,
  0x62, 0x43, 0x67, 0x48, 0x69, 0x51, 0x72, 0x54,
  0x71, 0x53, 0x75, 0x56, 0x59, 0x42, 0x70, 0x52,
  0xe1, 0x58
};

static const struct gap ibm1166_idx[] =
{
  { /*start:*/ 0x0000, /*end:*/ 0x00a0, /*idx:*/     0 },
  { /*start:*/ 0x00ad, /*end:*/ 0x00ad, /*idx:*/   -12 },
  { /*start:*/ 0x0401, /*end:*/ 0x045e, /*idx:*/  -863 },
  { /*start:*/ 0x0492, /*end:*/ 0x0493, /*idx:*/  -914 },
  { /*start:*/ 0x049a, /*end:*/ 0x049b, /*idx:*/  -920 },
  { /*start:*/ 0x04a2, /*end:*/ 0x04a3, /*idx:*/  -926 },
  { /*start:*/ 0x04ae, /*end:*/ 0x04b1, /*idx:*/  -936 },
  { /*start:*/ 0x04ba, /*end:*/ 0x04bb, /*idx:*/  -944 },
  { /*start:*/ 0x04d8, /*end:*/ 0x04d9, /*idx:*/  -972 },
  { /*start:*/ 0x04e8, /*end:*/ 0x04e9, /*idx:*/  -986 },
  { /*start:*/ 0x20ac, /*end:*/ 0x20ac, /*idx:*/ -8092 },
  { /*start:*/ 0x2116, /*end:*/ 0x2116, /*idx:*/ -8197 },
  { /*start:*/ 0xffff, /*end:*/ 0xffff, /*idx:*/     0 }
};

static int
ibm1166_wctomb (unsigned char *r, ucs4_t wc, int n)
{
   const struct gap* p2gap = ibm1166_idx;
   for (; p2gap->start < 0xffff ; p2gap++) {
      if (wc >= p2gap->start && wc <= p2gap->end) {
         *r = ibm1166_page00[wc - p2gap->idx];
         return 1;
      }
   }
   return RET_ILUNI;
}
