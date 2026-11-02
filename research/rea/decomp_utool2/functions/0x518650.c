// rea decompile_all
// name: FUN_00518650
// address: 0x518650
// body: available
// range: 0x518650-0x518a26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00518650(void)

{
  undefined4 *puVar1;
  void *_Memory;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int in_ECX;
  int extraout_ECX;
  int iVar6;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  void *local_34;
  int local_30;
  int local_2c;
  undefined4 *local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00709816;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar6 = *(int *)(in_ECX + 0x9c);
  iVar10 = in_ECX;
  if (iVar6 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(byte *)(iVar6 + 0x30) & 1;
    iVar9 = *(int *)(iVar6 + 0x14) + -1;
    if (-1 < iVar9) {
      do {
        uVar11 = FUN_0068fb80(0xfffffffe);
        uVar8 = (int)((ulonglong)uVar11 >> 0x20) + (int)uVar11;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
      iVar6 = *(int *)(in_ECX + 0x9c);
      iVar10 = extraout_ECX;
    }
  }
  if (uVar8 != 0) {
    if (uVar8 == 1) {
      if (iVar6 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0068fb00(0);
      }
      uVar3 = FUN_006f6dd6(uVar3,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                           &ProjectExplorerBaseItem::RTTI_Type_Descriptor,0,uVar2);
      FUN_00517e30(&local_28,uVar3,1);
      local_8 = 0;
      FUN_00519470(&local_28,0,0);
      puVar7 = local_28;
    }
    else {
      local_18 = (undefined4 *)&DAT_00bfe12c;
      iVar9 = 0;
      local_34 = (void *)0x0;
      local_30 = 0;
      local_2c = 0;
      local_8 = 2;
      local_1c = 0;
      uVar11 = FUN_006e0980(iVar10);
      iVar6 = (int)((ulonglong)uVar11 >> 0x20);
      if (0 < (int)uVar11) {
        do {
          if (*(int *)(in_ECX + 0x9c) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_0068fb00(iVar6);
          }
          piVar4 = (int *)FUN_006f6dd6(uVar3,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                                       &ProjectExplorerBaseItem::RTTI_Type_Descriptor,0,uVar2);
          local_28 = (undefined4 *)(**(code **)(*piVar4 + 0x80))(&local_24);
          iVar6 = iVar9 + 1;
          iVar10 = iVar9;
          if (local_30 < iVar6) {
            if (iVar6 < 0) {
              iVar6 = iVar9 + 2;
            }
            FUN_00409cf0((iVar6 >> 1) + iVar9 + 9 & 0xfffffff8);
            iVar10 = local_2c;
          }
          iVar9 = iVar10 + 1;
          puVar7 = (undefined4 *)((int)local_34 + iVar10 * 4);
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *local_28;
            *local_28 = &DAT_00bfe12c;
          }
          piVar4 = (int *)(local_24 + -8);
          local_2c = iVar9;
          if (piVar4 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar4);
              piVar4 = extraout_ECX_00;
            }
          }
          local_1c = local_1c + 1;
          uVar11 = FUN_006e0980(piVar4);
          iVar6 = (int)((ulonglong)uVar11 >> 0x20);
        } while (iVar6 < (int)uVar11);
      }
      FUN_0045c990("Yes, delete all");
      local_8._0_1_ = 3;
      FUN_0045c990("Cancel");
      local_8._0_1_ = 4;
      FUN_0045c990("Are you sure?");
      local_8._0_1_ = 5;
      FUN_0045c990("Delete multiple items");
      local_8 = CONCAT31(local_8._1_3_,6);
      iVar6 = FUN_004ed100(&local_34,&local_20,&local_24,&local_28);
      local_11 = iVar6 == 1;
      piVar4 = (int *)(local_1c + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      piVar4 = (int *)(local_20 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      piVar4 = (int *)(local_24 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,2);
      piVar4 = local_28 + -2;
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar4);
          piVar4 = extraout_ECX_01;
        }
      }
      if (local_11 != '\0') {
        iVar10 = 0;
        iVar6 = FUN_006e0980(piVar4);
        puVar7 = (undefined4 *)&DAT_00bfe12c;
        if (0 < iVar6) {
          do {
            if (*(int *)(in_ECX + 0x9c) == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = FUN_0068fb00(iVar10);
            }
            uVar3 = FUN_006f6dd6(uVar3,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                                 &ProjectExplorerBaseItem::RTTI_Type_Descriptor,0);
            puVar5 = (undefined4 *)FUN_00517e30(&local_28,uVar3,0);
            puVar1 = (undefined4 *)*puVar5;
            *puVar5 = puVar7;
            piVar4 = local_28 + -2;
            local_18 = puVar1;
            if (piVar4 != &DAT_00bfe124) {
              LOCK();
              iVar6 = *piVar4;
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (iVar6 == 0) {
                FID_conflict__free(piVar4);
                piVar4 = extraout_ECX_02;
              }
            }
            iVar10 = iVar10 + 1;
            iVar6 = FUN_006e0980(piVar4);
            puVar7 = puVar1;
          } while (iVar10 < iVar6);
        }
      }
      FUN_00519470(&local_18,0,0);
      iVar6 = local_2c;
      _Memory = local_34;
      iVar10 = 0;
      if (0 < local_2c) {
        do {
          piVar4 = (int *)(*(int *)((int)_Memory + iVar10 * 4) + -8);
          if (piVar4 != &DAT_00bfe124) {
            LOCK();
            iVar9 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar9 == 0) {
              FID_conflict__free(piVar4);
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar6);
      }
      FID_conflict__free(_Memory);
      puVar7 = local_18;
    }
    piVar4 = puVar7 + -2;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

