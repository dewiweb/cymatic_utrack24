// rea decompile_all
// name: FUN_0004aed8
// address: 0x4aed8
// body: available
// range: 0x4aed8-0x4af63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0004aed8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_18;
  
  uVar1 = _DAT_0004af64;
  param_1[2] = param_3;
  param_1[1] = param_2;
  *param_1 = uVar1;
  param_1[3] = param_6;
  param_1[4] = param_7;
  param_1[5] = param_8;
  uStack_18 = param_4;
  iVar2 = FUN_00065c64(param_1 + 6,param_4);
  *(undefined4 *)(iVar2 + 8) = param_5;
  iVar2 = FUN_000c3b4c(iVar2 + 0xc);
  *(undefined1 *)(iVar2 + 8) = 1;
  iVar2 = FUN_001dc8a0(iVar2 + 0xc,&uStack_18);
  if (*(int *)(iVar2 + -0x28) == 0) {
    FUN_000028a4(s___ERROR__AnalogPlug__NO_interfac_0004af66 + 2,param_2,param_4);
  }
  return iVar2 + -0x30;
}

