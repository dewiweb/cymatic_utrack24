// rea decompile_all
// name: FUN_005ae320
// address: 0x5ae320
// body: available
// range: 0x5ae320-0x5ae704 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ae320(int *param_1)

{
  int *_Memory;
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  char *pcVar11;
  undefined4 uVar12;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  undefined **local_24 [2];
  int local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071841b;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = in_ECX;
  FUN_00407fe0(local_14);
  if (*(int *)(in_ECX + 0x1ac) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0x1a8));
    *(undefined4 *)(in_ECX + 0x1a8) = 0;
    *(undefined4 *)(in_ECX + 0x1ac) = 0;
  }
  *(undefined4 *)(in_ECX + 0x1b0) = 0;
  uVar9 = 0;
  if (0 < param_1[2]) {
    bVar10 = param_1[2] != 0;
    do {
      if (bVar10) {
        iVar5 = *(int *)(*param_1 + uVar9 * 4);
      }
      else {
        iVar5 = 0;
      }
      if (*(char *)(iVar5 + 8) != '\0') {
        piVar3 = operator_new(0xe0);
        local_8 = 0;
        if (uVar9 < (uint)param_1[2]) {
          uVar4 = *(undefined4 *)(*param_1 + uVar9 * 4);
        }
        else {
          uVar4 = 0;
        }
        FUN_006e3660(uVar4);
        *piVar3 = (int)juce::ToggleButton::vftable;
        piVar3[0x1c] = (int)juce::ToggleButton::vftable;
        *(undefined1 *)((int)piVar3 + 0xd9) = 1;
        if (uVar9 < (uint)param_1[2]) {
          iVar5 = *(int *)(*param_1 + uVar9 * 4);
        }
        else {
          iVar5 = 0;
        }
        local_1c[0] = *(int *)(iVar5 + 4);
        _Memory = (int *)(local_1c[0] + -8);
        if (_Memory != &DAT_00bfe124) {
          LOCK();
          *_Memory = *_Memory + 1;
          UNLOCK();
        }
        local_24[0] = &PTR_vftable_00c7ed4c;
        if (_Memory != &DAT_00bfe124) {
          LOCK();
          *_Memory = *_Memory + 1;
          UNLOCK();
        }
        local_8._0_1_ = 2;
        local_8._1_3_ = 0;
        if ((*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_00cfff24) &&
           (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
          DAT_00cfff50 = 0;
          _DAT_00cfff54 = 0;
          _DAT_00cfff58 = 0;
          InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
          _DAT_00cfff74 = 0;
          _atexit((_func_4879 *)&LAB_0072a350);
          FUN_004c0352(&DAT_00cfff24);
        }
        FUN_0061fa00(&local_34,"DRIVE");
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00637060(&local_34,local_24);
        piVar6 = (int *)(local_34 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        (**(code **)(*local_24[0] + 0x54))(local_1c);
        FUN_006e9790(piVar3[4],piVar3[5],200,0x14);
        uVar7 = -(uint)(local_28 != 0x74) & local_28 + 4U;
        if (uVar7 != 0) {
          FUN_004097d0(uVar7);
        }
        uVar12 = 0;
        pcVar11 = "FixedDriveListDefined";
        local_8._0_1_ = 4;
        uVar4 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                             &juce::JUCEApplication::RTTI_Type_Descriptor,0,"FixedDriveListDefined",
                             0);
        local_8 = CONCAT31(local_8._1_3_,1);
        iVar5 = FUN_006f6dd6(uVar4,0,&juce::JUCEApplication::RTTI_Type_Descriptor,
                             &PlaylistEditorApplication::RTTI_Type_Descriptor,0);
        local_30 = *(int *)(iVar5 + 0x24);
        if (*(int *)(local_30 + 0x20) == 0) {
          FUN_006394c0();
        }
        cVar1 = FUN_0062e490(pcVar11,uVar12);
        if (cVar1 == '\0') {
          if (uVar9 < (uint)param_1[2]) {
            iVar5 = *(int *)(*param_1 + uVar9 * 4);
          }
          else {
            iVar5 = 0;
          }
          if (**(char **)(iVar5 + 0xc) != '\0') {
            if (uVar9 < (uint)param_1[2]) {
              iVar5 = *(int *)(*param_1 + uVar9 * 4);
            }
            else {
              iVar5 = 0;
            }
            iVar5 = FUN_00448730(*(undefined4 *)(iVar5 + 0xc),"FAT32");
            local_2c = CONCAT31(local_2c._1_3_,1);
            if (iVar5 != 0) goto LAB_005ae5f1;
          }
          local_2c = local_2c & 0xffffff00;
        }
        else {
          uVar2 = FUN_005b0530();
          local_2c = CONCAT31(local_2c._1_3_,uVar2);
        }
LAB_005ae5f1:
        piVar6 = (int *)(local_28 + 0x1a8);
        iVar5 = *(int *)(local_28 + 0x1b0);
        iVar8 = iVar5 + 1;
        if (*(int *)(local_28 + 0x1ac) < iVar8) {
          if (iVar8 < 0) {
            iVar8 = iVar5 + 2;
          }
          uVar7 = iVar5 + 9 + (iVar8 >> 1) & 0xfffffff8;
          if (*(uint *)(local_28 + 0x1ac) != uVar7) {
            if ((int)uVar7 < 1) {
              FID_conflict__free((void *)*piVar6);
              piVar6 = (int *)(local_28 + 0x1a8);
              *piVar6 = 0;
            }
            else if (*piVar6 == 0) {
              iVar5 = FUN_004c554b();
              piVar6 = (int *)(local_28 + 0x1a8);
              *piVar6 = iVar5;
            }
            else {
              iVar5 = FUN_004c553b(*piVar6,uVar7 * 4);
              piVar6 = (int *)(local_28 + 0x1a8);
              *piVar6 = iVar5;
            }
            piVar6[1] = uVar7;
          }
        }
        iVar5 = piVar6[2];
        piVar6[2] = iVar5 + 1;
        *(int **)(*piVar6 + iVar5 * 4) = piVar3;
        (**(code **)(*piVar3 + 0x28))(1);
        FUN_006e5050(piVar3,0xffffffff);
        FUN_006e5380(local_2c,0);
        local_8 = 0xffffffff;
        if (_Memory != &DAT_00bfe124) {
          LOCK();
          iVar5 = *_Memory;
          *_Memory = *_Memory + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(_Memory);
          }
        }
      }
      uVar9 = uVar9 + 1;
      bVar10 = uVar9 < (uint)param_1[2];
    } while ((int)uVar9 < param_1[2]);
  }
  FUN_005ae710();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

