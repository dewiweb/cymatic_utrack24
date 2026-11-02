// rea decompile_all
// name: FUN_0052fa90
// address: 0x52fa90
// body: available
// range: 0x52fa90-0x52fcdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052fa90(void)

{
  void **ppvVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  uint uVar8;
  void *pvVar9;
  uint uVar10;
  undefined8 uVar11;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070cbc3;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  iVar6 = FUN_006f6dd6(*(undefined4 *)(in_ECX + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
                       &TargetExplorer::RTTI_Type_Descriptor,0,uVar5);
  pvVar9 = (void *)0x0;
  local_30 = (void *)0x0;
  local_2c = 0;
  local_24 = *(int *)(iVar6 + 0xe0);
  local_28 = 0;
  local_8 = 0;
  iVar6 = FUN_006f6dd6(*(undefined4 *)(in_ECX + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
                       &TargetExplorer::RTTI_Type_Descriptor,0);
  iVar6 = *(int *)(iVar6 + 0x9c);
  if (iVar6 == 0) {
    local_14 = 0;
    uVar8 = local_14;
  }
  else {
    uVar8 = *(byte *)(iVar6 + 0x30) & 1;
    iVar6 = *(int *)(iVar6 + 0x14);
    local_14 = uVar8;
    while (-1 < iVar6 + -1) {
      uVar11 = FUN_0068fb80(0xfffffffe);
      uVar8 = uVar8 + (int)uVar11;
      iVar6 = (int)((ulonglong)uVar11 >> 0x20);
    }
  }
  local_14 = uVar8;
  uVar8 = 0;
  iVar6 = 0;
  if (0 < (int)local_14) {
    do {
      iVar7 = FUN_006f6dd6(*(undefined4 *)(local_1c + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
                           &TargetExplorer::RTTI_Type_Descriptor,0,uVar5);
      if ((*(int *)(iVar7 + 0x9c) != 0) && (iVar7 = FUN_0068fb00(iVar6), iVar7 != 0)) {
        local_18 = FUN_006f6dd6(iVar7,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                                &TargetExplorerBaseItem::RTTI_Type_Descriptor,0);
        local_20 = local_28 + 1;
        if ((int)uVar8 < local_20) {
          iVar7 = local_20;
          if (local_20 < 0) {
            iVar7 = local_28 + 2;
          }
          uVar10 = local_28 + 9 + (iVar7 >> 1) & 0xfffffff8;
          uVar8 = local_2c;
          if (local_2c != uVar10) {
            uVar8 = uVar10;
            if ((int)uVar10 < 1) {
              FID_conflict__free(pvVar9);
              pvVar9 = (void *)0x0;
              local_30 = (void *)0x0;
              local_2c = uVar10;
            }
            else if (pvVar9 == (void *)0x0) {
              pvVar9 = (void *)FUN_004c554b();
              local_30 = pvVar9;
              local_2c = uVar10;
            }
            else {
              pvVar9 = (void *)FUN_004c553b(pvVar9,uVar10 * 4);
              local_30 = pvVar9;
              local_2c = uVar10;
            }
          }
        }
        iVar7 = local_28;
        local_28 = local_20;
        puVar2 = (undefined4 *)((int)pvVar9 + iVar7 * 4);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = local_18;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)local_14);
  }
  iVar6 = local_24;
  if (local_24 != 0) {
    ppvVar1 = (void **)(local_24 + 0x78);
    if (ppvVar1 != &local_30) {
      FUN_0040ec60(&local_30);
      pvVar9 = *ppvVar1;
      *ppvVar1 = local_3c;
      *(undefined4 *)(iVar6 + 0x7c) = local_38;
      *(undefined4 *)(iVar6 + 0x80) = local_34;
      FID_conflict__free(pvVar9);
      pvVar9 = local_30;
    }
    FUN_004f0130();
  }
  iVar6 = FUN_006f6dd6(*(undefined4 *)(local_1c + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
                       &TargetExplorer::RTTI_Type_Descriptor,0);
  cVar4 = FUN_006e6420();
  if ((cVar4 != '\0') && (*(int **)(iVar6 + 0xcc) != (int *)0x0)) {
    ppuVar3 = (undefined **)**(int **)(iVar6 + 0xcc);
    if (ppuVar3 == PanelImportComponent::vftable) {
      FUN_005a2c30();
    }
    else {
      (*(code *)ppuVar3[1])(local_1c);
    }
  }
  FID_conflict__free(pvVar9);
  ExceptionList = local_10;
  return;
}

