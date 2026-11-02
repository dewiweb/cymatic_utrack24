// rea decompile_all
// name: FUN_0003c38c
// address: 0x3c38c
// body: available
// range: 0x3c38c-0x3c3c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0003c38c(uint *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = param_1[1];
  uVar3 = *param_1;
  iVar2 = 0;
  iVar5 = 6;
  do {
    *(char *)(param_2 + (5 - iVar2)) = (char)uVar3;
    uVar3 = uVar3 >> 8 | uVar4 << 0x18;
    uVar4 = uVar4 >> 8;
    iVar2 = iVar2 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar1 = FUN_0003b5cc(param_1[2]);
  *(char *)(param_2 + 6) = (char)uVar1;
  *(char *)(param_2 + 7) = (char)((uint)uVar1 >> 8);
  *(char *)(param_2 + 8) = (char)((uint)uVar1 >> 0x10);
  *(char *)(param_2 + 9) = (char)((uint)uVar1 >> 0x18);
  return;
}

