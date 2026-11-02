// rea decompile_all
// name: FUN_00518150
// address: 0x518150
// body: available
// range: 0x518150-0x518647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00518150(void)

{
  void *_Memory;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 *puVar6;
  int in_ECX;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  undefined **extraout_ECX_02;
  undefined **extraout_ECX_03;
  int *piVar7;
  undefined **extraout_ECX_04;
  undefined **extraout_ECX_05;
  undefined **extraout_ECX_06;
  undefined **extraout_ECX_07;
  undefined **ppuVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
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
  puStack_c = &LAB_007097c3;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = *(int *)(in_ECX + 0x9c);
  iVar11 = in_ECX;
  if (iVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(byte *)(iVar2 + 0x30) & 1;
    iVar10 = *(int *)(iVar2 + 0x14) + -1;
    if (-1 < iVar10) {
      do {
        uVar14 = FUN_0068fb80(0xfffffffe);
        uVar9 = (int)((ulonglong)uVar14 >> 0x20) + (int)uVar14;
        iVar10 = iVar10 + -1;
      } while (-1 < iVar10);
      iVar2 = *(int *)(in_ECX + 0x9c);
      iVar11 = extraout_ECX;
    }
  }
  if (uVar9 != 0) {
    if (uVar9 != 1) {
      local_28 = &DAT_00bfe12c;
      iVar10 = 0;
      local_34 = (void *)0x0;
      local_30 = 0;
      local_2c = 0;
      local_8 = 1;
      iVar12 = 0;
      iVar2 = FUN_006e0980(iVar11);
      if (0 < iVar2) {
        do {
          if (*(int *)(in_ECX + 0x9c) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_0068fb00(iVar12);
          }
          piVar4 = (int *)FUN_006f6dd6(uVar3,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                                       &ProjectExplorerBaseItem::RTTI_Type_Descriptor,0,uVar1);
          local_24 = (undefined4 *)(**(code **)(*piVar4 + 0x80))(&local_20);
          iVar2 = iVar10 + 1;
          iVar11 = iVar10;
          if (local_30 < iVar2) {
            if (iVar2 < 0) {
              iVar2 = iVar10 + 2;
            }
            FUN_00409cf0((iVar2 >> 1) + iVar10 + 9 & 0xfffffff8);
            iVar11 = local_2c;
          }
          iVar10 = iVar11 + 1;
          puVar6 = (undefined4 *)((int)local_34 + iVar11 * 4);
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = *local_24;
            *local_24 = &DAT_00bfe12c;
          }
          piVar4 = (int *)(local_20 + -8);
          local_2c = iVar10;
          if (piVar4 != &DAT_00bfe124) {
            LOCK();
            iVar2 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar2 == 0) {
              FID_conflict__free(piVar4);
              piVar4 = extraout_ECX_00;
            }
          }
          iVar12 = iVar12 + 1;
          iVar2 = FUN_006e0980(piVar4);
        } while (iVar12 < iVar2);
      }
      FUN_0045c990("Yes, copy all");
      local_8._0_1_ = 2;
      FUN_0045c990("Cancel");
      local_8._0_1_ = 3;
      FUN_0045c990("Are you sure?");
      local_8._0_1_ = 4;
      FUN_0045c990("Copy Audio files to Audio library on multiple items");
      local_8 = CONCAT31(local_8._1_3_,5);
      iVar2 = FUN_004ed100(&local_34,&local_1c,&local_20,&local_24);
      local_11 = iVar2 == 1;
      piVar4 = (int *)(local_18 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      piVar4 = (int *)(local_1c + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      piVar4 = (int *)(local_20 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar4 = local_24 + -2;
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
          piVar4 = extraout_ECX_01;
        }
      }
      if (local_11 != '\0') {
        local_18 = 0;
        uVar14 = FUN_006e0980(piVar4);
        iVar2 = (int)((ulonglong)uVar14 >> 0x20);
        if (0 < (int)uVar14) {
          do {
            if (*(int *)(in_ECX + 0x9c) == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = FUN_0068fb00(iVar2);
            }
            piVar4 = (int *)FUN_006f6dd6(uVar3,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                                         &ProjectExplorerItem_Song::RTTI_Type_Descriptor,0);
            iVar2 = local_18;
            if (piVar4 == (int *)0x0) {
              if (*(int *)(in_ECX + 0x9c) == 0) {
                uVar3 = 0;
              }
              else {
                uVar3 = FUN_0068fb00(local_18);
              }
              piVar4 = (int *)FUN_006f6dd6(uVar3,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                                           &ProjectExplorerItem_SongSection::RTTI_Type_Descriptor,0)
              ;
              if (piVar4 == (int *)0x0) {
                if (*(int *)(in_ECX + 0x9c) == 0) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = FUN_0068fb00(iVar2);
                }
                piVar4 = (int *)FUN_006f6dd6(uVar3,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                                             &ProjectExplorerItem_SongSubfolder::
                                              RTTI_Type_Descriptor,0);
                ppuVar8 = extraout_ECX_05;
                if (piVar4 != (int *)0x0) {
                  pcVar5 = (code *)((undefined **)*piVar4)[0x19];
                  if ((undefined **)*piVar4 != ProjectExplorerItem_SongSubfolder::vftable)
                  goto LAB_00518505;
                  uVar1 = 0;
                  ppuVar8 = ProjectExplorerItem_SongSubfolder::vftable;
                  if (0 < piVar4[5]) {
                    bVar13 = piVar4[5] != 0;
                    do {
                      if (bVar13) {
                        piVar7 = *(int **)(piVar4[3] + uVar1 * 4);
                      }
                      else {
                        piVar7 = (int *)0x0;
                      }
                      (**(code **)(*piVar7 + 100))();
                      uVar1 = uVar1 + 1;
                      bVar13 = uVar1 < (uint)piVar4[5];
                      ppuVar8 = extraout_ECX_06;
                    } while ((int)uVar1 < piVar4[5]);
                  }
                }
              }
              else {
                pcVar5 = (code *)((undefined **)*piVar4)[0x19];
                if ((undefined **)*piVar4 == ProjectExplorerItem_SongSection::vftable) {
                  uVar1 = 0;
                  ppuVar8 = ProjectExplorerItem_SongSection::vftable;
                  if (0 < piVar4[5]) {
                    bVar13 = piVar4[5] != 0;
                    do {
                      if (bVar13) {
                        piVar7 = *(int **)(piVar4[3] + uVar1 * 4);
                      }
                      else {
                        piVar7 = (int *)0x0;
                      }
                      (**(code **)(*piVar7 + 100))();
                      uVar1 = uVar1 + 1;
                      bVar13 = uVar1 < (uint)piVar4[5];
                      ppuVar8 = extraout_ECX_04;
                    } while ((int)uVar1 < piVar4[5]);
                  }
                }
                else {
LAB_00518505:
                  (*pcVar5)();
                  ppuVar8 = extraout_ECX_07;
                }
              }
            }
            else if ((undefined **)*piVar4 == ProjectExplorerItem_Song::vftable) {
              FUN_0053fc00();
              FUN_00548700();
              ppuVar8 = extraout_ECX_02;
            }
            else {
              (*(code *)((undefined **)*piVar4)[0x19])();
              ppuVar8 = extraout_ECX_03;
            }
            local_18 = local_18 + 1;
            uVar14 = FUN_006e0980(ppuVar8);
            iVar2 = (int)((ulonglong)uVar14 >> 0x20);
          } while (iVar2 < (int)uVar14);
        }
      }
      iVar2 = local_2c;
      _Memory = local_34;
      iVar11 = 0;
      if (0 < local_2c) {
        do {
          piVar4 = (int *)(*(int *)((int)_Memory + iVar11 * 4) + -8);
          if (piVar4 != &DAT_00bfe124) {
            LOCK();
            iVar10 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar10 == 0) {
              FID_conflict__free(piVar4);
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar2);
      }
      FID_conflict__free(_Memory);
      ExceptionList = local_10;
      return;
    }
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0068fb00(0);
    }
    piVar4 = (int *)FUN_006f6dd6(uVar3,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                                 &ProjectExplorerItem_Song::RTTI_Type_Descriptor,0,uVar1);
    if (piVar4 == (int *)0x0) {
      if (*(int *)(in_ECX + 0x9c) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0068fb00(0);
      }
      puVar6 = (undefined4 *)
               FUN_006f6dd6(uVar3,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                            &ProjectExplorerItem_SongSection::RTTI_Type_Descriptor,0);
      if (puVar6 == (undefined4 *)0x0) {
        if (*(int *)(in_ECX + 0x9c) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_0068fb00(0);
        }
        puVar6 = (undefined4 *)
                 FUN_006f6dd6(uVar3,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                              &ProjectExplorerItem_SongSubfolder::RTTI_Type_Descriptor,0);
        if (puVar6 == (undefined4 *)0x0) {
          ExceptionList = local_10;
          return;
        }
      }
      ppuVar8 = (undefined **)*puVar6;
    }
    else {
      ppuVar8 = (undefined **)*piVar4;
      if (ppuVar8 == ProjectExplorerItem_Song::vftable) {
        FUN_0053fc00();
        FUN_00548700();
        ExceptionList = local_10;
        return;
      }
    }
    (*(code *)ppuVar8[0x19])();
  }
  ExceptionList = local_10;
  return;
}

