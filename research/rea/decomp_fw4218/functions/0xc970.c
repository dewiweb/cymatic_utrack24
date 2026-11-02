// rea decompile_all
// name: FUN_0000c970
// address: 0xc970
// body: available
// range: 0xc970-0xcaaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0000c970(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8) + 0x118;
  FUN_001f00bc();
  if (*(char *)(param_1 + 0x24) != '\x03') {
LAB_0000c9a8:
    FUN_001f06d4(iVar1);
    return 1;
  }
  thunk_EXT_FUN_00400100(*(undefined4 *)(param_1 + 0x2e0));
  *(undefined1 *)(param_1 + 0x2dc) = 1;
  FUN_00012cd8(*(undefined4 *)(param_1 + 0x2cc));
  iVar2 = FUN_001df81c(*(undefined4 *)(param_1 + 0x1c));
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x2d0) != 0) {
      FUN_00012cd8(*(undefined4 *)(param_1 + 0x2cc));
    }
    if ((*(int *)(param_1 + 0x20) == 0) || (iVar2 = FUN_001df81c(), iVar2 == 0)) {
      *(undefined1 *)(param_1 + 0x24) = 2;
      piVar3 = *(int **)(param_1 + 0x3c);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x28))(piVar3,param_1);
      }
      FUN_0000b9d0(param_1 + 4);
      goto LAB_0000c9a8;
    }
    piVar3 = *(int **)(param_1 + 0x3c);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3,param_1,6);
    }
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  else {
    piVar3 = *(int **)(param_1 + 0x3c);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3,param_1,6);
    }
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  FUN_001f06d4(iVar1);
  return 0;
}

