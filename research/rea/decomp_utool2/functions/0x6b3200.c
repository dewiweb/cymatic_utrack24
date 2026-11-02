// rea decompile_all
// name: FUN_006b3200
// address: 0x6b3200
// body: available
// range: 0x6b3200-0x6b368d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b3200(int param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int in_ECX;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *local_58;
  void *local_54;
  int local_4c;
  void *local_48;
  uint local_44;
  int local_40;
  void *local_3c;
  uint local_38;
  int local_34;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00723c0c;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (void *)0x0;
  local_48 = (void *)0x0;
  local_44 = 0;
  local_18 = *(int *)(param_1 + 0x30);
  local_40 = 0;
  local_8 = 0;
  local_28 = in_ECX;
  if (0 < local_18) {
    FUN_00409cf0(local_18 / 2 + local_18 + 8 & 0xfffffff8);
    local_14 = local_48;
  }
  local_3c = (void *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_48 = local_14;
  if (0 < local_18) {
    FUN_00409cf0(local_18 / 2 + local_18 + 8 & 0xfffffff8);
  }
  local_24 = 0;
  uVar10 = local_38;
  pvVar4 = local_3c;
  iVar5 = local_34;
  if (0 < local_18) {
    do {
      if (local_24 < *(uint *)(param_1 + 0x30)) {
        local_20 = *(undefined4 *)(*(int *)(param_1 + 0x28) + local_24 * 4);
      }
      else {
        local_20 = 0;
      }
      local_1c = iVar5 + 1;
      if ((int)uVar10 < local_1c) {
        iVar3 = local_1c;
        if (local_1c < 0) {
          iVar3 = iVar5 + 2;
        }
        uVar11 = iVar5 + 9 + (iVar3 >> 1) & 0xfffffff8;
        if (uVar10 != uVar11) {
          uVar10 = uVar11;
          if ((int)uVar11 < 1) {
            FID_conflict__free(pvVar4);
            pvVar4 = (void *)0x0;
            local_3c = pvVar4;
          }
          else if (pvVar4 == (void *)0x0) {
            pvVar4 = (void *)FUN_004c554b();
            local_3c = pvVar4;
          }
          else {
            pvVar4 = (void *)FUN_004c553b(pvVar4,uVar11 * 4,uVar2);
            local_3c = pvVar4;
          }
        }
      }
      local_24 = local_24 + 1;
      *(int *)((int)pvVar4 + iVar5 * 4) = local_20;
      iVar5 = local_1c;
    } while ((int)local_24 < local_18);
    local_34 = local_1c;
    local_38 = uVar10;
  }
  if (*param_2 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = *(int *)(*param_2 + 0x20);
  }
  local_24 = 0;
  if (0 < local_20) {
    do {
      FUN_0063a9b0(&local_58,local_24);
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_006b3cf0();
      iVar5 = FUN_006b3c10();
      piVar6 = (int *)(local_1c + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      if (iVar5 == 0) {
        FUN_0063aae0(&local_18);
        iVar5 = 0;
        if (0 < *(int *)(local_28 + 0x1c)) {
          do {
            piVar6 = *(int **)(*(int *)(local_28 + 0x14) + iVar5 * 4);
            if (piVar6[1] == local_18) {
              piVar7 = (int *)(local_18 + -8);
              if (piVar7 != &DAT_00bfe124) {
                LOCK();
                iVar5 = *piVar7;
                *piVar7 = *piVar7 + -1;
                UNLOCK();
                if (iVar5 == 0) {
                  FID_conflict__free(piVar7);
                }
              }
              iVar5 = (**(code **)(*piVar6 + 4))(&local_58,param_1);
              piVar6 = (int *)FUN_006b3cf0();
              piVar7 = (int *)(*piVar6 + -8);
              if (piVar7 != &DAT_00bfe124) {
                LOCK();
                *piVar7 = *piVar7 + 1;
                UNLOCK();
              }
              LOCK();
              iVar3 = *(int *)(iVar5 + 8);
              *(int *)(iVar5 + 8) = *piVar6;
              UNLOCK();
              piVar6 = (int *)(iVar3 + -8);
              if (piVar6 != &DAT_00bfe124) {
                LOCK();
                iVar3 = *piVar6;
                *piVar6 = *piVar6 + -1;
                UNLOCK();
                if (iVar3 == 0) {
                  FID_conflict__free(piVar6);
                }
              }
              piVar6 = (int *)(local_2c + -8);
              if (piVar6 != &DAT_00bfe124) {
                LOCK();
                iVar3 = *piVar6;
                *piVar6 = *piVar6 + -1;
                UNLOCK();
                if (iVar3 == 0) {
                  FID_conflict__free(piVar6);
                }
              }
              if (iVar5 == 0) goto LAB_006b3535;
              goto LAB_006b34bd;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(local_28 + 0x1c));
        }
        piVar6 = (int *)(local_18 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar6);
          }
        }
      }
      else {
LAB_006b34bd:
        iVar3 = local_40 + 1;
        if ((int)local_44 < iVar3) {
          iVar8 = iVar3;
          if (iVar3 < 0) {
            iVar8 = local_40 + 2;
          }
          uVar2 = local_40 + 9 + (iVar8 >> 1) & 0xfffffff8;
          if (local_44 != uVar2) {
            if ((int)uVar2 < 1) {
              FID_conflict__free(local_14);
              local_48 = (void *)0x0;
              local_44 = uVar2;
              local_14 = local_48;
            }
            else if (local_14 == (void *)0x0) {
              local_48 = (void *)FUN_004c554b();
              local_44 = uVar2;
              local_14 = local_48;
            }
            else {
              local_48 = (void *)FUN_004c553b(local_14,uVar2 * 4);
              local_44 = uVar2;
              local_14 = local_48;
            }
          }
        }
        piVar6 = (int *)((int)local_14 + local_40 * 4);
        local_40 = iVar3;
        if (piVar6 != (int *)0x0) {
          *piVar6 = iVar5;
        }
      }
LAB_006b3535:
      puVar1 = local_58;
      if ((0 < local_4c) && (local_58 != (undefined4 *)0x0)) {
        uVar2 = local_58[0xb];
        if (0 < (int)uVar2) {
          iVar5 = local_58[9];
          uVar10 = 0;
          do {
            if (&local_58 == *(undefined4 ***)(iVar5 + uVar10 * 4)) goto LAB_006b3581;
            uVar11 = (int)(uVar2 + uVar10) / 2;
            if (uVar11 == uVar10) break;
            uVar9 = uVar11;
            if (&local_58 < *(undefined4 ***)(iVar5 + uVar11 * 4)) {
              uVar9 = uVar10;
              uVar2 = uVar11;
            }
            uVar10 = uVar9;
          } while ((int)uVar9 < (int)uVar2);
        }
        uVar10 = 0xffffffff;
LAB_006b3581:
        if (uVar10 < (uint)local_58[0xb]) {
          iVar3 = local_58[0xb] - 1;
          local_58[0xb] = iVar3;
          iVar3 = iVar3 - uVar10;
          iVar5 = local_58[9] + uVar10 * 4;
          if (0 < iVar3) {
            FUN_004c1df0(iVar5,iVar5 + 4,iVar3 * 4);
          }
          iVar5 = puVar1[0xb];
          iVar3 = puVar1[10];
          iVar8 = 0;
          if (0 < iVar5 * 2) {
            iVar8 = iVar5 * 2;
          }
          if (iVar8 < iVar3) {
            if (iVar5 < 0x10) {
              iVar5 = 0x10;
            }
            if (iVar5 < iVar3) {
              FUN_00409cf0(iVar5);
            }
          }
        }
      }
      FID_conflict__free(local_54);
      if (local_58 != (undefined4 *)0x0) {
        LOCK();
        piVar6 = local_58 + 1;
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*local_58)(1);
        }
      }
      local_24 = local_24 + 1;
      pvVar4 = local_3c;
    } while ((int)local_24 < local_20);
  }
  local_8 = local_8 & 0xffffff00;
  iVar5 = local_34;
  while (0 < iVar5) {
    puVar1 = *(undefined4 **)((int)pvVar4 + iVar5 * 4 + -4);
    iVar5 = iVar5 + -1;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  FID_conflict__free(pvVar4);
  pvVar4 = local_14;
  iVar5 = local_40;
  if (0 < local_40) {
    FUN_006e9910(0);
    for (iVar5 = iVar5 + -2; -1 < iVar5; iVar5 = iVar5 + -1) {
      FUN_006cfc30(*(undefined4 *)((int)pvVar4 + iVar5 * 4 + 4));
    }
  }
  FID_conflict__free(pvVar4);
  ExceptionList = local_10;
  return;
}

