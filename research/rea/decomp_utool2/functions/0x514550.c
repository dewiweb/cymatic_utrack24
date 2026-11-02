// rea decompile_all
// name: FUN_00514550
// address: 0x514550
// body: available
// range: 0x514550-0x5150f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005147e6) */
/* WARNING: Removing unreachable block (ram,0x005147f2) */
/* WARNING: Removing unreachable block (ram,0x0051477e) */
/* WARNING: Removing unreachable block (ram,0x0051478a) */
/* WARNING: Removing unreachable block (ram,0x00514879) */
/* WARNING: Removing unreachable block (ram,0x00514885) */
/* WARNING: Removing unreachable block (ram,0x005146c0) */
/* WARNING: Removing unreachable block (ram,0x005146cb) */

undefined4 * FUN_00514550(int param_1,undefined1 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *in_ECX;
  int iVar9;
  uint uVar10;
  undefined1 *puStack_e0;
  undefined **ppuStack_dc;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 *local_28;
  void *local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007091cd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004eb7e0();
  in_ECX[0x4c] = juce::Button::Listener::vftable;
  in_ECX[0x4d] = DSPMixerPanel::Listener::vftable;
  in_ECX[0x4e] = PresetSelector::Listener::vftable;
  in_ECX[0x4f] = param_2;
  *in_ECX = PopupMixer::vftable;
  in_ECX[0x1c] = PopupMixer::vftable;
  in_ECX[0x4c] = PopupMixer::vftable;
  in_ECX[0x4d] = PopupMixer::vftable;
  in_ECX[0x4e] = PopupMixer::vftable;
  in_ECX[0x50] = param_4;
  if (param_4 != 0) {
    LOCK();
    *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
    UNLOCK();
  }
  in_ECX[0x51] = param_3;
  in_ECX[0x52] = &DAT_00bfe12c;
  in_ECX[0x53] = 0;
  in_ECX[0x54] = 1;
  in_ECX[0x55] = 1;
  in_ECX[0x56] = 0;
  in_ECX[0x57] = 0;
  in_ECX[0x58] = 0;
  in_ECX[0x59] = 0;
  in_ECX[0x5a] = 0;
  in_ECX[0x5b] = 0;
  in_ECX[0x5c] = 0;
  in_ECX[0x5d] = 0;
  in_ECX[0x5e] = 0;
  in_ECX[0x5f] = 9;
  local_8._0_1_ = 6;
  local_8._1_3_ = 0;
  FUN_00515f90();
  local_4c = &DAT_00bfe12c;
  local_8._0_1_ = 9;
  FUN_006e8b40();
  local_8._0_1_ = 0xc;
  FUN_005839d0();
  local_8._0_1_ = 0xd;
  FUN_005839d0();
  FUN_005089a0();
  in_ECX[0x222] = 0;
  local_14 = &DAT_00bfe12c;
  param_2 = (undefined1 *)0x0;
  param_4 = 0;
  if (param_1 == 1) {
    piVar5 = (int *)(DAT_00c8a744 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    LOCK();
    UNLOCK();
    local_14 = DAT_00c8a744;
    local_48 = &DAT_00bfe12c;
    param_2 = (undefined1 *)0x10;
    param_4 = 0x10;
  }
  else if (param_1 == 3) {
    piVar5 = (int *)(DAT_00c8a748 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    LOCK();
    UNLOCK();
    local_14 = DAT_00c8a748;
    param_2 = (undefined1 *)0x18;
    param_4 = 0x18;
    if (in_ECX[0x51] == 0) {
      if (in_ECX[0x4f] != 0) {
        param_2 = (undefined1 *)(*(int *)(in_ECX[0x4f] + 0x24) * 0x18);
      }
    }
    else {
      param_2 = *(undefined1 **)(in_ECX[0x51] + 0x4bc);
    }
  }
  else if (param_1 == 4) {
    piVar5 = (int *)(DAT_00c8a74c + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    LOCK();
    UNLOCK();
    local_14 = DAT_00c8a74c;
    param_2 = (undefined1 *)0x20;
    param_4 = 0x20;
  }
  local_50 = DAT_00c7ebbc;
  local_8._0_1_ = 0x12;
  puVar4 = operator_new(0x28);
  local_8._0_1_ = 0x13;
  *puVar4 = juce::ReferenceCountedObject::vftable;
  puVar4[1] = 0;
  *puVar4 = juce::Font::SharedFontInternal::vftable;
  puVar4[2] = 0;
  piVar5 = (int *)FUN_00643f40();
  iVar2 = *piVar5;
  puVar4[3] = iVar2;
  piVar5 = (int *)(iVar2 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  FUN_0045c990();
  puVar4[5] = 0x41600000;
  puVar4[6] = 0x3f800000;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined1 *)(puVar4 + 9) = 0;
  LOCK();
  puVar4[1] = puVar4[1] + 1;
  UNLOCK();
  local_8._0_1_ = 0x15;
  local_28 = puVar4;
  FUN_00636ec0();
  FUN_0044ec90();
  FUN_00644f50();
  local_8._0_1_ = 0x11;
  if (local_28 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = local_28 + 1;
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_28)();
    }
  }
  (**(code **)(in_ECX[0x60] + 0x28))();
  FUN_006e5050();
  (**(code **)(in_ECX[0x1fd] + 0x28))();
  FUN_006e5050();
  FUN_0045c990();
  local_8._0_1_ = 0x16;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x11);
  piVar5 = (int *)(local_2c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX[0x164] != 0x22) {
    in_ECX[0x164] = 0x22;
    FUN_006e6400();
    FUN_006ce9f0();
  }
  (**(code **)(in_ECX[0x13d] + 0x28))();
  FUN_006e5050();
  FUN_00683790();
  local_8._0_1_ = 0x17;
  FUN_00683790();
  local_8._0_1_ = 0x11;
  FUN_00411520();
  FUN_0045c990();
  local_8._0_1_ = 0x18;
  (**(code **)(in_ECX[0x18d] + 8))();
  local_8._0_1_ = 0x11;
  piVar5 = (int *)(local_30 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_0045c990();
  local_8._0_1_ = 0x19;
  FUN_006e54f0();
  local_8 = CONCAT31(local_8._1_3_,0x11);
  piVar5 = (int *)(local_34 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX != (undefined4 *)0xfffffed0) {
    FUN_004097d0();
  }
  uVar7 = DAT_00c7ef94;
  ppuStack_dc = (undefined **)&stack0xffffff28;
  in_ECX[0x1ab] = DAT_00c7ef94;
  in_ECX[0x1ac] = uVar7;
  puStack_e0 = (undefined1 *)0x514b52;
  FUN_006e6400();
  ppuStack_dc = (undefined **)0x1;
  puStack_e0 = (undefined1 *)0x514b5f;
  FUN_006ce9f0();
  (**(code **)(in_ECX[0x171] + 0x28))();
  FUN_006e5050();
  FUN_00683790();
  local_8._0_1_ = 0x1a;
  ppuStack_dc = (undefined **)0x514baa;
  FUN_00683790();
  local_8._0_1_ = 0x11;
  FUN_00411520();
  FUN_0045c990();
  local_8._0_1_ = 0x1b;
  (**(code **)(in_ECX[0x1d3] + 8))();
  local_8._0_1_ = 0x11;
  piVar5 = (int *)(local_38 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_0045c990();
  local_8._0_1_ = 0x1c;
  FUN_006e54f0();
  local_8 = CONCAT31(local_8._1_3_,0x11);
  piVar5 = (int *)(local_3c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX != (undefined4 *)0xfffffed0) {
    FUN_004097d0();
  }
  uVar7 = DAT_00c7ef94;
  in_ECX[0x1f1] = DAT_00c7ef94;
  in_ECX[0x1f2] = uVar7;
  FUN_006e6400(&puStack_e0);
  FUN_006ce9f0(1);
  (**(code **)(in_ECX[0x1b7] + 0x28))();
  puStack_e0 = (undefined1 *)0x514ca6;
  ppuStack_dc = (undefined **)(in_ECX + 0x1b7);
  FUN_006e5050();
  ppuStack_dc = (undefined **)0x514cb0;
  operator_new(0x1188);
  ppuStack_dc = (undefined **)(in_ECX + 0x4d);
  puStack_e0 = param_2;
  local_8._0_1_ = 0x1d;
  puVar6 = (undefined4 *)FUN_0050f440();
  local_8 = CONCAT31(local_8._1_3_,0x11);
  puVar4 = (undefined4 *)in_ECX[0x222];
  if ((puVar4 != puVar6) && (in_ECX[0x222] = puVar6, puVar4 != (undefined4 *)0x0)) {
    ppuStack_dc = (undefined **)0x514ced;
    (**(code **)*puVar4)();
  }
  piVar5 = (int *)in_ECX[0x222];
  if (piVar5 != (int *)0x0) {
    ppuStack_dc = (undefined **)0x514d01;
    (**(code **)(*piVar5 + 0x28))();
    puStack_e0 = (undefined1 *)0x514d0d;
    ppuStack_dc = (undefined **)piVar5;
    FUN_006e5050();
  }
  FUN_0050f040();
  in_ECX[0x21a] = -(uint)(in_ECX[0x222] != 0) & in_ECX[0x222] + 0x98;
  in_ECX[0x21c] = param_4;
  in_ECX[0x21b] = param_2;
  FUN_00508480();
  ppuStack_dc = (undefined **)0x514d5b;
  FUN_0045c990();
  ppuStack_dc = (undefined **)&local_40;
  local_8._0_1_ = 0x1e;
  puStack_e0 = (undefined1 *)0x0;
  FUN_004eabf0();
  local_8._0_1_ = 0x11;
  piVar5 = (int *)(local_40 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      ppuStack_dc = (undefined **)0x514d99;
      FID_conflict__free(piVar5);
    }
  }
  ppuStack_dc = (undefined **)0x514da9;
  FUN_004ea730();
  FUN_004ea0c0();
  ppuStack_dc = &PTR_DAT_00c7ed68;
  *(undefined1 *)(in_ECX + 0x139) = 0;
  puStack_e0 = (undefined1 *)0x514dcd;
  FUN_006e4900();
  ppuStack_dc = (undefined **)0x1000280;
  puStack_e0 = (undefined1 *)0x514de7;
  FUN_006e6170();
  ppuStack_dc = (undefined **)0x1000281;
  puStack_e0 = (undefined1 *)0x514e01;
  FUN_006e6170();
  FUN_00634690();
  local_8._0_1_ = 0x21;
  ppuStack_dc = (undefined **)&local_54;
  puStack_e0 = (undefined1 *)0x514e26;
  FUN_00635a10();
  local_8 = CONCAT31(local_8._1_3_,0x22);
  ppuStack_dc = (undefined **)&local_18;
  puStack_e0 = (undefined1 *)0x514e3e;
  FUN_00635a10();
  piVar5 = (int *)(local_54 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      ppuStack_dc = (undefined **)0x514e5e;
      FID_conflict__free(piVar5);
    }
  }
  local_8._0_1_ = 0x25;
  piVar5 = (int *)(local_58 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      ppuStack_dc = (undefined **)0x514e85;
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(local_18 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  ppuStack_dc = (undefined **)0x514ea5;
  cVar3 = FUN_005b5020();
  if (cVar3 == '\0') {
    ppuStack_dc = (undefined **)0x514eb8;
    FUN_00634890();
    piVar5 = (int *)(local_5c + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        ppuStack_dc = (undefined **)0x514ee0;
        FID_conflict__free(piVar5);
      }
    }
  }
  else {
    local_24 = (void *)0x0;
    local_20 = 0;
    local_1c = 0;
    local_8._0_1_ = 0x26;
    ppuStack_dc = (undefined **)0x514f0f;
    FUN_0045c990();
    local_8._0_1_ = 0x27;
    ppuStack_dc = (undefined **)0x0;
    puStack_e0 = (undefined1 *)0x2;
    FUN_00635ea0(&local_24);
    local_8 = CONCAT31(local_8._1_3_,0x26);
    piVar5 = (int *)(local_44 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        ppuStack_dc = (undefined **)0x514f4e;
        FID_conflict__free(piVar5);
      }
    }
    param_1 = 0;
    if (0 < local_1c) {
      do {
        ppuStack_dc = (undefined **)0x514f67;
        operator_new(0x40);
        local_8._0_1_ = 0x28;
        puStack_e0 = &stack0xffffff28;
        ppuStack_dc = (undefined **)param_1;
        FUN_0040f6b0();
        ppuStack_dc = (undefined **)0x514f83;
        uVar7 = FUN_00512c10();
        local_8 = CONCAT31(local_8._1_3_,0x26);
        iVar2 = in_ECX[0x13c];
        iVar9 = iVar2 + 1;
        if ((int)in_ECX[0x13b] < iVar9) {
          if (iVar9 < 0) {
            iVar9 = iVar2 + 2;
          }
          uVar10 = iVar2 + 9 + (iVar9 >> 1) & 0xfffffff8;
          if (in_ECX[0x13b] != uVar10) {
            if ((int)uVar10 < 1) {
              ppuStack_dc = (undefined **)0x514ff4;
              FID_conflict__free((void *)in_ECX[0x13a]);
              in_ECX[0x13a] = 0;
            }
            else {
              ppuStack_dc = (undefined **)in_ECX[0x13a];
              if (ppuStack_dc == (undefined **)0x0) {
                ppuStack_dc = (undefined **)0x514fcd;
                uVar8 = FUN_004c554b();
                in_ECX[0x13a] = uVar8;
              }
              else {
                puStack_e0 = (undefined1 *)0x514fde;
                uVar8 = FUN_004c553b();
                in_ECX[0x13a] = uVar8;
              }
            }
            in_ECX[0x13b] = uVar10;
          }
        }
        iVar2 = in_ECX[0x13c];
        param_1 = param_1 + 1;
        in_ECX[0x13c] = iVar2 + 1;
        *(undefined4 *)(in_ECX[0x13a] + iVar2 * 4) = uVar7;
      } while (param_1 < local_1c);
    }
    if (in_ECX[0x138] != 0) {
      FUN_006e7e60();
    }
    iVar2 = local_1c;
    iVar9 = 0;
    local_8._0_1_ = 0x25;
    if (0 < local_1c) {
      do {
        piVar5 = (int *)(*(int *)((int)local_24 + iVar9 * 4) + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            ppuStack_dc = (undefined **)0x515078;
            FID_conflict__free(piVar5);
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar2);
    }
    ppuStack_dc = (undefined **)0x51508b;
    FID_conflict__free(local_24);
  }
  ppuStack_dc = (undefined **)0x1;
  puStack_e0 = (undefined1 *)0x51509d;
  FUN_006e5380();
  piVar5 = (int *)(local_18 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      ppuStack_dc = (undefined **)0x5150bd;
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      ppuStack_dc = (undefined **)0x5150dd;
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return in_ECX;
}

