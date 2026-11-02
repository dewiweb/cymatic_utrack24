// rea decompile_all
// name: FUN_0016f614
// address: 0x16f614
// body: available
// range: 0x16f614-0x16f6ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0016f614(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_20;
  int local_1c [2];
  
  if ((param_1 == 0) ||
     ((((*(int *)(param_1 + 0x48) == 0 && (*(int *)(param_1 + 0x50) == 0)) || (param_2 == 0)) ||
      ((*(int **)(param_2 + 0x70) == (int *)0x0 || (**(int **)(param_2 + 0x70) == 0)))))) {
    return -2;
  }
  iVar2 = FUN_001a4bdc(param_2 + 0xb0,0);
  iVar1 = DAT_0016f6b0;
  if (((iVar2 != 0) &&
      (FUN_001a7c44(*(int *)(param_1 + 0xc) + 0x14,s_branch_0016f6b4,&local_20), local_20 != 0)) &&
     ((FUN_001a7c44(iVar2 + 0x14,s_branch_0016f6b4,local_1c), local_1c[0] != 0 &&
      ((*(int *)(local_20 + 4) != 0 && (*(int *)(local_1c[0] + 4) != 0)))))) {
    iVar2 = FUN_00003960();
    if ((iVar2 == 0) &&
       (iVar2 = FUN_00003960(**(undefined4 **)(param_2 + 0x70),**(undefined4 **)(param_1 + 0x1c)),
       iVar2 == 0)) {
      return 0;
    }
    return iVar1 >> 3;
  }
  return iVar1;
}

