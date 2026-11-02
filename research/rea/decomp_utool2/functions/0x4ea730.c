// rea decompile_all
// name: FUN_004ea730
// address: 0x4ea730
// body: available
// range: 0x4ea730-0x4eab2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ea730(char param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *_Memory;
  void *pvVar5;
  int in_ECX;
  void *pvVar6;
  uint uVar7;
  bool bVar8;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 *local_38;
  void *local_34;
  void *local_30;
  int local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00704e0c;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x98) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0x94));
    *(undefined4 *)(in_ECX + 0x94) = 0;
    *(undefined4 *)(in_ECX + 0x98) = 0;
  }
  pvVar6 = (void *)0x0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  uVar7 = 0;
  local_20 = (void *)0x0;
  pvVar5 = local_20;
  if (0 < *(int *)(in_ECX + 0x30)) {
    bVar8 = *(int *)(in_ECX + 0x30) != 0;
    do {
      if (bVar8) {
        iVar4 = *(int *)(*(int *)(in_ECX + 0x28) + uVar7 * 4);
      }
      else {
        iVar4 = 0;
      }
      if ((*(byte *)(iVar4 + 0x68) & 2) != 0) {
        if (uVar7 < *(uint *)(in_ECX + 0x30)) {
          uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x28) + uVar7 * 4);
        }
        else {
          uVar3 = 0;
        }
        iVar4 = FUN_006f6dd6(uVar3,0,&juce::Component::RTTI_Type_Descriptor,
                             &juce::ToggleButton::RTTI_Type_Descriptor,0,uVar2);
        if (iVar4 == 0) {
          if (uVar7 < *(uint *)(in_ECX + 0x30)) {
            iVar4 = *(int *)(*(int *)(in_ECX + 0x28) + uVar7 * 4);
          }
          else {
            iVar4 = 0;
          }
          if ((int)pvVar6 < (int)*(void **)(iVar4 + 0x18)) {
            pvVar6 = *(void **)(iVar4 + 0x18);
          }
        }
      }
      uVar7 = uVar7 + 1;
      bVar8 = uVar7 < *(uint *)(in_ECX + 0x30);
      pvVar5 = pvVar6;
    } while ((int)uVar7 < (int)*(uint *)(in_ECX + 0x30));
  }
  local_20 = pvVar5;
  local_8 = 0;
  local_18 = 0;
  local_1c = 1;
  _Memory = (undefined4 *)FUN_004c554b(0x20);
  local_34 = (void *)0x8;
  local_30 = (void *)0x1;
  if (_Memory != (undefined4 *)0x0) {
    *_Memory = 0;
  }
  local_14 = 0;
  local_38 = _Memory;
  if (0 < *(int *)(in_ECX + 0x30)) {
    bVar8 = *(int *)(in_ECX + 0x30) != 0;
    do {
      if (bVar8) {
        iVar4 = *(int *)(*(int *)(in_ECX + 0x28) + local_14 * 4);
      }
      else {
        iVar4 = 0;
      }
      if ((*(byte *)(iVar4 + 0x68) & 2) != 0) {
        local_2c = FUN_006f6dd6(iVar4,0,&juce::Component::RTTI_Type_Descriptor,
                                &juce::ToggleButton::RTTI_Type_Descriptor,0,uVar2);
        if (local_2c == 0) {
          FUN_006e9790(*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14),local_20,
                       *(undefined4 *)(iVar4 + 0x1c));
        }
        local_18 = local_18 + *(int *)(iVar4 + 0x18);
        local_28 = (void *)((int)local_30 + 1);
        if ((int)local_34 < (int)local_28) {
          pvVar6 = local_28;
          if ((int)local_28 < 0) {
            pvVar6 = (void *)((int)local_30 + 2);
          }
          local_24 = (void *)(((int)pvVar6 >> 1) + 8 + (int)local_28 & 0xfffffff8);
          if (local_34 != local_24) {
            if ((int)local_24 < 1) {
              FID_conflict__free(_Memory);
              _Memory = (undefined4 *)0x0;
            }
            else if (_Memory == (undefined4 *)0x0) {
              _Memory = (undefined4 *)FUN_004c554b();
            }
            else {
              _Memory = (undefined4 *)FUN_004c553b(_Memory,(int)local_24 << 2);
            }
            local_34 = local_24;
            local_38 = _Memory;
          }
        }
        if (_Memory + (int)local_30 != (int *)0x0) {
          _Memory[(int)local_30] = iVar4;
        }
        local_30 = local_28;
        if (local_2c == 0) {
          local_1c = local_1c + 1;
          local_24 = (void *)((int)local_28 + 1);
          pvVar6 = local_28;
          if ((int)local_34 < (int)local_24) {
            pvVar5 = local_24;
            if ((int)local_24 < 0) {
              pvVar5 = (void *)((int)local_28 + 2);
            }
            pvVar5 = (void *)((int)local_28 + ((int)pvVar5 >> 1) + 9 & 0xfffffff8);
            if (local_34 != pvVar5) {
              if ((int)pvVar5 < 1) {
                FID_conflict__free(_Memory);
                _Memory = (undefined4 *)0x0;
                pvVar6 = local_30;
                local_38 = _Memory;
                local_34 = pvVar5;
              }
              else if (_Memory == (undefined4 *)0x0) {
                _Memory = (undefined4 *)FUN_004c554b();
                pvVar6 = local_30;
                local_38 = _Memory;
                local_34 = pvVar5;
              }
              else {
                _Memory = (undefined4 *)FUN_004c553b(_Memory,(int)pvVar5 * 4);
                pvVar6 = local_30;
                local_38 = _Memory;
                local_34 = pvVar5;
              }
            }
          }
          local_30 = local_24;
          if (_Memory + (int)pvVar6 != (undefined4 *)0x0) {
            _Memory[(int)pvVar6] = 0;
          }
        }
      }
      local_14 = local_14 + 1;
      bVar8 = local_14 < *(uint *)(in_ECX + 0x30);
    } while ((int)local_14 < (int)*(uint *)(in_ECX + 0x30));
  }
  local_2c = (*(int *)(in_ECX + 0x18) - local_18) / local_1c;
  local_24 = (void *)0x0;
  local_1c = 0;
  if (0 < (int)local_30) {
    bVar8 = local_30 != (void *)0x0;
    pvVar6 = local_30;
    do {
      iVar4 = local_2c;
      if ((bVar8) && (iVar1 = _Memory[(int)local_24], pvVar6 = local_30, iVar1 != 0)) {
        if ((param_1 == '\0') || (*(int *)(iVar1 + 0x10) < 0)) {
          if (DAT_00c8a67c == 0) {
            local_20 = operator_new(0xd0);
            local_8._0_1_ = 2;
            DAT_00c8a67c = FUN_006cb960();
            local_8 = (uint)local_8._1_3_ << 8;
          }
          FUN_006e5fd0(iVar1,1);
          FUN_006e9790(local_1c,(*(int *)(in_ECX + 0x1c) - *(int *)(iVar1 + 0x1c)) / 2,
                       *(undefined4 *)(iVar1 + 0x18),*(int *)(iVar1 + 0x1c));
          iVar4 = *(int *)(iVar1 + 0x18);
          pvVar6 = local_30;
        }
        else {
          local_40 = *(undefined4 *)(iVar1 + 0x18);
          local_3c = *(int *)(iVar1 + 0x1c);
          local_44 = (*(int *)(in_ECX + 0x1c) - local_3c) / 2;
          local_48 = local_1c;
          iVar4 = FUN_006f6dd6(iVar1,0,&juce::Component::RTTI_Type_Descriptor,
                               &juce::ToggleButton::RTTI_Type_Descriptor,0);
          if (iVar4 != 0) {
            FUN_006e62c0();
          }
          if (DAT_00c8a67c == 0) {
            local_28 = operator_new(0xd0);
            local_8._0_1_ = 1;
            DAT_00c8a67c = FUN_006cb960();
            local_8 = (uint)local_8._1_3_ << 8;
          }
          FUN_006e6060(iVar1,&local_48,400,0,0,0,0,0);
          iVar4 = *(int *)(iVar1 + 0x18);
          pvVar6 = local_30;
        }
      }
      local_24 = (void *)((int)local_24 + 1);
      local_1c = local_1c + iVar4;
      bVar8 = local_24 < pvVar6;
    } while ((int)local_24 < (int)pvVar6);
  }
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return;
}

