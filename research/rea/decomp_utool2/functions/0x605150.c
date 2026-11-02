// rea decompile_all
// name: FUN_00605150
// address: 0x605150
// body: available
// range: 0x605150-0x605528 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00605150(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_f0 [78];
  undefined1 local_a2;
  undefined4 local_a0;
  undefined4 *local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  void *local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *puStack_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0071bfb8;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_40 = in_ECX + 0xd4;
  if (param_1 == local_40) {
    local_20 = (void *)0x0;
    uStack_1c = 0;
    iStack_18 = 0;
    puStack_14 = (undefined4 *)0x0;
    local_8 = 0;
    local_24 = (undefined4 *)in_ECX;
    uVar6 = FUN_00637250(uVar5);
    local_8._0_1_ = 1;
    FUN_006d13b0(1,uVar6,1,0);
    local_8._0_1_ = 0;
    local_50 = param_1;
    local_54 = param_1;
    piVar10 = (int *)(param_1 + -8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    uVar6 = FUN_00637250(uVar5);
    uVar13 = 0;
    local_8._0_1_ = 2;
    iVar7 = FUN_004ae6c0(0);
    FUN_006d13b0(2,uVar6,0 < iVar7,uVar13);
    local_8._0_1_ = 0;
    local_58 = local_28;
    local_5c = local_28;
    piVar10 = (int *)(local_28 + -8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    uVar6 = FUN_00637250();
    local_3c = in_ECX + -0x78;
    local_8._0_1_ = 3;
    uVar13 = 0;
    uVar3 = FUN_006057c0(0);
    FUN_006d13b0(3,uVar6,uVar3,uVar13);
    local_8._0_1_ = 0;
    local_60 = local_2c;
    local_64 = local_2c;
    piVar10 = (int *)(local_2c + -8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    uVar6 = FUN_00637250();
    local_8._0_1_ = 4;
    FUN_006d13b0(4,uVar6,1,0);
    local_8._0_1_ = 0;
    local_68 = local_30;
    local_6c = local_30;
    piVar10 = (int *)(local_30 + -8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    if ((0 < iStack_18) && (*(char *)(*(int *)((int)local_20 + iStack_18 * 4 + -4) + 0x26) == '\0'))
    {
      FUN_006a0850();
      local_8._0_1_ = 5;
      local_a2 = 1;
      FUN_006a06e0(extraout_ECX);
      local_8._0_1_ = 0;
      FUN_004abe20();
    }
    piVar10 = *(int **)(in_ECX + 4);
    uVar5 = 0;
    if (0 < piVar10[2]) {
      bVar11 = piVar10[2] != 0;
      do {
        if (bVar11) {
          piVar10 = *(int **)(*piVar10 + uVar5 * 4);
        }
        else {
          piVar10 = (int *)0x0;
        }
        cVar4 = (**(code **)(*piVar10 + 0x1c))();
        if (cVar4 != '\0') {
          uVar14 = 0;
          uVar12 = 1;
          uVar13 = (**(code **)(*piVar10 + 4))(&local_38,1,0);
          local_8._0_1_ = 6;
          uVar6 = extraout_ECX_00;
          FUN_00637690(uVar13);
          uVar6 = FUN_006377c0(uVar6);
          local_8 = CONCAT31(local_8._1_3_,7);
          FUN_006d13b0(uVar5 + 10,uVar6,uVar12,uVar14);
          local_44 = local_34;
          local_70 = local_34;
          piVar10 = (int *)(local_34 + -8);
          if (piVar10 != &DAT_00bfe124) {
            LOCK();
            iVar7 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar7 == 0) {
              FID_conflict__free(piVar10);
            }
          }
          local_8._0_1_ = 0;
          local_74 = local_38;
          local_78 = local_38;
          piVar10 = (int *)(local_38 + -8);
          if (piVar10 != &DAT_00bfe124) {
            LOCK();
            iVar7 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar7 == 0) {
              FID_conflict__free(piVar10);
            }
          }
        }
        uVar5 = uVar5 + 1;
        piVar10 = *(int **)((int)local_24 + 4);
        bVar11 = uVar5 < (uint)piVar10[2];
      } while ((int)uVar5 < piVar10[2]);
    }
    puVar8 = operator_new(0xc);
    iVar7 = local_3c;
    local_48 = puVar8 + 2;
    local_8._0_1_ = 9;
    *puVar8 = juce::ModalCallbackFunction::ComponentCaller1<juce::PluginListComponent>::vftable;
    puVar8[1] = FUN_006055a0;
    local_24 = puVar8;
    if (local_3c == 0) {
      iVar7 = 0;
    }
    else {
      if (*(int *)(local_3c + 100) == 0) {
        puVar9 = operator_new(0xc);
        *puVar9 = juce::ReferenceCountedObject::vftable;
        piVar10 = puVar9 + 1;
        *piVar10 = 0;
        *puVar9 = juce::WeakReference<juce::Component,juce::ReferenceCountedObject>::SharedPointer::
                  vftable;
        puVar9[2] = iVar7;
        if (*(undefined4 **)(iVar7 + 100) != puVar9) {
          LOCK();
          *piVar10 = *piVar10 + 1;
          UNLOCK();
          puVar2 = *(undefined4 **)(iVar7 + 100);
          *(undefined4 **)(iVar7 + 100) = puVar9;
          if (puVar2 != (undefined4 *)0x0) {
            LOCK();
            piVar10 = puVar2 + 1;
            iVar1 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar1 == 1) {
              (**(code **)*puVar2)(1);
            }
          }
        }
      }
      iVar7 = *(int *)(iVar7 + 100);
    }
    puVar8[2] = iVar7;
    if (iVar7 != 0) {
      LOCK();
      *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
      UNLOCK();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    FUN_006cb4b0();
    local_a0 = local_4c;
    local_9c = local_48;
    uVar6 = FUN_006d1070(local_f0,local_40);
    FUN_006a0120(uVar6,puVar8,0);
    if (puStack_14 != (undefined4 *)0x0) {
      LOCK();
      piVar10 = puStack_14 + 1;
      iVar7 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)*puStack_14)(1);
      }
    }
    FUN_004b00e0();
    FID_conflict__free(local_20);
  }
  ExceptionList = local_10;
  return;
}

