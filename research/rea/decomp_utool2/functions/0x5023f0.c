// rea decompile_all
// name: FUN_005023f0
// address: 0x5023f0
// body: available
// range: 0x5023f0-0x502a00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005023f0(undefined4 *param_1)

{
  int iVar1;
  undefined **ppuVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int in_ECX;
  uint uVar8;
  undefined **ppuVar9;
  uint uVar10;
  void *_Memory;
  bool bVar11;
  TypeDescriptor *pTStack_78;
  TypeDescriptor *local_74;
  undefined ***local_70;
  uint local_54;
  uint local_4c;
  int local_48;
  undefined **local_44;
  void *local_40;
  int local_3c;
  int *local_34 [2];
  undefined1 local_2c [8];
  int *local_24;
  undefined **local_20;
  undefined **local_1c;
  undefined **local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007075c7;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar8 = 0;
  *(undefined1 *)(in_ECX + 0x15c) = 0;
  if (0 < *(int *)(in_ECX + 0x148)) {
    bVar11 = *(int *)(in_ECX + 0x148) != 0;
    do {
      if (bVar11) {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x140) + uVar8 * 4);
      }
      else {
        iVar1 = 0;
      }
      uVar8 = uVar8 + 1;
      *(undefined1 *)(iVar1 + 0x15) = 0;
      bVar11 = uVar8 < *(uint *)(in_ECX + 0x148);
    } while ((int)uVar8 < (int)*(uint *)(in_ECX + 0x148));
  }
  local_70 = (undefined ***)param_1;
  local_74 = (TypeDescriptor *)0x50246b;
  iVar1 = FUN_00502e20();
  if (iVar1 == 1) {
    local_70 = (undefined ***)0x50292b;
    iVar1 = (**(code **)(*(int *)*param_1 + 0x1c))();
    iVar6 = 0;
    if (0 < *(int *)(iVar1 + 8)) {
      do {
        local_70 = (undefined ***)&local_24;
        local_74 = (TypeDescriptor *)0x502944;
        puVar7 = (undefined4 *)FUN_00411210();
        local_8 = 0;
        local_70 = (undefined ***)0x502956;
        uVar5 = (**(code **)(*(int *)*puVar7 + 0x18))();
        local_70 = (undefined ***)0x0;
        local_74 = &SongProjectLibraryNode::RTTI_Type_Descriptor;
        pTStack_78 = &juce::ReferenceCountedObject::RTTI_Type_Descriptor;
        puVar7 = (undefined4 *)FUN_006f6dd6(uVar5,0);
        local_8 = 0xffffffff;
        local_70 = &local_1c;
        local_74 = (TypeDescriptor *)0x502982;
        (**(code **)(*local_24 + 0x54))();
        if (puVar7 == (undefined4 *)0x0) {
          local_70 = (undefined ***)local_34;
          local_74 = (TypeDescriptor *)0x5029a1;
          puVar7 = (undefined4 *)FUN_00411210();
          local_8 = 1;
          local_70 = (undefined ***)0x5029b3;
          uVar5 = (**(code **)(*(int *)*puVar7 + 0x18))();
          local_70 = (undefined ***)0x0;
          local_74 = &TargetTreeNode::RTTI_Type_Descriptor;
          pTStack_78 = &juce::ReferenceCountedObject::RTTI_Type_Descriptor;
          puVar7 = (undefined4 *)FUN_006f6dd6(uVar5,0);
          local_8 = 0xffffffff;
          local_70 = (undefined ***)local_2c;
          local_74 = (TypeDescriptor *)0x5029df;
          (**(code **)(*local_34[0] + 0x54))();
          local_74 = (TypeDescriptor *)0x5029ec;
          local_70 = (undefined ***)puVar7;
          FUN_00502a10();
        }
        else {
          local_74 = (TypeDescriptor *)0x502993;
          local_70 = (undefined ***)puVar7;
          FUN_00502c20();
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar1 + 8));
    }
  }
  else {
    ppuVar2 = (undefined **)(iVar1 + -2);
    if (ppuVar2 == (undefined **)0x0) {
      local_8 = 2;
      local_70 = (undefined ***)0x502498;
      local_20 = ppuVar2;
      local_1c = ppuVar2;
      local_18 = ppuVar2;
      piVar3 = (int *)FUN_00635650();
      local_8 = CONCAT31(local_8._1_3_,3);
      local_70 = (undefined ***)&DAT_00739b1c;
      local_74 = (TypeDescriptor *)*piVar3;
      pTStack_78 = (TypeDescriptor *)0x5024bd;
      FUN_00635720();
      piVar3 = (int *)(local_48 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          local_70 = (undefined ***)0x5024de;
          FID_conflict__free(piVar3);
        }
      }
      local_40 = (void *)0x0;
      local_54 = 0;
      local_4c = 0;
      local_44 = (undefined **)0x1;
      if (1 < (int)local_18) {
        piVar3 = (int *)(in_ECX + 0x140);
        _Memory = (void *)0x0;
        bVar11 = (undefined **)0x1 < local_18;
        ppuVar2 = local_20;
        do {
          ppuVar2 = ppuVar2 + 1;
          ppuVar9 = &PTR_DAT_00c7ed68;
          if (bVar11) {
            ppuVar9 = ppuVar2;
          }
          local_70 = (undefined ***)0x502530;
          uVar8 = FID_conflict__atoi(*ppuVar9);
          if (uVar8 < *(uint *)(in_ECX + 0x148)) {
            local_40 = *(void **)(*piVar3 + uVar8 * 4);
          }
          else {
            local_40 = (void *)0x0;
          }
          uVar10 = local_4c + 1;
          if ((int)local_54 < (int)uVar10) {
            uVar4 = uVar10;
            if ((int)uVar10 < 0) {
              uVar4 = local_4c + 2;
            }
            uVar4 = local_4c + 9 + ((int)uVar4 >> 1) & 0xfffffff8;
            if (local_54 != uVar4) {
              local_54 = uVar4;
              if ((int)uVar4 < 1) {
                local_70 = (undefined ***)0x5025a6;
                FID_conflict__free(_Memory);
                _Memory = (void *)0x0;
              }
              else if (_Memory == (void *)0x0) {
                local_70 = (undefined ***)0x50258c;
                _Memory = (void *)FUN_004c554b();
              }
              else {
                local_74 = (TypeDescriptor *)0x502599;
                local_70 = _Memory;
                _Memory = (void *)FUN_004c553b();
              }
            }
          }
          puVar7 = (undefined4 *)((int)_Memory + local_4c * 4);
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = local_40;
          }
          if (-1 < (int)uVar8) {
            if ((int)uVar8 < *(int *)(in_ECX + 0x148)) {
              *(undefined4 *)(*piVar3 + uVar8 * 4) = 0;
            }
            else {
              if (*(int *)(in_ECX + 0x144) < *(int *)(in_ECX + 0x148) + 1) {
                local_70 = (undefined ***)0x502600;
                FUN_00409cf0();
              }
              iVar1 = *(int *)(in_ECX + 0x148);
              *(int *)(in_ECX + 0x148) = iVar1 + 1;
              *(undefined4 *)(*piVar3 + iVar1 * 4) = 0;
            }
          }
          local_44 = (undefined **)((int)local_44 + 1);
          bVar11 = local_44 < local_18;
          local_4c = uVar10;
          local_40 = _Memory;
        } while ((int)local_44 < (int)local_18);
      }
      uVar8 = 0;
      local_70 = (undefined ***)local_3c;
      if (0 < *(int *)(in_ECX + 0x148)) {
        bVar11 = *(int *)(in_ECX + 0x148) != 0;
        do {
          if ((bVar11) && (*(int *)(*(int *)(in_ECX + 0x140) + uVar8 * 4) != 0)) {
            uVar8 = uVar8 + 1;
          }
          else {
            if (uVar8 < *(uint *)(in_ECX + 0x148)) {
              iVar6 = *(int *)(in_ECX + 0x140) + uVar8 * 4;
              iVar1 = *(uint *)(in_ECX + 0x148) - 1;
              *(int *)(in_ECX + 0x148) = iVar1;
              if (0 < (int)(iVar1 - uVar8)) {
                local_70 = (undefined ***)(iVar6 + 4);
                pTStack_78 = (TypeDescriptor *)0x50268b;
                local_74 = (TypeDescriptor *)iVar6;
                FUN_004c1df0();
                local_70 = (undefined ***)local_3c;
              }
            }
            iVar1 = *(int *)(in_ECX + 0x148);
            iVar6 = *(int *)(in_ECX + 0x144);
            if (((iVar1 * 2 < iVar6) && (iVar1 < iVar6)) && (iVar6 != iVar1)) {
              if (iVar1 < 1) {
                local_70 = (undefined ***)0x5026ee;
                FID_conflict__free(*(void **)(in_ECX + 0x140));
                *(undefined4 *)(in_ECX + 0x140) = 0;
              }
              else {
                local_70 = *(undefined ****)(in_ECX + 0x140);
                if (local_70 == (undefined ***)0x0) {
                  local_70 = (undefined ***)0x5026c7;
                  uVar5 = FUN_004c554b();
                  *(undefined4 *)(in_ECX + 0x140) = uVar5;
                }
                else {
                  local_74 = (TypeDescriptor *)0x5026d8;
                  uVar5 = FUN_004c553b();
                  *(undefined4 *)(in_ECX + 0x140) = uVar5;
                }
              }
              *(int *)(in_ECX + 0x144) = iVar1;
              local_70 = (undefined ***)local_3c;
            }
            if ((int)uVar8 < (int)local_70) {
              local_70 = (undefined ***)((int)local_70 + -1);
              local_3c = (int)local_70;
            }
          }
          bVar11 = uVar8 < *(uint *)(in_ECX + 0x148);
        } while ((int)uVar8 < (int)*(uint *)(in_ECX + 0x148));
      }
      uVar8 = 0;
      if (0 < (int)local_4c) {
        piVar3 = (int *)(in_ECX + 0x140);
        do {
          if ((int)local_70 < 0) {
            if (uVar8 < local_4c) {
              local_48 = *(undefined4 *)((int)local_40 + uVar8 * 4);
            }
            else {
              local_48 = 0;
            }
            iVar1 = *(int *)(in_ECX + 0x148) + 1;
            if ((int)*(uint *)(in_ECX + 0x144) < iVar1) {
              iVar6 = iVar1;
              if (iVar1 < 0) {
                iVar6 = *(int *)(in_ECX + 0x148) + 2;
              }
              uVar10 = (iVar6 >> 1) + 8 + iVar1 & 0xfffffff8;
              if (*(uint *)(in_ECX + 0x144) != uVar10) {
                if ((int)uVar10 < 1) {
                  local_70 = (undefined ***)0x5027a3;
                  FID_conflict__free((void *)*piVar3);
                  *piVar3 = 0;
                }
                else {
                  local_70 = (undefined ***)*piVar3;
                  if (local_70 == (undefined ***)0x0) {
                    local_70 = (undefined ***)0x502788;
                    iVar1 = FUN_004c554b();
                    *piVar3 = iVar1;
                  }
                  else {
                    local_74 = (TypeDescriptor *)0x502795;
                    iVar1 = FUN_004c553b();
                    *piVar3 = iVar1;
                  }
                }
                *(uint *)(in_ECX + 0x144) = uVar10;
              }
            }
            iVar1 = *(int *)(in_ECX + 0x148);
            *(int *)(in_ECX + 0x148) = iVar1 + 1;
            *(int *)(*piVar3 + iVar1 * 4) = local_48;
          }
          else {
            local_3c = (int)local_70 + 1;
            local_74 = (TypeDescriptor *)0x5027e4;
            FUN_00411110();
          }
          uVar8 = uVar8 + 1;
          local_70 = (undefined ***)local_3c;
        } while ((int)uVar8 < (int)local_4c);
      }
      local_70 = (undefined ***)0x5027ff;
      FID_conflict__free(local_40);
      ppuVar9 = local_18;
      ppuVar2 = local_20;
      local_8 = 0xffffffff;
      iVar1 = 0;
      if (0 < (int)local_18) {
        do {
          piVar3 = (int *)(ppuVar2[iVar1] + -8);
          if (piVar3 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              local_70 = (undefined ***)0x502841;
              FID_conflict__free(piVar3);
            }
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)ppuVar9);
      }
      local_70 = (undefined ***)0x502854;
      FID_conflict__free(local_20);
    }
  }
  FUN_004ae6c0();
  local_70 = (undefined ***)0x50287c;
  FUN_004f8300();
  if ((*(int *)(in_ECX + -0x38) == 0) && (*(int *)(in_ECX + -0x38) != *(int *)(in_ECX + -0x1b0))) {
    *(int *)(in_ECX + -0x38) = *(int *)(in_ECX + -0x1b0);
    FUN_006e6400(&pTStack_78);
    FUN_006ce9f0(1);
    FUN_006e7e60();
  }
  FUN_006e7e60();
  FUN_006e6400(&pTStack_78);
  FUN_006ce9f0(1);
  local_70 = (undefined ***)0x1;
  local_74 = (TypeDescriptor *)0x0;
  pTStack_78 = (TypeDescriptor *)0xffffffff;
  FUN_00699dd0();
  (**(code **)(**(int **)(in_ECX + 8) + 4))();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

