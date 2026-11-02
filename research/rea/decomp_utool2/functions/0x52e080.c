// rea decompile_all
// name: FUN_0052e080
// address: 0x52e080
// body: available
// range: 0x52e080-0x52e44f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052e080(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  int extraout_ECX;
  int iVar4;
  int *piVar5;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  void *local_34;
  int local_30;
  int local_2c;
  undefined1 *local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c9a2;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = *(int *)(in_ECX + 0x9c);
  iVar7 = in_ECX;
  if (iVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(byte *)(iVar4 + 0x30) & 1;
    iVar8 = *(int *)(iVar4 + 0x14) + -1;
    if (-1 < iVar8) {
      do {
        uVar11 = FUN_0068fb80(0xfffffffe);
        uVar6 = (int)((ulonglong)uVar11 >> 0x20) + (int)uVar11;
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
      iVar4 = *(int *)(in_ECX + 0x9c);
      iVar7 = extraout_ECX;
    }
  }
  if (uVar6 != 0) {
    if (uVar6 == 1) {
      if (iVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0068fb00(0);
      }
      uVar2 = FUN_006f6dd6(uVar2,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                           &TargetExplorerBaseItem::RTTI_Type_Descriptor,0,uVar1);
      FUN_0052ce00(&local_28,uVar2,1);
      piVar5 = (int *)(local_28 + -8);
      if (piVar5 == &DAT_00bfe124) {
        ExceptionList = local_10;
        return;
      }
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
    }
    else {
      local_28 = &DAT_00bfe12c;
      iVar8 = 0;
      local_34 = (void *)0x0;
      local_30 = 0;
      local_2c = 0;
      local_8 = 1;
      local_18 = 0;
      uVar11 = FUN_006e0980(iVar7);
      iVar4 = (int)((ulonglong)uVar11 >> 0x20);
      if (0 < (int)uVar11) {
        do {
          if (*(int *)(in_ECX + 0x9c) == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = FUN_0068fb00(iVar4);
          }
          FUN_006f6dd6(uVar2,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                       &TargetExplorerBaseItem::RTTI_Type_Descriptor,0,uVar1);
          local_24 = (undefined4 *)FUN_004144d0(&local_20);
          iVar4 = iVar8 + 1;
          iVar7 = iVar8;
          if (local_30 < iVar4) {
            if (iVar4 < 0) {
              iVar4 = iVar8 + 2;
            }
            FUN_00409cf0((iVar4 >> 1) + iVar8 + 9 & 0xfffffff8);
            iVar7 = local_2c;
          }
          iVar8 = iVar7 + 1;
          puVar3 = (undefined4 *)((int)local_34 + iVar7 * 4);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *local_24;
            *local_24 = &DAT_00bfe12c;
          }
          piVar5 = (int *)(local_20 + -8);
          local_2c = iVar8;
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar4 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar4 == 0) {
              FID_conflict__free(piVar5);
              piVar5 = extraout_ECX_00;
            }
          }
          local_18 = local_18 + 1;
          uVar11 = FUN_006e0980(piVar5);
          iVar4 = (int)((ulonglong)uVar11 >> 0x20);
        } while (iVar4 < (int)uVar11);
      }
      puVar10 = &DAT_00bfe12c;
      FUN_0045c990("Yes, delete all");
      local_8._0_1_ = 2;
      FUN_0045c990("Cancel");
      local_8._0_1_ = 3;
      FUN_0045c990("Are you sure?");
      local_8._0_1_ = 4;
      FUN_0045c990("Delete multiple items");
      local_8 = CONCAT31(local_8._1_3_,5);
      iVar4 = FUN_004ed100(&local_34,&local_1c,&local_20,&local_24);
      local_11 = iVar4 == 1;
      piVar5 = (int *)(local_18 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = (int *)(local_1c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = (int *)(local_20 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar5 = local_24 + -2;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
          piVar5 = extraout_ECX_01;
        }
      }
      if (local_11 != '\0') {
        iVar7 = 0;
        iVar4 = FUN_006e0980(piVar5);
        puVar9 = puVar10;
        if (0 < iVar4) {
          do {
            if (*(int *)(in_ECX + 0x9c) == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = FUN_0068fb00(iVar7);
            }
            uVar2 = FUN_006f6dd6(uVar2,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                                 &TargetExplorerBaseItem::RTTI_Type_Descriptor,0);
            puVar3 = (undefined4 *)FUN_0052ce00(&local_24,uVar2,0);
            puVar10 = (undefined1 *)*puVar3;
            *puVar3 = puVar9;
            piVar5 = local_24 + -2;
            local_28 = puVar10;
            if (piVar5 != &DAT_00bfe124) {
              LOCK();
              iVar4 = *piVar5;
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (iVar4 == 0) {
                FID_conflict__free(piVar5);
                piVar5 = extraout_ECX_02;
              }
            }
            iVar7 = iVar7 + 1;
            iVar4 = FUN_006e0980(piVar5);
            puVar9 = puVar10;
          } while (iVar7 < iVar4);
        }
      }
      iVar4 = local_2c;
      iVar7 = 0;
      if (0 < local_2c) {
        do {
          piVar5 = (int *)(*(int *)((int)local_34 + iVar7 * 4) + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar8 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar8 == 0) {
              FID_conflict__free(piVar5);
            }
          }
          iVar7 = iVar7 + 1;
          puVar10 = local_28;
        } while (iVar7 < iVar4);
      }
      FID_conflict__free(local_34);
      piVar5 = (int *)(puVar10 + -8);
      if (piVar5 == &DAT_00bfe124) {
        ExceptionList = local_10;
        return;
      }
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
    }
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return;
}

