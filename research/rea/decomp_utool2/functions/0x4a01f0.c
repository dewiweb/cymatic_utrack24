// rea decompile_all
// name: FUN_004a01f0
// address: 0x4a01f0
// body: available
// range: 0x4a01f0-0x4a0686 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004a01f0(int param_1,undefined1 *param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_ECX;
  int *piVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  int local_30;
  int local_2c;
  int *local_28;
  undefined1 *local_24;
  int *local_20;
  undefined4 *local_1c;
  undefined8 *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007031cb;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = (int *)0x0;
  local_20 = in_ECX;
  piVar3 = operator_new(0x14);
  iVar6 = in_ECX[1];
  local_24 = &DAT_00bfe12c;
  iVar8 = *in_ECX;
  local_28 = (int *)0x1;
  *piVar3 = iVar8;
  if (iVar8 != 0) {
    LOCK();
    *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + 1;
    UNLOCK();
  }
  piVar1 = piVar3 + 2;
  piVar3[1] = iVar6;
  *piVar1 = 0;
  piVar3[3] = 0;
  piVar3[4] = 0;
  local_8 = 3;
  local_14 = piVar3;
  FUN_004a0920(&local_24,param_2);
  local_8 = 0xffffffff;
  local_24 = (undefined1 *)0x0;
  local_18 = (undefined8 *)local_20[4];
  if (0 < (int)local_18) {
    local_28 = local_20 + 2;
    iVar6 = 0;
    do {
      local_1c = *(undefined4 **)(*local_28 + (int)local_24 * 4);
      if (iVar6 == param_1) {
        puVar10 = local_24;
        if ((int)local_24 < (int)local_18) {
          do {
            iVar6 = piVar3[4];
            iVar8 = iVar6 + 1;
            param_2 = *(undefined1 **)(*local_28 + (int)puVar10 * 4);
            if (piVar3[3] < iVar8) {
              if (iVar8 < 0) {
                iVar8 = iVar6 + 2;
              }
              uVar11 = iVar6 + 9 + (iVar8 >> 1) & 0xfffffff8;
              if (piVar3[3] != uVar11) {
                if ((int)uVar11 < 1) {
                  FID_conflict__free((void *)*piVar1);
                  *piVar1 = 0;
                }
                else if (*piVar1 == 0) {
                  iVar6 = FUN_004c554b();
                  *piVar1 = iVar6;
                }
                else {
                  iVar6 = FUN_004c553b(*piVar1,uVar11 * 4,uVar2);
                  *piVar1 = iVar6;
                }
                piVar3[3] = uVar11;
              }
            }
            iVar6 = piVar3[4];
            puVar10 = puVar10 + 1;
            piVar3[4] = iVar6 + 1;
            *(undefined1 **)(*piVar1 + iVar6 * 4) = param_2;
          } while ((int)puVar10 < local_20[4]);
        }
        piVar3 = local_28;
        puVar10 = local_24 + local_20[4];
        param_2 = (undefined1 *)local_28[2];
        if ((int)puVar10 < 0) {
          puVar10 = (undefined1 *)0x0;
        }
        else if ((int)param_2 < (int)puVar10) {
          puVar10 = param_2;
        }
        if ((int)local_24 < 0) {
          puVar9 = (undefined1 *)0x0;
        }
        else {
          puVar9 = local_24;
          if ((int)param_2 < (int)local_24) {
            puVar9 = param_2;
          }
        }
        if ((int)puVar10 <= (int)puVar9) {
          ExceptionList = local_10;
          return local_14;
        }
        iVar6 = (int)param_2 - (int)puVar10;
        puVar4 = (undefined4 *)(*local_28 + (int)puVar9 * 4);
        local_28[2] = (int)param_2 - ((int)puVar10 - (int)puVar9);
        while (iVar6 = iVar6 + -1, -1 < iVar6) {
          *puVar4 = puVar4[(int)puVar10 - (int)puVar9];
          puVar4 = puVar4 + 1;
        }
        iVar6 = local_28[2];
        iVar8 = local_28[1];
        if (iVar8 <= iVar6 * 2) {
          ExceptionList = local_10;
          return local_14;
        }
        if (iVar8 <= iVar6) {
          ExceptionList = local_10;
          return local_14;
        }
        if (iVar8 == iVar6) {
          ExceptionList = local_10;
          return local_14;
        }
        if (iVar6 < 1) {
          FID_conflict__free((void *)*local_28);
          *piVar3 = 0;
        }
        else if (*local_28 == 0) {
          iVar8 = FUN_004c554b();
          *piVar3 = iVar8;
        }
        else {
          iVar8 = FUN_004c553b(*local_28,iVar6 * 4,uVar2);
          *piVar3 = iVar8;
        }
        piVar3[1] = iVar6;
        ExceptionList = local_10;
        return local_14;
      }
      if ((iVar6 <= param_1) && (param_1 < local_1c[2] + iVar6)) {
        local_18 = operator_new(0xc);
        uVar12 = 0;
        *local_18 = 0;
        *(undefined4 *)(local_18 + 1) = 0;
        *(undefined1 **)local_18 = &DAT_00bfe12c;
        local_30 = param_1 - iVar6;
        puVar4 = (undefined4 *)FUN_00637a90(&local_2c,local_30);
        uVar5 = *(undefined4 *)local_18;
        *(undefined4 *)local_18 = *puVar4;
        *puVar4 = uVar5;
        piVar7 = (int *)(local_2c + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        uVar5 = FUN_0049fd60(&local_2c,param_2);
        local_8 = 5;
        FUN_006831f0(uVar5);
        local_8 = 0xffffffff;
        piVar7 = (int *)(local_2c + -8);
        *(undefined4 *)((int)local_18 + 4) = uVar12;
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        uVar2 = FUN_0044ec90();
        *(uint *)(local_18 + 1) = uVar2 & 0xffff;
        iVar8 = piVar3[4] + 1;
        if (piVar3[3] < iVar8) {
          FUN_00409cf0(iVar8 / 2 + piVar3[4] + 9 & 0xfffffff8);
        }
        iVar8 = piVar3[4];
        piVar3[4] = iVar8 + 1;
        *(undefined8 **)(*piVar1 + iVar8 * 4) = local_18;
        puVar4 = (undefined4 *)FUN_006379a0(&local_30,0,local_30);
        puVar10 = local_24;
        uVar5 = *local_1c;
        *local_1c = *puVar4;
        *puVar4 = uVar5;
        piVar7 = (int *)(local_30 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        uVar5 = FUN_0049fd60(&param_2,param_2);
        local_8 = 6;
        FUN_006831f0(uVar5);
        piVar7 = (int *)((int)param_2 + -8);
        local_1c[1] = uVar12;
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        local_1c[2] = param_1 - iVar6 & 0xffff;
        puVar10 = puVar10 + 1;
        puVar4 = local_1c;
        puVar9 = puVar10;
        if ((int)puVar10 < local_20[4]) {
          do {
            iVar6 = piVar3[4];
            iVar8 = iVar6 + 1;
            param_2 = *(undefined1 **)(local_20[2] + (int)puVar9 * 4);
            if (piVar3[3] < iVar8) {
              if (iVar8 < 0) {
                iVar8 = iVar6 + 2;
              }
              uVar2 = iVar6 + 9 + (iVar8 >> 1) & 0xfffffff8;
              if (piVar3[3] != uVar2) {
                if ((int)uVar2 < 1) {
                  FID_conflict__free((void *)*piVar1);
                  *piVar1 = 0;
                }
                else if (*piVar1 == 0) {
                  iVar6 = FUN_004c554b();
                  *piVar1 = iVar6;
                }
                else {
                  iVar6 = FUN_004c553b(*piVar1,uVar2 * 4);
                  *piVar1 = iVar6;
                }
                piVar3[3] = uVar2;
              }
            }
            puVar4 = (undefined4 *)piVar3[4];
            puVar9 = puVar9 + 1;
            piVar3[4] = (int)puVar4 + 1;
            *(undefined1 **)(*piVar1 + (int)puVar4 * 4) = param_2;
          } while ((int)puVar9 < local_20[4]);
        }
        FUN_004add00(puVar10,local_20[4],puVar4);
        ExceptionList = local_10;
        return local_14;
      }
      local_24 = local_24 + 1;
      iVar6 = local_1c[2] + iVar6;
    } while ((int)local_24 < (int)local_18);
  }
  ExceptionList = local_10;
  return local_14;
}

