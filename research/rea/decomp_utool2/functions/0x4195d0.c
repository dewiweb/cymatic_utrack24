// rea decompile_all
// name: FUN_004195d0
// address: 0x4195d0
// body: available
// range: 0x4195d0-0x419844 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004195d0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *piVar4;
  char *pcVar5;
  undefined1 **ppuVar6;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  void *local_20;
  undefined4 *local_1c;
  undefined1 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fce1e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  FUN_0045c990("Cymatic Audio uTool2",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_006d4e60(&local_14,DAT_00c7ef7c,7,1);
  local_8._0_1_ = 2;
  piVar4 = (int *)(local_14 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  *in_ECX = PlaylistEditorApplication::MainWindow::vftable;
  FUN_006d42d0(1);
  FUN_006d4090(1,0);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (in_ECX[0x36] == 0) {
    FUN_0068b640(in_ECX + 0x2a);
  }
  in_ECX[0x2c] = 0x44c;
  in_ECX[0x2e] = 0x280;
  in_ECX[0x2d] = 10000;
  in_ECX[0x2f] = 10000;
  if (in_ECX[0x36] == 0) {
    FUN_006e9790(in_ECX[4],in_ECX[5],in_ECX[6],in_ECX[7]);
  }
  else {
    FUN_006d14d0(in_ECX,in_ECX + 4,0,0,0,0);
  }
  local_8._0_1_ = 2;
  FUN_006d42d0(1);
  local_20 = operator_new(0x930);
  local_8._0_1_ = 4;
  uVar2 = FUN_005812b0();
  local_8._0_1_ = 2;
  FUN_0068bad0(uVar2,1,1);
  iVar3 = in_ECX[7];
  iVar1 = in_ECX[6];
  FUN_0048d850();
  FUN_006e9790((local_28 / 2 + local_30) - iVar1 / 2,(local_24 / 2 + local_2c) - iVar3 / 2,iVar1,
               iVar3);
  local_18 = &DAT_00bfe12c;
  ppuVar6 = &local_18;
  pcVar5 = "listWindowPos";
  local_8._0_1_ = 6;
  uVar2 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                       &juce::JUCEApplication::RTTI_Type_Descriptor,0,"listWindowPos",ppuVar6);
  local_8 = CONCAT31(local_8._1_3_,5);
  iVar3 = FUN_006f6dd6(uVar2,0,&juce::JUCEApplication::RTTI_Type_Descriptor,
                       &PlaylistEditorApplication::RTTI_Type_Descriptor,0);
  if (*(int *)(*(int *)(iVar3 + 0x24) + 0x20) == 0) {
    FUN_006394c0();
  }
  uVar2 = FUN_006324b0(&local_20,pcVar5,ppuVar6);
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_006d3ab0(uVar2);
  piVar4 = (int *)((int)local_20 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  piVar4 = (int *)(local_18 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_006e9e70(1);
  ExceptionList = local_10;
  return local_1c;
}

