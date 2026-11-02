// rea decompile_all
// name: FUN_00684ea0
// address: 0x684ea0
// body: available
// range: 0x684ea0-0x6850a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00684ea0(int param_1,undefined4 param_2,int param_3)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int in_EDX;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = 0;
  if (0 < param_3) {
    do {
      iVar9 = *(int *)(in_EDX + iVar7 * 4);
      piVar5 = *(int **)(param_1 + 0x58);
      piVar6 = piVar5 + *(int *)(param_1 + 0x60) * 6;
      for (; piVar5 != piVar6; piVar5 = piVar5 + 6) {
        if (*piVar5 == DAT_00c8aa6c) {
          ppuVar1 = (undefined **)(piVar5 + 2);
          if (ppuVar1 != (undefined **)0x0) goto LAB_00684ef9;
          break;
        }
      }
      ppuVar1 = &PTR_PTR_00c7ed58;
LAB_00684ef9:
      iVar2 = (**(code **)(*(int *)*ppuVar1 + 4))(ppuVar1 + 2);
      piVar6 = *(int **)(iVar9 + 0x58);
      iVar8 = 0x3fffffff;
      if (0 < iVar2) {
        iVar8 = iVar2;
      }
      piVar5 = piVar6 + *(int *)(iVar9 + 0x60) * 6;
      for (; piVar6 != piVar5; piVar6 = piVar6 + 6) {
        if (*piVar6 == DAT_00c8aa6c) {
          ppuVar1 = (undefined **)(piVar6 + 2);
          if (ppuVar1 != (undefined **)0x0) goto LAB_00684f39;
          break;
        }
      }
      ppuVar1 = &PTR_PTR_00c7ed58;
LAB_00684f39:
      iVar3 = (**(code **)(*(int *)*ppuVar1 + 4))(ppuVar1 + 2);
      iVar2 = 0x3fffffff;
      if (0 < iVar3) {
        iVar2 = iVar3;
      }
      if (iVar8 == iVar2) {
        iVar8 = *(int *)(param_1 + 0x14) - *(int *)(iVar9 + 0x14);
        if (iVar8 == 0) {
          iVar8 = *(int *)(param_1 + 0x10) - *(int *)(iVar9 + 0x10);
        }
      }
      else {
        iVar8 = iVar8 - iVar2;
      }
      if (iVar8 == 0) {
LAB_0068509b:
        return iVar7 + 1;
      }
      iVar9 = iVar7 + param_3 >> 1;
      if (iVar9 == iVar7) {
        iVar9 = *(int *)(in_EDX + iVar9 * 4);
        iVar2 = FUN_006cc7c0();
        iVar8 = 0x3fffffff;
        if (0 < iVar2) {
          iVar8 = iVar2;
        }
        iVar3 = FUN_006cc7c0();
        iVar2 = 0x3fffffff;
        if (0 < iVar3) {
          iVar2 = iVar3;
        }
        if (iVar8 == iVar2) {
          iVar8 = *(int *)(param_1 + 0x14) - *(int *)(iVar9 + 0x14);
          if (iVar8 == 0) {
            iVar8 = *(int *)(param_1 + 0x10) - *(int *)(iVar9 + 0x10);
          }
        }
        else {
          iVar8 = iVar8 - iVar2;
        }
        if (iVar8 < 0) {
          return iVar7;
        }
        goto LAB_0068509b;
      }
      iVar8 = *(int *)(in_EDX + iVar9 * 4);
      piVar5 = *(int **)(param_1 + 0x58);
      piVar6 = piVar5 + *(int *)(param_1 + 0x60) * 6;
      for (; piVar5 != piVar6; piVar5 = piVar5 + 6) {
        if (*piVar5 == DAT_00c8aa6c) {
          ppuVar1 = (undefined **)(piVar5 + 2);
          if (ppuVar1 != (undefined **)0x0) goto LAB_00684fb9;
          break;
        }
      }
      ppuVar1 = &PTR_PTR_00c7ed58;
LAB_00684fb9:
      iVar3 = (**(code **)(*(int *)*ppuVar1 + 4))(ppuVar1 + 2);
      iVar2 = 0x3fffffff;
      if (0 < iVar3) {
        iVar2 = iVar3;
      }
      piVar5 = *(int **)(iVar8 + 0x58);
      piVar6 = piVar5 + *(int *)(iVar8 + 0x60) * 6;
      for (; piVar5 != piVar6; piVar5 = piVar5 + 6) {
        if (*piVar5 == DAT_00c8aa6c) {
          ppuVar1 = (undefined **)(piVar5 + 2);
          if (ppuVar1 != (undefined **)0x0) goto LAB_00684fff;
          break;
        }
      }
      ppuVar1 = &PTR_PTR_00c7ed58;
LAB_00684fff:
      iVar4 = (**(code **)(*(int *)*ppuVar1 + 4))(ppuVar1 + 2);
      iVar3 = 0x3fffffff;
      if (0 < iVar4) {
        iVar3 = iVar4;
      }
      if (iVar2 == iVar3) {
        iVar2 = *(int *)(param_1 + 0x14) - *(int *)(iVar8 + 0x14);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 0x10) - *(int *)(iVar8 + 0x10);
        }
      }
      else {
        iVar2 = iVar2 - iVar3;
      }
      if (-1 < iVar2) {
        iVar7 = iVar9;
        iVar9 = param_3;
      }
      param_3 = iVar9;
    } while (iVar7 < param_3);
  }
  return iVar7;
}

