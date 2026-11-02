// rea decompile_all
// name: FUN_0051ae90
// address: 0x51ae90
// body: available
// range: 0x51ae90-0x51b0d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051ae90(void)

{
  undefined4 **ppuVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00709c45;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  iVar4 = FUN_006f6dd6(*(undefined4 *)(in_ECX + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
                       &ProjectExplorer::RTTI_Type_Descriptor,0,uVar3);
  puVar7 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  local_2c = 0;
  local_24 = *(int *)(iVar4 + 0xd8);
  local_28 = 0;
  local_8 = 0;
  iVar4 = FUN_006f6dd6(*(undefined4 *)(in_ECX + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
                       &ProjectExplorer::RTTI_Type_Descriptor,0);
  iVar4 = *(int *)(iVar4 + 0x9c);
  if (iVar4 == 0) {
    local_14 = 0;
    uVar6 = local_14;
  }
  else {
    uVar6 = *(byte *)(iVar4 + 0x30) & 1;
    iVar4 = *(int *)(iVar4 + 0x14);
    local_14 = uVar6;
    while (-1 < iVar4 + -1) {
      uVar9 = FUN_0068fb80(0xfffffffe);
      uVar6 = uVar6 + (int)uVar9;
      iVar4 = (int)((ulonglong)uVar9 >> 0x20);
    }
  }
  local_14 = uVar6;
  uVar6 = 0;
  iVar4 = 0;
  if (0 < (int)local_14) {
    do {
      iVar5 = FUN_006f6dd6(*(undefined4 *)(local_18 + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
                           &ProjectExplorer::RTTI_Type_Descriptor,0,uVar3);
      if ((*(int *)(iVar5 + 0x9c) != 0) && (iVar5 = FUN_0068fb00(iVar4), iVar5 != 0)) {
        local_1c = FUN_006f6dd6(iVar5,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                                &ProjectExplorerBaseItem::RTTI_Type_Descriptor,0);
        local_20 = local_28 + 1;
        if ((int)uVar6 < local_20) {
          iVar5 = local_20;
          if (local_20 < 0) {
            iVar5 = local_28 + 2;
          }
          uVar8 = local_28 + 9 + (iVar5 >> 1) & 0xfffffff8;
          uVar6 = local_2c;
          if (local_2c != uVar8) {
            uVar6 = uVar8;
            if ((int)uVar8 < 1) {
              FID_conflict__free(puVar7);
              puVar7 = (undefined4 *)0x0;
              local_30 = (undefined4 *)0x0;
              local_2c = uVar8;
            }
            else if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)FUN_004c554b();
              local_30 = puVar7;
              local_2c = uVar8;
            }
            else {
              puVar7 = (undefined4 *)FUN_004c553b(puVar7,uVar8 * 4);
              local_30 = puVar7;
              local_2c = uVar8;
            }
          }
        }
        iVar5 = local_28;
        local_28 = local_20;
        if (puVar7 + iVar5 != (undefined4 *)0x0) {
          puVar7[iVar5] = local_1c;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)local_14);
  }
  iVar4 = local_24;
  if (local_24 != 0) {
    ppuVar1 = (undefined4 **)(local_24 + 0x78);
    if (ppuVar1 != &local_30) {
      FUN_0040ec60(&local_30);
      puVar7 = *ppuVar1;
      *ppuVar1 = local_3c;
      *(undefined4 *)(iVar4 + 0x7c) = local_38;
      *(undefined4 *)(iVar4 + 0x80) = local_34;
      FID_conflict__free(puVar7);
      puVar7 = local_30;
    }
    FUN_00529fc0();
  }
  iVar4 = FUN_006f6dd6(*(undefined4 *)(local_18 + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
                       &ProjectExplorer::RTTI_Type_Descriptor,0);
  cVar2 = FUN_006e6420();
  if (((cVar2 != '\0') && (*(int **)(iVar4 + 0xd4) != (int *)0x0)) && (0 < local_28)) {
    (**(code **)(**(int **)(iVar4 + 0xd4) + 4))(*puVar7);
  }
  FID_conflict__free(puVar7);
  ExceptionList = local_10;
  return;
}

