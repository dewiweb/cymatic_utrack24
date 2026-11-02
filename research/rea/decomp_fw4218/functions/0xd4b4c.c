// rea decompile_all
// name: FUN_000d4b4c
// address: 0xd4b4c
// body: available
// range: 0xd4b4c-0xd4e67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_000d4b4c(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_11c [36];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [20];
  undefined4 local_7c;
  undefined1 auStack_58 [20];
  undefined4 local_44;
  
  FUN_000ce0b8(auStack_58);
  FUN_000ce0b8(auStack_90);
  uVar2 = FUN_0011a068();
  iVar3 = FUN_00118e04(uVar2,1,auStack_58);
  if (iVar3 != 0) {
    FUN_000027e8(_DAT_000d4e84,0x20,s_BSL_Firmware_revision__d_000d4e68,local_44);
    *(undefined1 *)(_DAT_000d4e84 + 0x1f) = 0;
  }
  uVar2 = FUN_0011a068();
  iVar3 = FUN_00118e04(uVar2,2,auStack_90);
  if (iVar3 != 0) {
    FUN_000027e8(_DAT_000d4ea4,0x20,s_6__Main_Firmware_revision__d_000d4e85 + 3,local_7c);
    *(undefined1 *)(_DAT_000d4ea4 + 0x1f) = 0;
  }
  FUN_00228534(auStack_c0,0,0x400);
  FUN_00226204(auStack_d0);
  FUN_00226204(auStack_e0);
  FUN_00226014(auStack_c0);
  uVar2 = FUN_002284f8(auStack_c0);
  FUN_00225e3c(auStack_c0,s_7__ArchwaveVER_000d4ea5 + 3,auStack_e0,uVar2);
  FUN_00226214(auStack_c0,s_7__ArchwaveVER_000d4ea5 + 3);
  FUN_00226014();
  uVar2 = FUN_00226214(auStack_c0,s_7__ArchwaveVER_000d4ea5 + 3);
  FUN_00225dc4(auStack_e0,1);
  uVar4 = FUN_002284f8(auStack_c0);
  FUN_00225e3c(uVar2,s_version_000d4eb4,auStack_e0,uVar4);
  uVar4 = FUN_002284f8(auStack_c0);
  FUN_00225e3c(uVar2,s_bootloader_000d4ebc,auStack_e0,uVar4);
  uVar4 = FUN_00226214(uVar2,s_bootloader_000d4ebc);
  FUN_00226014(uVar4);
  FUN_00226050(auStack_e0,_DAT_000d4e84);
  uVar5 = FUN_002284f8(auStack_c0);
  FUN_00225e3c(uVar4,s_version_000d4eb4,auStack_e0,uVar5);
  uVar4 = FUN_002284f8(auStack_c0);
  FUN_00225e3c(uVar2,s_application_000d4ec8,auStack_e0,uVar4);
  uVar2 = FUN_00226214(uVar2,s_application_000d4ec8);
  FUN_00226014(uVar2);
  FUN_00226050(auStack_e0,_DAT_000d4ea4);
  uVar4 = FUN_002284f8(auStack_c0);
  FUN_00225e3c(uVar2,s_version_000d4eb4,auStack_e0,uVar4);
  FUN_00228598(auStack_f8,0,0x100);
  FUN_002269a8(auStack_11c,auStack_f8,0,0x20);
  FUN_0022c884(auStack_c0,auStack_11c);
  iVar3 = FUN_00003738(_DAT_000d4ed4);
  iVar6 = FUN_0022cd68(auStack_f8);
  bVar1 = iVar6 + iVar3 + 0x15U < 0x201;
  if (bVar1) {
    uVar2 = FUN_0022cd68(auStack_f8);
    FUN_000028cc(DAT_000d4efc,_DAT_000d4ed4,uVar2);
    uVar2 = FUN_0022cd7c(auStack_f8);
    FUN_000039bc(DAT_000d4efc,uVar2);
    *param_2 = DAT_000d4efc;
    uVar2 = FUN_00003738();
    param_2[1] = uVar2;
    uVar2 = FUN_00003738(DAT_000d4efc);
    param_2[2] = uVar2;
    param_2[3] = 0;
    *(undefined1 *)(param_2 + 4) = 1;
    FUN_001b0b18(auStack_11c);
    FUN_001b0b6c(auStack_f8);
    FUN_00226210(auStack_e0);
    FUN_00226210(auStack_d0);
    FUN_001b0b48(auStack_c0);
  }
  else {
    FUN_00002898(s___JSON_too_large_for_versions_fi_000d4ed6 + 2);
    FUN_001b0b18(auStack_11c);
    FUN_001b0b6c(auStack_f8);
    FUN_00226210(auStack_e0);
    FUN_00226210(auStack_d0);
    FUN_001b0b48(auStack_c0);
  }
  return bVar1;
}

