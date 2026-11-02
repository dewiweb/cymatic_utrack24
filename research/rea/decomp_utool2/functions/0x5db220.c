// rea decompile_all
// name: FUN_005db220
// address: 0x5db220
// body: available
// range: 0x5db220-0x5db438 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_005db220(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int local_14;
  int local_c;
  
  piVar3 = (int *)FUN_004c5556(1,0x2c);
  iVar9 = 0;
  local_14 = 0;
  piVar10 = (int *)(param_1 + 4);
  param_1 = 0;
  iVar8 = *(int *)(*piVar10 + 0x1c);
  *piVar3 = param_2;
  iVar1 = *(int *)(iVar8 + 0xb20);
  iVar4 = *(int *)(param_2 + 0x14);
  iVar2 = *(int *)(param_2 + 0xc);
  piVar3[1] = iVar2;
  piVar3[3] = iVar1;
  piVar10 = (int *)(iVar1 + iVar4 * 0x38);
  piVar3[4] = (int)piVar10;
  iVar1 = *piVar10;
  iVar4 = FUN_004c5556(iVar2,4);
  piVar3[5] = iVar4;
  local_c = 0;
  if (0 < iVar2) {
    do {
      uVar5 = *(uint *)(param_2 + 0x18 + local_c * 4);
      iVar11 = 0;
      if (uVar5 != 0) {
        do {
          iVar11 = iVar11 + 1;
          uVar5 = uVar5 >> 1;
        } while (uVar5 != 0);
        if (iVar11 != 0) {
          iVar6 = iVar11;
          if (iVar11 <= param_1) {
            iVar6 = param_1;
          }
          uVar7 = FUN_004c5556(iVar11,4);
          iVar12 = 0;
          *(undefined4 *)(iVar4 + local_c * 4) = uVar7;
          param_1 = iVar6;
          if (0 < iVar11) {
            uVar5 = 1;
            piVar10 = (int *)(param_2 + 0x118 + iVar9 * 4);
            do {
              if ((*(uint *)(param_2 + 0x18 + local_c * 4) & uVar5) != 0) {
                iVar9 = *piVar10;
                local_14 = local_14 + 1;
                piVar10 = piVar10 + 1;
                *(int *)(*(int *)(iVar4 + local_c * 4) + iVar12 * 4) =
                     *(int *)(iVar8 + 0xb20) + iVar9 * 0x38;
              }
              iVar12 = iVar12 + 1;
              uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
              iVar9 = local_14;
            } while (iVar12 < iVar11);
          }
        }
      }
      local_c = local_c + 1;
    } while (local_c < iVar2);
  }
  piVar3[6] = 1;
  if (0 < iVar1) {
    iVar4 = 1;
    iVar8 = iVar1;
    do {
      iVar4 = iVar4 * piVar3[1];
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    piVar3[6] = iVar4;
  }
  iVar8 = piVar3[6];
  piVar3[2] = param_1;
  iVar4 = FUN_004c554b(iVar8 * 4);
  piVar3[7] = iVar4;
  param_1 = 0;
  if (iVar8 < 1) {
    return piVar3;
  }
  iVar2 = piVar3[1];
  do {
    piVar10 = (int *)(iVar4 + param_1 * 4);
    iVar9 = FUN_004c554b(iVar1 << 2);
    *piVar10 = iVar9;
    iVar11 = 0;
    iVar9 = iVar8 / iVar2;
    param_2 = param_1;
    if (0 < iVar1) {
      do {
        iVar12 = param_2 / iVar9;
        param_2 = param_2 - iVar12 * iVar9;
        iVar6 = piVar3[1];
        *(int *)(*piVar10 + iVar11 * 4) = iVar12;
        iVar11 = iVar11 + 1;
        iVar9 = iVar9 / iVar6;
      } while (iVar11 < iVar1);
    }
    param_1 = param_1 + 1;
  } while (param_1 < piVar3[6]);
  return piVar3;
}

