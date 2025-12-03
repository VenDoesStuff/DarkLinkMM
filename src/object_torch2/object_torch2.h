#ifndef OBJECT_TORCH2_H
#define OBJECT_TORCH2_H

#include "global.h"
#include "tex_len.h"
#include "ultra64.h"

extern Vtx object_torch2_Vtx_000000[];
extern Vtx object_torch2_Vtx_000150[];
extern Vtx object_torch2_Vtx_000300[];
extern Vtx object_torch2_Vtx_000520[];
extern Vtx object_torch2_Vtx_000670[];
extern Vtx object_torch2_Vtx_000820[];
extern Vtx object_torch2_Vtx_000A40[];
extern Vtx object_torch2_Vtx_000B80[];
extern Vtx object_torch2_Vtx_000CD0[];
extern Vtx object_torch2_Vtx_001320[];
extern Vtx object_torch2_Vtx_001C00[];
extern Vtx object_torch2_Vtx_001DF0[];
extern Vtx sDarkLinkSheathVtx[];
extern Vtx object_torch2_Vtx_002160[];
extern Vtx object_torch2_Vtx_002650[];
extern Vtx object_torch2_Vtx_002850[];
extern Vtx object_torch2_Vtx_002A00[];
extern Vtx object_torch2_Vtx_002B50[];
extern Gfx object_torch2_002BD0_DL[32];
extern Gfx object_torch2_002CD0_DL[40];
extern Gfx object_torch2_002E10_DL[37];
extern Gfx object_torch2_002F38_DL[31];
extern Gfx object_torch2_003030_DL[41];
extern Gfx object_torch2_003178_DL[37];
extern Gfx object_torch2_0032A0_DL[31];
extern Gfx object_torch2_003398_DL[31];
extern Gfx object_torch2_003490_DL[87];
extern Gfx sDarkLinkSheathDL[27];
extern Gfx object_torch2_003820_DL[22];
extern Gfx object_torch2_0038D0_DL[35];
extern Gfx object_torch2_0039E8_DL[36];
extern Gfx object_torch2_003B08_DL[33];
extern Gfx object_torch2_003C10_DL[44];
extern Gfx object_torch2_003D70_DL[36];
extern Gfx object_torch2_003E90_DL[33];
extern Gfx object_torch2_003F98_DL[69];
#define object_torch2_0041C0_Tex_WIDTH 16
#define object_torch2_0041C0_Tex_HEIGHT 16
extern u64 object_torch2_0041C0_Tex[TEX_LEN(u64, object_torch2_0041C0_Tex_WIDTH, object_torch2_0041C0_Tex_HEIGHT, 16)];
#define object_torch2_0043C0_Tex_WIDTH 16
#define object_torch2_0043C0_Tex_HEIGHT 16
extern u64 object_torch2_0043C0_Tex[TEX_LEN(u64, object_torch2_0043C0_Tex_WIDTH, object_torch2_0043C0_Tex_HEIGHT, 16)];
extern LodLimb object_torch2_0045C0_Limb;
extern LodLimb object_torch2_0045D0_Limb;
extern LodLimb object_torch2_0045E0_Limb;
extern LodLimb object_torch2_0045F0_Limb;
extern LodLimb object_torch2_004600_Limb;
extern LodLimb object_torch2_004610_Limb;
extern LodLimb object_torch2_004620_Limb;
extern LodLimb object_torch2_004630_Limb;
extern LodLimb object_torch2_004640_Limb;
extern LodLimb object_torch2_004650_Limb;
extern LodLimb object_torch2_004660_Limb;
extern LodLimb object_torch2_004670_Limb;
extern LodLimb object_torch2_004680_Limb;
extern LodLimb object_torch2_004690_Limb;
extern LodLimb object_torch2_0046A0_Limb;
extern LodLimb object_torch2_0046B0_Limb;
extern LodLimb object_torch2_0046C0_Limb;
extern LodLimb object_torch2_0046D0_Limb;
extern LodLimb object_torch2_0046E0_Limb;
extern LodLimb object_torch2_0046F0_Limb;
extern LodLimb object_torch2_004700_Limb;
extern void* gDarkLinkLimbs[];
typedef enum gDarkLinkSkelLimb {
    /*  0 */ LIMB_OBJECT_TORCH2_004764_NONE,
    /*  1 */ LIMB_OBJECT_TORCH2_0045C0,
    /*  2 */ LIMB_OBJECT_TORCH2_0045D0,
    /*  3 */ LIMB_OBJECT_TORCH2_0045E0,
    /*  4 */ LIMB_OBJECT_TORCH2_0045F0,
    /*  5 */ LIMB_OBJECT_TORCH2_004600,
    /*  6 */ LIMB_OBJECT_TORCH2_004610,
    /*  7 */ LIMB_OBJECT_TORCH2_004620,
    /*  8 */ LIMB_OBJECT_TORCH2_004630,
    /*  9 */ LIMB_OBJECT_TORCH2_004640,
    /* 10 */ LIMB_OBJECT_TORCH2_004650,
    /* 11 */ LIMB_OBJECT_TORCH2_004660,
    /* 12 */ LIMB_OBJECT_TORCH2_004670,
    /* 13 */ LIMB_OBJECT_TORCH2_004680,
    /* 14 */ LIMB_OBJECT_TORCH2_004690,
    /* 15 */ LIMB_OBJECT_TORCH2_0046A0,
    /* 16 */ LIMB_OBJECT_TORCH2_0046B0,
    /* 17 */ LIMB_OBJECT_TORCH2_0046C0,
    /* 18 */ LIMB_OBJECT_TORCH2_0046D0,
    /* 19 */ LIMB_OBJECT_TORCH2_0046E0,
    /* 20 */ LIMB_OBJECT_TORCH2_0046F0,
    /* 21 */ LIMB_OBJECT_TORCH2_004700,
    /* 22 */ LIMB_OBJECT_TORCH2_004764_MAX
} gDarkLinkSkelLimb;
extern FlexSkeletonHeader gDarkLinkSkel;

#endif
