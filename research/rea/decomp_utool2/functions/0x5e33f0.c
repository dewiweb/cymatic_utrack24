// rea decompile_all
// name: FUN_005e33f0
// address: 0x5e33f0
// body: available
// range: 0x5e33f0-0x5e36f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_005e33f0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  int local_20;
  int local_1c;
  int *local_14;
  
  piVar1 = *(int **)(param_2 + 0x510);
  iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x1c) + 0xb20);
  iVar3 = FUN_005eabc0();
  if (iVar3 != 1) {
    return (undefined4 *)0x0;
  }
  puVar4 = (undefined4 *)FUN_005e9360();
  for (uVar11 = *(int *)(param_2 + 0x50c) - 1; uVar11 != 0; uVar11 = uVar11 >> 1) {
  }
  uVar5 = FUN_005eabc0();
  *puVar4 = uVar5;
  for (uVar11 = *(int *)(param_2 + 0x50c) - 1; uVar11 != 0; uVar11 = uVar11 >> 1) {
  }
  uVar5 = FUN_005eabc0();
  puVar4[1] = uVar5;
  local_1c = 0;
  local_14 = (int *)0x2;
  piVar12 = piVar1;
  if (0 < *piVar1) {
    do {
      iVar3 = piVar12[1];
      uVar11 = 0;
      iVar2 = piVar1[iVar3 + 0x20];
      bVar10 = (byte)piVar1[iVar3 + 0x30];
      if (piVar1[iVar3 + 0x30] != 0) {
        iVar14 = piVar1[iVar3 + 0x40];
        if (*(int *)(iVar9 + 8 + iVar14 * 0x38) < 1) {
          return (undefined4 *)0x0;
        }
        iVar6 = FUN_005e7470();
        if (iVar6 < 0) {
          return (undefined4 *)0x0;
        }
        uVar11 = *(uint *)(*(int *)(iVar9 + iVar14 * 0x38 + 0x18) + iVar6 * 4);
        if (uVar11 == 0xffffffff) {
          return (undefined4 *)0x0;
        }
      }
      iVar14 = 0;
      if (0 < iVar2) {
        piVar15 = puVar4 + (int)local_14;
        do {
          uVar7 = (1 << (bVar10 & 0x1f)) - 1U & uVar11;
          uVar11 = (int)uVar11 >> (bVar10 & 0x1f);
          iVar6 = piVar1[uVar7 + iVar3 * 8 + 0x50];
          if (iVar6 < 0) {
            *piVar15 = 0;
          }
          else {
            if ((*(int *)(iVar9 + 8 + iVar6 * 0x38) < 1) || (iVar8 = FUN_005e7470(), iVar8 < 0)) {
              iVar6 = -1;
            }
            else {
              iVar6 = *(int *)(*(int *)(iVar9 + iVar6 * 0x38 + 0x18) + iVar8 * 4);
            }
            *piVar15 = iVar6;
            if (iVar6 == -1) {
              return (undefined4 *)0x0;
            }
          }
          iVar14 = iVar14 + 1;
          piVar15 = piVar15 + 1;
        } while (iVar14 < iVar2);
      }
      local_14 = (int *)((int)local_14 + iVar2);
      local_1c = local_1c + 1;
      piVar12 = piVar12 + 1;
    } while (local_1c < *piVar1);
  }
  local_20 = 2;
  if (2 < *(int *)(param_2 + 0x504)) {
    piVar12 = (int *)(param_2 + 0x30c);
    local_14 = piVar1 + 0xd3;
    do {
      uVar11 = (puVar4[*piVar12] & 0x7fff) - (puVar4[piVar12[0x3f]] & 0x7fff);
      iVar9 = (int)(((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f)) *
                   (*local_14 - piVar1[piVar12[0x3f] + 0xd1])) /
              (piVar1[*piVar12 + 0xd1] - piVar1[piVar12[0x3f] + 0xd1]);
      if ((int)uVar11 < 0) {
        iVar9 = -iVar9;
      }
      uVar7 = (puVar4[piVar12[0x3f]] & 0x7fff) + iVar9;
      uVar16 = *(int *)(param_2 + 0x50c) - uVar7;
      uVar11 = puVar4[local_20];
      if (uVar11 == 0) {
        puVar4[local_20] = uVar7 | 0x8000;
      }
      else {
        uVar13 = uVar7;
        if ((int)uVar16 < (int)uVar7) {
          uVar13 = uVar16;
        }
        if ((int)uVar11 < (int)(uVar13 * 2)) {
          if ((uVar11 & 1) == 0) {
            iVar9 = (int)uVar11 >> 1;
          }
          else {
            iVar9 = -((int)(uVar11 + 1) >> 1);
          }
        }
        else if ((int)uVar7 < (int)uVar16) {
          iVar9 = uVar11 - uVar7;
        }
        else {
          iVar9 = (uVar16 - uVar11) + -1;
        }
        puVar4[local_20] = iVar9 + uVar7 & 0x7fff;
        puVar4[piVar12[0x3f]] = puVar4[piVar12[0x3f]] & 0x7fff;
        puVar4[*piVar12] = puVar4[*piVar12] & 0x7fff;
      }
      local_20 = local_20 + 1;
      local_14 = local_14 + 1;
      piVar12 = piVar12 + 1;
    } while (local_20 < *(int *)(param_2 + 0x504));
  }
  return puVar4;
}

