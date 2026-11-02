// rea decompile_all
// name: FUN_005d1e10
// address: 0x5d1e10
// body: available
// range: 0x5d1e10-0x5d21a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005d211e) */
/* WARNING: Removing unreachable block (ram,0x005d2158) */

int FUN_005d1e10(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  int local_48;
  int local_38;
  uint local_18;
  uint local_14;
  
  local_48 = 0;
  iVar3 = FUN_005d21b0(param_1,param_2,param_3);
  if ((iVar3 < 0) || (iVar3 = FUN_005d38f0(), iVar10 = 0, iVar3 != 0)) {
    return iVar3;
  }
  while( true ) {
    while( true ) {
      iVar3 = FUN_005e9d40(0);
      if (iVar3 < 1) break;
      iVar3 = *(int *)(param_1 + 0x48);
      iVar4 = FUN_005d6eb0();
      if (iVar4 < 0) {
        FUN_005e9d40(1);
      }
      else {
        if (iVar10 != 0) {
          uVar5 = iVar4 + iVar10 >> 2;
          puVar7 = (uint *)(param_1 + 0x50);
          uVar6 = *puVar7;
          *puVar7 = *puVar7 + uVar5;
          *(int *)(param_1 + 0x54) =
               *(int *)(param_1 + 0x54) + (iVar4 + iVar10 >> 0x1f) + (uint)CARRY4(uVar6,uVar5);
        }
        iVar3 = *(int *)(iVar3 + 0x1c);
        if (iVar3 == 0) {
          iVar3 = -1;
        }
        else {
          iVar3 = *(int *)(iVar3 + 4);
        }
        uVar6 = iVar3 + iVar4 >> 2;
        iVar3 = (iVar3 + iVar4 >> 0x1f) + *(int *)(param_1 + 0x54) +
                (uint)CARRY4(uVar6,*(uint *)(param_1 + 0x50));
        if ((param_3 < iVar3) ||
           ((param_3 <= iVar3 && (param_2 <= uVar6 + *(uint *)(param_1 + 0x50)))))
        goto LAB_005d2092;
        FUN_005e9d40(1);
        FUN_005d6f30();
        FUN_005e7d00();
        iVar10 = iVar4;
        local_48 = iVar4;
        if ((-2 < (int)local_14) && (local_14 < 0x80000000)) {
          iVar3 = *(int *)(param_1 + 0x60);
          iVar4 = *(int *)(param_1 + 0x44);
          puVar7 = (uint *)(iVar3 * 0x10 + iVar4);
          iVar9 = (local_14 - *(int *)(iVar3 * 0x10 + 4 + iVar4)) - (uint)(local_18 < *puVar7);
          *(uint *)(param_1 + 0x50) = local_18 - *puVar7;
          *(int *)(param_1 + 0x54) = iVar9;
          if ((iVar9 < 1) && (iVar9 < 0)) {
            *(undefined4 *)(param_1 + 0x50) = 0;
            *(undefined4 *)(param_1 + 0x54) = 0;
          }
          if (0 < iVar3) {
            puVar7 = (uint *)(iVar4 + 8);
            do {
              uVar5 = *puVar7;
              puVar1 = (uint *)(param_1 + 0x50);
              uVar6 = *puVar1;
              *puVar1 = *puVar1 + uVar5;
              *(int *)(param_1 + 0x54) =
                   *(int *)(param_1 + 0x54) + puVar7[1] + (uint)CARRY4(uVar6,uVar5);
              iVar3 = iVar3 + -1;
              puVar7 = puVar7 + 4;
            } while (iVar3 != 0);
          }
        }
      }
    }
    if (((iVar3 < 0) && (iVar3 != -3)) || (FUN_005d4950(0xffffffff,0xffffffff), extraout_EDX < 0))
    break;
    if ((*(byte *)(local_38 + 5) & 2) != 0) {
      FUN_005e8a50();
      FUN_005e9260();
      *(undefined4 *)(param_1 + 0x58) = 2;
    }
    if (*(int *)(param_1 + 0x58) < 3) {
      iVar3 = *(int *)(param_1 + 0x34);
      iVar4 = 0;
      if (0 < iVar3) {
        piVar8 = *(int **)(param_1 + 0x40);
        do {
          if (*piVar8 == *(int *)(local_38 + 0xe)) break;
          iVar4 = iVar4 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar4 < iVar3);
      }
      iVar10 = local_48;
      if (iVar4 != iVar3) {
        *(int *)(param_1 + 0x60) = iVar4;
        *(undefined4 *)(param_1 + 0x58) = 3;
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(local_38 + 0xe);
        FUN_005e9e70();
        *(undefined4 *)(param_1 + 0x1c8) = extraout_EDX_00;
        iVar3 = FUN_005d38f0();
        if (iVar3 != 0) {
          return iVar3;
        }
        local_48 = 0;
        FUN_005e9f20();
        iVar10 = 0;
      }
    }
    else {
      FUN_005e9f20();
    }
  }
LAB_005d2092:
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x48) + 0x1c) + 0xe48);
  __allshr();
  uVar11 = __allshl();
  iVar3 = (int)((ulonglong)uVar11 >> 0x20);
  if (iVar3 < *(int *)(param_1 + 0x54)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x54) < iVar3) goto LAB_005d20e0;
  uVar6 = *(uint *)(param_1 + 0x50);
  while( true ) {
    if ((uint)uVar11 <= uVar6) {
      return 0;
    }
LAB_005d20e0:
    do {
      lVar12 = __allshr();
      iVar10 = *(int *)(param_1 + 0x1f8);
      if ((iVar10 < 0) || (*(int *)(param_1 + 500) <= iVar10)) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(param_1 + 500) - iVar10;
      }
      if (lVar12 < iVar10) {
        iVar10 = (int)lVar12;
      }
      if ((iVar10 == 0) || (*(int *)(param_1 + 0x1f8) + iVar10 <= *(int *)(param_1 + 500))) {
        *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + iVar10;
      }
      uVar5 = iVar10 << ((byte)uVar2 & 0x1f);
      puVar7 = (uint *)(param_1 + 0x50);
      uVar6 = *puVar7;
      *puVar7 = *puVar7 + uVar5;
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar6,uVar5);
      if ((iVar10 < lVar12) && (iVar10 = FUN_005d3370(), iVar10 < 1)) {
        uVar13 = FUN_005d2f10();
        *(undefined8 *)(param_1 + 0x50) = uVar13;
      }
    } while (*(int *)(param_1 + 0x54) < iVar3);
    if (iVar3 < *(int *)(param_1 + 0x54)) break;
    uVar6 = *(uint *)(param_1 + 0x50);
  }
  return 0;
}

