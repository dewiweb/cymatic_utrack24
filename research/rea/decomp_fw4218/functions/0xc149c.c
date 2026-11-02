// rea decompile_all
// name: FUN_000c149c
// address: 0xc149c
// body: available
// range: 0xc149c-0xc155f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000c149c(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  *param_1 = _DAT_000c1560;
  iVar1 = FUN_002256ec(param_1 + 1,2,1,s___JobDoneQueue_000c1562 + 2);
  *(undefined4 *)(iVar1 + 0x54) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  iVar1 = FUN_000d6ea8(iVar1 + 0x5c);
  piVar2 = (int *)FUN_000923c8();
  uVar3 = (**(code **)(*piVar2 + 0x10))(piVar2);
  *(undefined4 *)(iVar1 + -4) = uVar3;
  if (*(int *)(iVar1 + -4) == 0) {
    FUN_00002898(s_ERROR__UIUtils_uTrack24__getOrCr_000c1574);
  }
  if (*DAT_000c15b0 == 0) {
    iVar4 = FUN_001c6b14(0x24c,DAT_000c15b4);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_00081488(iVar4,iVar1 + -0x60);
    }
    *DAT_000c15b0 = iVar4;
  }
  return iVar1 + -0x60;
}

