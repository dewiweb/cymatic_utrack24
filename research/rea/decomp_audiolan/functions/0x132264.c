// rea decompile_all
// name: FUN_00132264
// address: 0x132264
// body: available
// range: 0x132264-0x1324a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00132264(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  
  piVar8 = (int *)(param_1 + 4);
  if (*(ushort *)(param_1 + 10) == 0) {
    piVar3 = (int *)FUN_0016d774(4,DAT_001324a8);
    *piVar8 = (int)piVar3;
    *piVar3 = param_2;
    *(undefined2 *)(param_1 + 8) = 1;
    *(undefined2 *)(param_1 + 10) = 1;
    *(undefined2 *)(param_2 + 0x20) = 0;
    return;
  }
  iVar10 = 0;
  iVar7 = (int)((*(ushort *)(param_1 + 10) - 1) * 0x10000) >> 0x10;
  uVar9 = 0;
  if (-1 < iVar7) {
    do {
      uVar9 = iVar10 + (iVar7 - iVar10) / 2 & 0xffff;
      iVar12 = *(int *)(*piVar8 + uVar9 * 4);
      iVar2 = FUN_0015ebcc(param_2 + 8,iVar12 + 8);
      if (iVar2 == 0) {
        iVar10 = FUN_0015eb7c(param_2 + 8,iVar12 + 8);
        if (iVar10 == 0) {
          return;
        }
        iVar2 = 1;
        iVar10 = (int)((uVar9 + 1) * 0x10000) >> 0x10;
      }
      else {
        iVar2 = -1;
        iVar7 = (int)((uVar9 - 1) * 0x10000) >> 0x10;
      }
    } while (iVar10 <= iVar7);
    if (iVar2 < 0) goto LAB_00132340;
  }
  uVar9 = uVar9 + 1 & 0xfffeffff;
LAB_00132340:
  puVar5 = (undefined4 *)*piVar8;
  puVar11 = (undefined4 *)0x0;
  if ((uint)*(ushort *)(param_1 + 8) < *(ushort *)(param_1 + 10) + 1) {
    puVar5 = (undefined4 *)FUN_0016d774((uint)*(ushort *)(param_1 + 8) * 4 + 4,DAT_001324a8);
    if (puVar5 == (undefined4 *)0x0) {
      return;
    }
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
    puVar11 = puVar5;
    if (uVar9 != 0) {
      uVar4 = uVar9 & 1;
      if (uVar4 != 0) {
        *puVar5 = *(undefined4 *)*piVar8;
      }
      uVar6 = (uint)(uVar4 != 0);
      if (uVar4 < uVar9) {
        do {
          uVar4 = uVar4 + 2;
          puVar5[uVar6] = *(undefined4 *)(*piVar8 + uVar6 * 4);
          puVar5[uVar6 + 1] = *(undefined4 *)(*piVar8 + (uVar6 + 1) * 4);
          uVar6 = uVar6 + 2;
        } while ((int)uVar4 < (int)uVar9);
      }
    }
  }
  uVar4 = (uint)*(ushort *)(param_1 + 10);
  if ((int)(uVar4 - uVar9) < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar4 - uVar9 & 1;
    if (uVar6 != 0) {
      iVar7 = *(int *)(*piVar8 + (uVar4 - 1) * 4);
      puVar5[uVar4] = iVar7;
      *(short *)(iVar7 + 0x20) = (short)(uVar4 - 1) + 1;
    }
  }
  iVar7 = (*(ushort *)(param_1 + 10) - uVar6) + -1;
  while( true ) {
    iVar10 = iVar7 * 0x10000 >> 0x10;
    if (iVar10 <= (int)(uVar9 - 1)) break;
    iVar2 = *(int *)(*piVar8 + iVar10 * 4);
    sVar1 = (short)((uint)(iVar7 * 0x10000) >> 0x10);
    puVar5[iVar10 + 1] = iVar2;
    *(short *)(iVar2 + 0x20) = sVar1 + 1;
    iVar2 = *(int *)(*piVar8 + iVar10 * 4 + -4);
    iVar7 = iVar10 + -2;
    puVar5[iVar10] = iVar2;
    *(short *)(iVar2 + 0x20) = sVar1;
  }
  puVar5[uVar9] = param_2;
  *(short *)(param_2 + 0x20) = (short)uVar9;
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
  if (puVar11 != (undefined4 *)0x0) {
    FUN_0016d758(*piVar8);
    *piVar8 = (int)puVar11;
    return;
  }
  return;
}

