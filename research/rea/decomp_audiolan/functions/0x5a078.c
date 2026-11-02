// rea decompile_all
// name: FUN_0005a078
// address: 0x5a078
// body: available
// range: 0x5a078-0x5a207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0005a078(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int local_40;
  
  puVar1 = (undefined4 *)0x0;
  if (param_3 == 0) {
    iVar3 = *(int *)(param_2 + 4);
    iVar6 = 1;
    local_40 = *(int *)(param_2 + 8) + iVar3;
    iVar9 = 0;
    iVar5 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10) >> 2;
  }
  else {
    if (param_3 != 1) {
      return 0;
    }
    local_40 = *(int *)(param_2 + 4);
    iVar3 = *(int *)(param_2 + 8) + local_40;
    iVar6 = -1;
    iVar9 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10) >> 2;
    iVar5 = 0;
  }
  if ((iVar9 == iVar5) && (param_5 <= *(int *)(param_2 + 8))) {
    if (param_3 != 0) {
LAB_0005a128:
      iVar3 = iVar3 - param_5;
    }
  }
  else {
    iVar4 = *(int *)(param_2 + 0x10);
    do {
      iVar8 = iVar9;
      iVar9 = iVar8 + iVar6;
      if (param_3 == 0) {
        piVar10 = *(int **)(iVar4 + iVar8 * 4);
        iVar7 = *piVar10;
        iVar11 = iVar3 - iVar7;
        if (iVar11 < 0) {
          iVar11 = -iVar11;
        }
        if (param_5 <= iVar11) goto LAB_0005a118;
        iVar7 = piVar10[1] + iVar7;
      }
      else {
        piVar10 = *(int **)(iVar4 + iVar9 * 4);
        iVar7 = *piVar10;
        iVar11 = iVar3 - (piVar10[1] + iVar7);
        if (iVar11 < 0) {
          iVar11 = -iVar11;
        }
        if (param_5 <= iVar11) goto LAB_0005a128;
      }
      iVar3 = iVar7;
    } while (iVar9 != iVar5);
    if (param_3 == 0) {
      piVar10 = *(int **)(iVar4 + iVar8 * 4);
      iVar3 = piVar10[1] + *piVar10;
      local_40 = local_40 - iVar3;
      if (local_40 < 0) {
        local_40 = -local_40;
      }
      if (local_40 < param_5) goto LAB_0005a1f8;
    }
    else {
      iVar3 = **(int **)(iVar4 + iVar9 * 4);
      local_40 = local_40 - iVar3;
      if (local_40 < 0) {
        local_40 = -local_40;
      }
      if (local_40 < param_5) goto LAB_0005a1f8;
      iVar3 = iVar3 - param_5;
    }
  }
LAB_0005a118:
  puVar1 = (undefined4 *)FUN_00059fd4(param_1,param_2,iVar3);
LAB_0005a1f8:
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
  }
  return uVar2;
}

