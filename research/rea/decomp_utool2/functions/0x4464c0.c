// rea decompile_all
// name: FUN_004464c0
// address: 0x4464c0
// body: available
// range: 0x4464c0-0x446719 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004464c0(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  int *piVar7;
  undefined4 extraout_ECX;
  int iVar8;
  undefined1 **ppuVar9;
  undefined4 uVar10;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006feef8;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar8 = 0;
  if (0 < *(int *)(in_ECX + 0x374)) {
    do {
      FUN_0062a1b0(&local_14,iVar8);
      local_8 = 0;
      cVar2 = FUN_00446720();
      if (cVar2 != '\0') {
        puVar4 = operator_new(0xc);
        local_18 = &DAT_00bfe12c;
        *puVar4 = juce::ModalCallbackFunction::FunctionCaller1<juce::PluginListComponent::Scanner*>
                  ::vftable;
        puVar4[1] = FUN_00446890;
        puVar4[2] = in_ECX;
        uVar10 = 0;
        ppuVar9 = &local_18;
        local_8._0_1_ = 1;
        uVar5 = FUN_00637250(ppuVar9,0,puVar4);
        local_8._0_1_ = 2;
        FUN_00637250(uVar5);
        local_8._0_1_ = 3;
        FUN_00633060(&local_24,&DAT_00c154a0,local_14,0);
        local_8._0_1_ = 4;
        uVar6 = extraout_ECX;
        FUN_00637250(extraout_ECX,extraout_ECX);
        FUN_004432d0();
        uVar6 = FUN_00637730(uVar6);
        local_8._0_1_ = 5;
        FUN_00637250();
        local_8 = CONCAT31(local_8._1_3_,6);
        FUN_006d3250(uVar6,uVar5,ppuVar9,uVar10,puVar4);
        piVar7 = (int *)(local_1c + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        piVar7 = (int *)(local_20 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        piVar7 = (int *)(local_24 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        piVar7 = (int *)(local_28 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        piVar7 = (int *)(local_2c + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        piVar7 = (int *)(local_14 + -8);
        if (piVar7 == &DAT_00bfe124) {
          ExceptionList = local_10;
          return;
        }
        LOCK();
        iVar8 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar8 != 0) {
          ExceptionList = local_10;
          return;
        }
        FID_conflict__free(piVar7);
        ExceptionList = local_10;
        return;
      }
      local_8 = 0xffffffff;
      piVar7 = (int *)(local_14 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(in_ECX + 0x374));
  }
  FUN_004468b0(uVar3);
  ExceptionList = local_10;
  return;
}

