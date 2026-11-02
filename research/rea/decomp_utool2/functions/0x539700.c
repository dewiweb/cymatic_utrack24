// rea decompile_all
// name: FUN_00539700
// address: 0x539700
// body: available
// range: 0x539700-0x539ca2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00539700(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  byte extraout_var;
  int *in_ECX;
  uint uVar8;
  bool bVar9;
  undefined4 *local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 *local_38;
  int local_34;
  uint local_30;
  undefined4 *local_2c;
  int local_28;
  undefined1 *local_24;
  int *local_20;
  undefined1 *local_1c;
  uint local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0070dd78;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = 0;
  local_30 = 0;
  local_8 = 0;
  uStack_7 = 0;
  local_20 = in_ECX;
  (**(code **)(*in_ECX + 4))();
  if (param_1 == (undefined4 *)0x0) goto LAB_00539c67;
  puVar4 = (undefined4 *)in_ECX[6];
  if (puVar4 != (undefined4 *)0x0) {
    in_ECX[6] = 0;
    LOCK();
    piVar3 = puVar4 + 1;
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*puVar4)();
    }
  }
  local_24 = &DAT_00bfe12c;
  local_1c = &DAT_00bfe12c;
  local_8 = 2;
  piVar3 = (int *)FUN_005b2660();
  iVar5 = *piVar3;
  *piVar3 = (int)local_24;
  piVar3 = (int *)(local_30 - 8);
  local_24 = (undefined1 *)iVar5;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  iVar5 = in_ECX[2];
  if ((iVar5 == 3) || (iVar5 == 4)) {
    puVar4 = (undefined4 *)FUN_00635a10(&local_30);
    puVar1 = (undefined1 *)*puVar4;
    *puVar4 = local_1c;
    piVar3 = (int *)(local_30 - 8);
    local_1c = puVar1;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar3);
      }
    }
  }
  else if (iVar5 == 5) {
    FUN_00635e10();
  }
  if (param_1[6] == 0) {
    local_48 = operator_new(0x1c);
    local_8 = 3;
    FUN_005b2560(in_ECX[2]);
    _local_8 = CONCAT31(uStack_7,4);
    local_30 = 1;
    iVar5 = FUN_0054cec0();
    if (in_ECX[6] != iVar5) {
      if (iVar5 != 0) {
        LOCK();
        *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
        UNLOCK();
      }
      puVar4 = (undefined4 *)in_ECX[6];
      in_ECX[6] = iVar5;
      if (puVar4 != (undefined4 *)0x0) {
        LOCK();
        piVar3 = puVar4 + 1;
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*puVar4)();
        }
      }
    }
LAB_00539bfd:
    local_8 = 2;
    uStack_7 = 0;
    piVar3 = local_2c + -2;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar3);
      }
    }
  }
  else {
    local_30 = 0;
    uVar8 = 0;
    if (0 < (int)param_1[6]) {
      do {
        FUN_00410f30(&local_2c);
        puVar4 = local_2c;
        if (local_2c[3] == 0) {
          piVar3 = (int *)FUN_00410ea0();
          local_18 = uVar8 | 2;
          if (((undefined1 *)*piVar3 != local_24) && (iVar5 = FUN_0045c1e0(*piVar3), iVar5 != 0))
          goto LAB_005398f1;
          local_11 = '\x01';
        }
        else {
LAB_005398f1:
          local_11 = '\0';
        }
        if ((local_18 & 2) != 0) {
          local_18 = local_18 & 0xfffffffd;
          piVar3 = (int *)(local_34 + -8);
          if (piVar3 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar3);
            }
          }
        }
        if (local_11 != '\0') {
          local_28 = 0;
          if (0 < (int)puVar4[6]) {
            do {
              FUN_00410f30(&local_38);
              puVar2 = local_38;
              FUN_00410ea0();
              local_8 = 8;
              FUN_00636a10();
              local_8 = 10;
              piVar3 = (int *)(local_3c + -8);
              if (piVar3 != &DAT_00bfe124) {
                LOCK();
                iVar5 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar5 == 0) {
                  FID_conflict__free(piVar3);
                }
              }
              iVar5 = local_40;
              if (puVar2[3] == 0) {
                if ((local_1c == PTR_DAT_00c7ed54) || (iVar6 = FUN_0045c1e0(local_1c), iVar6 == 0))
                {
                  FUN_0045e080(iVar5);
                  bVar9 = (bool)(extraout_var >> 7 ^ 1);
                }
                else {
                  puVar7 = (undefined4 *)FUN_00410ea0();
                  local_18 = local_18 | 4;
                  if ((undefined1 *)*puVar7 == local_1c) {
                    bVar9 = true;
                  }
                  else {
                    iVar6 = FUN_0045c1e0(*puVar7);
                    bVar9 = iVar6 == 0;
                  }
                }
                local_11 = '\x01';
                if (bVar9 == false) goto LAB_00539a1f;
              }
              else {
LAB_00539a1f:
                local_11 = '\0';
              }
              if ((local_18 & 4) != 0) {
                local_18 = local_18 & 0xfffffffb;
                piVar3 = (int *)(local_44 + -8);
                if (piVar3 != &DAT_00bfe124) {
                  LOCK();
                  iVar6 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar6 == 0) {
                    FID_conflict__free(piVar3);
                  }
                }
              }
              if (local_11 != '\0') {
                piVar3 = (int *)FUN_0054ce90(&local_48,(char)local_20[3],(char)local_20[5]);
                puVar4 = local_2c;
                iVar6 = local_20[6];
                local_20[6] = *piVar3;
                *piVar3 = iVar6;
                if (local_48 != (undefined4 *)0x0) {
                  LOCK();
                  piVar3 = local_48 + 1;
                  iVar6 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)*local_48)();
                  }
                }
                piVar3 = (int *)(iVar5 + -8);
                if (piVar3 != &DAT_00bfe124) {
                  LOCK();
                  iVar5 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar5 == 0) {
                    FID_conflict__free(piVar3);
                  }
                }
                LOCK();
                piVar3 = puVar2 + 1;
                iVar5 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)*puVar2)();
                }
                break;
              }
              piVar3 = (int *)(iVar5 + -8);
              if (piVar3 != &DAT_00bfe124) {
                LOCK();
                iVar5 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar5 == 0) {
                  FID_conflict__free(piVar3);
                }
              }
              LOCK();
              piVar3 = puVar2 + 1;
              iVar5 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)*puVar2)();
              }
              local_28 = local_28 + 1;
            } while (local_28 < (int)puVar4[6]);
          }
          if (local_20[6] != 0) {
            local_8 = 2;
            LOCK();
            piVar3 = puVar4 + 1;
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            in_ECX = local_20;
            if (iVar5 == 1) {
              (**(code **)*puVar4)();
              in_ECX = local_20;
            }
            break;
          }
        }
        local_8 = 2;
        LOCK();
        piVar3 = puVar4 + 1;
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*puVar4)();
        }
        local_30 = local_30 + 1;
        in_ECX = local_20;
        uVar8 = local_18;
      } while ((int)local_30 < (int)param_1[6]);
    }
    if (in_ECX[6] == 0) {
      operator_new(0x1c);
      local_8 = 0xb;
      FUN_005b2560(in_ECX[2]);
      _local_8 = CONCAT31(uStack_7,0xc);
      local_30 = local_18 | 8;
      iVar5 = FUN_0054cec0();
      local_2c = local_48;
      if (in_ECX[6] != iVar5) {
        if (iVar5 != 0) {
          LOCK();
          *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
          UNLOCK();
        }
        puVar4 = (undefined4 *)in_ECX[6];
        in_ECX[6] = iVar5;
        if (puVar4 != (undefined4 *)0x0) {
          LOCK();
          piVar3 = puVar4 + 1;
          iVar5 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)*puVar4)();
            local_2c = local_48;
          }
        }
      }
      goto LAB_00539bfd;
    }
  }
  piVar3 = (int *)(local_1c + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_8 = 0;
  piVar3 = (int *)((int)local_24 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar3);
    }
  }
LAB_00539c67:
  if (in_ECX[6] != 0) {
    FUN_0054cdd0();
  }
  (**(code **)(*in_ECX + 8))();
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = param_1 + 1;
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*param_1)();
    }
  }
  ExceptionList = local_10;
  return;
}

