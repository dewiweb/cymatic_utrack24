// rea decompile_all
// name: FUN_0051a480
// address: 0x51a480
// body: available
// range: 0x51a480-0x51a680 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051a480(undefined4 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_ECX;
  int *piVar7;
  undefined1 *local_30;
  int local_2c;
  undefined1 *local_28;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_00709b45;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1[4] == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_1[4] + 8);
  }
  iVar2 = FUN_006f6dd6(uVar5,0,&juce::Component::RTTI_Type_Descriptor,&TVIBase::RTTI_Type_Descriptor
                      );
  if (iVar2 != 0) {
    iVar3 = (**(code **)(*(int *)*param_1 + 0x1c))();
    if (0 < *(int *)(iVar3 + 8)) {
      if (*(char *)(iVar2 + 0x7e) == '\0') {
        if (*(char *)(iVar2 + 0x7f) == '\0') {
          local_2c = CONCAT31(local_2c._1_3_,*(undefined1 *)(iVar2 + 0x7d));
        }
        else {
          local_2c = (uint)local_2c._1_3_ << 8;
        }
      }
      else {
        local_2c = CONCAT31(local_2c._1_3_,1);
      }
      local_28 = &DAT_00bfe12c;
      iVar2 = 0;
      local_8 = 0;
      if (0 < *(int *)(iVar3 + 8)) {
        do {
          puVar4 = (undefined4 *)FUN_00411210(local_24);
          local_8._0_1_ = 1;
          uVar5 = (**(code **)(*(int *)*puVar4 + 0x18))();
          (**(code **)(*in_ECX + 0x74))(&local_30,uVar5,local_2c);
          local_8 = (uint)local_8._1_3_ << 8;
          (**(code **)(*local_24[0] + 0x54))(local_1c);
          if (local_28 == PTR_DAT_00c7ed54) {
LAB_0051a58f:
            puVar1 = local_28;
            piVar7 = (int *)(local_30 + -8);
            if (piVar7 != &DAT_00bfe124) {
              LOCK();
              *piVar7 = *piVar7 + 1;
              UNLOCK();
            }
            LOCK();
            local_28 = local_30;
            UNLOCK();
            piVar7 = (int *)(puVar1 + -8);
            if (piVar7 != &DAT_00bfe124) {
              LOCK();
              iVar6 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar6 == 0) {
                FID_conflict__free(piVar7);
              }
            }
          }
          else {
            iVar6 = FUN_0045c1e0(local_28);
            if (iVar6 == 0) goto LAB_0051a58f;
          }
          piVar7 = (int *)(local_30 + -8);
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar7);
            }
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(iVar3 + 8));
      }
      if (local_28 != PTR_DAT_00c7ed54) {
        iVar2 = FUN_0045c1e0(local_28);
        if (iVar2 != 0) {
          FUN_006f6dd6(in_ECX[1],0,&juce::TreeView::RTTI_Type_Descriptor,
                       &ProjectExplorer::RTTI_Type_Descriptor);
          FUN_00519470(&local_28,0);
        }
      }
      piVar7 = (int *)(local_28 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar7);
        }
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

