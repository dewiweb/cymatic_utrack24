// rea decompile_all
// name: FUN_0011bd94
// address: 0x11bd94
// body: available
// range: 0x11bd94-0x11be73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0011bd94(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x94))
                            (*(int **)(param_1 + 0xc),param_2,param_3,0);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  piVar1 = (int *)(**(code **)(*(int *)((int)piVar1 + *(int *)(*piVar1 + -0x38)) + 0x24))
                            ((int)piVar1 + *(int *)(*piVar1 + -0x38));
  FUN_00114e8c(piVar1,param_4);
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1);
  iVar3 = (**(code **)(*param_4 + 0x30))(param_4);
  if (*(int *)(iVar2 + 0xc) != 0) {
    FUN_00003c70(*(int *)(iVar2 + 0xc),DAT_0011be74);
    *(undefined4 *)(iVar2 + 0xc) = 0;
  }
  *(short *)(iVar2 + 0x10) = (short)iVar3;
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)FUN_0016d774(iVar3 * 0xc + 8,DAT_0011be78);
    uVar5 = 0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0xc;
      puVar4[1] = iVar3;
      uVar5 = FUN_0016dd70(puVar4 + 2,DAT_0011be7c,0xc,iVar3);
    }
    *(undefined4 *)(iVar2 + 0xc) = uVar5;
  }
  return 1;
}

