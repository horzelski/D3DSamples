#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//
//   fxc /O3 /T ps_5_0 src/ResolveAndLinearizeDepthMSAA_PS.hlsl /E
//    ResolveAndLinearizeDepthMSAA_PS
//    /DMAIN_FUNCTION=ResolveAndLinearizeDepthMSAA_PS /Fh
//    bin/ResolveAndLinearizeDepthMSAA_PS.h
//
//
// Buffer Definitions: 
//
// cbuffer GlobalConstantBuffer
// {
//
//   float2 g_InvQuarterResolution;     // Offset:    0 Size:     8 [unused]
//   float2 g_InvFullResolution;        // Offset:    8 Size:     8 [unused]
//   float2 g_UVToViewA;                // Offset:   16 Size:     8 [unused]
//   float2 g_UVToViewB;                // Offset:   24 Size:     8 [unused]
//   float g_RadiusToScreen;            // Offset:   32 Size:     4 [unused]
//   float g_R2;                        // Offset:   36 Size:     4 [unused]
//   float g_NegInvR2;                  // Offset:   40 Size:     4 [unused]
//   float g_NDotVBias;                 // Offset:   44 Size:     4 [unused]
//   float g_LinearizeDepthA;           // Offset:   48 Size:     4
//   float g_LinearizeDepthB;           // Offset:   52 Size:     4
//   float g_InverseDepthRangeA;        // Offset:   56 Size:     4
//   float g_InverseDepthRangeB;        // Offset:   60 Size:     4
//   float g_AOMultiplier;              // Offset:   64 Size:     4 [unused]
//   float g_PowExponent;               // Offset:   68 Size:     4 [unused]
//   float g_BlurSharpness;             // Offset:   72 Size:     4 [unused]
//
// }
//
// cbuffer PerSampleConstantBuffer
// {
//
//   int g_SampleIndex;                 // Offset:    0 Size:     4
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim Slot Elements
// ------------------------------ ---------- ------- ----------- ---- --------
// DepthTextureMS                    texture   float        2dMS    0        1
// GlobalConstantBuffer              cbuffer      NA          NA    0        1
// PerSampleConstantBuffer           cbuffer      NA          NA    2        1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_Position              0   xyzw        0      POS  float   xy  
// TEXCOORD                 0   xy          1     NONE  float       
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_TARGET                0   x           0   TARGET  float   x   
//
ps_5_0
dcl_globalFlags refactoringAllowed
dcl_constantbuffer cb0[4], immediateIndexed
dcl_constantbuffer cb2[1], immediateIndexed
dcl_resource_texture2dms(0) (float,float,float,float) t0
dcl_input_ps_siv linear noperspective v0.xy, position
dcl_output o0.x
dcl_temps 1
ftoi r0.xy, v0.xyxx
mov r0.zw, l(0,0,0,0)
ldms_indexable(texture2dms)(float,float,float,float) r0.x, r0.xyzw, t0.xyzw, cb2[0].x
mad_sat r0.x, cb0[3].z, r0.x, cb0[3].w
mad r0.x, r0.x, cb0[3].x, cb0[3].y
div o0.x, l(1.000000, 1.000000, 1.000000, 1.000000), r0.x
ret 
// Approximately 7 instruction slots used
#endif

const BYTE g_ResolveAndLinearizeDepthMSAA_PS[] =
{
     68,  88,  66,  67,  68,  53, 
    113, 180,  73,  11, 164, 251, 
    179,  43,  15,  58,  56, 101, 
    208,  34,   1,   0,   0,   0, 
    236,   7,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    116,   5,   0,   0, 204,   5, 
      0,   0,   0,   6,   0,   0, 
     80,   7,   0,   0,  82,  68, 
     69,  70,  56,   5,   0,   0, 
      2,   0,   0,   0, 216,   0, 
      0,   0,   3,   0,   0,   0, 
     60,   0,   0,   0,   0,   5, 
    255, 255,   0, 129,   0,   0, 
      4,   5,   0,   0,  82,  68, 
     49,  49,  60,   0,   0,   0, 
     24,   0,   0,   0,  32,   0, 
      0,   0,  40,   0,   0,   0, 
     36,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
    156,   0,   0,   0,   2,   0, 
      0,   0,   5,   0,   0,   0, 
      6,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0, 171,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0, 192,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      2,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
     68, 101, 112, 116, 104,  84, 
    101, 120, 116, 117, 114, 101, 
     77,  83,   0,  71, 108, 111, 
     98,  97, 108,  67, 111, 110, 
    115, 116,  97, 110, 116,  66, 
    117, 102, 102, 101, 114,   0, 
     80, 101, 114,  83,  97, 109, 
    112, 108, 101,  67, 111, 110, 
    115, 116,  97, 110, 116,  66, 
    117, 102, 102, 101, 114,   0, 
    171,   0,   0,   0,  15,   0, 
      0,   0,   8,   1,   0,   0, 
     80,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    192,   0,   0,   0,   1,   0, 
      0,   0, 164,   4,   0,   0, 
     16,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     96,   3,   0,   0,   0,   0, 
      0,   0,   8,   0,   0,   0, 
      0,   0,   0,   0, 128,   3, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 164,   3, 
      0,   0,   8,   0,   0,   0, 
      8,   0,   0,   0,   0,   0, 
      0,   0, 128,   3,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 184,   3,   0,   0, 
     16,   0,   0,   0,   8,   0, 
      0,   0,   0,   0,   0,   0, 
    128,   3,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    196,   3,   0,   0,  24,   0, 
      0,   0,   8,   0,   0,   0, 
      0,   0,   0,   0, 128,   3, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 208,   3, 
      0,   0,  32,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0, 232,   3,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0,  12,   4,   0,   0, 
     36,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    232,   3,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
     17,   4,   0,   0,  40,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0, 232,   3, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0,  28,   4, 
      0,   0,  44,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0, 232,   3,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0,  40,   4,   0,   0, 
     48,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
    232,   3,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
     58,   4,   0,   0,  52,   0, 
      0,   0,   4,   0,   0,   0, 
      2,   0,   0,   0, 232,   3, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0,  76,   4, 
      0,   0,  56,   0,   0,   0, 
      4,   0,   0,   0,   2,   0, 
      0,   0, 232,   3,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0,  97,   4,   0,   0, 
     60,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
    232,   3,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    118,   4,   0,   0,  64,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0, 232,   3, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 133,   4, 
      0,   0,  68,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0, 232,   3,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 147,   4,   0,   0, 
     72,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    232,   3,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    103,  95,  73, 110, 118,  81, 
    117,  97, 114, 116, 101, 114, 
     82, 101, 115, 111, 108, 117, 
    116, 105, 111, 110,   0, 102, 
    108, 111,  97, 116,  50,   0, 
    171, 171,   1,   0,   3,   0, 
      1,   0,   2,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 119,   3, 
      0,   0, 103,  95,  73, 110, 
    118,  70, 117, 108, 108,  82, 
    101, 115, 111, 108, 117, 116, 
    105, 111, 110,   0, 103,  95, 
     85,  86,  84, 111,  86, 105, 
    101, 119,  65,   0, 103,  95, 
     85,  86,  84, 111,  86, 105, 
    101, 119,  66,   0, 103,  95, 
     82,  97, 100, 105, 117, 115, 
     84, 111,  83,  99, 114, 101, 
    101, 110,   0, 102, 108, 111, 
     97, 116,   0, 171,   0,   0, 
      3,   0,   1,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    225,   3,   0,   0, 103,  95, 
     82,  50,   0, 103,  95,  78, 
    101, 103,  73, 110, 118,  82, 
     50,   0, 103,  95,  78,  68, 
    111, 116,  86,  66, 105,  97, 
    115,   0, 103,  95,  76, 105, 
    110, 101,  97, 114, 105, 122, 
    101,  68, 101, 112, 116, 104, 
     65,   0, 103,  95,  76, 105, 
    110, 101,  97, 114, 105, 122, 
    101,  68, 101, 112, 116, 104, 
     66,   0, 103,  95,  73, 110, 
    118, 101, 114, 115, 101,  68, 
    101, 112, 116, 104,  82,  97, 
    110, 103, 101,  65,   0, 103, 
     95,  73, 110, 118, 101, 114, 
    115, 101,  68, 101, 112, 116, 
    104,  82,  97, 110, 103, 101, 
     66,   0, 103,  95,  65,  79, 
     77, 117, 108, 116, 105, 112, 
    108, 105, 101, 114,   0, 103, 
     95,  80, 111, 119,  69, 120, 
    112, 111, 110, 101, 110, 116, 
      0, 103,  95,  66, 108, 117, 
    114,  83, 104,  97, 114, 112, 
    110, 101, 115, 115,   0, 171, 
    204,   4,   0,   0,   0,   0, 
      0,   0,   4,   0,   0,   0, 
      2,   0,   0,   0, 224,   4, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 103,  95, 
     83,  97, 109, 112, 108, 101, 
     73, 110, 100, 101, 120,   0, 
    105, 110, 116,   0, 171, 171, 
      0,   0,   2,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 218,   4,   0,   0, 
     77, 105,  99, 114, 111, 115, 
    111, 102, 116,  32,  40,  82, 
     41,  32,  72,  76,  83,  76, 
     32,  83, 104,  97, 100, 101, 
    114,  32,  67, 111, 109, 112, 
    105, 108, 101, 114,  32,  57, 
     46,  50,  57,  46,  57,  53, 
     50,  46,  51,  49,  49,  49, 
      0, 171, 171, 171,  73,  83, 
     71,  78,  80,   0,   0,   0, 
      2,   0,   0,   0,   8,   0, 
      0,   0,  56,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   3, 
      0,   0,  68,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,   3,   0, 
      0,   0,  83,  86,  95,  80, 
    111, 115, 105, 116, 105, 111, 
    110,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0, 171, 
    171, 171,  79,  83,  71,  78, 
     44,   0,   0,   0,   1,   0, 
      0,   0,   8,   0,   0,   0, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,   1,  14,   0,   0, 
     83,  86,  95,  84,  65,  82, 
     71,  69,  84,   0, 171, 171, 
     83,  72,  69,  88,  72,   1, 
      0,   0,  80,   0,   0,   0, 
     82,   0,   0,   0, 106,   8, 
      0,   1,  89,   0,   0,   4, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   4,   0,   0,   0, 
     89,   0,   0,   4,  70, 142, 
     32,   0,   2,   0,   0,   0, 
      1,   0,   0,   0,  88,  32, 
      0,   4,   0, 112,  16,   0, 
      0,   0,   0,   0,  85,  85, 
      0,   0, 100,  32,   0,   4, 
     50,  16,  16,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
    101,   0,   0,   3,  18,  32, 
     16,   0,   0,   0,   0,   0, 
    104,   0,   0,   2,   1,   0, 
      0,   0,  27,   0,   0,   5, 
     50,   0,  16,   0,   0,   0, 
      0,   0,  70,  16,  16,   0, 
      0,   0,   0,   0,  54,   0, 
      0,   8, 194,   0,  16,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     46,   0,   0, 140,   2,   1, 
      0, 128,  67,  85,  21,   0, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      0,   0,   0,   0,  70, 126, 
     16,   0,   0,   0,   0,   0, 
     10, 128,  32,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
     50,  32,   0,  11,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     42, 128,  32,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  58, 128,  32,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,  50,   0,   0,  11, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  10, 128, 
     32,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,  26, 128, 
     32,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,  14,   0, 
      0,  10,  18,  32,  16,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,   0,   0, 128,  63, 
      0,   0, 128,  63,   0,   0, 
    128,  63,   0,   0, 128,  63, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  62,   0,   0,   1, 
     83,  84,  65,  84, 148,   0, 
      0,   0,   7,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   2,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0
};
