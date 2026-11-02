// rea decompile_all
// name: FUN_0013fab8
// address: 0x13fab8
// body: available
// range: 0x13fab8-0x13fe03 inclusive
// range: 0x13fea0-0x14028f inclusive
// range: 0x14031c-0x140a13 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0013fab8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_001c6b14(0xf4,_DAT_0013fe04);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0010e870(iVar1,s____Settings_menu_0013fe05 + 3,param_1,
                         *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0xe0),0x1e);
  }
  *(undefined4 *)(param_1 + 0xa4) = uVar2;
  FUN_001ae054(param_1,uVar2);
  iVar1 = FUN_001c6b14(0xf8,_DAT_0013fe04);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00139654(iVar1,s_Recording_Settings_0013fe18,param_1,*(undefined4 *)(param_1 + 0x60)
                         ,*(undefined4 *)(param_1 + 0xe0),0x24);
  }
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  FUN_001ae054(param_1,uVar2);
  iVar1 = FUN_001c6b14(0xe8,_DAT_0013fe04);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00135438(iVar1,s_Playback_Settings_0013fe2c,param_1,*(undefined4 *)(param_1 + 0x60),
                         *(undefined4 *)(param_1 + 0xe0),0x25);
  }
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  FUN_001ae054(param_1,uVar2);
  iVar1 = FUN_001c6b14(0xf4,_DAT_0013fe04);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0014a838(iVar1,s_Playback_MT_Mode_0013fe40,param_1,*(undefined4 *)(param_1 + 0x60),
                         *(undefined4 *)(param_1 + 0xe0),0x26);
  }
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  FUN_001ae054(param_1);
  iVar1 = FUN_001c6b14(0xec,_DAT_0013fe04);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00148484(iVar1,s_Playback_ST_Mode_0013fe54,param_1,*(undefined4 *)(param_1 + 0x60),
                         *(undefined4 *)(param_1 + 0xe0),0x27);
  }
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
  FUN_001ae054(param_1);
  iVar1 = FUN_001c6b14(0xe8,_DAT_0013fe04);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_000f1f5c(iVar1,s_Analog_Input_0013fe68,param_1,*(undefined4 *)(param_1 + 0x60),
                         *(undefined4 *)(param_1 + 0xe0),0x28);
  }
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  FUN_001ae054(param_1,uVar2);
  iVar1 = FUN_001c6b14(0xec,_DAT_0013fe04);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0010b7c8(iVar1,s_Madi_Settings_0013fe78,param_1,*(undefined4 *)(param_1 + 0x60),
                         *(undefined4 *)(param_1 + 0xe0),0x29);
  }
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  FUN_001ae054(param_1,uVar2);
  iVar1 = FUN_001c6b14(0x104,_DAT_0013fe04);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0013ce78(iVar1,s_Madi_Output_Settings_0013fe88,param_1,
                         *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0xe0),0x2a);
  }
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  FUN_001ae054(param_1,uVar2);
  iVar1 = FUN_001c6b14(0xe4,_DAT_0013fe04);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_001064e4(iVar1,s_Adat_Settings_00140290,param_1,*(undefined4 *)(param_1 + 0x60),
                         *(undefined4 *)(param_1 + 0xe0),0x2b);
  }
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  FUN_001ae054(param_1);
  iVar1 = FUN_001c6b14(0xe8,_DAT_0013fe04);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0013c6ac(iVar1,s_Adat_Output_Settings_001402a0,param_1,
                         *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0xe0),0x2c);
  }
  *(undefined4 *)(param_1 + 200) = uVar2;
  FUN_001ae054(param_1,uVar2);
  iVar1 = FUN_001c6b14(0x200,_DAT_0013fe04);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0011ec64(iVar1,s_Utilities_Menu_001402b8,param_1,*(undefined4 *)(param_1 + 0x60),
                         *(undefined4 *)(param_1 + 0xe0),0x2e);
  }
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  FUN_001ae054(param_1);
  iVar1 = FUN_001c6b14(0xe0,_DAT_0013fe04);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0011e2c4(iVar1,s_System_Details_Menu_001402c8,param_1,
                         *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0xe0),0x2f);
  }
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  FUN_001ae054(param_1,uVar2);
  iVar1 = FUN_001c6b14(0xe8,_DAT_0013fe04);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_000e2b18(iVar1,s_IP_Settings_Menu_001402dc,param_1,*(undefined4 *)(param_1 + 0x60),
                         *(undefined4 *)(param_1 + 0xe0),0x30);
  }
  *(undefined4 *)(param_1 + 0xd4) = uVar2;
  FUN_001ae054(param_1,uVar2);
  iVar1 = FUN_001c6b14(0xe8,_DAT_0013fe04);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0010f4f4(iVar1,s_Sync_Settings_001402f0,param_1,*(undefined4 *)(param_1 + 0x60),
                         *(undefined4 *)(param_1 + 0xe0),0x34);
  }
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  FUN_001ae054(param_1,uVar2);
  iVar1 = FUN_001c6b14(0x30,_DAT_0013fe04);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_001348d0(iVar1,s_Date_Time_Settings_00140300,param_1,*(undefined4 *)(param_1 + 0x60)
                         ,*(undefined4 *)(param_1 + 0xe0),0x35);
  }
  *(undefined4 *)(param_1 + 0xdc) = uVar2;
  FUN_001ae054(param_1,uVar2);
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8),0,
               DAT_00140318,4,DAT_00140314,*(undefined4 *)(param_1 + 0xa4),
               *(undefined4 *)(param_1 + 0xa8),uVar2);
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xac),0,
               DAT_00140318,4,DAT_00140314,*(undefined4 *)(param_1 + 0xa4));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xb8),0,
               DAT_00140318,4,DAT_00140314,*(undefined4 *)(param_1 + 0xa4));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xbc),0,
               DAT_00140318,4,DAT_00140314,*(undefined4 *)(param_1 + 0xa4));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xd8),0,
               DAT_00140318,4,DAT_00140314,*(undefined4 *)(param_1 + 0xa4));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xc0),
               DAT_00140a14,0,10,0x18,*(undefined4 *)(param_1 + 0xbc));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xc4),0,
               DAT_00140318,4,DAT_00140314,*(undefined4 *)(param_1 + 0xa4));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 200),
               DAT_00140a18,0,10,0x17,*(undefined4 *)(param_1 + 0xc4));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0),0,0,10,
               0x19,*(undefined4 *)(param_1 + 0xac));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb4),0,0,10,
               0x1c,*(undefined4 *)(param_1 + 0xac));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xcc),0,
               DAT_00140318,4,DAT_00140314,*(undefined4 *)(param_1 + 0xa4));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0),0,0,10,
               0x1d,*(undefined4 *)(param_1 + 0xcc));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd4),0,0,10,
               0x1b,*(undefined4 *)(param_1 + 0xcc));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xa4),0,0,4,
               DAT_00140a1c,*(undefined4 *)(param_1 + 0xa8));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xa4),0,0,4,
               DAT_00140a1c,*(undefined4 *)(param_1 + 0xac));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xa4),0,0,4,
               DAT_00140a1c,*(undefined4 *)(param_1 + 0xb8));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xbc),0,0,4,
               DAT_00140a1c,*(undefined4 *)(param_1 + 0xc0));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xc4),0,0,4,
               DAT_00140a1c,*(undefined4 *)(param_1 + 200));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xac),0,0,4,
               DAT_00140a1c,*(undefined4 *)(param_1 + 0xb0));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xac),0,0,4,
               DAT_00140a1c,*(undefined4 *)(param_1 + 0xb4));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xcc),0,0,4,
               DAT_00140a1c,*(undefined4 *)(param_1 + 0xd0));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xcc),0,0,4,
               DAT_00140a1c,*(undefined4 *)(param_1 + 0xd4));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xa4),0,0,4,
               DAT_00140a1c,*(undefined4 *)(param_1 + 0xbc));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xa4),0,0,4,
               DAT_00140a1c,*(undefined4 *)(param_1 + 0xcc));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xdc),0,
               DAT_00140a20,4,DAT_00140314,*(undefined4 *)(param_1 + 0xcc));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xcc),0,0,4,
               DAT_00140a1c,*(undefined4 *)(param_1 + 0xdc));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xcc),0,0,10,
               0x35,*(undefined4 *)(param_1 + 0xdc));
  FUN_000e1a0c(param_1 + 4,*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xa4),0,0,4,
               DAT_00140a1c,*(undefined4 *)(param_1 + 0xd8));
  return 1;
}

