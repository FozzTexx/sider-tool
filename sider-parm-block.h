struct siderParms {
  uint8 dosSmallVolumes; /* 0 */
  uint8 smallVolumesXor; /* 1 xor with 0xA5 */
  uint8 interleave; /* 2 */
  uint8 reserved[1]; /* 3 */
  uint8 dosVolumes; /* 4 */
  uint8 reserved2[19];
  uint8 xor3233; /* 24 0x18 xor 0xA5 */
  uint16 cylinders; /* 25-26 0x19-0x1A Big endian */
  uint8 heads; /* 27 0x1B */
  uint16 reducedWriteCylinders; /* 28-29 0x1C-01D Big endian */
  uint16 precompCylinders; /* 30-31 0x1E-0x1F Big endian */
  uint8 maxECCDataBurst; /* 32 0x20 */
  uint8 controlByte; /* 33 0x21 */
  uint8 reserved3[7];
  uint8 cpmA[5]; /* 41-45 0x29-0x2D */
  uint16 cpmAsize; /* 46-47 0x2E-0x2F Little endian */
  uint8 cpmA2[6]; /* 48-53 0x30-0x35 */
  uint16 cpmAstart; /* 54-55 0x36-0x37 Little endian */
  uint8 cpmB[5]; /* 56-60 0x38-0x3C */
  uint16 cpmBsize; /* 61-62 0x3D-0x3E Little endian */
  uint8 cpmB2[6]; /* 63-68 0x3F-0x44 */
  uint16 cpmBstart; /* 69-70 0x45-0x46 Little endian */
  uint8 cpmVol1online; /* 71 0x47 */
  uint8 cpmVol2online; /* 72 0x48 */
  uint8 reserved4[7];
  uint8 pascalUnit1; /* 80 0x50 */
  uint16 pascal1Start; /* 81-82 0x51-0x52 Little endian */
  uint16 pascal2Start; /* 83-84 0x53-0x54 Little endian */
  uint8 reserved5[15];
  char installDate[8]; /* 100-107 0x64-0x6B */
  char modifiedDate[8]; /* 108-115 0x6C-0x73 */
  char lastBackupDate[8]; /* 116-123 0x74-0x7B */
  uint8 reserved6[6];
  uint8 cpmC[5]; /* 130-134 0x82-0x86 */
  uint16 cpmCsize; /* 135-136 0x87-0x88 Little endian */
  uint8 cpmC2[6]; /* 137-142 0x89-0x8E */
  uint16 cpmCstart; /* 143-144 0x8F-0x90 Little endian */
  uint8 cpmD[5]; /* 145-149 0x91-0x95 */
  uint16 cpmDsize; /* 150-151 0x96-0x97 Little endian */
  uint8 cpmD2[6]; /* 152-157 0x98-0x9D */
  uint16 cpmDstart; /* 158-159 0x9E-0x9F Little endian */
  uint8 cpmVol3online; /* 160 0xA0 */
  uint7 cpmVol4online; /* 161 0xA1 */
  uint8 reserved7[1];
  uint16 prodos1Start; /* 163-164 0xA3-0xA4 Little endian */
  uint16 prodos1Size; /* 165-166 0xA5-0xA6 Little endian */
  uint8 prodosVol1Status; /* 167 0xA7 */
  uint16 prodos2Start; /* 168-169 0xA8-0xA9 Little endian */
  uint16 prodos2Size; /* 170-171 0xAA-0xAB Little endian */
  uint8 prodosVol2Status; /* 172 0xAC */
  uint8 pascalUnit2; /* 173 0xAD */
  uint16 pascal3Start; /* 174-175 0xAE-0xAF Little endian */
  uint16 pascal4Start; /* 176-177 0xB0-0xB1 Little endian */
  uint8 reserved8[77];
  uint8 altTracksAvail; /* 255 0xFF */
};
