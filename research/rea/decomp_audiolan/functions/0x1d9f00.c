// rea decompile_all
// name: FUN_001d9f00
// address: 0x1d9f00
// body: available
// range: 0x1d9f00-0x1d9fc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_001d9f00(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_1c [12];
  
  *param_1 = param_2;
  if (*(int *)((int)param_2 + *(int *)(*param_2 + -0xc) + 0x38) != 0) {
    piVar3 = *(int **)((int)param_2 + *(int *)(*param_2 + -0xc) + 0x38);
    if ((*(int *)((int)piVar3 + *(int *)(*piVar3 + -0xc) + 0x34) != 0) &&
       (iVar1 = (**(code **)(**(int **)((int)piVar3 + *(int *)(*piVar3 + -0xc) + 0x34) + 0x34))(),
       iVar1 == -1)) {
      iVar1 = *(int *)(*piVar3 + -0xc) + (int)piVar3;
      FUN_00161878(iVar1,*(uint *)(iVar1 + 0x10) | 1,0xffffffff);
    }
  }
  if ((*DAT_001d9fc4 != '\0') &&
     (((iVar1 = *(int *)(*param_2 + -0xc) + (int)param_2, uVar2 = DAT_001d9fcc,
       iVar1 == *(int *)(DAT_001d9fc8 + 4) ||
       (uVar2 = DAT_001d9fd0, iVar1 == *(int *)(DAT_001d9fc8 + 8))) ||
      (iVar1 == *(int *)(DAT_001d9fc8 + 0xc))))) {
    FUN_000156a4(uVar2);
  }
  piVar3 = *(int **)((int)param_2 + *(int *)(*param_2 + -0xc) + 0x34);
  if ((piVar3 != (int *)0x0) && ((piVar3[1] & 1U) != 0)) {
    (**(code **)(*piVar3 + 0x10))(auStack_1c,piVar3,0,2,8);
  }
  *(bool *)(param_1 + 1) = *(int *)((int)param_2 + *(int *)(*param_2 + -0xc) + 0x10) == 0;
  return param_1;
}

