// rea decompile_all
// name: FUN_00014678
// address: 0x14678
// body: available
// range: 0x14678-0x1477f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00014678(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int local_10;
  
  local_10 = 0;
  uStack_18 = param_2;
  uStack_14 = param_3;
  FUN_001a2920(&uStack_18,param_1 + 4);
  if ((*(int *)(param_1 + 0x38) == 0) ||
     (iVar1 = FUN_002039ec(*(undefined4 *)(param_1 + 0x38)), iVar1 == 0)) {
    if (*(int *)(param_1 + 0x30) != 0) {
      (**(code **)(**(int **)(param_1 + 0x30) + 4))
                (*(int **)(param_1 + 0x30),param_1 + 0x40,&local_10);
    }
    if (0 < local_10) {
      FUN_00013374(*(undefined4 *)(param_1 + 0x34),param_1 + 0x40,local_10);
    }
  }
  else {
    while (iVar1 = FUN_002039ec(*(undefined4 *)(param_1 + 0x38)), iVar1 != 0) {
      iVar1 = FUN_00203994(*(undefined4 *)(param_1 + 0x38),param_1 + 0x40);
      if (iVar1 == 0) {
        uVar2 = FUN_001a2938(&uStack_18);
        goto LAB_000146d0;
      }
      local_10 = 1;
      if (*(int *)(param_1 + 0x30) != 0) {
        (**(code **)(**(int **)(param_1 + 0x30) + 4))
                  (*(int **)(param_1 + 0x30),param_1 + 0x40,&local_10);
      }
      if (0 < local_10) {
        FUN_00013374(*(undefined4 *)(param_1 + 0x34),param_1 + 0x40,local_10);
      }
    }
  }
  uVar2 = FUN_001a2938(&uStack_18);
LAB_000146d0:
  return CONCAT44(uStack_18,uVar2);
}

