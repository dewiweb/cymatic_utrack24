// rea decompile_all
// name: FUN_00531430
// address: 0x531430
// body: available
// range: 0x531430-0x5315e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00531430(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int in_ECX;
  undefined4 *local_1c;
  undefined1 local_18 [4];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070cf09;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = FUN_006f6dd6(*(undefined4 *)(in_ECX + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
                       &TargetExplorer::RTTI_Type_Descriptor,0,uVar1);
  if (*(int *)(iVar2 + 0xd0) != 0) {
    FUN_004144b0(&local_14);
    local_8 = 0;
    switch(param_1) {
    case (undefined4 *)0x1:
      FUN_005305d0();
      FUN_0052e080();
      break;
    case (undefined4 *)0x4:
      uVar3 = FUN_00411070(&local_1c);
      FUN_004144b0(local_18);
      local_8._0_1_ = 2;
      FUN_00636040(&param_1);
      local_8._0_1_ = 3;
      FUN_005305d0();
      FUN_005067a0(uVar3);
      FUN_0040ea50();
      FUN_0040ea50();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0040ea50();
      break;
    case (undefined4 *)0x8:
      FUN_0040ec10(&local_1c);
      FUN_0040ebf0(&param_1);
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_005305d0();
      FUN_00506680();
      if (param_1 != (undefined4 *)0x0) {
        LOCK();
        piVar4 = param_1 + 1;
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*param_1)(1);
        }
      }
      local_8 = local_8 & 0xffffff00;
      if (local_1c != (undefined4 *)0x0) {
        LOCK();
        piVar4 = local_1c + 1;
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_1c)(1);
        }
      }
    }
    FUN_006f6dd6(*(undefined4 *)(in_ECX + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
                 &TargetExplorer::RTTI_Type_Descriptor,0,uVar1);
    FUN_0052d800(&local_14,1);
    piVar4 = (int *)(local_14 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

