// rea decompile_all
// name: FUN_005aee90
// address: 0x5aee90
// body: available
// range: 0x5aee90-0x5af987 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005aee90(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined **ppuVar5;
  int *piVar6;
  undefined4 *in_ECX;
  int iVar7;
  int *piVar8;
  undefined4 **ppuVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined **local_24 [2];
  undefined4 local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007186d5;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = (undefined4 *)0x0;
  FUN_006ea2c0();
  in_ECX[0x1c] = param_1;
  in_ECX[0x1d] = FileSelector::Listener::vftable;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  *in_ECX = WelcomeWizard::Page1::vftable;
  in_ECX[0x1d] = WelcomeWizard::Page1::vftable;
  FUN_004fa2b0();
  local_2c = (undefined4 *)&DAT_00bfe12c;
  local_28 = (undefined4 *)&DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_006e8b40();
  piVar8 = local_28 + -2;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  local_2c = (undefined4 *)&DAT_00bfe12c;
  local_28 = (undefined4 *)&DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,9);
  FUN_006e8b40();
  piVar8 = local_28 + -2;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  local_2c = (undefined4 *)&DAT_00bfe12c;
  local_28 = (undefined4 *)&DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0xe);
  FUN_006e8b40();
  piVar8 = local_28 + -2;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  piVar8 = in_ECX + 0xdb;
  *piVar8 = 0;
  in_ECX[0xdc] = 0;
  in_ECX[0xdd] = 0;
  local_8._0_1_ = 0x12;
  FUN_0045c990();
  local_8._0_1_ = 0x13;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,0x14);
  FUN_005073d0(&local_28,&local_30,&PTR_DAT_00c7ed68);
  piVar3 = local_28 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_8._0_1_ = 0x17;
  piVar3 = local_30 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,0x18);
  piVar3 = local_2c + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  LOCK();
  iVar7 = in_ECX[0x3a];
  in_ECX[0x3a] = local_2c;
  UNLOCK();
  piVar6 = (int *)(iVar7 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  FUN_006e6400(&stack0xffffffa4);
  FUN_006ce9f0(1);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0057ca60();
  local_8 = CONCAT31(local_8._1_3_,0x19);
  piVar3 = (int *)FUN_00683640();
  iVar7 = *piVar3;
  if (in_ECX[0x3b] != iVar7) {
    if (iVar7 != 0) {
      LOCK();
      *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
      UNLOCK();
    }
    puVar4 = (undefined4 *)in_ECX[0x3b];
    in_ECX[0x3b] = iVar7;
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      piVar3 = puVar4 + 1;
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)*puVar4)();
      }
    }
  }
  if (local_2c != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_2c + 1;
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)*local_2c)();
    }
  }
  local_8 = CONCAT31(local_8._1_3_,0x17);
  if (local_28 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_28 + 1;
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)*local_28)();
    }
  }
  in_ECX[0x3c] = DAT_00c7ebb0;
  in_ECX[0x3d] = 0x24;
  if (in_ECX + 0x1e != (int *)0x0) {
    (**(code **)(in_ECX[0x1e] + 0x28))();
    FUN_006e5050();
  }
  FUN_0045c990();
  local_8._0_1_ = 0x1a;
  FUN_006e4900();
  local_8._0_1_ = 0x17;
  piVar3 = local_28 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  (**(code **)(in_ECX[0x3f] + 0x28))();
  FUN_006e5050();
  FUN_0045c990();
  local_8._0_1_ = 0x1b;
  FUN_006e4900();
  local_8._0_1_ = 0x17;
  piVar3 = local_28 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  (**(code **)(in_ECX[0x73] + 0x28))();
  FUN_006e5050();
  FUN_0045c990();
  local_8._0_1_ = 0x1c;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x17);
  piVar3 = local_28 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if (in_ECX + 0xa7 != (int *)0x0) {
    (**(code **)(in_ECX[0xa7] + 0x28))();
    FUN_006e5050();
  }
  puVar4 = operator_new(0xe0);
  local_8._0_1_ = 0x1d;
  local_34 = puVar4;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,0x1e);
  local_28 = (undefined4 *)0x1;
  FUN_006e3660();
  *puVar4 = juce::ToggleButton::vftable;
  puVar4[0x1c] = juce::ToggleButton::vftable;
  *(undefined1 *)((int)puVar4 + 0xd9) = 1;
  local_8 = 0x17;
  piVar3 = local_30 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_24[0] = &PTR_vftable_00c7ed44;
  local_1c[0] = 4;
  local_8._0_1_ = 0x20;
  FUN_0061f730();
  FUN_0061fa00();
  local_8 = CONCAT31(local_8._1_3_,0x21);
  FUN_00637060();
  piVar3 = local_28 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,0x17);
  (**(code **)(*local_24[0] + 0x54))();
  if ((int)in_ECX[0xdc] < in_ECX[0xdd] + 1) {
    FUN_00409cf0();
  }
  iVar7 = in_ECX[0xdd];
  in_ECX[0xdd] = iVar7 + 1;
  *(undefined4 **)(*piVar8 + iVar7 * 4) = puVar4;
  puVar4 = operator_new(0xe0);
  local_8._0_1_ = 0x22;
  local_2c = puVar4;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,0x23);
  local_28 = (undefined4 *)0x2;
  FUN_006e3660();
  *puVar4 = juce::ToggleButton::vftable;
  puVar4[0x1c] = juce::ToggleButton::vftable;
  *(undefined1 *)((int)puVar4 + 0xd9) = 1;
  local_8 = 0x17;
  piVar3 = local_30 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_24[0] = &PTR_vftable_00c7ed44;
  local_1c[0] = 3;
  ppuVar9 = &local_28;
  local_8._0_1_ = 0x25;
  FUN_0061f730(ppuVar9);
  FUN_0061fa00(ppuVar9);
  local_8 = CONCAT31(local_8._1_3_,0x26);
  FUN_00637060(&local_28);
  piVar3 = local_28 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,0x17);
  (**(code **)(*local_24[0] + 0x54))();
  iVar7 = in_ECX[0xdd] + 1;
  if ((int)in_ECX[0xdc] < iVar7) {
    FUN_00409cf0(iVar7 / 2 + in_ECX[0xdd] + 9 & 0xfffffff8);
  }
  iVar7 = in_ECX[0xdd];
  in_ECX[0xdd] = iVar7 + 1;
  *(undefined4 **)(*piVar8 + iVar7 * 4) = local_2c;
  local_30 = operator_new(0xe0);
  local_8._0_1_ = 0x27;
  FUN_0045c990("LP-16");
  local_8 = CONCAT31(local_8._1_3_,0x28);
  local_28 = (undefined4 *)0x4;
  FUN_006e3660(&local_2c);
  *local_30 = juce::ToggleButton::vftable;
  local_30[0x1c] = juce::ToggleButton::vftable;
  *(undefined1 *)((int)local_30 + 0xd9) = 1;
  local_8 = 0x17;
  piVar3 = local_2c + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_24[0] = &PTR_vftable_00c7ed44;
  local_1c[0] = 1;
  ppuVar9 = &local_2c;
  local_8._0_1_ = 0x2a;
  puVar11 = &DAT_007486b8;
  FUN_0061f730(ppuVar9,&DAT_007486b8);
  FUN_0061fa00(ppuVar9,puVar11);
  local_8 = CONCAT31(local_8._1_3_,0x2b);
  FUN_00637060(&local_2c,local_24);
  piVar3 = local_2c + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,0x17);
  (**(code **)(*local_24[0] + 0x54))(local_1c);
  iVar7 = in_ECX[0xdd] + 1;
  if ((int)in_ECX[0xdc] < iVar7) {
    FUN_00409cf0(iVar7 / 2 + in_ECX[0xdd] + 9 & 0xfffffff8);
  }
  puVar4 = local_30;
  iVar7 = in_ECX[0xdd];
  local_30 = (undefined4 *)0x0;
  in_ECX[0xdd] = iVar7 + 1;
  *(undefined4 **)(*piVar8 + iVar7 * 4) = puVar4;
  if (0 < (int)in_ECX[0xdd]) {
    local_28 = *(undefined4 **)ThreadLocalStoragePointer;
    do {
      if ((local_30 < (undefined4 *)in_ECX[0xdd]) &&
         (piVar8 = *(int **)(in_ECX[0xdb] + (int)local_30 * 4), piVar8 != (int *)0x0)) {
        (**(code **)(*piVar8 + 0x28))(1);
        iVar7 = -1;
        if ((undefined4 *)piVar8[3] != in_ECX) {
          if ((undefined4 *)piVar8[3] == (undefined4 *)0x0) {
            FUN_006cfd60();
          }
          else {
            FUN_006cf2a0(piVar8);
          }
          piVar8[3] = (int)in_ECX;
          if ((*(byte *)(piVar8 + 0x1a) & 2) != 0) {
            FUN_006ceba0();
          }
          if (((*(byte *)((int)piVar8 + 0x69) & 1) == 0) && (iVar7 = in_ECX[0xc], 0 < iVar7)) {
            do {
              if ((*(byte *)(*(int *)(in_ECX[10] + -4 + iVar7 * 4) + 0x69) & 1) == 0) break;
              iVar7 = iVar7 + -1;
            } while (0 < iVar7);
          }
          FUN_00410380(iVar7,piVar8);
          FUN_006cedf0();
          FUN_006cef00();
        }
      }
      puVar4 = local_30;
      if (((int)local_28[1] < DAT_00cfff24) && (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061fa00(&local_34,&DAT_007486b4);
      puVar1 = local_34;
      if (puVar4 < (undefined4 *)in_ECX[0xdd]) {
        iVar7 = *(int *)(in_ECX[0xdb] + (int)puVar4 * 4);
      }
      else {
        iVar7 = 0;
      }
      piVar3 = *(int **)(iVar7 + 0x58);
      piVar8 = piVar3 + *(int *)(iVar7 + 0x60) * 6;
      for (; piVar3 != piVar8; piVar3 = piVar3 + 6) {
        if ((undefined4 *)*piVar3 == local_34) {
          ppuVar5 = (undefined **)(piVar3 + 2);
          if (ppuVar5 != (undefined **)0x0) goto LAB_005af7f3;
          break;
        }
      }
      ppuVar5 = &PTR_PTR_00c7ed58;
LAB_005af7f3:
      local_2c = (undefined4 *)(**(code **)(*(int *)*ppuVar5 + 4))(ppuVar5 + 2);
      piVar8 = puVar1 + -2;
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      if (puVar4 < (undefined4 *)in_ECX[0xdd]) {
        local_2c = *(undefined4 **)(in_ECX[0xdb] + (int)puVar4 * 4);
      }
      else {
        local_2c = (undefined4 *)0x0;
      }
      uVar10 = 0;
      uVar2 = FUN_005b2750(0);
      FUN_006e5380(uVar2,uVar10);
      local_30 = (undefined4 *)((int)puVar4 + 1);
    } while ((int)local_30 < (int)in_ECX[0xdd]);
  }
  piVar3 = (int *)FUN_005b2c70();
  local_8._0_1_ = 0x2c;
  piVar8 = in_ECX + 0xfe;
  piVar6 = (int *)(*piVar3 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  LOCK();
  iVar7 = *piVar8;
  *piVar8 = *piVar3;
  UNLOCK();
  piVar3 = (int *)(iVar7 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = in_ECX + 0xde;
  FUN_006e4900(piVar8,0);
  local_8 = CONCAT31(local_8._1_3_,0x17);
  piVar8 = local_34 + -2;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x28))(1);
    iVar7 = -1;
    if ((undefined4 *)in_ECX[0xe1] != in_ECX) {
      if ((undefined4 *)in_ECX[0xe1] == (undefined4 *)0x0) {
        FUN_006cfd60();
      }
      else {
        FUN_006cf2a0(piVar3);
      }
      in_ECX[0xe1] = in_ECX;
      if ((*(byte *)(in_ECX + 0xf8) & 2) != 0) {
        FUN_006ceba0();
      }
      if (((*(byte *)((int)in_ECX + 0x3e1) & 1) == 0) && (iVar7 = in_ECX[0xc], 0 < iVar7)) {
        piVar8 = (int *)(in_ECX[10] + (iVar7 + -1) * 4);
        do {
          if ((*(byte *)(*piVar8 + 0x69) & 1) == 0) break;
          iVar7 = iVar7 + -1;
          piVar8 = piVar8 + -1;
        } while (0 < iVar7);
      }
      FUN_00410380(iVar7,piVar3);
      FUN_006cedf0();
      FUN_006cef00();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

