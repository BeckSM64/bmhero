#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

#include "ultra64.h"

// 3490.c
s32 func_80002890(struct UnkStruct80001CF0* arg0, s32* arg1, s32* arg2, s32 arg3);

// 38D0.c
s32 func_80002E1C(s32 arg0, s32 arg1, s32 arg2, u8* arg3, s32 arg4);
void func_80003FE0(s32 devAddr, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_8000ABEC(u32 arg0, s32 arg1, s32 arg2, u8* arg3);

// 12AF0.c
s32 func_80013AE0(f32*, f32, f32, f32);
s32 func_80013B70(f32*, f32, f32, f32);
s32 func_80013F6C(f32*, f32);
s32 func_80014098(f32*, f32);
s32 func_800141C4(f32*, f32);

// 15A80.c
f32 func_80014F50(f32 arg0, f32 arg1);
f32 func_800155A8(f32 arg0, f32 arg1);
f32 func_80015634(f32 arg0, f32 arg1);
f32 func_800156C4(f32 arg0, f32 arg1);
f32 func_80015744(f32 arg0);
s32 func_800157EC(f32 arg0, f32 arg1, f32 arg2);
void func_800158B4(f32 arg0, f32 arg1, f32 arg2, f32 *arg3, f32 *arg4);
f32 func_80015C24(f32 arg0, f32 arg1, s64 arg2, s64 arg4, s64 arg6, s64 arg8);
f32 func_80015D2C(f32 arg0, f32 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5);
s32 func_8001608C(s64 arg0, s64 arg2, s64 arg4, s64 arg6, s64 arg8, s64 argA, s64 argC, s64 argE);
s32 func_800162F0(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
s32 func_800163AC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9);
s32 func_80016560(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7,
                  f32 arg8, f32 arg9);
void func_80016A80(s64 arg0, s64 arg2, s64 arg4, s64 arg5, f32 *argA, f32 *argB, f32 *argC,
                   f32 *argD);

// 17930.c
s32 func_80016DD4();
s32 func_80016E84();
void PlayTrack_WithVolLoop(s16 trackID, s8 vol, s8 loop);
void func_80017FD8(char* str);
void InitControllers();
void func_8001994C(void);
void func_8001E80C(void);
void func_8001D244(char arg0, char arg1, char arg2, char arg3);
void func_8001D4D0();
void func_8001D638(s32, s32, s32, s32);
void func_8001E954(s32*);
void func_8001E98C(s32, void*, void*);
void func_8001EB68(s32, void*, void*);
void func_8001ECB8(void);
void func_80019C84(void);
void func_80019D2C(void);
void func_8001A258(void);
void func_8001D284(void);
void func_8001D2C0(void);
s32 func_8001D1D4(void);
s32 func_8001ECA0();
s32 func_8001D1F4();
s32 func_8001D440();
s32 func_8001EE64();
void func_8001D9E4(void* arg0);
s32 func_8001EBE8();
s32 func_8001EC1C();
s32 func_8001EC50();
s32 func_8001EC84();

// 1FAB0.c
void func_8001F38C(struct UnkStruct_8001EFD0*, s32);
void func_8001F9DC();
void func_8001FAD4();
void func_800200D8(void);
void func_8002021C(void);
void func_80020360(void);
void func_80020420(void);
s32 func_80021158();
s32 Eeprom_Read(OSMesgQueue*, u8*, u8, u16);
s32 Eeprom_Write(OSMesgQueue*, u8*, u8, u16);

// 25810.c
void func_80025E28(void);

// 2BF00.c
s32 func_8002F738();

#define FIRST_CODE_FUNCTION Demo_RenderTextBG

// 4DFF0.c
void Demo_RenderTextBG(void);
void Demo_SetupTextPal(void);
void Demo_Start(s32);

//56800
extern void func_800670E8();
extern void func_80067748(f32 arg0, f32 arg1, f32 arg2);
extern void func_8006828C();
extern void func_80068CC4(f32, f32, f32);
extern void func_80069314();  

// 50BC0.c
void func_8005FAA0(u8* arg0, u8* arg1);

// 71AA0.c
s32 func_80083180(s32);
void func_80085424();

//76640.c
void func_80085B34(f32, f32);
void func_80087E14();

// EFF30.c
u32 func_800FE898();

// isprint.c (enhancement)
void osSyncPrintf(const char* fmt, ...);

// unsorted externs
s32 func_800642E0(void);
s32 func_80064358(s32 arg0);
s32 func_80025460(s32, s32);
s32 func_800256E0(s32, s32, s32);
void func_80067748(f32, f32, f32);
s32 func_80014E80(s32);
f32 func_80015538(f32, f32);
f32 func_80015634(f32, f32);
f32 func_800156C4(f32, f32);
s32 func_8001608C(s64 arg0, s64 arg2, s64 arg4, s64 arg6, s64 arg8, s64 argA, s64 argC, s64 argE);
void func_8001A928(s32 arg0);
s32 func_8001ABF4(s32, s32, s32, void *);
void func_8001AD6C(s32);
void func_8001B014(s32, s32); 
s32 func_8001B44C(s32 arg0, s32 arg1);
s32 func_8001B880(s32 arg0, s32 arg1);
void func_8001BB34(s32, s32);
void func_8001BD44(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8001BE6C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_8001C1A8(s32, s32);
s32 func_8001C248(s32, s32); 
void func_8001CD20(s32);
void func_8001CEF4(s32);
f32 func_8001B62C(s32, s32);
f32 func_8001B580(s32, s32);
void DecompressFile(u32 id, u32 rom_start, u32 rom_end);
s32 func_8005FE88(s8, s8);
void func_8006389C(s32, s16, s32, s32);
void func_8006357C();
void func_80069AD8(s32, s32);
void func_8001A928(s32);
void func_800650F0();
void func_80065C20();
void func_800669E0();
void func_80066AE8();
void func_800675DC();
void func_80067674();
void func_800250A0(s32);
void func_80081468(s32, f32, f32, f32);
void func_800843CC(f32, f32, f32);
void func_80086ECC(); 

void func_80017BEC(s32, s32, s32, s32); 
void func_80017CFC(s32, s32, s32, s32); 
s32 func_80027464(s32 arg0, struct UnkStruct_80027C00 *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
void func_800178D4(s32, s32, s32, s32, s32);
s32 func_80026E58(s32, s32);
void func_8006BAC4();
void func_8001A928(s32); 
void func_8007EBEC(f32, f32, f32, f32, s32);
void func_800158B4(f32, f32, f32, f32*, f32*);
void func_8001838C();
void func_80019510(s32, s32, s32);
s32 func_8001C300(s32, s32);
void func_8001C384(s32, s32);
void func_80019B7C();
void Score_UpdateTimer(s32*, s32*, s32*);
void func_80069E00(s32, s32);
s32 func_8001FB3C(s32, s32, s32);
void func_8008C61C();
void func_8008C638();
void func_8008C650();
void func_8008C66C();
void func_8008C684(s16*);
void func_8008C778(s16*);
void func_8008C9B4(s16*);
void func_8008CADC(s16*);
void func_8008CC04(s16*);
void func_8008CD2C(s16*);
void func_8008CE8C(s16*);
void func_8008D074(s16*);
void func_8008D114(s16*);
void func_8008D530(s16*);
void func_8008DC8C(s16*);
void func_8008E328(s16*);
void func_8008E3B0(s16*);
void func_8008E418(s16*);
void func_8008E81C(s16*);
void func_8008E8A4(s16*);
void func_8008E918(s16*);
void func_8008EAE4(s16*);
void func_8008EB10(s16*);
void func_8008EB40(s16*);
void func_8008EB6C(s16*);
void func_8008EB9C(s16*);
void func_8008EBEC(s16*);
void func_8008EC3C(s16*);
void func_8008ECD0(s16*);
void func_8008ED64(s16*);
void func_8008EF8C(s16*);
void func_8008F078(s16*);
void func_8008F3D4(s16*);
void func_8008F63C(s16*);
void func_8008F6AC(s16*);
f32 func_80015538(f32, f32); 
void Cutscene_RenderChar(s16 x, s16 y, s16 s, s16 t, s16 id);
void func_8008B030(void);
void Cutscene_RenderTextBG(void);
void Cutscene_SetupTextPal(void);
void func_8008A824(s16 arg0, s16 arg1, s16 arg2);
void func_800883A8();
void func_80088694(); 
void func_8008884C (s32);
void func_80088D84();
void func_8008ABC4 (s16 *);
void func_8008ABF4 (s16 *);
void func_8008AC08 (s16 *);
void func_8008AD58 (s16 *);
void func_8008AE64 (s16 *);
void func_8008B5D4 (s16*);
void func_8008B624 (s16*);
void func_8008B6E0 (s16*);
void func_8008BA3C(void);
void func_8008BB0C(void);
void func_8008BC04(s16*);
f32 func_80015538(f32 arg0, f32 arg1);
void func_800175F0(s32 arg0, s32 arg1, s16 arg2, s16 arg3, s32 arg4);
void func_80017664(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_80019448(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8001BB04(s32 arg0, s8 arg1);
void func_8001BBDC(s32 arg0, s32 arg1);
void func_8001C0EC(s32, s32, s32, s32, u32 *);
u8 func_80026260(s32 arg0);
void func_80026F10(s32 arg0, s32 arg1);
void func_800272E8(s32);
s32 func_800281A4(s32 arg0, s32 arg1);
s32 func_80028FA0(s32 arg0);
s32 func_80029018(s32 arg0, u32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
s32 func_800295C0(s32 arg0, f32 *arg1, f32 *arg2, f32 arg3, f32 arg4, f32 arg5);
void func_80029824(s32 arg0, s32 arg1);
void func_80029B60(s32 arg0);
void func_80029C40(s32);
void func_80029D04(s32);
void func_80029EF8(s32 arg0, f32 arg1, f32 arg2);
s32 func_8002A1FC(s32, f32);
s32 func_8002A2EC(s32, f32);
s32 func_8002A3A8(s32, f32);
f32 func_8002A46C(s32);
s32 func_8002A560(s32, f32);
void func_8002A8B4(s32, f32);
void func_8002B0E4(s32);
void func_8002B114(s32);
void func_8007EDF4(f32, f32, f32, f32);
s32 func_80029F58(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4);
void _stub0();
void _stub1();
void _stub2();
void func_800B55B0(void);
void func_800B5778(void);
void func_800B5814(void);
void func_800B5978(void);
void func_800B5D18(void);
void func_800B62C8(void);
void func_800B6A94(void);
void func_800B6C60(void);
void func_800B6D40(void);
void func_800B6F2C(void);
void func_800B6F6C(void);
void func_800B7148(void);
void func_800B7158(void);
void func_800B725C(void);
void func_800B7398(void);
void func_800B73FC(void);
void func_800B765C(void);
void func_800B768C(void);
s16 func_800B7720(struct ObjectStruct *arg0, s16 arg1, UNUSED s32 arg2);
void func_800B78A4(void);
void func_800B7A28(void);
void func_800B7BB4(void);
void func_800B7F90(void);
void func_800B81F0(void);
void func_800B831C(void);
void func_800B8414(void);
void func_800B846C(void);
void func_800B85C0(void);
void func_800B86FC(void);
void func_800B87C0(void);
s8 func_800B890C(void);
s8 func_800B8968(s8 arg0);
void func_800B8A78(void);
void func_800B8B98(void);
void func_800B8DCC(void);
s8 func_800B8EBC(s8 arg0);
s8 func_800B8F38(void);
void func_800B8FB4(void);
s16 func_800B9070(struct ObjectStruct *arg0, s16 arg1, s16 arg2);
void func_800B9234(void);
void func_800B954C(void);
void func_800B955C(void);
void func_800B969C(void);
void func_800B99A4(void);
void func_800B9D6C(void);
void func_800B9D9C(void);
void func_800B9EA0(void);
void func_800B9FFC(void);
void func_800BA09C(void);
void func_800BA1E4(void);
void func_800BA334(void);
void func_800BA468(void);
void func_800BA5A8(void);
void func_800BA648(void);
void func_800BA734(void);
void func_800BA7C0(void);
void func_800BA904(void);
void func_800BA934(void);
s16 func_800BA9C8(struct ObjectStruct *arg0, s16 arg1, UNUSED s32 arg2);
void func_800BAB44(void);
void func_800BAC94(void);
void func_800BAD34(void);
void func_800BAE94(void);
void func_800BB080(void);
void func_800BB270(void);
void func_800BB388(void);
void func_800BB480(void);
void func_800BB55C(void);
void func_800BB6BC(void);
void func_800BB748(void);
void func_800BB91C(void);
void func_800BBA0C(void);
s16 func_800BBAD4(struct ObjectStruct *arg0, s16 arg1, UNUSED s32 arg2);
void func_800BBCA4(void);
s8 func_800BBF30(s8 arg0);
void func_800BC124(void);
void func_800BC134(UNUSED s8 arg0);
void func_800BC148(void);
void func_800BC2C8(void);
void func_800BC684(void);
s8 func_800BC774(s8 arg0);
s8 func_800BC7F0(void);
s8 func_800BC86C(s8 arg0);
s16 func_800BC91C(s16 arg0, s8 arg1);
void func_800BCB04(void);
void func_800BCBC0(void);
void func_800BCBE0(void);
void func_800BCC10(void);
void func_800BCCAC(void);
void func_800BCD40(void);
void func_800BCD50(void);
void func_800BCD60(void);
s8 func_800BCF08(s8 arg0);
void func_800BD164(void);
void func_800BD174(UNUSED s8 arg0);
void func_800BD188(void);
void func_800BD2C8(void);
s8 func_800BD3B8(s8 arg0);
s8 func_800BD434(void);
s8 func_800BD4B0(void);
s16 func_800BD558(s16 arg0);
void func_800BD7CC(void);
void func_800BD86C(void);
void func_800BDB8C(void);
void func_800BDCF4(void);
void func_800BDEE0(void);
void func_800BE14C(void);
void func_800BE3B4(void);
void func_800BE5CC(void);
void func_800BE928(void);
void func_800BEB10(void);
void func_800BEDB0(void);
void func_800BEFF0(void);
void func_800BF240(void);
void func_800BF394(void);
s16 func_800BF3A4(struct ObjectStruct *arg0, s16 arg1, s16 arg2);
void func_800BF5D0(void);
void func_800BF71C();
void func_800BF72C(void);
void func_800BF75C(void);
void func_800BF8AC(void);
void func_800BFA14(void);
void func_800BFAD0(void);
void func_800BFAF0(void);
void func_800BFB20(void);
s16 func_800BFD94(struct ObjectStruct *arg0, s16 arg1, UNUSED s16 arg2);
s8 func_800BFF20(struct ObjectStruct *arg0, f32 arg1, f32 arg2);
s8 func_800BFFCC(struct ObjectStruct *arg0, s8 arg1, f32 arg2, f32 arg3);
s8 func_800C00F4(struct ObjectStruct *arg0, f32 arg1);
s32 func_800C0194(struct UnkStructSTCG *arg0, f32 arg1);
void stub();
void func_800C0CC0();
void func_800C0D78();
void func_800C0F18();
void func_800C11F4();
void func_800C1204();
void func_800C1214();
void func_800C04C4();
void func_800C0858();
void func_800C0898();
void func_800D9134();
void func_800D9298();
void func_800D9620();
void func_800D97A4();
void func_800D9A14();
void func_800D9BD4();
void func_800DA128();
void func_800DA3B0(); 
void func_800DA9C8();
void func_800DAA2C();
void func_800DAC3C();
void func_8001BBDC(s32, s32);
s32 func_8001B44C(s32, s32);
s32 func_8001ABF4(s32, s32, s32, void*);
s32 func_8001B4AC(s32, s32);
s32 func_8001B754(s32, s32);
s32 func_80028FA0(s32);
f32 func_80015744(f32);
s32 func_800157EC(f32, f32, f32);
s32 func_800295C0(s32, f32*, f32*, f32, f32, f32);
s32 func_8002A0D0(s32, f32, f32, f32);
s32 func_800281A4(s32, s32);
s32 func_80029F58(s32, f32, f32, f32, f32);
void func_8001B6BC(s32, s32, f32);
void func_80029824(s32, s32);
void func_80029B60(s32);
void func_80029D8C(s32);
void func_80029EF8(s32, f32, f32);
void func_80069D88(s32, s32);
void func_800EE354(s32, f32);
void func_800E3EE4();
void func_800F9DE0();
void func_800FA27C();
void func_800F91A4();
void func_800F9294();
void func_800F94A8();
void func_800F95F4();
void func_8028117C_code_extra_4();
void func_80281440();
void func_802814CC();
void func_802812AC();
void func_80281314(); 
void func_802823A4(); 
void func_802813E4(); 
void func_802824DC();
void func_80282698();
void func_80282F24();
void func_802831BC();
void func_80283344(); 
void func_802838DC();   
void func_80283A40(); 
void func_80283BD4();
void func_80284DF8();
void func_802860F8(); 
void func_80286374();
void func_80286508(); 
void func_8028AA70();    
void func_8028AF38();
void func_8028ADB0(); 
void func_800260E0(s32 arg0);
void func_800260FC(s32 arg0);
void func_8002613C(s32 arg0);
void func_8002617C(s32 arg0);
s32 func_800261BC(s32 arg0);
void func_800261E8(s32 arg0, char arg1);
u8 func_80026260(s32 arg0);
void func_8002629C(void);
void func_80026548(void);
s32 func_80026DBC(s32 arg0);
s32 func_80026E58(s32 arg0, s32 pos);
void func_800272E8(s32 arg0);
s32 func_80027B34(s32 arg0, struct UnkStruct_80027B34 *arg1);
s32 func_80027C00(s32 arg0, s32 arg1, struct UnkStruct_80027C00 *arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
s32 func_800281A4(s32 arg0, s32 arg1);
s32 func_80028260(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5);
s32 func_80028E60(s32 arg0);
s32 func_80028FA0(s32 arg0);
s32 func_800293B8(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 *arg6, f32 *arg7, f32 *arg8, s32 arg9);
s32 func_800294F0(s32 arg0, f32 *arg1, f32 *arg2, f32 arg3, f32 arg4, f32 arg5);
s32 func_800295C0(s32 arg0, f32 *arg1, f32 *arg2, f32 arg3, f32 arg4, f32 arg5);
s32 func_800296AC(s32 arg0, f32 arg1, s32 arg2, s32 arg3);
s32 func_800297DC(void);
void func_80029824(s32 arg0, s32 arg1);
void func_80029A9C(s32 arg0, s32 arg1);
void func_80029B60(s32 arg0);
void func_80029BD0(s32 arg0);
void func_80029C40(s32 arg0);
void func_80029D04(s32 arg0);
void func_80029D8C(s32 arg0);
void func_80029EF8(s32 arg0, f32 arg1, f32 arg2);
s32 func_80029F58(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4);
s32 func_8002A0D0(s32 arg0, f32 arg1, f32 arg2, f32 arg3);
s32 func_8002A1FC(s32 arg0, f32 arg1);
s32 func_8002A2EC(s32 arg0, f32 arg1);
s32 func_8002A3A8(s32 arg0, f32 arg1);
f32 func_8002A46C(s32 arg0);
f32 func_8002A4E0(s32 arg0);
s32 func_8002A560(s32 arg0, f32 arg1);
s32 func_8002A640(s32 arg0, f32 arg1);
s32 func_8002A720(s32 arg0, f32 arg1);
s32 func_8002A800(f32 arg0, f32 arg1, f32 arg2);
void func_8002A8B4(s32 arg0, f32 arg1);
void func_8002A9A4(s32 arg0, f32 arg1);
void func_8002AA94(s32 arg0);
s32 func_8002AB40(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4);
void func_8002AD90(void);
void func_8002AE38(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4);
void func_8002AE84(s32 arg0, s32 arg1);
void func_8002B0E4(s32 arg0);
void func_8002B114(s32 arg0);
void func_8002B144(void);
void func_8002B154(void);
void func_8002B2D4(void);
void func_8002B2E4(void);
void func_800FB804();
void func_800FBA24();
void func_800FBCB0(); 
void func_8002B0E4(s32);
void func_80081468(s32, f32, f32, f32);  
void func_80000964();
void func_800193CC(s32, s32, s32, s32); 
void func_80019C84();
void func_80019D2C();
void func_8001A258();
void func_8001D284();
void func_8001EC04(); 
void func_8001ECB8();
void func_800FE854();
void func_8005F96C(u8, u8, u8);
void func_8001E954(s32*);
void func_8001994C();
s32 func_8001D1D4();
void func_8001D2C0();
void func_8001D4D0();
void func_8001D638(s32, s32, s32, s32);
void func_8005E6A0(s32, s32);
void func_80065AEC(f32, f32, f32, s32*, s32*, s32*);
s32 func_800FD04C(s16, s16, s32);
void func_800FD440();
void func_800FD874();
void func_800FDD48();
void func_800FDA10();
s32 func_800FDF98();
void func_8005FA90();
void func_800FE9BC();
void func_800FEB6C();
void func_800FEE34();
void func_800FEFA0();
void func_800FF43C();
void func_800FF88C();
void func_800FFD30();
void func_800FFF40();
void func_8005F124(void);
void func_8005FA90(void);
void func_80063EE0(void);
void func_80064000(void);
void func_80064120(void);
s32 func_800641E4(s16* ptr, s16 arg1, s16 arg2);
s32 func_8001191C(s32, s32);
s32 func_80011DD0(s32);
u32* func_800122F0(s32);
s32 func_80013A00(u32*);
s32 func_8001A300(s32);
s32 func_8001A488(s32);
s32 func_8006DE90(u8*);
s32 func_80016D74(s32);

s32 func_80069700();   
s32 func_8006AB14();   
s32 func_8006E160();   
s32 func_80070644();   
s32 func_80070664(s32);  
s32 func_80070A6C();   
s32 func_800711B4();   
s32 func_80076458();   
s32 func_80076640();   
s32 func_8007957C();   
s32 func_8007F580();   

#endif // _FUNCTIONS_H_
