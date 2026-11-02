// rea decompile_all
// name: FUN_00114e8c
// address: 0x114e8c
// body: available
// range: 0x114e8c-0x114fbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00114e8c(int param_1,int *param_2)

{
  undefined2 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x3c))();
    if (*(int *)(param_1 + 100) != 0) {
      FUN_0016d744();
      *(undefined4 *)(param_1 + 100) = 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      FUN_0016d744();
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(**(code **)(*(int *)((int)param_2 + *(int *)(*param_2 + -0x38)) + 0x24))
                              (*(int *)(*param_2 + -0x38) + (int)param_2);
  }
  *(int **)(param_1 + 0x4c) = piVar2;
  if (piVar2 == (int *)0x0) {
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xfc;
    return;
  }
  (**(code **)(*piVar2 + 0x38))();
  uVar3 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x48))();
  uVar3 = FUN_0016d774(uVar3,DAT_00114fc0);
  *(undefined4 *)(param_1 + 100) = uVar3;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x48))();
  FUN_00003860(*(undefined4 *)(param_1 + 100),uVar3);
  iVar4 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x48))();
  uVar3 = FUN_0016d774(iVar4 << 1,DAT_00114fc0);
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x48))();
  FUN_00003860(*(undefined4 *)(param_1 + 0x60),iVar4 << 1);
  uVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  *(undefined2 *)(param_1 + 0x44) = uVar1;
  return;
}

