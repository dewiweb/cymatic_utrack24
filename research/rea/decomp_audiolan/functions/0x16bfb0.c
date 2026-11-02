// rea decompile_all
// name: FUN_0016bfb0
// address: 0x16bfb0
// body: available
// range: 0x16bfb0-0x16c02b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0016bfb0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = (int)param_1 + *(int *)(*param_1 + -0x144);
  FUN_001179e0();
  piVar2 = (int *)FUN_0012b764(iVar1 + 0x90,iVar1,param_3,param_2,param_4);
  iVar3 = iVar1;
  do {
    *(byte *)(iVar3 + 0x148) = *(byte *)(iVar3 + 0x148) | 8;
    iVar3 = *(int *)(iVar3 + 0x108);
  } while (iVar3 != 0);
  FUN_001179d0(iVar1);
  if (piVar2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*piVar2 + -0x14) + (int)piVar2;
  }
  return iVar3;
}

