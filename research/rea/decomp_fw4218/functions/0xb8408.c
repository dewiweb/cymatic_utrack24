// rea decompile_all
// name: FUN_000b8408
// address: 0xb8408
// body: available
// range: 0xb8408-0xb8527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000b8408(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_00091838(param_1,s_RecorderSettings_000b8528);
  iVar2 = FUN_001fff90(&local_10,s_sds___cne_AppSettings_Recording__000b853c);
  if (iVar2 == 0) {
    FUN_00002898(_DAT_000b8568);
    FUN_00002898(s___ERROR__RecorderSettings__USING_000b856a + 2);
  }
  *(undefined4 *)(iVar1 + 0x24) = local_10;
  iVar2 = FUN_002001b8(iVar1 + 0x28,s_sds___cne_AppSettings_Recording__000b859c);
  if (iVar2 == 0) {
    FUN_00002898(_DAT_000b8568);
    FUN_00002898(s___ERROR__RecorderSettings__USING_000b856a + 2);
  }
  if ((*(uint *)(iVar1 + 0x28) < 0x10) || (0x18 < *(uint *)(iVar1 + 0x28))) {
    *(undefined4 *)(iVar1 + 0x28) = 0x18;
    iVar2 = FUN_002011c4(iVar1 + 0x28,s_sds___cne_AppSettings_Recording__000b859c);
    if (iVar2 == 0) {
      FUN_00002898(_DAT_000b85c8);
      FUN_00002898(s___ERROR__RecorderSettings__USING_000b85ca + 2);
    }
  }
  *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x28);
  iVar2 = FUN_002001b8(iVar1 + 0x2c,s_sds___cne_AppSettings_Recording__000b85f8);
  if (iVar2 == 0) {
    FUN_00002898(_DAT_000b8624);
    FUN_00002898(s___ERROR__RecorderSettings__USING_000b856a + 2);
  }
  if (0x18 < *(uint *)(iVar1 + 0x2c)) {
    *(undefined4 *)(iVar1 + 0x2c) = 0x18;
  }
  *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x2c);
  iVar2 = FUN_001ffb40(iVar1 + 0x30,s___sds___cne_AppSettings_Recordin_000b8626 + 2);
  if (iVar2 == 0) {
    FUN_00002898(DAT_000b8658);
    FUN_00002898(s___ERROR__RecorderSettings__USING_000b856a + 2);
  }
  return iVar1;
}

