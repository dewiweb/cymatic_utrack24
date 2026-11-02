// rea decompile_all
// name: FUN_00524420
// address: 0x524420
// body: available
// range: 0x524420-0x5257ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00524420(int *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *_Memory;
  undefined4 uVar7;
  uint *puVar8;
  int *in_ECX;
  int iVar9;
  byte *pbVar10;
  int *piVar11;
  int *extraout_ECX;
  int *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *puVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  bool bVar16;
  int *piStack_14c;
  TypeDescriptor *pTStack_148;
  int local_ec;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  int local_cc;
  int *local_c8;
  int *local_c4;
  undefined4 local_c0;
  undefined1 *local_bc;
  undefined1 *local_b8;
  byte *local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  byte *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  int *local_5c;
  undefined1 *local_58;
  undefined4 *local_54;
  int *local_50;
  undefined1 *local_4c;
  int *local_48;
  uint local_44;
  int *local_40;
  char local_1b [2];
  int local_19;
  undefined1 uStack_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070b118;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50 = param_1;
  local_40 = in_ECX;
  FUN_004eb7e0();
  in_ECX[0x4c] = (int)juce::ComboBox::Listener::vftable;
  in_ECX[0x4d] = (int)juce::ListBoxModel::vftable;
  *in_ECX = (int)ProjectInspector_PopupChangeSamplingRate::vftable;
  in_ECX[0x1c] = (int)ProjectInspector_PopupChangeSamplingRate::vftable;
  in_ECX[0x4c] = (int)ProjectInspector_PopupChangeSamplingRate::vftable;
  in_ECX[0x4d] = (int)ProjectInspector_PopupChangeSamplingRate::vftable;
  in_ECX[0x4e] = 0;
  in_ECX[0x4f] = 0;
  in_ECX[0x50] = 0;
  in_ECX[0x51] = 0;
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  in_ECX[0x55] = (int)&DAT_00bfe12c;
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
  local_bc = &DAT_00bfe12c;
  local_8._0_1_ = 7;
  local_8._1_3_ = 0;
  pTStack_148 = (TypeDescriptor *)0x524578;
  FUN_006e8060();
  in_ECX[0x8e] = (int)&DAT_00bfe12c;
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
  local_58 = &DAT_00bfe12c;
  local_8._0_1_ = 0xc;
  FUN_006e8840();
  local_8._0_1_ = 0xe;
  local_4c = &DAT_00bfe12c;
  uVar13 = 0;
  if (0 < local_50[2]) {
    bVar16 = local_50[2] != 0;
    do {
      if (bVar16) {
        uVar4 = *(undefined4 *)(*local_50 + uVar13 * 4);
      }
      else {
        uVar4 = 0;
      }
      pTStack_148 = &ProjectExplorerBaseItem::RTTI_Type_Descriptor;
      piStack_14c = (int *)0x0;
      local_44 = FUN_006f6dd6(uVar4);
      iVar5 = in_ECX[0x50];
      iVar9 = iVar5 + 1;
      if (in_ECX[0x4f] < iVar9) {
        if (iVar9 < 0) {
          iVar9 = iVar5 + 2;
        }
        uVar15 = iVar5 + 9 + (iVar9 >> 1) & 0xfffffff8;
        if (in_ECX[0x4f] != uVar15) {
          if ((int)uVar15 < 1) {
            FID_conflict__free((void *)in_ECX[0x4e]);
            in_ECX[0x4e] = 0;
          }
          else if (in_ECX[0x4e] == 0) {
            iVar5 = FUN_004c554b();
            in_ECX[0x4e] = iVar5;
          }
          else {
            pTStack_148 = (TypeDescriptor *)0x5246c1;
            iVar5 = FUN_004c553b();
            in_ECX[0x4e] = iVar5;
          }
          in_ECX[0x4f] = uVar15;
        }
      }
      iVar5 = in_ECX[0x50];
      in_ECX[0x50] = iVar5 + 1;
      puVar2 = (uint *)(in_ECX[0x4e] + iVar5 * 4);
      if (puVar2 != (uint *)0x0) {
        *puVar2 = local_44;
      }
      uVar13 = uVar13 + 1;
      bVar16 = uVar13 < (uint)local_50[2];
    } while ((int)uVar13 < local_50[2]);
  }
  if (in_ECX[0x50] == 1) {
    local_8._0_1_ = 0xf;
    operator_new(0x28);
    local_58 = (undefined1 *)0x41900000;
    local_60 = (undefined4 *)FUN_00468a40();
    if (local_60 != (undefined4 *)0x0) {
      LOCK();
      local_60[1] = local_60[1] + 1;
      UNLOCK();
    }
    FUN_00410ad0();
    local_8._0_1_ = 0x11;
    pTStack_148 = (TypeDescriptor *)0x5247a3;
    FUN_00637690();
    puVar6 = (undefined4 *)FUN_006377c0();
    local_8 = CONCAT31(local_8._1_3_,0x15);
    FUN_00636ec0();
    pbVar10 = (byte *)*puVar6;
    do {
      while( true ) {
        bVar3 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        if (-1 < (char)bVar3) break;
        bVar3 = *pbVar10;
        while ((bVar3 & 0xc0) == 0x80) {
          pbVar1 = pbVar10 + 1;
          pbVar10 = pbVar10 + 1;
          bVar3 = *pbVar1;
        }
      }
    } while (bVar3 != 0);
    pTStack_148 = (TypeDescriptor *)0x52480a;
    FUN_00644f50();
    piVar11 = (int *)(local_e4 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar11);
      }
    }
    piVar11 = (int *)(local_e0 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar11);
      }
    }
    if (local_60 != (undefined4 *)0x0) {
      LOCK();
      piVar11 = local_60 + 1;
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)*local_60)();
      }
    }
    local_d4 = DAT_00c7ebbc;
    local_8._0_1_ = 0x16;
    operator_new(0x28);
    local_64 = (undefined4 *)FUN_00468a40();
    if (local_64 != (undefined4 *)0x0) {
      LOCK();
      local_64[1] = local_64[1] + 1;
      UNLOCK();
    }
    local_8._0_1_ = 0x17;
    FUN_005be060();
    local_8._0_1_ = 0x18;
    pTStack_148 = (TypeDescriptor *)0x5248e8;
    FUN_00637690();
    puVar6 = (undefined4 *)FUN_006377c0();
    local_8 = CONCAT31(local_8._1_3_,0x1c);
    FUN_00636ec0();
    pbVar10 = (byte *)*puVar6;
    do {
      while( true ) {
        bVar3 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        if (-1 < (char)bVar3) break;
        bVar3 = *pbVar10;
        while ((bVar3 & 0xc0) == 0x80) {
          pbVar1 = pbVar10 + 1;
          pbVar10 = pbVar10 + 1;
          bVar3 = *pbVar1;
        }
      }
    } while (bVar3 != 0);
    pTStack_148 = (TypeDescriptor *)0x52494a;
    FUN_00644f50();
    piVar11 = (int *)(local_ec + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar11);
      }
    }
    piVar11 = (int *)(local_cc + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar11);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,0xe);
    if (local_64 != (undefined4 *)0x0) {
      LOCK();
      piVar11 = local_64 + 1;
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)*local_64)();
      }
    }
  }
  else {
    FUN_0045c990();
    local_8._0_1_ = 0x1e;
    pTStack_148 = (TypeDescriptor *)0x5249ed;
    operator_new(0x28);
    local_6c = (undefined4 *)FUN_00468a40();
    if (local_6c != (undefined4 *)0x0) {
      LOCK();
      local_6c[1] = local_6c[1] + 1;
      UNLOCK();
    }
    local_8 = CONCAT31(local_8._1_3_,0x20);
    FUN_00636ec0();
    pbVar10 = local_68;
    do {
      while( true ) {
        bVar3 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        if (-1 < (char)bVar3) break;
        bVar3 = *pbVar10;
        while ((bVar3 & 0xc0) == 0x80) {
          pbVar1 = pbVar10 + 1;
          pbVar10 = pbVar10 + 1;
          bVar3 = *pbVar1;
        }
      }
    } while (bVar3 != 0);
    pTStack_148 = (TypeDescriptor *)0x524a5c;
    FUN_00644f50();
    if (local_6c != (undefined4 *)0x0) {
      LOCK();
      piVar11 = local_6c + 1;
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)*local_6c)();
      }
    }
    local_8._0_1_ = 0xe;
    local_68 = local_68 + -8;
    if (local_68 != (byte *)&DAT_00bfe124) {
      LOCK();
      iVar5 = *(int *)local_68;
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(local_68);
      }
    }
    FUN_0045c990();
    local_c0 = DAT_00c7ebbc;
    local_8._0_1_ = 0x22;
    pTStack_148 = (TypeDescriptor *)0x524ad8;
    operator_new(0x28);
    local_70 = (undefined4 *)FUN_00468a40();
    if (local_70 != (undefined4 *)0x0) {
      LOCK();
      local_70[1] = local_70[1] + 1;
      UNLOCK();
    }
    local_8 = CONCAT31(local_8._1_3_,0x24);
    FUN_00636ec0();
    pbVar10 = local_b4;
    do {
      while( true ) {
        bVar3 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        if (-1 < (char)bVar3) break;
        bVar3 = *pbVar10;
        while ((bVar3 & 0xc0) == 0x80) {
          pbVar1 = pbVar10 + 1;
          pbVar10 = pbVar10 + 1;
          bVar3 = *pbVar1;
        }
      }
    } while (bVar3 != 0);
    pTStack_148 = (TypeDescriptor *)0x524b51;
    FUN_00644f50();
    if (local_70 != (undefined4 *)0x0) {
      LOCK();
      piVar11 = local_70 + 1;
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)*local_70)();
      }
    }
    local_8 = CONCAT31(local_8._1_3_,0xe);
    local_b4 = local_b4 + -8;
    if (local_b4 != (byte *)&DAT_00bfe124) {
      LOCK();
      iVar5 = *(int *)local_b4;
      *(int *)local_b4 = *(int *)local_b4 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(local_b4);
      }
    }
    local_44 = 0;
    if (0 < in_ECX[0x50]) {
      do {
        uVar13 = local_44;
        local_d0 = FUN_005be060();
        local_54 = (undefined4 *)&stack0xfffffec0;
        local_8 = CONCAT31(local_8._1_3_,0x25);
        local_b8 = &stack0xfffffebc;
        if (uVar13 < (uint)in_ECX[0x50]) {
          iVar5 = *(int *)(in_ECX[0x4e] + uVar13 * 4);
        }
        else {
          iVar5 = 0;
        }
        local_48 = (int *)(local_1b + 2);
        local_19._0_1_ = 0;
        uVar13 = *(uint *)(*(int *)(*(int *)(iVar5 + 0x78) + 0xc) + 0x5c);
        if ((int)uVar13 < 0) {
          uVar13 = -uVar13;
          do {
            piVar11 = local_48;
            local_48 = (int *)((int)piVar11 + -1);
            uVar15 = uVar13 / 10;
            *(char *)local_48 = (char)uVar13 + (char)uVar15 * -10 + '0';
            uVar13 = uVar15;
          } while (uVar15 != 0);
          local_48 = (int *)((int)piVar11 + -2);
          *(char *)local_48 = '-';
        }
        else {
          do {
            local_48 = (int *)((int)local_48 + -1);
            uVar15 = uVar13 / 10;
            *(char *)local_48 = (char)uVar13 + (char)uVar15 * -10 + '0';
            uVar13 = uVar15;
          } while (uVar15 != 0);
        }
        iVar5 = -(int)local_48;
        pTStack_148 = (TypeDescriptor *)(((uint)(&uStack_15 + iVar5) & 0xfffffffc) + 0xb);
        piStack_14c = (int *)0x524c7d;
        _Memory = (int *)FUN_004bfe22();
        _Memory[1] = (uint)(&uStack_15 + iVar5) & 0xfffffffc;
        local_c8 = _Memory + 2;
        *_Memory = 0;
        local_74 = local_c8;
        local_c4 = local_48;
        piVar11 = local_48;
        for (pcVar14 = local_1b + iVar5 + 2; 0 < (int)pcVar14; pcVar14 = pcVar14 + -1) {
          pTStack_148 = (TypeDescriptor *)0x524cbb;
          pTStack_148 = (TypeDescriptor *)FUN_00443260();
          piVar11 = extraout_ECX;
          if (pTStack_148 == (TypeDescriptor *)0x0) break;
          piStack_14c = (int *)0x524cc8;
          FUN_0044ecc0();
          piVar11 = extraout_ECX_00;
        }
        *(undefined1 *)local_74 = 0;
        local_48 = (int *)&piStack_14c;
        piStack_14c = piVar11;
        pTStack_148 = (TypeDescriptor *)piVar11;
        uVar7 = FUN_00410ad0(&local_dc);
        local_8 = CONCAT31(local_8._1_3_,0x27);
        uVar4 = extraout_ECX_01;
        FUN_00637690(uVar7);
        FUN_006377c0(uVar4);
        FUN_00637730();
        piStack_14c = (int *)0x524d40;
        FUN_006377c0();
        pTStack_148 = (TypeDescriptor *)0x524d4e;
        FUN_00637730();
        local_54 = (undefined4 *)FUN_006377c0();
        iVar5 = in_ECX[0x53];
        iVar9 = iVar5 + 1;
        if (in_ECX[0x52] < iVar9) {
          if (iVar9 < 0) {
            iVar9 = iVar5 + 2;
          }
          uVar13 = iVar5 + 9 + (iVar9 >> 1) & 0xfffffff8;
          if (in_ECX[0x52] != uVar13) {
            if ((int)uVar13 < 1) {
              FID_conflict__free((void *)in_ECX[0x51]);
              in_ECX[0x51] = 0;
            }
            else if (in_ECX[0x51] == 0) {
              iVar5 = FUN_004c554b();
              in_ECX[0x51] = iVar5;
            }
            else {
              pTStack_148 = (TypeDescriptor *)0x524db9;
              iVar5 = FUN_004c553b();
              in_ECX[0x51] = iVar5;
            }
            in_ECX[0x52] = uVar13;
          }
        }
        iVar5 = in_ECX[0x53];
        in_ECX[0x53] = iVar5 + 1;
        puVar6 = (undefined4 *)(in_ECX[0x51] + iVar5 * 4);
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *local_54;
          *local_54 = &DAT_00bfe12c;
        }
        local_b0 = local_d8;
        piVar11 = (int *)(local_d8 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar11);
          }
        }
        piVar11 = (int *)(local_dc + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar11);
          }
        }
        if (_Memory != &DAT_00bfe124) {
          LOCK();
          iVar5 = *_Memory;
          *_Memory = *_Memory + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(_Memory);
          }
        }
        local_8 = CONCAT31(local_8._1_3_,0xe);
        local_5c = local_40;
        piVar11 = local_40 + -2;
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar11);
          }
        }
        local_44 = local_44 + 1;
      } while ((int)local_44 < in_ECX[0x50]);
    }
    (**(code **)(in_ECX[99] + 0x28))();
    piVar11 = (int *)in_ECX[0x66];
    if (piVar11 != in_ECX) {
      if (piVar11 == (int *)0x0) {
        if ((*(byte *)(in_ECX + 0x7d) & 1) != 0) {
          puVar6 = (undefined4 *)FUN_0068db10();
          *(byte *)(in_ECX + 0x7d) = *(byte *)(in_ECX + 0x7d) & 0xfe;
          if (puVar6 != (undefined4 *)0x0) {
            (**(code **)*puVar6)();
          }
          if (DAT_00c8a67c == 0) {
            local_5c = operator_new(0xd0);
            local_8._0_1_ = 0x28;
            DAT_00c8a67c = FUN_006cb960();
            local_8 = CONCAT31(local_8._1_3_,0xe);
          }
          FUN_00415ff0();
        }
      }
      else {
        puVar12 = (undefined4 *)piVar11[10];
        puVar6 = puVar12 + piVar11[0xc];
        for (; puVar12 != puVar6; puVar12 = puVar12 + 1) {
          if (in_ECX + 99 == (int *)*puVar12) {
            pTStack_148 = (TypeDescriptor *)((int)puVar12 - piVar11[10] >> 2);
            piStack_14c = (int *)0x524f59;
            FUN_006cf0a0();
            goto LAB_00524fbb;
          }
        }
        pTStack_148 = (TypeDescriptor *)0xffffffff;
        piStack_14c = (int *)0x524f45;
        FUN_006cf0a0();
      }
LAB_00524fbb:
      in_ECX[0x66] = (int)in_ECX;
      if ((*(byte *)(in_ECX + 0x7d) & 2) != 0) {
        FUN_006ceba0();
      }
      if (((*(byte *)((int)in_ECX + 0x1f5) & 1) == 0) && (iVar5 = in_ECX[0xc], 0 < iVar5)) {
        do {
          if ((*(byte *)(*(int *)(in_ECX[10] + -4 + iVar5 * 4) + 0x69) & 1) == 0) break;
          iVar5 = iVar5 + -1;
        } while (0 < iVar5);
      }
      pTStack_148 = (TypeDescriptor *)0x525000;
      FUN_00410380();
      FUN_006cedf0();
      FUN_006cef00();
    }
    uVar13 = -(uint)(in_ECX != (int *)0x0) & (uint)(in_ECX + 0x4d);
    if (in_ECX[0x81] != uVar13) {
      in_ECX[0x81] = uVar13;
      FUN_006e6400(&piStack_14c);
      FUN_006ce9f0(1);
      FUN_006e7e60();
    }
  }
  uVar13 = -(uint)(in_ECX != (int *)0x0) & (uint)(in_ECX + 0x4c);
  if (uVar13 != 0) {
    puVar8 = (uint *)in_ECX[200];
    puVar2 = puVar8 + in_ECX[0xca];
    for (; puVar8 != puVar2; puVar8 = puVar8 + 1) {
      if (uVar13 == *puVar8) goto LAB_00525115;
    }
    iVar5 = in_ECX[0xca] + 1;
    if ((in_ECX[0xc9] < iVar5) &&
       (local_40 = (int *)(iVar5 / 2 + 8 + iVar5 & 0xfffffff8), (int *)in_ECX[0xc9] != local_40)) {
      if ((int)local_40 < 1) {
        FID_conflict__free((void *)in_ECX[200]);
        in_ECX[200] = 0;
      }
      else if ((void *)in_ECX[200] == (void *)0x0) {
        iVar5 = FUN_004c554b();
        in_ECX[200] = iVar5;
      }
      else {
        pTStack_148 = (TypeDescriptor *)0x5250d0;
        iVar5 = FUN_004c553b();
        in_ECX[200] = iVar5;
      }
      in_ECX[0xc9] = (int)local_40;
    }
    iVar5 = in_ECX[0xca];
    in_ECX[0xca] = iVar5 + 1;
    puVar2 = (uint *)(in_ECX[200] + iVar5 * 4);
    if (puVar2 != (uint *)0x0) {
      *puVar2 = uVar13;
    }
  }
LAB_00525115:
  pTStack_148 = (TypeDescriptor *)in_ECX[0xa1];
  piStack_14c = (int *)in_ECX[0xa0];
  FUN_006e9790();
  (**(code **)(in_ECX[0x9c] + 0x28))();
  piVar11 = (int *)in_ECX[0x9f];
  if (piVar11 != in_ECX) {
    if (piVar11 == (int *)0x0) {
      if ((*(byte *)(in_ECX + 0xb6) & 1) != 0) {
        puVar6 = (undefined4 *)FUN_0068db10();
        *(byte *)(in_ECX + 0xb6) = *(byte *)(in_ECX + 0xb6) & 0xfe;
        if (puVar6 != (undefined4 *)0x0) {
          pTStack_148 = (TypeDescriptor *)0x5251c9;
          (**(code **)*puVar6)();
        }
        if (DAT_00c8a67c == 0) {
          pTStack_148 = (TypeDescriptor *)0x5251dc;
          local_5c = operator_new(0xd0);
          local_8._0_1_ = 0x29;
          DAT_00c8a67c = FUN_006cb960();
          local_8 = CONCAT31(local_8._1_3_,0xe);
        }
        pTStack_148 = (TypeDescriptor *)0x525205;
        FUN_00415ff0();
      }
    }
    else {
      puVar12 = (undefined4 *)piVar11[10];
      puVar6 = puVar12 + piVar11[0xc];
      for (; puVar12 != puVar6; puVar12 = puVar12 + 1) {
        if (in_ECX + 0x9c == (int *)*puVar12) {
          piStack_14c = (int *)((int)puVar12 - piVar11[10] >> 2);
          pTStack_148 = (TypeDescriptor *)0x1;
          FUN_006cf0a0();
          goto LAB_0052520b;
        }
      }
      pTStack_148 = (TypeDescriptor *)0x1;
      piStack_14c = (int *)0xffffffff;
      FUN_006cf0a0();
    }
LAB_0052520b:
    uVar13 = 0xffffffff;
    in_ECX[0x9f] = (int)in_ECX;
    if ((*(byte *)(in_ECX + 0xb6) & 2) != 0) {
      FUN_006ceba0();
    }
    if (((*(byte *)((int)in_ECX + 0x2d9) & 1) == 0) && (uVar13 = in_ECX[0xc], 0 < (int)uVar13)) {
      do {
        if ((*(byte *)(*(int *)(in_ECX[10] + -4 + uVar13 * 4) + 0x69) & 1) == 0) break;
        uVar13 = uVar13 - 1;
      } while (0 < (int)uVar13);
    }
    iVar5 = in_ECX[0xc] + 1;
    if ((in_ECX[0xb] < iVar5) &&
       (local_40 = (int *)(iVar5 / 2 + 8 + iVar5 & 0xfffffff8), (int *)in_ECX[0xb] != local_40)) {
      if ((int)local_40 < 1) {
        pTStack_148 = (TypeDescriptor *)0x525292;
        FID_conflict__free((void *)in_ECX[10]);
        in_ECX[10] = 0;
      }
      else {
        pTStack_148 = (TypeDescriptor *)in_ECX[10];
        if (pTStack_148 == (TypeDescriptor *)0x0) {
          pTStack_148 = (TypeDescriptor *)0x525274;
          iVar5 = FUN_004c554b();
          in_ECX[10] = iVar5;
        }
        else {
          piStack_14c = (int *)0x525282;
          iVar5 = FUN_004c553b();
          in_ECX[10] = iVar5;
        }
      }
      in_ECX[0xb] = (int)local_40;
    }
    uVar15 = in_ECX[0xc];
    if (uVar13 < uVar15) {
      local_40 = (int *)(in_ECX[10] + uVar13 * 4);
      if (0 < (int)(uVar15 - uVar13)) {
        piStack_14c = local_40 + 1;
        pTStack_148 = (TypeDescriptor *)local_40;
        FUN_004c1df0();
      }
      if (local_40 != (int *)0x0) {
        *local_40 = (int)(in_ECX + 0x9c);
      }
      in_ECX[0xc] = in_ECX[0xc] + 1;
    }
    else {
      in_ECX[0xc] = uVar15 + 1;
      puVar6 = (undefined4 *)(in_ECX[10] + uVar15 * 4);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = in_ECX + 0x9c;
        FUN_006cedf0();
        FUN_006cef00();
        goto LAB_00525323;
      }
    }
    FUN_006cedf0();
    FUN_006cef00();
  }
LAB_00525323:
  in_ECX[0x54] = 0;
  if (local_50[2] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)*local_50;
  }
  switch(*(undefined4 *)(iVar5 + 0x44)) {
  case 1:
  case 2:
    pTStack_148 = (TypeDescriptor *)0x525363;
    FUN_0045c990();
    pTStack_148 = (TypeDescriptor *)&local_78;
    local_8._0_1_ = 0x2a;
    piStack_14c = (int *)0x525377;
    FUN_006e8760();
    local_8._0_1_ = 0xe;
    piVar11 = (int *)(local_78 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        pTStack_148 = (TypeDescriptor *)0x52539b;
        FID_conflict__free(piVar11);
      }
    }
    pTStack_148 = (TypeDescriptor *)0x5253af;
    FUN_0045c990();
    pTStack_148 = (TypeDescriptor *)&local_7c;
    local_8._0_1_ = 0x2b;
    piStack_14c = (int *)0x5253c3;
    FUN_006e8760();
    local_8 = CONCAT31(local_8._1_3_,0xe);
    local_a4 = local_7c;
    break;
  case 3:
    pTStack_148 = (TypeDescriptor *)0x5253e0;
    FUN_0045c990();
    pTStack_148 = (TypeDescriptor *)&local_80;
    local_8._0_1_ = 0x2c;
    piStack_14c = (int *)0x5253f4;
    FUN_006e8760();
    local_8._0_1_ = 0xe;
    piVar11 = (int *)(local_80 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        pTStack_148 = (TypeDescriptor *)0x525418;
        FID_conflict__free(piVar11);
      }
    }
    pTStack_148 = (TypeDescriptor *)0x52542c;
    FUN_0045c990();
    pTStack_148 = (TypeDescriptor *)&local_84;
    local_8._0_1_ = 0x2d;
    piStack_14c = (int *)0x525440;
    FUN_006e8760();
    local_8._0_1_ = 0xe;
    piVar11 = (int *)(local_84 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        pTStack_148 = (TypeDescriptor *)0x525464;
        FID_conflict__free(piVar11);
      }
    }
    pTStack_148 = (TypeDescriptor *)0x52547b;
    FUN_0045c990();
    pTStack_148 = (TypeDescriptor *)&local_88;
    local_8._0_1_ = 0x2e;
    piStack_14c = (int *)0x525492;
    FUN_006e8760();
    local_8._0_1_ = 0xe;
    piVar11 = (int *)(local_88 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        pTStack_148 = (TypeDescriptor *)0x5254b9;
        FID_conflict__free(piVar11);
      }
    }
    pTStack_148 = (TypeDescriptor *)0x5254d0;
    FUN_0045c990();
    pTStack_148 = (TypeDescriptor *)&local_8c;
    local_8._0_1_ = 0x2f;
    piStack_14c = (int *)0x5254e7;
    FUN_006e8760();
    local_8 = CONCAT31(local_8._1_3_,0xe);
    local_a4 = local_8c;
    break;
  case 4:
    pTStack_148 = (TypeDescriptor *)0x52550a;
    FUN_0045c990();
    pTStack_148 = (TypeDescriptor *)&local_90;
    local_8._0_1_ = 0x30;
    piStack_14c = (int *)0x525521;
    FUN_006e8760();
    local_8._0_1_ = 0xe;
    piVar11 = (int *)(local_90 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        pTStack_148 = (TypeDescriptor *)0x525548;
        FID_conflict__free(piVar11);
      }
    }
    pTStack_148 = (TypeDescriptor *)0x52555f;
    FUN_0045c990();
    pTStack_148 = (TypeDescriptor *)&local_94;
    local_8._0_1_ = 0x31;
    piStack_14c = (int *)0x525576;
    FUN_006e8760();
    local_8 = CONCAT31(local_8._1_3_,0xe);
    local_a4 = local_94;
    break;
  default:
    pTStack_148 = (TypeDescriptor *)0x525599;
    FUN_0045c990();
    pTStack_148 = (TypeDescriptor *)&local_98;
    local_8._0_1_ = 0x32;
    piStack_14c = (int *)0x5255b0;
    FUN_006e8760();
    local_8._0_1_ = 0xe;
    piVar11 = (int *)(local_98 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        pTStack_148 = (TypeDescriptor *)0x5255d7;
        FID_conflict__free(piVar11);
      }
    }
    pTStack_148 = (TypeDescriptor *)0x5255ee;
    FUN_0045c990();
    pTStack_148 = (TypeDescriptor *)&local_9c;
    local_8._0_1_ = 0x33;
    piStack_14c = (int *)0x525605;
    FUN_006e8760();
    local_8._0_1_ = 0xe;
    piVar11 = (int *)(local_9c + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        pTStack_148 = (TypeDescriptor *)0x52562c;
        FID_conflict__free(piVar11);
      }
    }
    pTStack_148 = (TypeDescriptor *)0x525643;
    FUN_0045c990();
    pTStack_148 = (TypeDescriptor *)&local_a0;
    local_8._0_1_ = 0x34;
    piStack_14c = (int *)0x52565a;
    FUN_006e8760();
    local_8._0_1_ = 0xe;
    piVar11 = (int *)(local_a0 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        pTStack_148 = (TypeDescriptor *)0x525681;
        FID_conflict__free(piVar11);
      }
    }
    pTStack_148 = (TypeDescriptor *)0x525698;
    FUN_0045c990();
    pTStack_148 = (TypeDescriptor *)&local_a4;
    local_8._0_1_ = 0x35;
    piStack_14c = (int *)0x5256af;
    FUN_006e8760();
    local_8 = CONCAT31(local_8._1_3_,0xe);
  }
  piVar11 = (int *)(local_a4 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      pTStack_148 = (TypeDescriptor *)0x5256d6;
      FID_conflict__free(piVar11);
    }
  }
  pTStack_148 = (TypeDescriptor *)0x5256ed;
  FUN_0045c990();
  pTStack_148 = (TypeDescriptor *)&local_a8;
  local_8._0_1_ = 0x36;
  piStack_14c = (int *)0x0;
  FUN_004eabf0();
  local_8._0_1_ = 0xe;
  piVar11 = (int *)(local_a8 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      pTStack_148 = (TypeDescriptor *)0x525731;
      FID_conflict__free(piVar11);
    }
  }
  pTStack_148 = (TypeDescriptor *)0x525748;
  FUN_0045c990();
  pTStack_148 = (TypeDescriptor *)&local_ac;
  local_8._0_1_ = 0x37;
  piStack_14c = (int *)0x1;
  FUN_004eabf0();
  local_8 = CONCAT31(local_8._1_3_,0xe);
  piVar11 = (int *)(local_ac + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      pTStack_148 = (TypeDescriptor *)0x525789;
      FID_conflict__free(piVar11);
    }
  }
  pTStack_148 = (TypeDescriptor *)0x0;
  piStack_14c = (int *)0x52579b;
  FUN_004ea5c0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

