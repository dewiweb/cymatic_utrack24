// rea decompile_all
// name: FUN_00698200
// address: 0x698200
// body: available
// range: 0x698200-0x6985ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00698200(float *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  int iStack_64;
  int iStack_60;
  int iStack_58;
  int iStack_50;
  int local_4c;
  double local_48;
  undefined1 auStack_3c [4];
  int aiStack_38 [3];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [24];
  
  dVar13 = 6755399441055744.0;
  if ((((*(int *)(in_ECX + 0x9c) == 0) && (*(int *)(in_ECX + 0xa0) == 0)) &&
      (*(char *)((int)param_1 + 0x3d) != '\0')) && (((uint)param_1[4] >> 5 & 1) == 0)) {
    puVar1 = *(undefined4 **)(in_ECX + 0x90);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x90) = 0;
      (**(code **)*puVar1)(1);
    }
    dVar13 = 6755399441055744.0;
    local_48 = (double)param_1[0xd] + 6755399441055744.0;
    iVar2 = FUN_00697ae0(local_48._0_4_);
    *(int *)(in_ECX + 0x9c) = iVar2;
    if (iVar2 == 0) {
      FUN_00698020(param_1);
      dVar13 = 6755399441055744.0;
    }
    else {
      iVar2 = FUN_00697d70(iVar2);
      *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(iVar2 + 0xc);
    }
  }
  local_4c = *(int *)(in_ECX + 0x9c);
  if (local_4c == 0) {
    if (*(int *)(in_ECX + 0xa0) != 0) {
      if (((int)param_1[3] < -0x32) || (*(int *)(in_ECX + 0x1c) + 0x32 <= (int)param_1[3])) {
        FUN_00697fb0(*(undefined4 *)(in_ECX + 0xb0));
      }
      else if (*(int **)(in_ECX + 0x90) != (int *)0x0) {
        (**(code **)(**(int **)(in_ECX + 0x90) + 0x28))(1);
        iVar2 = *(int *)(in_ECX + 0x90);
        iVar8 = FUN_00698f70();
        iVar8 = iVar8 - *(int *)(iVar2 + 0x18);
        iVar4 = (int)param_1[2] - *(int *)(in_ECX + 0xac);
        iVar9 = 0;
        if (0 < iVar8) {
          iVar9 = iVar8;
        }
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        else if (iVar9 < iVar4) {
          iVar4 = iVar9;
        }
        FUN_006e9790(iVar4,0,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(in_ECX + 0x1c));
        iStack_50 = *(int *)(in_ECX + 0x80) + -1;
        if (-1 < iStack_50) {
          while( true ) {
            iVar2 = FUN_00699020(*(undefined4 *)(in_ECX + 0xa0),1);
            iStack_64 = iVar2;
            if ((0 < iVar2) &&
               ((*(byte *)(*(int *)(*(int *)(in_ECX + 0x78) + -4 + iVar2 * 4) + 8) & 4) != 0)) {
              piVar5 = (int *)FUN_006d7870(auStack_3c,iVar2 + -1);
              iVar4 = *piVar5;
              piVar5 = (int *)FUN_006d7870(&local_4c,iVar2);
              iVar9 = *(int *)(in_ECX + 0x90);
              uVar6 = ((*(int *)(iVar9 + 0x18) - piVar5[2]) - *piVar5) + *(int *)(iVar9 + 0x10);
              uVar11 = (int)uVar6 >> 0x1f;
              uVar7 = *(int *)(iVar9 + 0x10) - iVar4;
              uVar12 = (int)uVar7 >> 0x1f;
              in_ECX = iStack_60;
              if ((int)((uVar7 ^ uVar12) - uVar12) < (int)((uVar6 ^ uVar11) - uVar11)) {
                iStack_64 = iVar2 + -1;
              }
            }
            if ((iStack_64 < *(int *)(in_ECX + 0x80) + -1) &&
               ((*(byte *)(*(int *)(*(int *)(in_ECX + 0x78) + 4 + iStack_64 * 4) + 8) & 4) != 0)) {
              piVar5 = (int *)FUN_006d7870(auStack_2c,iStack_64);
              iVar4 = *piVar5;
              piVar5 = (int *)FUN_006d7870(auStack_1c,iStack_64 + 1);
              iVar9 = *(int *)(in_ECX + 0x90);
              uVar6 = ((*(int *)(iVar9 + 0x18) - piVar5[2]) - *piVar5) + *(int *)(iVar9 + 0x10);
              uVar11 = (int)uVar6 >> 0x1f;
              uVar7 = *(int *)(iVar9 + 0x10) - iVar4;
              uVar12 = (int)uVar7 >> 0x1f;
              in_ECX = iStack_60;
              if ((int)((uVar6 ^ uVar11) - uVar11) < (int)((uVar7 ^ uVar12) - uVar12)) {
                iStack_64 = iStack_64 + 1;
              }
            }
            if (iStack_64 == iVar2) break;
            FUN_006991b0(*(undefined4 *)(in_ECX + 0xa0),iStack_64);
            iStack_50 = iStack_50 + -1;
            if (iStack_50 < 0) {
              return;
            }
          }
        }
      }
    }
  }
  else {
    iVar2 = *(int *)(in_ECX + 0x80) + -1;
    if (-1 < iVar2) {
      piVar10 = *(int **)(in_ECX + 0x78);
      piVar5 = piVar10 + iVar2;
      while (iVar4 = *(int *)(in_ECX + 0x80), *(int *)(*piVar5 + 4) != *(int *)(in_ECX + 0x9c)) {
        piVar5 = piVar5 + -1;
        iVar2 = iVar2 + -1;
        if (iVar2 < 0) {
          return;
        }
      }
      iVar2 = piVar10[iVar2];
      local_48 = (double)CONCAT44(local_48._4_4_,iVar2);
      if (iVar2 != 0) {
        iStack_58 = SUB84((double)(*param_1 - param_1[0xd]) + dVar13,0);
        iStack_58 = *(int *)(in_ECX + 0xa4) + iStack_58;
        iVar9 = *(int *)(iVar2 + 0x10);
        if ((*(int *)(iVar2 + 0x10) <= iStack_58) &&
           (iVar9 = iStack_58, *(int *)(iVar2 + 0x14) < iStack_58)) {
          iVar9 = *(int *)(iVar2 + 0x14);
        }
        if (*(char *)(in_ECX + 0x98) != '\0') {
          iVar2 = 0;
          iStack_60 = 0;
          iVar8 = 0;
          if (0 < iVar4) {
            do {
              if (*(int *)(*piVar10 + 4) == local_4c) goto LAB_0069837b;
              iVar8 = iVar8 + 1;
              iVar2 = iVar2 + 1;
              piVar10 = piVar10 + 1;
            } while (iVar8 < iVar4);
          }
          iVar2 = -1;
LAB_0069837b:
          iVar2 = iVar2 + 1;
          if (iVar2 < iVar4) {
            iStack_60 = 0;
            do {
              iVar8 = *(int *)(*(int *)(in_ECX + 0x78) + iVar2 * 4);
              if ((*(byte *)(iVar8 + 8) & 1) != 0) {
                iStack_60 = iStack_60 + *(int *)(iVar8 + 0x10);
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < iVar4);
          }
          uVar3 = FUN_00699020(*(undefined4 *)(in_ECX + 0x9c),1);
          FUN_006d7870(aiStack_38,uVar3);
          iVar4 = (*(int *)(in_ECX + 0xb4) - aiStack_38[0]) - iStack_60;
          iVar2 = iVar9;
          if (iVar4 < iVar9) {
            iVar2 = iVar4;
          }
          iVar9 = *(int *)(local_48._0_4_ + 0x10);
          if (*(int *)(local_48._0_4_ + 0x10) < iVar2) {
            iVar9 = iVar2;
          }
        }
        FUN_00699080(*(undefined4 *)(in_ECX + 0x9c),iVar9);
        return;
      }
    }
  }
  return;
}

