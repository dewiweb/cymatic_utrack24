// rea decompile_all
// name: FUN_00179ff4
// address: 0x179ff4
// body: available
// range: 0x179ff4-0x17a0cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00179ff4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = thunk_EXT_FUN_0040001c();
  iVar3 = *(int *)(param_1 + -4);
  iVar4 = *(int *)(iVar3 + 0x24);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + -4) = *(undefined4 *)(iVar3 + 0x14);
    *(undefined4 **)(iVar3 + 0x14) = (undefined4 *)(param_1 + -4);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    thunk_EXT_FUN_00400034(uVar2);
    return 0;
  }
  if (*(int *)(iVar4 + 0x7c) == iVar4) {
    *(undefined4 *)(iVar3 + 0x24) = 0;
  }
  else {
    *(int *)(iVar3 + 0x24) = *(int *)(iVar4 + 0x7c);
    *(undefined4 *)(*(int *)(iVar4 + 0x7c) + 0x80) = *(undefined4 *)(iVar4 + 0x80);
    *(undefined4 *)(*(int *)(iVar4 + 0x80) + 0x7c) = *(undefined4 *)(iVar4 + 0x7c);
  }
  piVar1 = DAT_0017a0d0;
  *(int *)(iVar3 + 0x28) = *(int *)(iVar3 + 0x28) + -1;
  *(undefined4 *)(iVar4 + 0x74) = 0;
  *piVar1 = *piVar1 + 1;
  thunk_EXT_FUN_00400034(uVar2);
  **(int **)(iVar4 + 0x88) = param_1;
  if (*(int *)(iVar4 + 0x70) == 0) {
    *(undefined4 *)(iVar4 + 0x58) = 0;
  }
  else {
    FUN_0017c180(iVar4 + 0x58);
  }
  *(undefined4 *)(iVar4 + 0x90) = 0;
  iVar3 = FUN_0017b780(iVar4);
  if (iVar3 != 0) {
    FUN_0001181c();
  }
  return 0;
}

