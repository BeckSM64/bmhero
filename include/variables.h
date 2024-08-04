#ifndef _VARIABLES_H_
#define _VARIABLES_H_

#include <ultra64.h>

// externs

// ROM Externs
extern Gfx D_01000000_unk_bin_0_2[];
extern u32 D_01000200_unk_bin_0_2[];
extern Vtx D_01000210_unk_bin_0_2[];
extern Vtx D_01000250_unk_bin_0_2[];
extern Gfx D_010002D0_unk_bin_0_2[];
extern u32 D_010004D0_unk_bin_0_2[];
extern Vtx D_010004E0_unk_bin_0_2[];
extern Vp D_01000B68_unk_bin_0_2;
extern u8 unk_bin_0_2_ROM_START[];
extern u8 code_extra_0_ROM_START[];
extern u8 gspF3DEX_fifoTextStart_bin[];
extern u8 _4A060_data__s[];
extern u8 _4DD30_bin[];
extern u8 _64C3C0_ROM_START[];
extern u8 _64EC60_ROM_START[];
extern u8 code_extra_0_ROM_START[]; 
extern u8 unk_bin_0_2_ROM_START[]; 
extern u8 D_1000768[];
extern u8 D_1000B78[];
extern u8 D_1000C50[];
extern u8 D_1000C68[];

// RAM Externs
extern u32 D_8004A280;
extern s32 D_8004A294;
extern s32 D_8004A298;
extern s32 D_8004A29C;
extern s32* D_8004A370;
extern s32 D_8004A380;
extern s32 D_8004A384;
extern s32 D_8004A388;
extern s32 D_8004A38C;
extern s32 D_8004A390;
extern s32 D_8004A394;
extern struct UnkStruct8004A3A0 D_8004A3A0;
extern struct UnkStruct8004A3A0 D_8004A3AC;
extern struct UnkStruct8004A3A0 D_8004A3B8;
extern s32 *D_8004A3D0;
extern f32 D_8004A400[]; // .rodata
extern Lights2 D_8004A590;
extern Lights2 gLightingSettings;
extern struct UnkStruct_8004A5F0 D_8004A5F0;
extern s32 D_8004A5F4;
extern u8 D_8004A610;
extern s32 D_8004A630;
extern s32 D_8004A634;
extern s32 D_8004A638;
extern s32 D_8004A63C;
extern s8 D_8004A650[];                        //.data
extern OSViMode osViModeTable[];
extern s32 osViClock;
extern f64 D_8004BBF0; // 180.0
extern f64 D_8004BBF8; // 360.0
extern f64 D_8004BC00; // 180.0
extern f64 D_8004BC08; // 360.0
extern f32 D_8004BC10; // .rodata
extern f32 D_8004BDB0;
extern f64 D_8004BDB8;
extern f64 D_8004BDC0;
extern f32 D_8004BDC8;
extern f64 D_8004BDD0;
extern f64 D_8004BDD8;
extern f64 D_8004BDF8;
extern f64 D_8004BE00;
extern f64 D_8004BE08;
extern f64 D_8004BE10;
extern f64 D_8004BE18;
extern f64 D_8004BE20;
extern f64 D_8004BE28;
extern f64 D_8004BE30;
extern ALHeap D_80052D40;
extern f32 D_800557E0[4];
extern s32 D_80055820;
extern s32 D_80055828;
extern u32 D_80055D30[];
extern u32 D_80055D40[];
extern s32 D_80055D4C;
extern struct UnkStruct80055D50 *D_80055D50;
extern struct UnkStruct80055D54 *D_80055D54;
extern u8 text_buf[];
extern OSPfs D_80056D90;
extern s32 gRumblePakState;
extern s32 D_80056DFC;
extern s32 D_80056E00;
extern s32 D_80056E04;
extern s32 D_80056E08;
extern s32 D_80056E0C;
extern s32 D_80056E10;
extern s32 D_80056E14;
extern s32 D_80056E18;
extern s32 D_80056E1C;
extern s32 D_80056E20;
extern struct UnkStruct_8001EFD0 D_80056E28[];
extern struct UnkStruct_8001EFD0 D_80056E98[];
extern struct UnkStruct_8001EFD0 D_80056E9C[];
extern struct UnkStruct_8001EFD0 D_80056EA4[];
extern OSPfsState D_80057040[];
extern u8 D_8005704E[2][1];
extern u8 D_80057240[];
extern s8 gDebugBackMemTestItem;
extern s8 gDebugBackupMemTestMenu;
extern s8 D_80057448[];
extern s8 D_80057688;
extern s8 D_80057689;
extern s8 D_8005768A;
extern s32 D_8005768C;
extern s16 D_80057690;
extern s16 D_80057692;
extern s16 D_80057694;
extern s16 D_80057696;
extern s16 D_80057698;
extern s16 D_8005769A;
extern s16 D_8005769C;
extern s8 D_8005769E;
extern s16 D_800576A2;
extern struct UnkInputStruct_8001ABF4 D_80100560[4];
extern struct UnkInputStruct_8001ABF4 D_801005D0[4];
extern struct UnkInputStruct_8001ABF4 D_80100640[4];
extern struct UnkInputStruct_8001ABF4 D_801006B0[4];
extern struct UnkStruct80134794 D_80100720[];
extern struct UnkStruct80134794 D_80100A90[];
extern struct UnkStruct80134794 D_80100E00[];
extern struct UnkStruct80134794 D_80101170[];
extern struct UnkInputStruct_8001ABF4 D_80101758[25];
extern struct UnkInputStruct_8001ABF4 D_80101E8C[5];
extern struct UnkStruct80134794 D_80101A14[];
extern struct UnkStruct80134794 D_80101F18[];
extern struct UnkStruct_8010289C D_8010289C;
extern Gfx gDebugFont[];
extern s8 D_801039B0;
extern s8 D_801039B4;
extern s8 D_801039C4;
extern u8 D_80103948[];
extern s8 D_8010399C[0x12];
extern struct UnkStruct_800600B8 D_801039D4[];
extern void* D_80104A14[];
extern s16 D_80104B64[];
extern s16 D_80104C18[];
extern struct UnkStruct80104C20 D_80104C20[];
extern struct FileEntry gUnkROMTable801051E0[];
extern f32 D_801055B8;
extern u8 D_80106DA0[];
extern u8 D_80106DA1[];
extern struct UnkStruct80108238 *D_80108238[];
extern struct LevelInfo *gLevelInfo[4];
extern u32 D_8010BC30[];
extern s16 D_8010CD80[2];
extern s16 D_80110B78[];
extern s16* D_80110D4C[];
extern u32 D_801110F0[];
extern UNK_TYPE D_80111880[];
extern UNK_TYPE D_80111888;
extern UNK_TYPE D_80111A74[];
extern UnkStruct80165100 D_80113790;
extern UnkStruct80165100 D_801137D8;
extern UnkStruct80165100 D_801137E4;
extern struct ObjectStruct D_801137F0;
extern s32 D_801137FC;
extern s32 D_80113838;
extern struct UnkStruct_80027C00 D_80113694;
extern struct UnkStruct_80027C00 D_801136D0;
extern struct UnkStruct_80027C00 D_801136DC;
extern s32 D_80113A0C;
extern UNK_TYPE D_80113A18;
extern UNK_TYPE D_80113A24;
extern UNK_TYPE D_80113A30;
extern UNK_TYPE D_80113A3C;
extern UNK_TYPE D_80113A48;
extern UNK_TYPE D_80113A6C;
extern UNK_TYPE D_80113ACC;
extern UNK_TYPE D_80113AE4;
extern UNK_TYPE D_80113AF0;
extern s32 D_80113B08;
extern UNK_TYPE D_80113B68;
extern UNK_TYPE D_80113BB0;
extern UNK_TYPE D_80113C1C;
extern UNK_TYPE D_80113E50;
extern struct UnkStruct_80027C00 D_80113EC8;
extern struct UnkStruct_80027C00 D_80113EC8;
extern UNK_TYPE D_80113D9C;
extern UNK_TYPE D_80113DA8;
extern UNK_TYPE D_80113DB4;
extern struct UnkStruct_80027C00 D_80113EBC;
extern struct UnkStruct_80027C00 D_80113EBC;
extern UNK_TYPE D_80113DC0;
extern struct UnkStruct_80027C00 D_80114270;
extern struct UnkStruct_80027C00 D_8011427C;
extern struct UnkStruct_80027C00 D_80114270;
extern struct UnkStruct_80027C00 D_8011427C;
extern s32 D_80114288[];
extern struct UnkStruct_80027C00 D_80114294;
extern struct UnkStruct_80027C00 D_801142A0;
extern struct UnkStruct_80027C00 D_801142C4;
extern struct UnkStruct_80027C00 D_801142D0;
extern struct UnkStruct_80027C00 D_801142DC;
extern struct UnkStruct_80027C00 D_80114294;
extern struct UnkStruct_80027C00 D_801142A0;
extern struct UnkStruct_80027C00 D_801142C4;
extern struct UnkStruct_80027C00 D_801142D0;
extern struct UnkStruct_80027C00 D_801142DC;
extern UnkStruct80165100 D_801142E8;
extern UnkStruct80165100 D_801142F4;
extern UnkStruct80165100 D_80114300;
extern UnkStruct80165100 D_8011433C;
extern UnkStruct80165100 D_80114348;
extern void* D_80114354;
extern UnkStruct80165100 D_80114360;
extern UnkStruct80165100 D_8011436C;
extern struct ObjectStruct D_80114378;
extern struct ObjectStruct D_80114384;
extern UnkStruct80165100 D_80114390;
extern UnkStruct80165100 D_8011439C;
extern UnkStruct80165100 D_801143A8;
extern UnkStruct80165100 D_801143B4;
extern UnkStruct80165100 D_801143C0;
extern UnkStruct80165100 D_801143CC;
extern UnkStruct80165100 D_801143D8;
extern UnkStruct80165100 D_801143F0;
extern UnkStruct80165100 D_801143FC;
extern UnkStruct80165100 D_80114450;
extern UnkStruct80165100 D_8011445C;
extern UnkStruct80165100 D_80114468;
extern UnkStruct80165100 D_80114474;
extern struct ObjectStruct D_80114480;
extern struct ObjectStruct D_8011448C;
extern struct ObjectStruct D_80114498;
extern struct ObjectStruct D_801144A4;
extern UnkStruct80165100 D_801144B0;
extern s32 D_801144BC;
extern UnkStruct80165100 D_801144C8;
extern UnkStruct80165100 D_801144D4;
extern UnkStruct80165100 D_801144E0;
extern UnkStruct80165100 D_801144EC;
extern UnkStruct80165100 D_801144F8;
extern void* D_8011472C;
extern struct Vec3f D_80115180[];
extern struct Vec3f D_80115184[];
extern struct Vec3f D_80115188[];
extern f64 D_801153B8;
extern f64 D_801153C0;
extern f64 D_801153C8;
extern f64 D_801153F0;
extern f64 D_801153F8;
extern f64 D_80115400;
extern f64 D_80115428;
extern f64 D_80115430;
extern f64 D_80115438;
extern f64 D_80115460;
extern f64 D_80115468;
extern f32 D_8011550C;
extern f32 D_80115510;
extern f32 D_8011553C;
extern f32 D_80115540;
extern f32 D_80115544;
extern f32 D_80115548;
extern f32 D_8011554C;
extern f32 D_80115550;
extern f32 D_80115554;
extern f32 D_80115558;
extern f32 D_8011555C;
extern f32 D_80115560;
extern f64 D_801155C8;
extern f64 D_801155D0;
extern f64 D_801155D8;
extern f64 D_801155E0;
extern f64 D_801155E8;
extern f64 D_801155F0;
extern f64 D_80115610;
extern f64 D_80115618;
extern f64 D_80115620;
extern f64 D_80115628;
extern f64 D_80115630;
extern f64 D_80115638;
extern f32 D_801157BC;
extern s32 D_80115808[];
extern s32 D_80116674[];                       //.rodata
extern struct UnkStruct_8011670C D_8011670C[]; //.rodata
extern s32 D_801168CC[];                       //.rodata
extern s32 D_801168D0[];                       //.rodata

extern s32 D_80116EC4[]; 

extern s32 D_80117504;
extern s32 D_80117554;
extern s32 D_80117570[]; 

extern s32 D_8011758C;
extern s32 D_801175A8[]; 
extern s32 D_801175C4[]; 
extern s32 D_80117AA0;

extern UNK_TYPE D_80117B4C;
extern UNK_TYPE D_80117B68;
extern UNK_TYPE D_80117B84;
extern UNK_TYPE D_80117BA0;
extern UNK_TYPE D_80117BBC;
extern UNK_TYPE D_80117BC0;
extern UNK_TYPE D_80117C00;
extern UNK_TYPE D_80117C1C;
extern UNK_TYPE D_80117C38;
extern UNK_TYPE D_80117C78;
extern UNK_TYPE D_80117D8C;
extern UNK_TYPE D_80117E04;
extern UNK_TYPE D_80117D8C;
extern UNK_TYPE D_80117DE8;
extern UNK_TYPE D_80117E20;
extern UNK_TYPE D_80117E48;
extern UNK_TYPE D_80117E64;
extern UNK_TYPE D_80117EA8;
extern UNK_TYPE D_80117EC4;
extern UNK_TYPE D_80117EE0;
extern UNK_TYPE D_80117EE8;
extern UNK_TYPE D_80117EF0;
extern void* D_80117F08;
extern UNK_TYPE* D_80118978[];
extern UNK_TYPE* D_80118978[];
extern s32 D_80118B38;
extern s32 D_80118BDC;
extern s32 D_80118BE0;
extern s32 D_80118C10;
extern s32 D_80118BE0;
extern s32 D_80118C10;
extern s32 D_80118C8C[];
extern struct ObjectStruct D_80118E9C;
extern struct ObjectStruct D_80118EB4;
extern struct ObjectStruct D_80118FE8;
extern struct ObjectStruct D_80118FF4;
extern struct ObjectStruct D_801190CC;
extern struct ObjectStruct D_80119128;
extern struct ObjectStruct D_80119194;
extern struct ObjectStruct D_801191F0;
extern struct ObjectStruct D_80119268;
extern struct ObjectStruct D_801192E0;
extern struct ObjectStruct D_8011935C;
extern struct ObjectStruct D_80119384;
extern struct ObjectStruct D_801193AC;
extern struct ObjectStruct D_8011940C;
extern struct ObjectStruct D_80119428;
extern struct ObjectStruct D_80119494;
extern struct ObjectStruct D_80119504;
extern struct ObjectStruct D_8011955C;
extern struct ObjectStruct D_801195D0;
extern struct ObjectStruct D_80119578;
extern struct ObjectStruct D_80119654;
extern struct ObjectStruct D_801196AC;
extern struct ObjectStruct D_80119750;
extern struct ObjectStruct D_80119788;
extern struct ObjectStruct D_80119828;
extern struct ObjectStruct D_801198D0;
extern struct ObjectStruct D_801198EC;
extern struct ObjectStruct D_80119908;
extern struct ObjectStruct D_8011990C;
extern struct ObjectStruct D_8011993C;
extern struct ObjectStruct D_80119974;
extern struct ObjectStruct D_80119978;
extern struct ObjectStruct D_8011997C;
extern struct ObjectStruct D_80119980;
extern struct ObjectStruct D_801199AC;
extern struct ObjectStruct D_801199E4;
extern struct ObjectStruct D_80119A40;
extern struct ObjectStruct D_80119A60;
extern struct ObjectStruct D_8011BA88;
extern struct ObjectStruct D_8011BA8C;
extern struct ObjectStruct D_8011BB50;
extern s32 D_8011BA94;
extern struct UnkStruct80122B08 D_80122B08[];
extern struct UnkStruct_80026548 D_80124D90[];
extern s32 gDebugCurrentMenuItem;
extern s32 D_80134218;
extern s32 gDebugSelectedMusicIndex;
extern s32 gDebugSelectedSoundIndex;
extern s32 gDebugSelectedDemoIndex;
extern s32 gDebugSaveIndex;
extern s8 D_80134334;
extern s8 D_80134340;
extern s8 D_8013435C;
extern s8 D_80134378;
extern s8 D_8013438C;
extern s8 D_801343A4;
extern s8 D_801343BC;
extern s8 D_801343CC;
extern s8 D_801343DC;
extern s8 D_801343F0;
extern s16 D_80134730;
extern s16 D_80134734;
extern s16 D_80134738[];
extern u16* D_80134784[2];
extern s8 D_80134790;
extern s8 D_80134791;
extern struct UnkStruct80134794* D_80134794;
extern s8 gDemoSceneID;
extern s8 gDemoID;
extern struct UnkStruct80134794* D_8013479C;
extern struct UnkStruct_801347A0 D_801347A0;
extern f32 *D_801347A4;
extern f32 D_801347A8;
extern s32 D_801347AC;
extern s32 D_801347B0;
extern f32 D_801347B4;
extern f32 D_801347B8;
extern f32 D_801347BC;
extern f32 D_801347C0;
extern f32 D_801347C4;
extern f32 D_801347C8;
extern f32 D_801347CC;
extern f32 D_801347D0;
extern f32 D_801347D4;
extern f32 D_801347D8;
extern f32 D_801347DC;
extern f32 D_801347E0;
extern s8 D_801347E4;
extern s8 D_801347E5;
extern s8 D_801347E6;
extern struct StringInfo D_801347E8;
extern s8 D_80134801;
extern s8 D_80134802;
extern s8 D_80134803;
extern u8 D_80134808[];
extern s8 D_8013488C;
extern s16 D_801348B0;
extern s8 D_801348B2;
extern struct UnkStruct_56400 D_801348B8[];
extern f32 D_80134F40;
extern s32 D_80134FD0;
extern struct ObjectStruct gObjects[207];
extern struct UnkBigStruct_8006B64C D_801541F8[];
extern UnkStruct80165100 *D_80165100;
extern s16 D_80165108;
extern s16 D_8016510A;
extern s16 D_8016510C;
extern s16 D_8016510E;
extern s16 D_80165110;
extern s16 D_80165112;
extern s16 D_80165114;
extern s16 D_80165116;
extern u8 D_80165118[0x80];
extern s32 D_80165198;
extern s32 D_8016519C;
extern s16 D_801651A0;
extern u8 D_801651A8;
extern s32 D_801651AC;
extern s32 D_801651B0;
extern s32 D_801651B4;
extern s32 D_801651B8;
extern s32 D_801651BC;
extern f32 D_801651C0;
extern f32 D_801651C4;
extern f32 D_801651C8;
extern f32 D_801651CC;
extern f32 D_801651D0;
extern f32 D_801651D4;
extern f32 D_801651D8[];
extern u8 D_80165238;
extern s8 D_80165239;
extern s8 D_8016523A;
extern s8 D_8016523B;
extern s8 D_8016523C;
extern u8 D_8016523D;
extern s8 D_8016523E;
extern s8 gBombCount;
extern s8 gFireCount;
extern u8 gGemCount;
extern s8 D_80165242;
extern u8 gLifeCount;
extern s8 gHealthCount;
extern s8 gMaxHealth;
extern u32 D_8016524C;
extern s32 D_80165254;
extern s32 D_8016525C;
extern s32 D_80165264;
extern void (*D_8016526C)();
extern s16 D_80165270;
extern void (*D_80165274)();
extern s32 D_8016527C;
extern s16 D_8016E21C;
extern s32 D_8016E238;
extern s32 D_8016E240;
extern s16 D_80165280;
extern s32 D_80165284;
extern s16 D_8016E2A8;
extern s16 D_8016E2B8;
extern struct UnkStruct80165290 D_80165290[256];
extern struct DecompressedFileEntry gFileArray[700];
extern s8  D_8016E080;
extern s32 D_8016E084;
extern s32 D_8016E08C;
extern s16 D_8016E092;
extern s32 D_8016E098;
extern s32 D_8016E0A0;
extern s32 D_8016E0A8;
extern s32 D_8016E0B0;
extern OSMesgQueue D_8016E0B8;
extern s8 D_8016E0D0;
extern OSMesg D_8016E0D8;
extern Gfx *gMasterDisplayList;
extern struct UnkStruct8016E104 *D_8016E104;
extern struct UnkStruct8016E10C* D_8016E10C;
extern s8 D_8016E110;
extern s16 D_8016E112;
extern s8 D_8016E115;
extern s8 D_8016E134;
extern struct View gView;
extern u8 gDebugTextBuf[0xC8];
extern struct UnkStruct8016E230 D_8016E220[1];
extern struct UnkStruct8016E230 D_8016E230[1];
extern s32 D_8016E23C;
extern s32 D_8016E244;
extern s8 D_8016E250;
extern u32 D_8016E254;
extern s32 D_8016E25C;
extern u32 D_8016E264;
extern s32 D_8016E26C;
extern s32 D_8016E274;
extern u8 gControllerBits;
extern u16 gContPlugged[4];
extern u16 gContCurrButton[4];
extern u16 gContLastButton[4];
extern u16 gContButtonPressed[4];
extern s8 gContStickX[4];
extern s8 gContStickY[4];
extern u16 gContCurrDir[4];
extern u16 gContLastDir[4];
extern u16 gContDirPressed[4];
extern u16 gContRawPlugged[4];
extern u16 gContRawCurrButton[4];
extern u16 gContRawLastButton[4];
extern u16 gContRawButtonPressed[4];
extern s8 gContRawStickX[4];
extern s8 gContRawStickY[4];
extern u16 gContRawCurrDir[4];
extern u16 gContRawLastDir[4];
extern u16 gContRawDirPressed[4];
extern u16 gActiveContPort;
extern u16 gActiveContButton;
extern u16 gActiveContPressed;
extern f32 gActiveContStickX;
extern f32 gActiveContStickY;
extern u16 gActiveContCurrDir;
extern u16 gActiveContDirPressed;
extern s32 D_8016E3A4;
extern u32 *D_8016E3AC;
extern f32 D_8016E3B4;
extern f32 D_8016E3BC;
extern f32 D_8016E3C4;
extern s8 D_8016E3CC;
extern s8 D_8016E3CD;
extern s8 D_8016E3D4;
extern s8 D_8016E3DC;
extern s8 D_8016E3EC;
extern s8 D_8016E3EE;
extern s16 D_8016E3F4;
extern s8 gDebugShowTimerBar;
extern s8 gDebugDisplayMode;
extern s8 gDebugInvincibileFlag;
extern s8 gDebugAtrributeFlag;
extern s8 gGoldBomber;
extern s8 D_8016E414;
extern s16 D_8016E41C;
extern s8 gShowDebugMenu;
extern s32 gCurrentLevel;
extern s16 D_8016E432;
extern s16 D_8016E434;
extern f32 D_8016E438;
extern f32 D_8016E43C;
extern f32 D_8016E440;
extern f32 D_8016E444;
extern u8 D_8016E450[];
extern struct UnkStruct80176458 D_80176458[4];
extern s16 D_801765C0[];
extern s32 gCameraType;
extern s32 D_801765F4;
extern s8 D_80176602;
extern s8 D_80176606;
extern s8 D_8017660A;
extern struct ObjectStruct *gPlayerObject;
extern s32 D_801775F0;
extern struct ObjectStruct *gPlayerArmWindObject;
extern f32 D_80177550[44];
extern u8 D_801775BC;
extern u8 D_801775C4;
extern u8 D_801775CC;
extern u8 D_801775D4;
extern u8 D_801775DC;
extern s8 D_801775EE;
extern u8 D_801775E4;
extern u8 D_801775EC;
extern s16 D_801775F6;
extern s16 D_801775FA;
extern s16 D_80177600;
extern s16 gScore;
extern s8 D_80177620;
extern s8 D_80177628;
extern s8 D_80177630;
extern s8 D_80177638;
extern s8 D_80177640;
extern OSContStatus D_80177650[];
extern OSContPad gContPads[4];
extern OSMesgQueue gContMesgQueue;
extern OSMesg D_801776CC;
extern u8 *gDecompressHeap;
extern s32 D_801776F0[];
extern s8 D_801776F8;
extern u8 D_801776E0;
extern s8 D_80177708;
extern s32 D_80177700[];
extern s32 D_80177710[];
extern s32 D_80177718;
extern s32 D_80177720[];
extern s32 D_80177728;
extern s32 D_80177730[];
extern s32 D_80177738;
extern s32 D_80177740[];
extern u16 D_80177748[];
extern UNK_TYPE D_80177750[]; //2 items?
extern u16 D_80177758[];
extern f32 D_80177760[];
extern u16 D_80177768[];
extern struct UnkStruct80177778* D_80177778;
extern s16 D_80177788;
extern s16 D_80177798;
extern s16 D_801777A8;
extern s16 D_801777B8;
extern s16 D_801777C8;
extern s16 D_801777D8;
extern s16 D_801777E8;
extern s16 D_801778F0;
extern s32 D_801778F4;
extern s16 D_801778F8;
extern s32 D_801778FC;
extern s16 D_80177900;
extern s32 D_80177904;
extern s16 D_80177908;
extern s16 D_8017790C;
extern s16 D_80177910;
extern s16 D_80177914;
extern s16 D_80177918;
extern u8 D_8017791C[];
extern u8 D_80177921;
extern u8 D_80177928;
extern u8 D_8017792C;
extern s8 D_8017792D;
extern u8 D_8017792E;
extern u8 D_80177930;
extern u8 D_80177932;
extern u8 D_80177933;
extern u8 D_80177934;
extern u16 D_80177936;
extern u8 D_80177938;
extern u8 D_80177939;
extern u8 D_8017793A;
extern u16 D_8017793C;
extern u8 D_8017793E;
extern s8 D_8017793F;
extern u8 D_80177940;
extern u16 D_80177942;
extern s16 D_80177944;
extern u16 D_80177946;
extern s16 D_80177948;
extern u16 D_8017794A;
extern struct UnkStruct8017794C* D_8017794C;
extern u16 D_80177950;
extern s32 D_80177954;
extern u16 D_80177958;
extern s32 D_8017795C;
extern struct UnkStruct80177964* D_80177964;
extern UnkStruct80165100 *D_8017796C;
extern u8 D_80177974;
extern u32 D_8017797C;
extern u32 D_80177984;
extern s16 D_8017798C;
extern s16 D_80177994;
extern s16 D_8017799C;
extern s16 D_801779A4;
extern s16 D_801779AC;
extern s16 D_801779B0[];
extern s16 D_801779B8;
extern s16 D_801779C0[];
extern u8 D_801779E0;
extern f32 D_801779C8;
extern f32 D_80177A14;
extern s16 D_80177A1A;
extern s16 D_80177A1E;
extern f32 D_80177A24;
extern s32 gCurrentParsedObject;
extern s32 D_80177A64;
extern s32 D_80177A70;
extern u32 D_801C0E50;
extern u32 D_801C1A50;
extern u8 D_801D04B0[];
extern s32 D_80321428;
extern s32* D_80324994;
extern struct UnkStruct80340000 D_80340000[2];
extern s32 D_80380000;
extern s32 D_801651A4;
extern s8 D_80165246;
extern s8 D_80165247;
extern s8 D_80165248;
extern s8 D_80165250;
extern s8 D_80165258;
extern s8 D_80165260;
extern s8 D_80165268;
extern s16 D_80165278;
extern f32 D_80165288;
extern f32 D_8016C290;
extern f32 D_8016CA98;
extern s8 D_8016E088;
extern s8 D_8016E090;
extern s8 D_8016E094;
extern s16 D_8016E09C;
extern s16 D_8016E0AC;
extern s16 D_8016E0B4;
extern s8 D_8016E0F8;
extern s16 D_8016E100;
extern s16 D_8016E108;
extern s32 D_8016E118;
extern s32 D_8016E120;
extern s32 D_8016E128;
extern f32 D_8016E130;
extern f32 D_8016E138;
extern f32 D_8016E1B4;
extern s8 D_8016E228;
extern s8 D_8016E248;
extern s8 D_8016E2D8;
extern s16 D_8016E2E8;
extern s16 D_8016E2F8;
extern s16 D_8016E318;
extern s32 D_8016E348;
extern u8* _9B5440_ROM_START;
extern u8* _9BD180_ROM_START;
extern s16 D_8016E0A4;
extern u8 D_801776E4;
extern UNK_TYPE D_80177770;

#endif // VARIABLES_H
