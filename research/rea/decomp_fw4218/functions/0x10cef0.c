// rea decompile_all
// name: FUN_0010cef0
// address: 0x10cef0
// body: available
// range: 0x10cef0-0x10d2d3 inclusive
// range: 0x10d544-0x10d86b inclusive
// range: 0x10dadc-0x10db1f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0010cef0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  byte local_d4 [4];
  uint local_d0;
  undefined1 auStack_cc [12];
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  byte local_78 [4];
  uint local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  byte local_50 [4];
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 auStack_30 [12];
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  FUN_000f4e84();
  uVar2 = FUN_000f5150();
  FUN_000f4e84();
  uVar3 = FUN_000f5144();
  local_34 = FUN_001b6f18(uVar2);
  iVar4 = FUN_001fff90(&local_38,s_sds___cne_AppSettings_SavedSetti_0010d2d4);
  if (iVar4 == 0) {
    FUN_00002898(DAT_0010d304);
  }
  if ((local_34 != local_38) &&
     (iVar4 = FUN_00200f9c(&local_34,s_sds___cne_AppSettings_SavedSetti_0010d2d4), iVar4 == 0)) {
    FUN_00002898(_DAT_0010d308);
  }
  local_3c = FUN_001b6f24(uVar2);
  iVar4 = FUN_001fff90(&local_40,s___sds___cne_AppSettings_SavedSet_0010d30a + 2);
  if (iVar4 == 0) {
    FUN_00002898(DAT_0010d304);
  }
  if ((local_3c != local_40) &&
     (iVar4 = FUN_00200f9c(&local_3c,s___sds___cne_AppSettings_SavedSet_0010d30a + 2), iVar4 == 0))
  {
    FUN_00002898(_DAT_0010d33c);
  }
  local_44 = FUN_001b6f74(uVar2);
  iVar4 = FUN_001fff90(&local_48,s___sds___cne_AppSettings_SavedSet_0010d33e + 2);
  if (iVar4 == 0) {
    FUN_00002898(DAT_0010d304);
  }
  if ((local_44 != local_48) &&
     (iVar4 = FUN_00200f9c(&local_44,s___sds___cne_AppSettings_SavedSet_0010d33e + 2), iVar4 == 0))
  {
    FUN_00002898(_DAT_0010d370);
  }
  local_4c = FUN_001b6f0c(uVar2);
  iVar4 = FUN_001ffb40(local_50,s___sds___cne_AppSettings_SavedSet_0010d372 + 2);
  if (iVar4 == 0) {
    FUN_00002898(DAT_0010d3a8);
  }
  if (((local_4c & 0xff) != (uint)local_50[0]) &&
     (iVar4 = FUN_002009d0(&local_4c,s___sds___cne_AppSettings_SavedSet_0010d372 + 2), iVar4 == 0))
  {
    FUN_00002898(_DAT_0010d3ac);
  }
  local_54 = FUN_001b6ec4(uVar3);
  iVar4 = FUN_001fff90(&local_58,s___sds___cne_AppSettings_SavedSet_0010d3ae + 2);
  if (iVar4 == 0) {
    FUN_00002898(DAT_0010d3e4);
  }
  if ((local_54 != local_58) &&
     (iVar4 = FUN_00200f9c(&local_54,s___sds___cne_AppSettings_SavedSet_0010d3ae + 2), iVar4 == 0))
  {
    FUN_00002898(_DAT_0010d3e8);
  }
  local_5c = FUN_001b6edc(uVar3);
  iVar4 = FUN_001fff90(&local_60,s___sds___cne_AppSettings_SavedSet_0010d3ea + 2);
  if (iVar4 == 0) {
    FUN_00002898(DAT_0010d424);
  }
  if ((local_5c != local_60) &&
     (iVar4 = FUN_00200f9c(&local_5c,s___sds___cne_AppSettings_SavedSet_0010d3ea + 2), iVar4 == 0))
  {
    FUN_00002898(_DAT_0010d428);
  }
  local_64 = FUN_001b6ed0(uVar3);
  iVar4 = FUN_001fff90(&local_68,s___sds___cne_AppSettings_SavedSet_0010d42a + 2);
  if (iVar4 == 0) {
    FUN_00002898(DAT_0010d424);
  }
  if ((local_64 != local_68) &&
     (iVar4 = FUN_00200f9c(&local_64,s___sds___cne_AppSettings_SavedSet_0010d42a + 2), iVar4 == 0))
  {
    FUN_00002898(_DAT_0010d460);
  }
  local_6c = FUN_001b6ee8(uVar3);
  iVar4 = FUN_001fff90(&local_70,s___sds___cne_AppSettings_SavedSet_0010d462 + 2);
  if (iVar4 == 0) {
    FUN_00002898(DAT_0010d49c);
  }
  if ((local_6c != local_70) &&
     (iVar4 = FUN_00200f9c(&local_6c,s___sds___cne_AppSettings_SavedSet_0010d462 + 2), iVar4 == 0))
  {
    FUN_00002898(_DAT_0010d4a0);
  }
  local_74 = FUN_001b6eac(uVar3);
  iVar4 = FUN_001ffb40(local_78,s___sds___cne_AppSettings_SavedSet_0010d4a2 + 2);
  if (iVar4 == 0) {
    FUN_00002898(DAT_0010d3a8);
  }
  if (((local_74 & 0xff) != (uint)local_78[0]) &&
     (iVar4 = FUN_002009d0(&local_74,s___sds___cne_AppSettings_SavedSet_0010d4a2 + 2), iVar4 == 0))
  {
    FUN_00002898(_DAT_0010d3ac);
  }
  local_7c = FUN_001b6eb8(uVar3);
  iVar4 = FUN_001fff90(&local_80,s_sds___cne_AppSettings_SavedSetti_0010d4d4);
  if (iVar4 == 0) {
    FUN_00002898(DAT_0010d504);
  }
  if ((local_7c != local_80) &&
     (iVar4 = FUN_00200f9c(&local_7c,s_sds___cne_AppSettings_SavedSetti_0010d4d4), iVar4 == 0)) {
    FUN_00002898(_DAT_0010d508);
  }
  local_84 = FUN_001b557c(uVar1);
  iVar4 = FUN_001fff90(&local_88,s___sds___cne_AppSettings_SavedSet_0010d50a + 2);
  if (iVar4 == 0) {
    FUN_00002898(DAT_0010d53c);
  }
  if ((local_84 != local_88) &&
     (iVar4 = FUN_00200f9c(&local_84,s___sds___cne_AppSettings_SavedSet_0010d50a + 2), iVar4 == 0))
  {
    FUN_00002898(DAT_0010d540);
  }
  local_8c = FUN_001b5b00(uVar1);
  iVar4 = FUN_001fff90(&local_90,s_sds___cne_AppSettings_SavedSetti_0010d86c);
  if (iVar4 == 0) {
    FUN_00002898(DAT_0010d8a8);
  }
  if ((local_8c != local_90) &&
     (iVar4 = FUN_00200f9c(&local_8c,s_sds___cne_AppSettings_SavedSetti_0010d86c), iVar4 == 0)) {
    FUN_00002898(_DAT_0010d8ac);
  }
  local_94 = FUN_001b5a60(uVar1);
  iVar4 = FUN_001fff90(&local_98,s___sds___cne_AppSettings_SavedSet_0010d8ae + 2);
  if (iVar4 == 0) {
    FUN_00002898(DAT_0010d8e4);
  }
  if ((local_94 != local_98) &&
     (iVar4 = FUN_00200f9c(&local_94,s___sds___cne_AppSettings_SavedSet_0010d8ae + 2), iVar4 == 0))
  {
    FUN_00002898(_DAT_0010d8e8);
  }
  local_9c = FUN_001b5aac(uVar1);
  iVar4 = FUN_001fff90(&local_a0,s___sds___cne_AppSettings_SavedSet_0010d8ea + 2);
  if (iVar4 == 0) {
    FUN_00002898(DAT_0010d928);
  }
  if ((local_9c != local_a0) &&
     (iVar4 = FUN_00200f9c(&local_9c,s___sds___cne_AppSettings_SavedSet_0010d8ea + 2), iVar4 == 0))
  {
    FUN_00002898(_DAT_0010d92c);
  }
  local_a4 = FUN_001b59d4(uVar1);
  iVar4 = FUN_001fff90(&local_a8,s___sds___cne_AppSettings_SavedSet_0010d92e + 2);
  if (iVar4 == 0) {
    FUN_00002898(DAT_0010d304);
  }
  if ((local_a4 != local_a8) &&
     (iVar4 = FUN_00200f9c(&local_a4,s___sds___cne_AppSettings_SavedSet_0010d92e + 2), iVar4 == 0))
  {
    FUN_00002898(_DAT_0010d968);
  }
  local_d0 = FUN_001b6f00(uVar3);
  iVar4 = FUN_001ffb40(local_d4,s___sds___cne_AppSettings_SavedSet_0010d96a + 2);
  if (iVar4 == 0) {
    FUN_00002898(DAT_0010d9ac);
  }
  if (((local_d0 & 0xff) != (uint)local_d4[0]) &&
     (iVar4 = FUN_002009d0(&local_d0,s___sds___cne_AppSettings_SavedSet_0010d96a + 2), iVar4 == 0))
  {
    FUN_00002898(_DAT_0010d9b0);
  }
  local_d0 = FUN_001b6ef4(uVar3);
  iVar4 = FUN_001ffb40(local_d4,s___sds___cne_AppSettings_SavedSet_0010d9b2 + 2);
  if (iVar4 == 0) {
    FUN_00002898(DAT_0010d9f0);
  }
  if (((local_d0 & 0xff) != (uint)local_d4[0]) &&
     (iVar4 = FUN_002009d0(&local_d0,s___sds___cne_AppSettings_SavedSet_0010d9b2 + 2), iVar4 == 0))
  {
    FUN_00002898(_DAT_0010d9f4);
  }
  local_ac = FUN_001b54c0(uVar1);
  iVar4 = FUN_001fff90(&local_b0,s___sds___cne_AppSettings_SavedSet_0010d9f6 + 2);
  if (iVar4 == 0) {
    FUN_00002898(DAT_0010d304);
  }
  if ((local_ac != local_b0) &&
     (iVar4 = FUN_00200f9c(&local_ac,s___sds___cne_AppSettings_SavedSet_0010d9f6 + 2), iVar4 == 0))
  {
    FUN_00002898(_DAT_0010d308);
  }
  local_b4 = FUN_001b5980(uVar1);
  iVar4 = FUN_002001b8(&local_b8,s_sds___cne_AppSettings_SavedSetti_0010da28);
  if (iVar4 == 0) {
    FUN_00002898(DAT_0010da58);
  }
  if ((local_b4 != local_b8) &&
     (iVar4 = FUN_002013ec(&local_b4,s_sds___cne_AppSettings_SavedSetti_0010da28), iVar4 == 0)) {
    FUN_00002898(_DAT_0010da5c);
  }
  local_bc = FUN_001b5500(uVar1);
  iVar4 = FUN_002001b8(&local_c0,s___sds___cne_AppSettings_SavedSet_0010da5e + 2);
  if (iVar4 == 0) {
    FUN_00002898(DAT_0010da90);
  }
  if ((local_bc != local_c0) &&
     (iVar4 = FUN_002013ec(&local_bc,s___sds___cne_AppSettings_SavedSet_0010da5e + 2), iVar4 == 0))
  {
    FUN_00002898(_DAT_0010da94);
  }
  FUN_002041e0(auStack_cc);
  uVar1 = FUN_000b4964();
  iVar4 = FUN_000b4840(uVar1,s___SystemDataService_0010da96 + 2,auStack_cc);
  if (iVar4 == 0) {
    FUN_00002898(s_ERROR__MixerShellCommand__no_Sys_0010daac);
    uVar1 = FUN_000d0510(auStack_cc);
  }
  else {
    uVar1 = FUN_002041b0(auStack_30,auStack_cc);
    FUN_000f8ee0();
    uVar2 = FUN_000f6910();
    FUN_0006a060(uVar2,uVar1);
    FUN_000d0510(auStack_30);
    uVar1 = FUN_000d0510(auStack_cc);
  }
  return uVar1;
}

