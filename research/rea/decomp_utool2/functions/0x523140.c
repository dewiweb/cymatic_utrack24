// rea decompile_all
// name: FUN_00523140
// address: 0x523140
// body: available
// range: 0x523140-0x523f4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00523140(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  byte *pbVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  bool bVar14;
  byte *pbStack_48;
  TypeDescriptor *pTStack_44;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ae99;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004eb7e0();
  in_ECX[0x4c] = juce::ComboBox::Listener::vftable;
  in_ECX[0x4d] = juce::ListBoxModel::vftable;
  *in_ECX = ProjectInspector_PopupChangeResolution::vftable;
  in_ECX[0x1c] = ProjectInspector_PopupChangeResolution::vftable;
  in_ECX[0x4c] = ProjectInspector_PopupChangeResolution::vftable;
  in_ECX[0x4d] = ProjectInspector_PopupChangeResolution::vftable;
  in_ECX[0x4e] = 0;
  in_ECX[0x4f] = 0;
  in_ECX[0x50] = 0;
  in_ECX[0x51] = 0;
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  in_ECX[0x55] = &DAT_00bfe12c;
  in_ECX[0x56] = 0;
  in_ECX[0x57] = 1;
  in_ECX[0x58] = 1;
  in_ECX[0x59] = 0;
  in_ECX[0x5a] = 0;
  in_ECX[0x5b] = 0;
  in_ECX[0x5c] = 0;
  in_ECX[0x5d] = 0;
  in_ECX[0x5e] = 0;
  in_ECX[0x5f] = 0;
  in_ECX[0x60] = 0;
  in_ECX[0x61] = 0;
  in_ECX[0x62] = 9;
  local_14 = (undefined4 *)&DAT_00bfe12c;
  local_8._0_1_ = 7;
  local_8._1_3_ = 0;
  pTStack_44 = (TypeDescriptor *)0x523280;
  FUN_006e8060();
  in_ECX[0x8e] = &DAT_00bfe12c;
  in_ECX[0x8f] = 0;
  in_ECX[0x90] = 1;
  in_ECX[0x91] = 1;
  in_ECX[0x92] = 0;
  in_ECX[0x93] = 0;
  in_ECX[0x94] = 0;
  in_ECX[0x95] = 0;
  in_ECX[0x96] = 0;
  in_ECX[0x97] = 0;
  in_ECX[0x98] = 0;
  in_ECX[0x99] = 0;
  in_ECX[0x9a] = 0;
  in_ECX[0x9b] = 9;
  local_14 = (undefined4 *)&DAT_00bfe12c;
  local_8._0_1_ = 0xc;
  FUN_006e8840();
  local_8._0_1_ = 0xe;
  uVar11 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    bVar14 = *(int *)(param_1 + 8) != 0;
    do {
      if (bVar14) {
        uVar3 = *(undefined4 *)(*(int *)param_1 + uVar11 * 4);
      }
      else {
        uVar3 = 0;
      }
      pTStack_44 = &ProjectExplorerBaseItem::RTTI_Type_Descriptor;
      pbStack_48 = (byte *)0x0;
      local_14 = (undefined4 *)FUN_006f6dd6(uVar3);
      iVar8 = in_ECX[0x50];
      iVar9 = iVar8 + 1;
      if ((int)in_ECX[0x4f] < iVar9) {
        if (iVar9 < 0) {
          iVar9 = iVar8 + 2;
        }
        uVar12 = iVar8 + 9 + (iVar9 >> 1) & 0xfffffff8;
        if (in_ECX[0x4f] != uVar12) {
          if ((int)uVar12 < 1) {
            FID_conflict__free((void *)in_ECX[0x4e]);
            in_ECX[0x4e] = 0;
          }
          else if (in_ECX[0x4e] == 0) {
            uVar3 = FUN_004c554b();
            in_ECX[0x4e] = uVar3;
          }
          else {
            pTStack_44 = (TypeDescriptor *)0x5233a4;
            uVar3 = FUN_004c553b();
            in_ECX[0x4e] = uVar3;
          }
          in_ECX[0x4f] = uVar12;
        }
      }
      iVar8 = in_ECX[0x50];
      in_ECX[0x50] = iVar8 + 1;
      puVar4 = (undefined4 *)(in_ECX[0x4e] + iVar8 * 4);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = local_14;
      }
      uVar11 = uVar11 + 1;
      bVar14 = uVar11 < *(uint *)(param_1 + 8);
    } while ((int)uVar11 < (int)*(uint *)(param_1 + 8));
  }
  if (in_ECX[0x50] == 1) {
    local_14 = DAT_00c7ebbc;
    local_8._0_1_ = 0xf;
    operator_new(0x28);
    param_1 = (byte *)FUN_00468a40();
    if (param_1 != (byte *)0x0) {
      LOCK();
      *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 1;
      UNLOCK();
    }
    FUN_00410ad0();
    local_8._0_1_ = 0x11;
    pTStack_44 = (TypeDescriptor *)0x523480;
    FUN_00637690();
    puVar4 = (undefined4 *)FUN_006377c0();
    local_8 = CONCAT31(local_8._1_3_,0x15);
    FUN_00636ec0();
    pbVar5 = (byte *)*puVar4;
    do {
      while( true ) {
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        if (-1 < (char)bVar2) break;
        bVar2 = *pbVar5;
        while ((bVar2 & 0xc0) == 0x80) {
          pbVar13 = pbVar5 + 1;
          pbVar5 = pbVar5 + 1;
          bVar2 = *pbVar13;
        }
      }
    } while (bVar2 != 0);
    pTStack_44 = (TypeDescriptor *)0x5234da;
    FUN_00644f50();
    piVar6 = (int *)(local_18 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    piVar6 = (int *)(local_1c + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    if (param_1 != (byte *)0x0) {
      LOCK();
      piVar6 = (int *)((int)param_1 + 4);
      iVar8 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (*(code *)**(undefined4 **)param_1)();
      }
    }
    local_8._0_1_ = 0x16;
    operator_new(0x28);
    param_1 = (byte *)FUN_00468a40();
    if (param_1 != (byte *)0x0) {
      LOCK();
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      UNLOCK();
    }
    local_8._0_1_ = 0x17;
    FUN_005bdf30();
    local_8._0_1_ = 0x18;
    pTStack_44 = (TypeDescriptor *)0x5235ac;
    FUN_00637690();
    puVar4 = (undefined4 *)FUN_006377c0();
    local_8 = CONCAT31(local_8._1_3_,0x1c);
    FUN_00636ec0();
    pbVar5 = (byte *)*puVar4;
    do {
      while( true ) {
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        if (-1 < (char)bVar2) break;
        bVar2 = *pbVar5;
        while ((bVar2 & 0xc0) == 0x80) {
          pbVar13 = pbVar5 + 1;
          pbVar5 = pbVar5 + 1;
          bVar2 = *pbVar13;
        }
      }
    } while (bVar2 != 0);
    pTStack_44 = (TypeDescriptor *)0x523607;
    FUN_00644f50();
    piVar6 = (int *)(local_18 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    piVar6 = local_14 + -2;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,0xe);
    if (param_1 != (byte *)0x0) {
      LOCK();
      pbVar5 = param_1 + 4;
      iVar8 = *(int *)pbVar5;
      *(int *)pbVar5 = *(int *)pbVar5 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (*(code *)**(undefined4 **)param_1)();
      }
    }
  }
  else {
    FUN_0045c990();
    local_8._0_1_ = 0x1e;
    pTStack_44 = (TypeDescriptor *)0x5236a1;
    operator_new(0x28);
    local_14 = (undefined4 *)FUN_00468a40();
    if (local_14 != (undefined4 *)0x0) {
      LOCK();
      local_14[1] = local_14[1] + 1;
      UNLOCK();
    }
    local_8 = CONCAT31(local_8._1_3_,0x20);
    FUN_00636ec0();
    pbVar13 = param_1;
    pbVar5 = param_1;
    do {
      while( true ) {
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        if (-1 < (char)bVar2) break;
        bVar2 = *pbVar5;
        while ((bVar2 & 0xc0) == 0x80) {
          pbVar1 = pbVar5 + 1;
          pbVar5 = pbVar5 + 1;
          bVar2 = *pbVar1;
        }
      }
    } while (bVar2 != 0);
    pTStack_44 = (TypeDescriptor *)0x52370d;
    FUN_00644f50();
    if (local_14 != (undefined4 *)0x0) {
      LOCK();
      piVar6 = local_14 + 1;
      iVar8 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)*local_14)();
      }
    }
    pbVar13 = pbVar13 + -8;
    local_8._0_1_ = 0xe;
    if (pbVar13 != (byte *)&DAT_00bfe124) {
      LOCK();
      iVar8 = *(int *)pbVar13;
      *(int *)pbVar13 = *(int *)pbVar13 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(pbVar13);
      }
    }
    FUN_0045c990();
    local_8._0_1_ = 0x22;
    pTStack_44 = (TypeDescriptor *)0x523777;
    operator_new(0x28);
    local_14 = (undefined4 *)FUN_00468a40();
    if (local_14 != (undefined4 *)0x0) {
      LOCK();
      local_14[1] = local_14[1] + 1;
      UNLOCK();
    }
    local_8 = CONCAT31(local_8._1_3_,0x24);
    FUN_00636ec0();
    pbVar13 = param_1;
    pbVar5 = param_1;
    do {
      while( true ) {
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        if (-1 < (char)bVar2) break;
        bVar2 = *pbVar5;
        while ((bVar2 & 0xc0) == 0x80) {
          pbVar1 = pbVar5 + 1;
          pbVar5 = pbVar5 + 1;
          bVar2 = *pbVar1;
        }
      }
    } while (bVar2 != 0);
    pTStack_44 = (TypeDescriptor *)0x5237e7;
    FUN_00644f50();
    if (local_14 != (undefined4 *)0x0) {
      LOCK();
      piVar6 = local_14 + 1;
      iVar8 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)*local_14)();
      }
    }
    pbVar13 = pbVar13 + -8;
    local_8 = CONCAT31(local_8._1_3_,0xe);
    if (pbVar13 != (byte *)&DAT_00bfe124) {
      LOCK();
      iVar8 = *(int *)pbVar13;
      *(int *)pbVar13 = *(int *)pbVar13 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(pbVar13);
      }
    }
    iVar8 = 0;
    if (0 < (int)in_ECX[0x50]) {
      do {
        FUN_005bdf30();
        param_1 = &stack0xffffffc0;
        pTStack_44 = (TypeDescriptor *)&local_18;
        pbStack_48 = (byte *)0x52388c;
        pbStack_48 = (byte *)FUN_00410ad0();
        local_8 = CONCAT31(local_8._1_3_,0x26);
        FUN_00637690();
        pbStack_48 = (byte *)0x5238ab;
        FUN_006377c0();
        pTStack_44 = (TypeDescriptor *)0x5238b5;
        FUN_00637730();
        param_1 = (byte *)FUN_006377c0();
        iVar9 = in_ECX[0x53];
        iVar10 = iVar9 + 1;
        if ((int)in_ECX[0x52] < iVar10) {
          if (iVar10 < 0) {
            iVar10 = iVar9 + 2;
          }
          uVar11 = iVar9 + 9 + (iVar10 >> 1) & 0xfffffff8;
          if (in_ECX[0x52] != uVar11) {
            if ((int)uVar11 < 1) {
              FID_conflict__free((void *)in_ECX[0x51]);
              in_ECX[0x51] = 0;
            }
            else if (in_ECX[0x51] == 0) {
              uVar3 = FUN_004c554b();
              in_ECX[0x51] = uVar3;
            }
            else {
              pTStack_44 = (TypeDescriptor *)0x52391b;
              uVar3 = FUN_004c553b();
              in_ECX[0x51] = uVar3;
            }
            in_ECX[0x52] = uVar11;
          }
        }
        iVar9 = in_ECX[0x53];
        in_ECX[0x53] = iVar9 + 1;
        piVar6 = (int *)(in_ECX[0x51] + iVar9 * 4);
        if (piVar6 != (int *)0x0) {
          *piVar6 = *(int *)param_1;
          *(undefined1 **)param_1 = &DAT_00bfe12c;
        }
        piVar6 = (int *)(local_1c + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        piVar6 = (int *)(local_18 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        local_8 = CONCAT31(local_8._1_3_,0xe);
        piVar6 = local_14 + -2;
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)in_ECX[0x50]);
    }
    (**(code **)(in_ECX[99] + 0x28))();
    puVar4 = (undefined4 *)in_ECX[0x66];
    if (puVar4 != in_ECX) {
      if (puVar4 == (undefined4 *)0x0) {
        if ((*(byte *)(in_ECX + 0x7d) & 1) != 0) {
          puVar4 = (undefined4 *)FUN_0068db10();
          *(byte *)(in_ECX + 0x7d) = *(byte *)(in_ECX + 0x7d) & 0xfe;
          if (puVar4 != (undefined4 *)0x0) {
            (**(code **)*puVar4)();
          }
          if (DAT_00c8a67c == 0) {
            param_1 = operator_new(0xd0);
            local_8._0_1_ = 0x27;
            DAT_00c8a67c = FUN_006cb960();
            local_8 = CONCAT31(local_8._1_3_,0xe);
          }
          FUN_00415ff0();
        }
      }
      else {
        piVar7 = (int *)puVar4[10];
        piVar6 = piVar7 + puVar4[0xc];
        for (; piVar7 != piVar6; piVar7 = piVar7 + 1) {
          if (in_ECX + 99 == (undefined4 *)*piVar7) {
            pTStack_44 = (TypeDescriptor *)((int)piVar7 - puVar4[10] >> 2);
            pbStack_48 = (byte *)0x523a4e;
            FUN_006cf0a0();
            goto LAB_00523aa3;
          }
        }
        pTStack_44 = (TypeDescriptor *)0xffffffff;
        pbStack_48 = (byte *)0x523a3a;
        FUN_006cf0a0();
      }
LAB_00523aa3:
      in_ECX[0x66] = in_ECX;
      if ((*(byte *)(in_ECX + 0x7d) & 2) != 0) {
        FUN_006ceba0();
      }
      if (((*(byte *)((int)in_ECX + 0x1f5) & 1) == 0) && (iVar8 = in_ECX[0xc], 0 < iVar8)) {
        do {
          if ((*(byte *)(*(int *)(in_ECX[10] + -4 + iVar8 * 4) + 0x69) & 1) == 0) break;
          iVar8 = iVar8 + -1;
        } while (0 < iVar8);
      }
      pTStack_44 = (TypeDescriptor *)0x523ade;
      FUN_00410380();
      FUN_006cedf0();
      FUN_006cef00();
    }
    if ((undefined4 *)in_ECX[0x81] != in_ECX + 0x4d) {
      in_ECX[0x81] = in_ECX + 0x4d;
      FUN_006e6400(&pbStack_48);
      FUN_006ce9f0(1);
      FUN_006e7e60();
    }
  }
  if (in_ECX != (undefined4 *)0xfffffed0) {
    piVar7 = (int *)in_ECX[200];
    iVar8 = in_ECX[0xca];
    piVar6 = piVar7 + iVar8;
    for (; piVar7 != piVar6; piVar7 = piVar7 + 1) {
      if (in_ECX + 0x4c == (undefined4 *)*piVar7) goto LAB_00523be5;
    }
    if (((int)in_ECX[0xc9] < iVar8 + 1) &&
       (uVar11 = iVar8 + 9 + (iVar8 + 1) / 2 & 0xfffffff8, in_ECX[0xc9] != uVar11)) {
      if ((int)uVar11 < 1) {
        FID_conflict__free((void *)in_ECX[200]);
        in_ECX[200] = 0;
      }
      else if ((void *)in_ECX[200] == (void *)0x0) {
        uVar3 = FUN_004c554b();
        in_ECX[200] = uVar3;
      }
      else {
        pTStack_44 = (TypeDescriptor *)0x523b9d;
        uVar3 = FUN_004c553b();
        in_ECX[200] = uVar3;
      }
      in_ECX[0xc9] = uVar11;
    }
    iVar8 = in_ECX[0xca];
    in_ECX[0xca] = iVar8 + 1;
    puVar4 = (undefined4 *)(in_ECX[200] + iVar8 * 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = in_ECX + 0x4c;
    }
  }
LAB_00523be5:
  pTStack_44 = (TypeDescriptor *)in_ECX[0xa1];
  pbStack_48 = (byte *)in_ECX[0xa0];
  FUN_006e9790();
  (**(code **)(in_ECX[0x9c] + 0x28))();
  puVar4 = (undefined4 *)in_ECX[0x9f];
  if (puVar4 != in_ECX) {
    if (puVar4 == (undefined4 *)0x0) {
      if ((*(byte *)(in_ECX + 0xb6) & 1) != 0) {
        puVar4 = (undefined4 *)FUN_0068db10();
        *(byte *)(in_ECX + 0xb6) = *(byte *)(in_ECX + 0xb6) & 0xfe;
        if (puVar4 != (undefined4 *)0x0) {
          pTStack_44 = (TypeDescriptor *)0x523c99;
          (**(code **)*puVar4)();
        }
        if (DAT_00c8a67c == 0) {
          pTStack_44 = (TypeDescriptor *)0x523cac;
          param_1 = operator_new(0xd0);
          local_8._0_1_ = 0x28;
          DAT_00c8a67c = FUN_006cb960();
          local_8 = CONCAT31(local_8._1_3_,0xe);
        }
        pTStack_44 = (TypeDescriptor *)0x523cd5;
        FUN_00415ff0();
      }
    }
    else {
      piVar7 = (int *)puVar4[10];
      piVar6 = piVar7 + puVar4[0xc];
      for (; piVar7 != piVar6; piVar7 = piVar7 + 1) {
        if (in_ECX + 0x9c == (undefined4 *)*piVar7) {
          pbStack_48 = (byte *)((int)piVar7 - puVar4[10] >> 2);
          pTStack_44 = (TypeDescriptor *)0x1;
          FUN_006cf0a0();
          goto LAB_00523cdb;
        }
      }
      pTStack_44 = (TypeDescriptor *)0x1;
      pbStack_48 = (byte *)0xffffffff;
      FUN_006cf0a0();
    }
LAB_00523cdb:
    uVar11 = 0xffffffff;
    in_ECX[0x9f] = in_ECX;
    if ((*(byte *)(in_ECX + 0xb6) & 2) != 0) {
      FUN_006ceba0();
    }
    if (((*(byte *)((int)in_ECX + 0x2d9) & 1) == 0) && (uVar11 = in_ECX[0xc], 0 < (int)uVar11)) {
      do {
        if ((*(byte *)(*(int *)(in_ECX[10] + -4 + uVar11 * 4) + 0x69) & 1) == 0) break;
        uVar11 = uVar11 - 1;
      } while (0 < (int)uVar11);
    }
    iVar8 = in_ECX[0xc] + 1;
    if (((int)in_ECX[0xb] < iVar8) &&
       (param_1 = (byte *)(iVar8 / 2 + 8 + iVar8 & 0xfffffff8), (byte *)in_ECX[0xb] != param_1)) {
      if ((int)param_1 < 1) {
        pTStack_44 = (TypeDescriptor *)0x523d62;
        FID_conflict__free((void *)in_ECX[10]);
        in_ECX[10] = 0;
      }
      else {
        pTStack_44 = (TypeDescriptor *)in_ECX[10];
        if (pTStack_44 == (TypeDescriptor *)0x0) {
          pTStack_44 = (TypeDescriptor *)0x523d44;
          uVar3 = FUN_004c554b();
          in_ECX[10] = uVar3;
        }
        else {
          pbStack_48 = (byte *)0x523d52;
          uVar3 = FUN_004c553b();
          in_ECX[10] = uVar3;
        }
      }
      in_ECX[0xb] = param_1;
    }
    uVar12 = in_ECX[0xc];
    if (uVar11 < uVar12) {
      param_1 = (byte *)(in_ECX[10] + uVar11 * 4);
      if (0 < (int)(uVar12 - uVar11)) {
        pbStack_48 = param_1 + 4;
        pTStack_44 = (TypeDescriptor *)param_1;
        FUN_004c1df0();
      }
      if (param_1 != (byte *)0x0) {
        *(undefined4 **)param_1 = in_ECX + 0x9c;
      }
      in_ECX[0xc] = in_ECX[0xc] + 1;
    }
    else {
      in_ECX[0xc] = uVar12 + 1;
      piVar6 = (int *)(in_ECX[10] + uVar12 * 4);
      if (piVar6 != (int *)0x0) {
        *piVar6 = (int)(in_ECX + 0x9c);
      }
    }
    FUN_006cedf0();
    FUN_006cef00();
  }
  in_ECX[0x54] = 0;
  pTStack_44 = (TypeDescriptor *)0x523df6;
  FUN_0045c990();
  pTStack_44 = (TypeDescriptor *)&param_1;
  local_8._0_1_ = 0x29;
  pbStack_48 = (byte *)0x523e0e;
  FUN_006e8760();
  local_8._0_1_ = 0xe;
  pbVar5 = param_1 + -8;
  if (pbVar5 != (byte *)&DAT_00bfe124) {
    LOCK();
    iVar8 = *(int *)pbVar5;
    *(int *)pbVar5 = *(int *)pbVar5 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      pTStack_44 = (TypeDescriptor *)0x523e32;
      FID_conflict__free(pbVar5);
    }
  }
  pTStack_44 = (TypeDescriptor *)0x523e46;
  FUN_0045c990();
  pTStack_44 = (TypeDescriptor *)&param_1;
  local_8._0_1_ = 0x2a;
  pbStack_48 = (byte *)0x523e5e;
  FUN_006e8760();
  local_8._0_1_ = 0xe;
  pbVar5 = param_1 + -8;
  if (pbVar5 != (byte *)&DAT_00bfe124) {
    LOCK();
    iVar8 = *(int *)pbVar5;
    *(int *)pbVar5 = *(int *)pbVar5 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      pTStack_44 = (TypeDescriptor *)0x523e82;
      FID_conflict__free(pbVar5);
    }
  }
  pTStack_44 = (TypeDescriptor *)0x523e96;
  FUN_0045c990();
  pTStack_44 = (TypeDescriptor *)&param_1;
  local_8._0_1_ = 0x2b;
  pbStack_48 = (byte *)0x0;
  FUN_004eabf0();
  local_8._0_1_ = 0xe;
  pbVar5 = param_1 + -8;
  if (pbVar5 != (byte *)&DAT_00bfe124) {
    LOCK();
    iVar8 = *(int *)pbVar5;
    *(int *)pbVar5 = *(int *)pbVar5 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      pTStack_44 = (TypeDescriptor *)0x523ed4;
      FID_conflict__free(pbVar5);
    }
  }
  pTStack_44 = (TypeDescriptor *)0x523ee8;
  FUN_0045c990();
  pTStack_44 = (TypeDescriptor *)&param_1;
  local_8._0_1_ = 0x2c;
  pbStack_48 = (byte *)0x1;
  FUN_004eabf0();
  local_8 = CONCAT31(local_8._1_3_,0xe);
  pbVar5 = param_1 + -8;
  if (pbVar5 != (byte *)&DAT_00bfe124) {
    LOCK();
    iVar8 = *(int *)pbVar5;
    *(int *)pbVar5 = *(int *)pbVar5 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      pTStack_44 = (TypeDescriptor *)0x523f23;
      FID_conflict__free(pbVar5);
    }
  }
  pTStack_44 = (TypeDescriptor *)0x0;
  pbStack_48 = (byte *)0x523f35;
  FUN_004ea5c0();
  ExceptionList = local_10;
  return;
}

