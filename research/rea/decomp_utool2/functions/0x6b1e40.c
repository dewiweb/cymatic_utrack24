// rea decompile_all
// name: FUN_006b1e40
// address: 0x6b1e40
// body: available
// range: 0x6b1e40-0x6b2194 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b1e40(int *param_1,undefined4 param_2,undefined1 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 uVar5;
  int *in_ECX;
  int iVar6;
  int *piVar7;
  int **ppiVar8;
  char *pcVar9;
  int *local_28;
  undefined **local_24;
  void *local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072398a;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar4;
  if ((param_1 == (int *)0x0) || ((0 < in_ECX[0x23] && (in_ECX[0x23] <= in_ECX[0x20]))))
  goto LAB_006b2177;
  piVar1 = in_ECX + 0x1e;
  iVar6 = in_ECX[0x20] + 1;
  if (in_ECX[0x1f] < iVar6) {
    FUN_00409cf0(iVar6 / 2 + in_ECX[0x20] + 9 & 0xfffffff8);
  }
  iVar6 = in_ECX[0x20];
  in_ECX[0x20] = iVar6 + 1;
  puVar2 = (undefined4 *)(*piVar1 + iVar6 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
  }
  local_24 = &PTR_vftable_00c7ed34;
  local_1c = CONCAT31(local_1c._1_3_,param_3);
  ppiVar8 = &local_28;
  local_8 = 0;
  pcVar9 = "mdiDocumentDelete_";
  FUN_0061f730(ppiVar8,"mdiDocumentDelete_",uVar4);
  FUN_0061fa00(ppiVar8,pcVar9);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00637060(&local_28,&local_24);
  piVar7 = local_28 + -2;
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  (**(code **)(*local_24 + 0x54))(&local_1c);
  local_24 = &PTR_vftable_00c7ed44;
  local_1c = param_2;
  ppiVar8 = &local_28;
  local_8 = 2;
  pcVar9 = "mdiDocumentBkg_";
  FUN_0061f730(ppiVar8,"mdiDocumentBkg_");
  FUN_0061fa00(ppiVar8,pcVar9);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00637060(&local_28,&local_24);
  piVar7 = local_28 + -2;
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_24 + 0x54))(&local_1c);
  uVar4 = -(uint)(in_ECX != (int *)0x0) & (uint)(in_ECX + 0x1c);
  if (uVar4 != 0) {
    FUN_004097d0(uVar4);
  }
  if (in_ECX[0x1d] == 0) {
    if (in_ECX[0x24] != 0) {
      if (in_ECX[0x20] == 1) {
        (**(code **)(*param_1 + 0x28))(1);
        FUN_006e5050(param_1,0xffffffff);
        goto LAB_006b215d;
      }
      if (in_ECX[0x20] == 2) {
        if (in_ECX[0x20] < 1) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined4 *)*piVar1;
        }
        FUN_006b21a0(uVar5);
      }
    }
    FUN_006b21a0(param_1);
  }
  else {
    if (in_ECX[0x21] == 0) {
      if (in_ECX[0x24] < in_ECX[0x20]) {
        uVar5 = 0x90;
        local_28 = operator_new(0x90);
        local_8 = 4;
        FUN_006acf60(uVar5);
        local_8 = 0xffffffff;
        *local_28 = (int)juce::MultiDocumentPanel::TabbedComponentInternal::vftable;
        piVar7 = (int *)in_ECX[0x21];
        if ((piVar7 != local_28) && (in_ECX[0x21] = (int)local_28, piVar7 != (int *)0x0)) {
          (**(code **)*piVar7)(1);
        }
        local_28 = (int *)in_ECX[0x21];
        if (local_28 != (int *)0x0) {
          (**(code **)(*local_28 + 0x28))(1);
          FUN_006e5050(local_28,0xffffffff);
        }
        FUN_0040ec60(piVar1);
        pvVar3 = local_20;
        local_8 = 5;
        uVar4 = 0;
        if (0 < (int)local_18) {
          do {
            if (uVar4 < local_18) {
              uVar5 = *(undefined4 *)((int)pvVar3 + uVar4 * 4);
              iVar6 = *(int *)((int)pvVar3 + uVar4 * 4);
            }
            else {
              uVar5 = 0;
              iVar6 = 0;
            }
            FUN_006acc30(iVar6 + 4,param_2,uVar5,0,0xffffffff);
            uVar4 = uVar4 + 1;
          } while ((int)uVar4 < (int)local_18);
        }
        (**(code **)(*in_ECX + 0x84))();
        local_8 = 0xffffffff;
        FID_conflict__free(local_20);
      }
      else {
        (**(code **)(*param_1 + 0x28))(1);
        FUN_006e5050(param_1,0xffffffff);
      }
    }
    else {
      FUN_006acc30(param_1 + 1,param_2,param_1,0,0xffffffff);
    }
    FUN_006b18f0(param_1);
  }
LAB_006b215d:
  (**(code **)(*in_ECX + 0x84))();
  (**(code **)(*in_ECX + 0xb0))();
LAB_006b2177:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

