// rea decompile_all
// name: FUN_000a0630
// address: 0xa0630
// body: available
// range: 0xa0630-0xa0773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_000a0630(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0010fe70(param_1,param_2,param_3,param_4);
  iVar1 = FUN_00085e90(iVar1 + 0x14);
  piVar2 = (int *)FUN_00143204(iVar1 + 0x84);
  iVar1 = DAT_000a0774;
  piVar2[-0x26] = DAT_000a0774;
  piVar2[-2] = iVar1 + 0xc4;
  piVar2[-0x21] = iVar1 + 0x90;
  *piVar2 = iVar1 + 0xd0;
  piVar2[1] = param_5;
  *(undefined1 *)(piVar2 + 2) = 0;
  *(undefined1 *)((int)piVar2 + 0xb) = 0;
  piVar2[3] = 0;
  piVar2[4] = 0;
  *(undefined1 *)(piVar2 + 5) = 0;
  if (*DAT_000a0778 == 0) {
    iVar1 = FUN_001c6b14(0x19c,DAT_000a077c);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0013bc20(iVar1,param_4);
    }
    *DAT_000a0778 = iVar1;
  }
  if (*DAT_000a0780 == 0) {
    iVar1 = FUN_001c6b14(0x114,DAT_000a077c);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_000dc240(iVar1);
    }
    *DAT_000a0780 = iVar1;
  }
  if (*DAT_000a0784 == '\0') {
    uVar3 = FUN_000f4e84();
    FUN_000f4e44(uVar3,piVar2);
    *DAT_000a0784 = '\x01';
  }
  return piVar2 + -0x26;
}

