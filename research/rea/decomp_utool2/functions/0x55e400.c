// rea decompile_all
// name: FUN_0055e400
// address: 0x55e400
// body: available
// range: 0x55e400-0x55eb9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055e400(int param_1)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  undefined4 uVar8;
  int *in_ECX;
  int *piVar9;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *pcVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  bool bVar16;
  int local_90;
  int local_8c;
  int local_88;
  int *local_84;
  char *local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  char *local_68;
  int *local_64;
  int local_60;
  int local_5c;
  int *local_58;
  int local_54;
  int local_50;
  int local_4c;
  char *local_48;
  undefined8 local_44;
  undefined4 *local_3c;
  char acStack_1b [6];
  undefined1 uStack_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00711bc9;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = CONCAT44(in_ECX,(uint)local_44);
  local_60 = param_1;
  local_70 = 0;
  local_8 = 0;
  local_64 = in_ECX;
  puVar4 = (undefined4 *)FUN_00636a10();
  local_68 = "_TempTake";
  FUN_0044ec90();
  iVar5 = FUN_0045e0d0(*puVar4);
  piVar9 = (int *)(local_6c + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  if (iVar5 == 0) {
    *local_64 = 0;
  }
  else {
    pvVar6 = operator_new(0xa0);
    local_44 = CONCAT44(pvVar6,(uint)local_44);
    iVar7 = FUN_0055de80();
    iVar5 = 0;
    if (iVar7 != 0) {
      LOCK();
      *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
      UNLOCK();
      iVar5 = iVar7;
      local_70 = iVar7;
    }
    FUN_00636a10(&stack0xfffffe98);
    FUN_006377c0();
    local_8 = CONCAT31(local_8._1_3_,1);
    puVar4 = (undefined4 *)FUN_00635a10(&local_74);
    uVar8 = *(undefined4 *)(iVar5 + 8);
    *(undefined4 *)(iVar5 + 8) = *puVar4;
    *puVar4 = uVar8;
    piVar9 = (int *)(local_74 + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar9 = (int *)(local_78 + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    puVar4 = (undefined4 *)FUN_00636970();
    *(undefined4 *)(iVar5 + 0x20) = *puVar4;
    *(undefined4 *)(iVar5 + 0x24) = puVar4[1];
    FUN_0045c990();
    iVar7 = *(int *)(iVar5 + 0xc);
    piVar9 = (int *)(iVar7 + -8);
    *(int *)(iVar5 + 0xc) = local_4c;
    local_4c = iVar7;
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    FUN_0045c990();
    iVar7 = *(int *)(iVar5 + 0x10);
    piVar9 = (int *)(iVar7 + -8);
    *(int *)(iVar5 + 0x10) = local_50;
    local_50 = iVar7;
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    puVar4 = (undefined4 *)FUN_00636a10();
    uVar8 = *(undefined4 *)(iVar5 + 0x14);
    *(undefined4 *)(iVar5 + 0x14) = *puVar4;
    *puVar4 = uVar8;
    piVar9 = (int *)(local_7c + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    *(undefined4 *)(iVar5 + 0x2c) = 0;
    *(undefined4 *)(iVar5 + 0x40) = 3;
    cVar3 = FUN_005b2750();
    if (cVar3 == '\0') {
      *(undefined4 *)(iVar5 + 0x40) = 4;
    }
    *(undefined4 *)(iVar5 + 0x30) = 0;
    *(undefined4 *)(iVar5 + 0x34) = 0;
    *(undefined4 *)(iVar5 + 0x38) = 0;
    *(undefined4 *)(iVar5 + 0x3c) = 0;
    FUN_0045c990();
    iVar7 = *(int *)(iVar5 + 0x18);
    piVar9 = (int *)(iVar7 + -8);
    *(int *)(iVar5 + 0x18) = local_54;
    local_54 = iVar7;
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    iVar7 = *(int *)(iVar5 + 0x98);
    *(undefined1 **)(iVar5 + 0x98) = &DAT_00bfe12c;
    piVar9 = (int *)(iVar7 + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    local_5c = 0;
    if (0 < *(int *)(local_60 + 8)) {
      do {
        iVar7 = local_5c;
        FUN_0040f6b0(&stack0xfffffe98,local_5c);
        FUN_00548e50();
        local_8 = CONCAT31(local_8._1_3_,2);
        if (0x18 < (int)local_3c[9]) {
          *(undefined4 *)(iVar5 + 0x40) = 4;
        }
        if (iVar7 == 0) {
          iVar7 = 0;
          if (0 < (int)local_3c[9]) {
            do {
              local_88 = FUN_0055d970();
              local_48 = acStack_1b + 2;
              acStack_1b[2] = 0;
              *(int *)(local_88 + 4) = iVar7;
              uVar14 = iVar7 + 1;
              local_44 = CONCAT44(uVar14,(uint)local_44);
              if ((int)uVar14 < 0) {
                uVar14 = -uVar14;
                do {
                  pcVar15 = local_48;
                  local_48 = pcVar15 + -1;
                  uVar13 = uVar14 / 10;
                  *local_48 = (char)uVar14 + (char)uVar13 * -10 + '0';
                  uVar14 = uVar13;
                } while (uVar13 != 0);
                local_48 = pcVar15 + -2;
                *local_48 = '-';
              }
              else {
                do {
                  local_48 = local_48 + -1;
                  uVar13 = uVar14 / 10;
                  *local_48 = (char)uVar14 + (char)uVar13 * -10 + '0';
                  uVar14 = uVar13;
                } while (uVar13 != 0);
              }
              iVar7 = -(int)local_48;
              pcVar15 = acStack_1b + iVar7 + 2;
              piVar9 = (int *)FUN_004bfe22();
              piVar9[1] = (uint)(&uStack_15 + iVar7) & 0xfffffffc;
              local_84 = piVar9 + 2;
              *piVar9 = 0;
              local_58 = local_84;
              local_80 = local_48;
              pcVar10 = local_48;
              while ((0 < (int)pcVar15 &&
                     (iVar7 = FUN_00443260(), pcVar10 = extraout_ECX, iVar7 != 0))) {
                FUN_0044ecc0();
                pcVar15 = pcVar15 + -1;
                pcVar10 = extraout_ECX_00;
              }
              *(undefined1 *)local_58 = 0;
              local_8._0_1_ = 3;
              FUN_00633d10(&local_90,pcVar10);
              local_8 = CONCAT31(local_8._1_3_,4);
              puVar4 = (undefined4 *)FUN_00637690();
              iVar7 = local_88;
              uVar8 = *(undefined4 *)(local_88 + 8);
              *(undefined4 *)(local_88 + 8) = *puVar4;
              *puVar4 = uVar8;
              piVar1 = (int *)(local_8c + -8);
              if (piVar1 != &DAT_00bfe124) {
                LOCK();
                iVar11 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar11 == 0) {
                  FID_conflict__free(piVar1);
                }
              }
              piVar1 = (int *)(local_90 + -8);
              if (piVar1 != &DAT_00bfe124) {
                LOCK();
                iVar11 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar11 == 0) {
                  FID_conflict__free(piVar1);
                }
              }
              local_8 = CONCAT31(local_8._1_3_,2);
              if (piVar9 != &DAT_00bfe124) {
                LOCK();
                iVar11 = *piVar9;
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (iVar11 == 0) {
                  FID_conflict__free(piVar9);
                }
              }
              *(undefined4 *)(iVar7 + 0xc) = 0xc1400000;
              *(undefined1 *)(iVar7 + 0x10) = 0;
              *(undefined4 *)(iVar7 + 0x14) = 0;
              iVar7 = local_44._4_4_;
            } while (local_44._4_4_ < (int)local_3c[9]);
          }
          *(undefined4 *)(iVar5 + 0x38) = local_3c[6];
          *(undefined4 *)(iVar5 + 0x3c) = local_3c[8];
        }
        puVar4 = local_3c;
        iVar7 = *(int *)(iVar5 + 0x58);
        iVar11 = iVar7 + 1;
        if ((int)*(uint *)(iVar5 + 0x54) < iVar11) {
          if (iVar11 < 0) {
            iVar11 = iVar7 + 2;
          }
          uVar14 = iVar7 + 9 + (iVar11 >> 1) & 0xfffffff8;
          if (*(uint *)(iVar5 + 0x54) != uVar14) {
            if ((int)uVar14 < 1) {
              FID_conflict__free(*(void **)(iVar5 + 0x50));
              *(undefined4 *)(iVar5 + 0x50) = 0;
            }
            else if (*(int *)(iVar5 + 0x50) == 0) {
              uVar8 = FUN_004c554b();
              *(undefined4 *)(iVar5 + 0x50) = uVar8;
            }
            else {
              uVar8 = FUN_004c553b(*(int *)(iVar5 + 0x50));
              *(undefined4 *)(iVar5 + 0x50) = uVar8;
            }
            *(uint *)(iVar5 + 0x54) = uVar14;
          }
        }
        iVar7 = *(int *)(iVar5 + 0x58);
        *(int *)(iVar5 + 0x58) = iVar7 + 1;
        *(undefined4 **)(*(int *)(iVar5 + 0x50) + iVar7 * 4) = puVar4;
        if (puVar4 != (undefined4 *)0x0) {
          LOCK();
          puVar4[1] = puVar4[1] + 1;
          UNLOCK();
        }
        uVar14 = 0;
        if (0 < (int)local_3c[0xc]) {
          bVar16 = local_3c[0xc] != 0;
          do {
            if (bVar16) {
              local_44._4_4_ = *(int *)(local_3c[10] + 4 + uVar14 * 8);
              uVar13 = *(uint *)(local_3c[10] + uVar14 * 8);
            }
            else {
              local_44._0_4_ = 0;
              uVar8 = (uint)local_44;
              local_44._4_4_ = 0;
              local_44._0_4_ = 0;
              uVar13 = (uint)local_44;
              local_44._0_4_ = uVar8;
            }
            iVar11 = uVar13 + *(uint *)(iVar5 + 0x30);
            iVar7 = *(int *)(iVar5 + 0x70);
            local_48 = (char *)(local_44._4_4_ + *(int *)(iVar5 + 0x34) +
                               (uint)CARRY4(uVar13,*(uint *)(iVar5 + 0x30)));
            iVar12 = iVar7 + 1;
            local_44 = CONCAT44(iVar11,(uint)local_44);
            if (*(int *)(iVar5 + 0x6c) < iVar12) {
              if (iVar12 < 0) {
                iVar12 = iVar7 + 2;
              }
              uVar13 = iVar7 + 9 + (iVar12 >> 1) & 0xfffffff8;
              if (*(uint *)(iVar5 + 0x6c) != uVar13) {
                if ((int)uVar13 < 1) {
                  FID_conflict__free(*(void **)(iVar5 + 0x68));
                  *(undefined4 *)(iVar5 + 0x68) = 0;
                }
                else if (*(int *)(iVar5 + 0x68) == 0) {
                  uVar8 = FUN_004c554b();
                  *(undefined4 *)(iVar5 + 0x68) = uVar8;
                }
                else {
                  uVar8 = FUN_004c553b(*(int *)(iVar5 + 0x68));
                  *(undefined4 *)(iVar5 + 0x68) = uVar8;
                }
                *(uint *)(iVar5 + 0x6c) = uVar13;
                iVar11 = local_44._4_4_;
              }
            }
            iVar7 = *(int *)(iVar5 + 0x70);
            *(int *)(iVar5 + 0x70) = iVar7 + 1;
            piVar9 = (int *)(*(int *)(iVar5 + 0x68) + iVar7 * 8);
            if (piVar9 != (int *)0x0) {
              *piVar9 = iVar11;
              piVar9[1] = (int)local_48;
            }
            uVar14 = uVar14 + 1;
            bVar16 = uVar14 < (uint)local_3c[0xc];
          } while ((int)uVar14 < (int)local_3c[0xc]);
        }
        uVar13 = local_3c[4];
        iVar7 = local_3c[5];
        puVar2 = (uint *)(iVar5 + 0x30);
        uVar14 = *puVar2;
        *puVar2 = *puVar2 + uVar13;
        *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + iVar7 + (uint)CARRY4(uVar14,uVar13);
        local_8 = local_8 & 0xffffff00;
        if (local_3c != (undefined4 *)0x0) {
          LOCK();
          piVar9 = local_3c + 1;
          iVar7 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)*local_3c)();
          }
        }
        local_5c = local_5c + 1;
      } while (local_5c < *(int *)(local_60 + 8));
    }
    *(undefined1 *)(iVar5 + 0x28) = 1;
    *local_64 = iVar5;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

