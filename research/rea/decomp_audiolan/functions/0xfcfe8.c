// rea decompile_all
// name: FUN_000fcfe8
// address: 0xfcfe8
// body: available
// range: 0xfcfe8-0xfd08f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000fcfe8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_001a0700(*(int *)(param_1 + 0x1c) + 4);
  uVar4 = DAT_000fd090;
  if (((*(char *)(param_1 + 0x10) != '\0') && (uVar4 = DAT_000fd094, param_2 != 0)) &&
     (uVar4 = DAT_000fd098, *(int *)(param_2 + 0x9c) != -1)) {
    *(undefined1 *)(param_2 + 0xb1) = 1;
    piVar1 = *(int **)(param_1 + 0x18);
    iVar2 = 0;
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 8))(piVar1,param_2);
    }
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 4);
    }
    if (iVar3 != 0 && iVar2 != 0) {
      do {
        iVar3 = iVar2;
        iVar2 = *(int *)(iVar3 + 4);
      } while (*(int *)(iVar3 + 4) != 0);
    }
    *(int *)(param_1 + 0xc) = iVar3;
    uVar4 = 0;
  }
  FUN_001a0d18(*(int *)(param_1 + 0x1c) + 4);
  return uVar4;
}

