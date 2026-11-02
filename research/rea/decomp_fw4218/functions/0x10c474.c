// rea decompile_all
// name: FUN_0010c474
// address: 0x10c474
// body: available
// range: 0x10c474-0x10c85b inclusive
// range: 0x10cb64-0x10cd0b inclusive
// range: 0x10ce6c-0x10ceef inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0010c474(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [8];
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  
  FUN_000f4e84();
  uVar2 = FUN_000f4fc0();
  FUN_000f4e84();
  uVar3 = FUN_000f5150();
  FUN_000f4e84();
  uVar4 = FUN_000f5144();
  uVar5 = FUN_001b6f18(uVar3);
  iVar6 = FUN_001fff90(&local_3c,s_sds___cne_AppSettings_SavedSetti_0010c85c);
  if (iVar6 == 0) {
    FUN_00002898(_DAT_0010c88c);
  }
  if (uVar5 != local_3c) {
    FUN_000b810c(uVar3,local_3c);
  }
  uVar5 = FUN_001b6f24(uVar3);
  iVar6 = FUN_001fff90(&local_3c,s___sds___cne_AppSettings_SavedSet_0010c88e + 2);
  if (iVar6 == 0) {
    FUN_00002898(_DAT_0010c88c);
  }
  if (uVar5 != local_3c) {
    FUN_000b8208(uVar3,local_3c);
  }
  uVar5 = FUN_001b6f74(uVar3);
  iVar6 = FUN_001fff90(&local_3c,s_sds___cne_AppSettings_SavedSetti_0010c8c0);
  if (iVar6 == 0) {
    FUN_00002898(_DAT_0010c88c);
  }
  if (uVar5 != local_3c) {
    FUN_000b830c(uVar3,local_3c);
  }
  uVar5 = FUN_001b6f0c(uVar3);
  iVar6 = FUN_001ffb40(&local_3c,s_sds___cne_AppSettings_SavedSetti_0010c8f0);
  if (iVar6 == 0) {
    FUN_00002898(_DAT_0010c924);
  }
  if (uVar5 != (local_3c & 0xff)) {
    FUN_000b800c(uVar3,local_3c & 0xff);
  }
  uVar5 = FUN_001b6ec4(uVar4);
  iVar6 = FUN_001fff90(&local_3c,s___sds___cne_AppSettings_SavedSet_0010c926 + 2);
  if (iVar6 == 0) {
    FUN_00002898(_DAT_0010c95c);
  }
  if (uVar5 != local_3c) {
    FUN_000b6634(uVar4,(int)(char)local_3c);
  }
  uVar5 = FUN_001b6edc(uVar4);
  iVar6 = FUN_001fff90(&local_3c,s___sds___cne_AppSettings_SavedSet_0010c95e + 2);
  if (iVar6 == 0) {
    FUN_00002898(_DAT_0010c998);
  }
  if (uVar5 != local_3c) {
    FUN_000b6878(uVar4,local_3c);
  }
  uVar5 = FUN_001b6ed0(uVar4);
  iVar6 = FUN_001fff90(&local_3c,s___sds___cne_AppSettings_SavedSet_0010c99a + 2);
  if (iVar6 == 0) {
    FUN_00002898(_DAT_0010c9d0);
  }
  if (uVar5 != local_3c) {
    FUN_000b6730(uVar4,local_3c);
  }
  uVar5 = FUN_001b6ee8(uVar4);
  iVar6 = FUN_001fff90(&local_3c,s___sds___cne_AppSettings_SavedSet_0010c9d2 + 2);
  if (iVar6 == 0) {
    FUN_00002898(_DAT_0010ca0c);
  }
  if (uVar5 != local_3c) {
    FUN_000b69c0(uVar4,local_3c);
  }
  uVar5 = FUN_001b6eac(uVar4);
  iVar6 = FUN_001ffb40(&local_3c,s___sds___cne_AppSettings_SavedSet_0010ca0e + 2);
  if (iVar6 == 0) {
    FUN_00002898(_DAT_0010ca40);
  }
  if (uVar5 != (local_3c & 0xff)) {
    FUN_000b6404(uVar4,local_3c & 0xff);
  }
  uVar5 = FUN_001b6eb8(uVar4);
  iVar6 = FUN_001fff90(&local_3c,s___sds___cne_AppSettings_SavedSet_0010ca42 + 2);
  if (iVar6 == 0) {
    FUN_00002898(_DAT_0010ca74);
  }
  if (uVar5 != local_3c) {
    FUN_000b6504(uVar4,local_3c);
  }
  uVar5 = FUN_001b5b00(uVar2);
  iVar6 = FUN_001fff90(&local_3c,s___sds___cne_AppSettings_SavedSet_0010ca76 + 2);
  if (iVar6 == 0) {
    FUN_00002898(_DAT_0010cab4);
  }
  if (uVar5 != local_3c) {
    FUN_0009512c(uVar2,local_3c & 0xff);
  }
  uVar5 = FUN_001b5a60(uVar2);
  iVar6 = FUN_001fff90(&local_3c,s___sds___cne_AppSettings_SavedSet_0010cab6 + 2);
  if (iVar6 == 0) {
    FUN_00002898(_DAT_0010caec);
  }
  if (uVar5 != local_3c) {
    FUN_00094d88(uVar2,local_3c & 0xff);
  }
  uVar5 = FUN_001b5aac(uVar2);
  iVar6 = FUN_001fff90(&local_3c,s___sds___cne_AppSettings_SavedSet_0010caee + 2);
  if (iVar6 == 0) {
    FUN_00002898(_DAT_0010caec);
  }
  if (uVar5 != local_3c) {
    FUN_00094f9c(uVar2,local_3c & 0xff);
  }
  uVar1 = FUN_001b557c(uVar2);
  *(undefined1 *)(param_1 + 0xd8) = uVar1;
  FUN_000be04c(param_1 + 0x18,*(undefined1 *)(param_1 + 0xd8));
  FUN_0010e044(param_1);
  uVar5 = FUN_001b59d4(uVar2);
  iVar6 = FUN_001fff90(&local_3c,s_sds___cne_AppSettings_SavedSetti_0010cb2c);
  if (iVar6 == 0) {
    FUN_00002898(_DAT_0010c88c);
  }
  if (uVar5 != local_3c) {
    *(char *)(param_1 + 0xdb) = (char)local_3c;
    FUN_0010dd80(param_1);
    FUN_000945d8(uVar2,local_3c & 0xff);
  }
  uVar5 = FUN_001b6f00(uVar4);
  iVar6 = FUN_001ffb40(&local_3c,s_sds___cne_AppSettings_SavedSetti_0010cd0c);
  if (iVar6 == 0) {
    FUN_00002898(_DAT_0010cd4c);
  }
  if (uVar5 != (local_3c & 0xff)) {
    FUN_000b6bfc(uVar4,local_3c & 0xff);
  }
  uVar5 = FUN_001b6ef4(uVar4);
  iVar6 = FUN_001ffb40(&local_3c,s___sds___cne_AppSettings_SavedSet_0010cd4e + 2);
  if (iVar6 == 0) {
    FUN_00002898(_DAT_0010cd8c);
  }
  if (uVar5 != (local_3c & 0xff)) {
    FUN_000b6af4(uVar4,local_3c & 0xff);
  }
  uVar5 = FUN_001b54c0(uVar2);
  iVar6 = FUN_001fff90(&local_28,s___sds___cne_AppSettings_SavedSet_0010cd8e + 2);
  if (iVar6 == 0) {
    FUN_00002898(_DAT_0010c88c);
  }
  if (uVar5 != local_28) {
    FUN_00092d60(uVar2,local_28 & 0xff);
  }
  local_2c = FUN_001b5980(uVar2);
  iVar6 = FUN_002001b8(&local_30,s_sds___cne_AppSettings_SavedSetti_0010cdc0);
  if (iVar6 == 0) {
    FUN_00002898(_DAT_0010cdf0);
  }
  if (local_2c != local_30) {
    FUN_00093cd0(uVar2,local_30);
  }
  local_34 = FUN_001b5500(uVar2);
  iVar6 = FUN_002001b8(&local_38,s___sds___cne_AppSettings_SavedSet_0010cdf2 + 2);
  if (iVar6 == 0) {
    FUN_00002898(_DAT_0010ce24);
  }
  if (local_34 != local_38) {
    FUN_00092ef8(uVar2,local_38);
  }
  FUN_002041e0(auStack_50);
  uVar4 = FUN_000b4964();
  iVar6 = FUN_000b4840(uVar4,s___SystemDataService_0010ce26 + 2,auStack_50);
  if (iVar6 == 0) {
    FUN_00002898(s_ERROR__MixerShellCommand__no_Sys_0010ce3c);
    uVar2 = FUN_000d0510(auStack_50);
  }
  else {
    uVar4 = FUN_002041b0(auStack_44,auStack_50);
    FUN_000f8ee0();
    uVar7 = FUN_000f6910();
    FUN_0006a310(uVar7,uVar4);
    FUN_000d0510(auStack_44);
    uVar3 = FUN_001b6f18(uVar3);
    uVar3 = FUN_000bdf40(param_1 + 0x18,uVar3);
    FUN_000bdd2c(param_1 + 0x18,uVar3);
    iVar6 = FUN_001b5844(uVar2);
    if (iVar6 == 0) {
      FUN_000bf8bc(param_1 + 0x18);
    }
    uVar2 = FUN_000d0510(auStack_50);
  }
  return uVar2;
}

