// rea decompile_all
// name: FUN_006b15a0
// address: 0x6b15a0
// body: available
// range: 0x6b15a0-0x6b18c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006b15a0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int *in_ECX;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  void *local_60;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int *local_44 [2];
  undefined1 local_3c [8];
  undefined **local_34 [2];
  undefined4 local_2c [2];
  undefined **local_24 [2];
  undefined4 local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_007238e5;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (in_ECX[0x1d] != 1) {
    uVar5 = in_ECX[0xc];
    in_ECX[0x1d] = 1;
    uVar10 = local_14;
    while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
      if (uVar5 < (uint)in_ECX[0xc]) {
        uVar2 = *(undefined4 *)(in_ECX[10] + uVar5 * 4);
      }
      else {
        uVar2 = 0;
      }
      puVar3 = (undefined4 *)
               FUN_006f6dd6(uVar2,0,&juce::Component::RTTI_Type_Descriptor,
                            &juce::MultiDocumentPanelWindow::RTTI_Type_Descriptor,0,uVar10);
      local_8 = 0;
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)FUN_006d3ec0(&local_48);
        local_24[0] = &PTR_vftable_00c7ed4c;
        local_1c[0] = *puVar4;
        *puVar4 = &DAT_00bfe12c;
        piVar7 = &local_4c;
        local_8._0_1_ = 2;
        pcVar9 = "mdiDocumentPos_";
        FUN_0061f730(piVar7,"mdiDocumentPos_");
        FUN_0061fa00(piVar7,pcVar9);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00637060(&local_4c,local_24);
        piVar7 = (int *)(local_4c + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        (**(code **)(*local_24[0] + 0x54))(local_1c);
        local_8 = local_8 & 0xffffff00;
        piVar7 = (int *)(local_48 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        FUN_0068bba0();
      }
      local_8 = 0xffffffff;
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
    }
    (**(code **)(*in_ECX + 0x84))();
    piVar7 = in_ECX + 0x1e;
    FUN_0040ec60(piVar7);
    local_8 = 4;
    if (in_ECX[0x1f] != 0) {
      FID_conflict__free((void *)*piVar7);
      *piVar7 = 0;
      in_ECX[0x1f] = 0;
    }
    in_ECX[0x20] = 0;
    iVar8 = 0;
    if (0 < local_58) {
      local_48 = *(int *)ThreadLocalStoragePointer;
      do {
        local_34[0] = &PTR_vftable_00c7ed44;
        uVar2 = *(undefined4 *)((int)local_60 + iVar8 * 4);
        local_2c[0] = DAT_00c7ef94;
        local_8._0_1_ = 5;
        if ((*(int *)(local_48 + 4) < DAT_00cfff24) &&
           (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
          DAT_00cfff50 = 0;
          _DAT_00cfff54 = 0;
          _DAT_00cfff58 = 0;
          InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
          _DAT_00cfff74 = 0;
          _atexit((_func_4879 *)&LAB_0072a350);
          FUN_004c0352(&DAT_00cfff24);
        }
        FUN_0061fa00(&local_50,"mdiDocumentBkg_");
        local_8._0_1_ = 6;
        uVar5 = FUN_006b2530();
        uVar5 = uVar5 & 0xff;
        puVar3 = (undefined4 *)FUN_00636cf0(local_44,&local_50,local_34);
        local_8 = CONCAT31(local_8._1_3_,7);
        puVar4 = puVar3 + 2;
        uVar6 = (**(code **)(*(int *)*puVar3 + 4))(puVar4,uVar5);
        FUN_006b1e40(uVar2,uVar6,puVar4);
        (**(code **)(*local_44[0] + 0x54))(local_3c);
        piVar7 = (int *)(local_50 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        local_8 = CONCAT31(local_8._1_3_,4);
        (**(code **)(*local_34[0] + 0x54))(local_2c);
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_58);
    }
    FID_conflict__free(local_60);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

