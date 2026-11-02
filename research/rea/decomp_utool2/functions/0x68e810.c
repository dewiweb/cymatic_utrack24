// rea decompile_all
// name: FUN_0068e810
// address: 0x68e810
// body: available
// range: 0x68e810-0x68f069 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0068ef79) */
/* WARNING: Removing unreachable block (ram,0x0068ef80) */
/* WARNING: Removing unreachable block (ram,0x0068ef8b) */
/* WARNING: Removing unreachable block (ram,0x0068ef96) */
/* WARNING: Removing unreachable block (ram,0x0068ef9c) */
/* WARNING: Removing unreachable block (ram,0x0068efc1) */
/* WARNING: Removing unreachable block (ram,0x0068efcc) */

void FUN_0068e810(char param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  int in_ECX;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined4 *in_XMM0_Da;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072179c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_40 = (double)CONCAT44(in_ECX,(int)local_40);
  local_30 = (double)(ulonglong)(uint)local_30;
  iVar2 = FUN_006e9580();
  (**(code **)(*(int *)(iVar2 + 0x1c) + 0x18))();
  local_8 = 0;
  FUN_006831f0();
  FUN_004363b0();
  local_28._4_4_ = in_XMM0_Da;
  FUN_006831f0();
  FUN_004363b0();
  FUN_00423c70();
  local_8._0_1_ = 1;
  if (*(int *)(in_ECX + 0xc) == 0) {
    FUN_006cf9c0();
  }
  local_18 = 0;
  local_8._0_1_ = 2;
  uVar3 = (**(code **)(*(int *)(iVar2 + 0x1c) + 0x14))();
  local_8._0_1_ = 3;
  FUN_00636ec0();
  FUN_0044ec90();
  FUN_00644f50(uVar3);
  local_8._0_1_ = 2;
  if (local_28._4_4_ != (undefined4 *)0x0) {
    LOCK();
    piVar7 = local_28._4_4_ + 1;
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_28._4_4_)();
    }
  }
  if (**(char **)(in_ECX + 0x7c) != '\0') {
    FUN_00637690();
    local_8._0_1_ = 4;
    FUN_00636ec0();
    FUN_0044ec90();
    FUN_00644f50(&local_1c);
    local_8._0_1_ = 2;
    piVar7 = local_28._4_4_ + -2;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  FUN_006e8e70(&stack0xffffff7c,0x1001810,0);
  FUN_00644ca0();
  if (*(int *)(in_ECX + 0x98) == 0) {
    FUN_00641960();
  }
  else {
    FUN_00641960();
    local_18 = 0x50;
  }
  iVar4 = (int)*(float *)(in_ECX + 0x8c) + local_18 + 0x28;
  iVar2 = 0x15e;
  if (0x15e < iVar4) {
    iVar2 = iVar4;
  }
  local_8._0_1_ = 5;
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar4 = FUN_006cf9c0();
    iVar4 = *(int *)(iVar4 + 8);
  }
  else {
    iVar4 = *(int *)(*(int *)(in_ECX + 0xc) + 0x18);
  }
  iVar10 = 0x28;
  if ((int)((float)iVar4 * 0.7) < iVar2) {
    iVar2 = (int)((float)iVar4 * 0.7);
  }
  local_18 = (int)*(float *)(in_ECX + 0x90) + 0x28;
  iVar4 = 0;
  local_28 = (double)CONCAT44(local_18,(undefined4)local_28);
  if (0 < *(int *)(in_ECX + 0xf4)) {
    do {
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      iVar10 = iVar10 + 0x10 + *(int *)(*(int *)(*(int *)(in_ECX + 0xec) + iVar1) + 0x18);
    } while (iVar4 < *(int *)(in_ECX + 0xf4));
  }
  if (iVar10 < iVar2) {
    iVar10 = iVar2;
  }
  local_18 = (*(int *)(in_ECX + 0x118) + *(int *)(in_ECX + 0x10c) + *(int *)(in_ECX + 0x100)) * 0x32
             + local_18;
  if (0 < *(int *)(in_ECX + 0xf4)) {
    local_18 = local_18 + *(int *)(**(int **)(in_ECX + 0xec) + 0x1c) + 0x14;
  }
  local_20 = *(int *)(in_ECX + 0x124) + -1;
  if (-1 < local_20) {
    local_30 = (double)CONCAT44(*(int *)(in_ECX + 0x11c),(uint)local_30);
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x11c) + local_20 * 4);
      iVar4 = (*(int *)(iVar2 + 0x18) * 100) / 0x50;
      if (iVar10 < iVar4) {
        iVar10 = iVar4;
      }
      iVar4 = local_18 + 10 + *(int *)(iVar2 + 0x1c);
      local_20 = local_20 + -1;
      local_18 = iVar4 + 0x12;
      if (**(char **)(iVar2 + 4) == '\0') {
        local_18 = iVar4;
      }
    } while (-1 < local_20);
    in_ECX = local_40._4_4_;
  }
  iVar2 = local_18;
  iVar4 = *(int *)(in_ECX + 0x130) + -1;
  if (-1 < iVar4) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 0x128) + iVar4 * 4) + 0x164);
      if (iVar10 < iVar1) {
        iVar10 = iVar1;
      }
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  local_8._0_1_ = 6;
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar4 = FUN_006cf9c0();
    iVar4 = *(int *)(iVar4 + 8);
  }
  else {
    iVar4 = *(int *)(*(int *)(in_ECX + 0xc) + 0x18);
  }
  local_8._0_1_ = 2;
  if ((int)((float)iVar4 * 0.7) < iVar10) {
    iVar10 = (int)((float)iVar4 * 0.7);
  }
  local_20 = *(int *)(in_ECX + 0x130) + -1;
  local_30 = (double)CONCAT44(iVar10,(uint)local_30);
  if (-1 < local_20) {
    local_40 = (double)CONCAT44((int)((float)iVar10 * 0.8),(int)local_40);
    iVar2 = local_18;
    do {
      iVar4 = *(int *)(*(int *)(in_ECX + 0x128) + local_20 * 4);
      FUN_004a4580();
      iVar2 = iVar2 + 10 + *(int *)(iVar4 + 0x1c);
      local_20 = local_20 + -1;
    } while (-1 < local_20);
    iVar10 = local_30._4_4_;
    local_18 = iVar2;
  }
  local_8._0_1_ = 7;
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar4 = FUN_006cf9c0();
    iVar4 = *(int *)(iVar4 + 0xc);
  }
  else {
    iVar4 = *(int *)(*(int *)(in_ECX + 0xc) + 0x1c);
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  local_20 = iVar4 + -0x32;
  if (iVar2 < iVar4 + -0x32) {
    local_20 = iVar2;
  }
  if (param_1 != '\0') {
    if (iVar10 < *(int *)(in_ECX + 0x18)) {
      iVar10 = *(int *)(in_ECX + 0x18);
    }
    if (local_20 < *(int *)(in_ECX + 0x1c)) {
      local_20 = *(int *)(in_ECX + 0x1c);
    }
  }
  if ((*(byte *)(in_ECX + 0x68) & 2) == 0) {
    FUN_0068a430(*(undefined4 *)(in_ECX + 0x158),iVar10);
  }
  else {
    puVar5 = (undefined4 *)FUN_004afa30(local_48,iVar10);
    FUN_006e9790(*puVar5,puVar5[1],puVar5[2]);
  }
  *(undefined4 *)(in_ECX + 0xdc) = 10;
  *(int *)(in_ECX + 0xe4) = iVar10 + -0x14;
  iVar4 = -0x10;
  *(undefined4 *)(in_ECX + 0xe0) = 10;
  *(int *)(in_ECX + 0xe8) = local_20 + -10;
  iVar2 = *(int *)(in_ECX + 0xf4) + -1;
  if (-1 < iVar2) {
    piVar7 = (int *)(*(int *)(in_ECX + 0xec) + iVar2 * 4);
    do {
      iVar1 = *piVar7;
      piVar7 = piVar7 + -1;
      iVar4 = iVar4 + 0x10 + *(int *)(iVar1 + 0x18);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  _param_1 = (iVar10 - iVar4) / 2;
  local_20 = (int)((float)*(int *)(in_ECX + 0x1c) * 0.95);
  local_18 = 0;
  if (0 < *(int *)(in_ECX + 0xf4)) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0xec) + local_18 * 4);
      local_40 = (double)((float)*(int *)(in_ECX + 0x1c) * 0.95) + 6755399441055744.0;
      iVar4 = (int)local_40 - *(int *)(iVar2 + 0x1c);
      FUN_006e9790(_param_1,iVar4,*(undefined4 *)(iVar2 + 0x18));
      if (iVar4 < local_20) {
        local_20 = iVar4;
      }
      _param_1 = _param_1 + 0x10 + *(int *)(iVar2 + 0x18);
      FUN_006e9910();
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(in_ECX + 0xf4));
  }
  _param_1 = 0;
  if (0 < *(int *)(in_ECX + 0x13c)) {
    iVar2 = (int)local_28._4_4_;
    do {
      iVar4 = *(int *)(*(int *)(in_ECX + 0x134) + _param_1 * 4);
      local_40 = (double)CONCAT44(0x16,(int)local_40);
      iVar10 = FUN_006f6dd6(iVar4,0,&juce::Component::RTTI_Type_Descriptor,
                            &juce::ComboBox::RTTI_Type_Descriptor);
      piVar8 = *(int **)(in_ECX + 0x104);
      piVar7 = piVar8 + *(int *)(in_ECX + 0x10c);
      for (; piVar8 != piVar7; piVar8 = piVar8 + 1) {
        if (iVar10 == *piVar8) {
          uVar9 = (int)piVar8 - *(int *)(in_ECX + 0x104) >> 2;
          if (-1 < (int)uVar9) {
            if (uVar9 < *(uint *)(in_ECX + 0x154)) {
              ppuVar6 = (undefined **)(*(int *)(in_ECX + 0x14c) + uVar9 * 4);
            }
            else {
              ppuVar6 = &PTR_DAT_00c7ed68;
            }
            if (**ppuVar6 != '\0') {
              iVar2 = iVar2 + 0x12;
            }
          }
          break;
        }
      }
      iVar10 = FUN_006f6dd6(iVar4,0,&juce::Component::RTTI_Type_Descriptor,
                            &juce::TextEditor::RTTI_Type_Descriptor);
      piVar8 = *(int **)(in_ECX + 0xf8);
      piVar7 = piVar8 + *(int *)(in_ECX + 0x100);
      for (; piVar8 != piVar7; piVar8 = piVar8 + 1) {
        if (iVar10 == *piVar8) {
          uVar9 = (int)piVar8 - *(int *)(in_ECX + 0xf8) >> 2;
          if (-1 < (int)uVar9) {
            if (uVar9 < *(uint *)(in_ECX + 0x148)) {
              ppuVar6 = (undefined **)(*(int *)(in_ECX + 0x140) + uVar9 * 4);
            }
            else {
              ppuVar6 = &PTR_DAT_00c7ed68;
            }
            if (**ppuVar6 != '\0') {
              iVar2 = iVar2 + 0x12;
            }
          }
          break;
        }
      }
      piVar8 = *(int **)(in_ECX + 0x11c);
      piVar7 = piVar8 + *(int *)(in_ECX + 0x124);
      for (; iVar10 = iVar2, piVar8 != piVar7; piVar8 = piVar8 + 1) {
        if (iVar4 == *piVar8) {
          iVar10 = iVar2 + 0x12;
          if (**(char **)(iVar4 + 4) == '\0') {
            iVar10 = iVar2;
          }
          local_40 = (double)((float)*(int *)(in_ECX + 0x18) * 0.1) + 6755399441055744.0;
          FUN_006e9790((int)local_40,iVar10,*(undefined4 *)(iVar4 + 0x18));
          iVar2 = *(int *)(iVar4 + 0x1c);
          goto LAB_0068ef44;
        }
      }
      piVar8 = *(int **)(in_ECX + 0x128);
      piVar7 = piVar8 + *(int *)(in_ECX + 0x130);
      for (; piVar8 != piVar7; piVar8 = piVar8 + 1) {
        if (iVar4 == *piVar8) {
          FUN_006e9790((*(int *)(in_ECX + 0x18) - *(int *)(iVar4 + 0x18)) / 2,iVar2,
                       *(int *)(iVar4 + 0x18));
          iVar2 = *(int *)(iVar4 + 0x1c);
          goto LAB_0068ef44;
        }
      }
      local_30 = (double)((float)*(int *)(in_ECX + 0x18) * 0.8) + 6755399441055744.0;
      local_28 = (double)((float)*(int *)(in_ECX + 0x18) * 0.1) + 6755399441055744.0;
      FUN_006e9790((undefined4)local_28,iVar2,(uint)local_30);
      iVar2 = local_40._4_4_;
LAB_0068ef44:
      _param_1 = _param_1 + 1;
      iVar2 = iVar10 + 10 + iVar2;
    } while (_param_1 < *(int *)(in_ECX + 0x13c));
  }
  *(byte *)(in_ECX + 0x68) =
       (*(int *)(in_ECX + 0x30) != 0) - 1U & 0x20 | *(byte *)(in_ECX + 0x68) & 0xdf;
  FID_conflict__free((void *)0x0);
  if (local_1c != (undefined4 *)0x0) {
    LOCK();
    piVar7 = local_1c + 1;
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_1c)();
    }
  }
  ExceptionList = local_10;
  return;
}

