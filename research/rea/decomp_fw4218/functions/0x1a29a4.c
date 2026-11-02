// rea decompile_all
// name: FUN_001a29a4
// address: 0x1a29a4
// body: available
// range: 0x1a29a4-0x1a2b03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_001a29a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_1c = param_3;
  uStack_18 = param_4;
  uVar1 = FUN_001c01d8(param_1);
  FUN_001a2920(&uStack_1c,*DAT_001a2b04 + 0x2c);
  local_20 = param_2;
  if (*(char *)(param_1 + 0x6c) == '\0') {
    iVar2 = FUN_001c01b8(param_1);
    if (iVar2 != 0) {
      uVar3 = FUN_001a2938(&uStack_1c);
      goto LAB_001a29fc;
    }
    iVar2 = (**(code **)(**(int **)(param_1 + 8) + 8))();
    if (iVar2 == 1) {
      uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0xc))();
      local_20 = 0;
      FUN_00065ef4(param_1 + 0xc,param_1,*(undefined4 *)(param_1 + 0x68),uVar1);
      uVar3 = FUN_001a2938(&uStack_1c);
      goto LAB_001a29fc;
    }
    *(undefined1 *)(param_1 + 0x6c) = 1;
    iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x14))();
    if (iVar2 != 0) {
      uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x14))();
      local_20 = 0;
      FUN_00065ef4(param_1 + 0xc,param_1,*(undefined4 *)(param_1 + 0x68),uVar1);
      uVar3 = FUN_001a2938(&uStack_1c);
      goto LAB_001a29fc;
    }
  }
  else {
    FUN_001a2bf8(param_1);
  }
  FUN_001a2938(&uStack_1c);
  uVar3 = 0;
  if (*(int *)(*DAT_001a2b04 + 0x54) != 0) {
    uVar3 = (**(code **)(**(int **)(*DAT_001a2b04 + 0x54) + 8))
                      (*(undefined4 *)(*DAT_001a2b04 + 0x54),uVar1);
  }
LAB_001a29fc:
  return CONCAT44(local_20,uVar3);
}

