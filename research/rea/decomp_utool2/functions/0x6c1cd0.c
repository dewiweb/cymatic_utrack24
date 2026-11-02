// rea decompile_all
// name: FUN_006c1cd0
// address: 0x6c1cd0
// body: available
// range: 0x6c1cd0-0x6c21dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c1cd0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 **ppuVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 **ppuVar13;
  int iVar14;
  undefined4 *local_80;
  void *local_7c;
  int local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  void *local_64;
  int local_5c;
  void *local_58;
  undefined4 *local_54;
  void *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 **local_3c;
  undefined4 *local_38;
  undefined4 **local_34;
  int *local_30;
  undefined4 *local_2c [2];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00725577;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = param_1;
  uVar3 = FUN_006c2400(local_14);
  *(undefined1 *)(param_1 + 3) = uVar3;
  _eh_vector_constructor_iterator_(local_2c,8,3,FUN_0069e190,FUN_004918a0);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  FUN_0063a920(&local_68,&DAT_00c8aa04);
  if (local_68 == (undefined4 *)0x0) {
    local_44 = 0;
  }
  else {
    local_44 = local_68[8];
  }
  local_40 = 0;
  if (0 < local_44) {
    do {
      piVar5 = (int *)FUN_0063a9b0(&local_80,local_40);
      puVar1 = local_80;
      local_54 = (undefined4 *)*piVar5;
      if (local_54 != (undefined4 *)0x0) {
        LOCK();
        local_54[1] = local_54[1] + 1;
        UNLOCK();
      }
      local_50 = (void *)0x0;
      local_4c = 0;
      local_48 = 0;
      local_8 = CONCAT31(local_8._1_3_,2);
      local_38 = local_54;
      if ((0 < local_74) && (local_80 != (undefined4 *)0x0)) {
        local_34 = &local_80;
        uVar6 = FUN_00447770(&local_34);
        if (uVar6 < (uint)puVar1[0xb]) {
          FUN_00410320(uVar6);
        }
      }
      FID_conflict__free(local_7c);
      if (local_80 != (undefined4 *)0x0) {
        LOCK();
        piVar5 = local_80 + 1;
        iVar7 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)*local_80)(1);
        }
      }
      iVar7 = FUN_006c1ba0();
      iVar14 = 0;
      if (0 < iVar7) {
        do {
          puVar8 = (undefined4 *)FUN_006c1ac0(&local_70,iVar14);
          puVar1 = local_2c[iVar14 * 2];
          local_2c[iVar14 * 2] = (undefined4 *)*puVar8;
          *puVar8 = puVar1;
          uVar2 = *(undefined4 *)(local_24 + iVar14 * 8 + -4);
          *(undefined4 *)(local_24 + iVar14 * 8 + -4) = puVar8[1];
          puVar8[1] = uVar2;
          if (local_6c != (undefined4 *)0x0) {
            piVar5 = local_6c + 1;
            *piVar5 = *piVar5 + -1;
            if (*piVar5 == 0) {
              (**(code **)*local_6c)(1);
            }
          }
          if (local_70 != (undefined4 *)0x0) {
            piVar5 = local_70 + 1;
            *piVar5 = *piVar5 + -1;
            if (*piVar5 == 0) {
              (**(code **)*local_70)(1);
            }
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar7);
        local_38 = local_54;
      }
      FUN_0048c930(&local_3c);
      ppuVar13 = local_3c;
      local_8._0_1_ = 3;
      if (local_3c == DAT_00c8aa50) {
        ppuVar9 = operator_new(0x10);
        ppuVar9[1] = (undefined4 *)0x1;
        *ppuVar9 = juce::RelativePointPath::StartSubPath::vftable;
        ppuVar9[2] = local_2c[0];
        if (local_2c[0] != (undefined4 *)0x0) {
          local_2c[0][1] = local_2c[0][1] + 1;
        }
        ppuVar9[3] = local_2c[1];
        local_34 = ppuVar9;
        if (local_2c[1] != (undefined4 *)0x0) {
          local_2c[1][1] = local_2c[1][1] + 1;
        }
LAB_006c1fa2:
        if (ppuVar9 != (undefined4 **)0x0) {
          iVar7 = local_30[2];
          iVar14 = iVar7 + 1;
          if (local_30[1] < iVar14) {
            if (iVar14 < 0) {
              iVar14 = iVar7 + 2;
            }
            uVar6 = iVar7 + 9 + (iVar14 >> 1) & 0xfffffff8;
            if (local_30[1] != uVar6) {
              if ((int)uVar6 < 1) {
                FID_conflict__free((void *)*local_30);
                *local_30 = 0;
              }
              else if (*local_30 == 0) {
                iVar7 = FUN_004c554b();
                *local_30 = iVar7;
              }
              else {
                iVar7 = FUN_004c553b(*local_30,uVar6 * 4);
                *local_30 = iVar7;
              }
              local_30[1] = uVar6;
            }
          }
          piVar5 = local_30;
          iVar7 = local_30[2];
          local_30[2] = iVar7 + 1;
          *(undefined4 ***)(*local_30 + iVar7 * 4) = ppuVar9;
          if ((*(char *)((int)local_30 + 0xd) == '\0') && (cVar4 = FUN_0069d4a0(), cVar4 == '\0')) {
            uVar3 = 0;
          }
          else {
            uVar3 = 1;
          }
          *(undefined1 *)((int)piVar5 + 0xd) = uVar3;
        }
      }
      else {
        if (local_3c == DAT_00c8aa58) {
          ppuVar9 = operator_new(8);
          ppuVar9[1] = (undefined4 *)0x2;
          *ppuVar9 = juce::RelativePointPath::CloseSubPath::vftable;
          local_34 = ppuVar9;
          goto LAB_006c1fa2;
        }
        if (local_3c == DAT_00c8aa84) {
          ppuVar9 = operator_new(0x10);
          ppuVar9[1] = (undefined4 *)0x3;
          *ppuVar9 = juce::RelativePointPath::LineTo::vftable;
          ppuVar9[2] = local_2c[0];
          if (local_2c[0] != (undefined4 *)0x0) {
            local_2c[0][1] = local_2c[0][1] + 1;
          }
          ppuVar9[3] = local_2c[1];
          local_34 = ppuVar9;
          if (local_2c[1] != (undefined4 *)0x0) {
            local_2c[1][1] = local_2c[1][1] + 1;
          }
          goto LAB_006c1fa2;
        }
        if (local_3c == DAT_00c8aa10) {
          operator_new(0x18);
          local_8 = CONCAT31(local_8._1_3_,4);
          ppuVar9 = (undefined4 **)FUN_0069ce60(local_2c,local_24);
LAB_006c1f9c:
          local_8._0_1_ = 3;
          goto LAB_006c1fa2;
        }
        if (local_3c == DAT_00c8aa90) {
          local_58 = operator_new(0x20);
          local_8 = CONCAT31(local_8._1_3_,5);
          ppuVar9 = (undefined4 **)FUN_0069ca70(local_2c,local_24,local_1c);
          goto LAB_006c1f9c;
        }
      }
      ppuVar13 = ppuVar13 + -2;
      if (ppuVar13 != (undefined4 **)&DAT_00bfe124) {
        LOCK();
        puVar1 = *ppuVar13;
        *ppuVar13 = (undefined4 *)((int)*ppuVar13 + -1);
        UNLOCK();
        if (puVar1 == (undefined4 *)0x0) {
          FID_conflict__free(ppuVar13);
        }
      }
      puVar1 = local_38;
      if ((0 < local_48) && (local_38 != (undefined4 *)0x0)) {
        uVar6 = local_38[0xb];
        if (0 < (int)uVar6) {
          uVar12 = 0;
          do {
            if (&local_54 == *(undefined4 ***)(local_38[9] + uVar12 * 4)) goto LAB_006c20b9;
            uVar10 = (int)(uVar6 + uVar12) / 2;
            if (uVar10 == uVar12) break;
            uVar11 = uVar10;
            if (&local_54 < *(undefined4 ***)(local_38[9] + uVar10 * 4)) {
              uVar11 = uVar12;
              uVar6 = uVar10;
            }
            uVar12 = uVar11;
          } while ((int)uVar11 < (int)uVar6);
        }
        uVar12 = 0xffffffff;
LAB_006c20b9:
        if (uVar12 < (uint)local_38[0xb]) {
          iVar14 = local_38[0xb] - 1;
          local_38[0xb] = iVar14;
          iVar14 = iVar14 - uVar12;
          iVar7 = local_38[9] + uVar12 * 4;
          if (0 < iVar14) {
            FUN_004c1df0(iVar7,iVar7 + 4,iVar14 * 4);
          }
          iVar7 = puVar1[0xb];
          iVar14 = 0;
          if (0 < iVar7 * 2) {
            iVar14 = iVar7 * 2;
          }
          if (iVar14 < (int)puVar1[10]) {
            if (iVar7 < 0x10) {
              iVar7 = 0x10;
            }
            if (iVar7 < (int)puVar1[10]) {
              FUN_00409cf0(iVar7);
            }
          }
        }
      }
      FID_conflict__free(local_50);
      if (puVar1 != (undefined4 *)0x0) {
        LOCK();
        piVar5 = puVar1 + 1;
        iVar7 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)*puVar1)(1);
        }
      }
      local_40 = local_40 + 1;
    } while (local_40 < local_44);
  }
  puVar1 = local_68;
  if ((0 < local_5c) && (local_68 != (undefined4 *)0x0)) {
    local_3c = &local_68;
    uVar6 = FUN_00447770(&local_3c);
    if (uVar6 < (uint)puVar1[0xb]) {
      FUN_00410320(uVar6);
    }
  }
  FID_conflict__free(local_64);
  if (local_68 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = local_68 + 1;
    iVar7 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)*local_68)(1);
    }
  }
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_2c,8,3,FUN_004918a0);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

