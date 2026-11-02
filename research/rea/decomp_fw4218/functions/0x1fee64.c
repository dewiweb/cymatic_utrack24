// rea decompile_all
// name: FUN_001fee64
// address: 0x1fee64
// body: available
// range: 0x1fee64-0x1fef1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1fee84 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001fee64(int *param_1,int *param_2,uint param_3)

{
  ushort uVar1;
  bool bVar2;
  ushort *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  puVar3 = DAT_001fef20;
  bVar2 = false;
  for (piVar5 = *(int **)(DAT_001fef20 + 2); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[3]) {
    if (param_1 == piVar5) {
      if (bVar2) {
        FUN_00013290(s_Assertion___s__failed_at_line__d_001fef38,s_rebind____0_001fef2c,DAT_001fef28
                     ,DAT_001fef24);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      bVar2 = true;
    }
    else if (((-1 < (int)((uint)*(byte *)(param_1 + 2) << 0x1d)) &&
             (-1 < (int)((uint)*(byte *)(piVar5 + 2) << 0x1d))) &&
            (*(ushort *)((int)piVar5 + 0x12) == param_3)) {
      if (piVar5 == (int *)0x0) {
        return 0xfffffff7;
      }
      if (*piVar5 == 0) {
        return 0xfffffff7;
      }
      if (param_2 == (int *)0x0) {
        return 0xfffffff7;
      }
      if (*param_2 == 0) {
        return 0xfffffff7;
      }
      if (*piVar5 == *param_2) {
        return 0xfffffff7;
      }
    }
  }
  iVar4 = 0;
  if (param_2 != (int *)0x0) {
    iVar4 = *param_2;
  }
  *param_1 = iVar4;
  if (param_3 == 0) {
    uVar6 = 0;
    while( true ) {
      uVar1 = *puVar3;
      *puVar3 = uVar1 + 1;
      if (uVar1 == DAT_001fef6c) {
        *puVar3 = 0xc000;
      }
      if (*(int *)(puVar3 + 2) == 0) break;
      iVar4 = *(int *)(puVar3 + 2);
      while (*(ushort *)(iVar4 + 0x12) != *puVar3) {
        iVar4 = *(int *)(iVar4 + 0xc);
        if (iVar4 == 0) goto LAB_001feefe;
      }
      uVar6 = uVar6 + 1 & 0xffff;
      if (DAT_001fef70 < uVar6) {
        return 0xfffffff7;
      }
    }
LAB_001feefe:
    param_3 = (uint)*puVar3;
    if (param_3 == 0) {
      return 0xfffffff7;
    }
  }
  *(short *)((int)param_1 + 0x12) = (short)param_3;
  if (!bVar2) {
    param_1[3] = *(int *)(puVar3 + 2);
    *(int **)(puVar3 + 2) = param_1;
  }
  return 0;
}

