// rea decompile_all
// name: FUN_00587bf0
// address: 0x587bf0
// body: available
// range: 0x587bf0-0x587d95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00587bf0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00713549;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0063ea10();
  puVar1 = in_ECX + 0x1e;
  *puVar1 = juce::ScrollBar::Listener::vftable;
  local_8._0_1_ = 2;
  *in_ECX = NewsComponent::vftable;
  in_ECX[0x1c] = NewsComponent::vftable;
  *puVar1 = NewsComponent::vftable;
  *(undefined1 *)(in_ECX + 0x1f) = 1;
  in_ECX[0x20] = param_1;
  FUN_006d29d0(1);
  in_ECX[0x62] = 0;
  in_ECX[99] = 0;
  in_ECX[100] = 0;
  local_8._0_1_ = 4;
  in_ECX[0x65] = 0;
  FUN_00634690();
  local_8._0_1_ = 5;
  FUN_00635a10(&local_14,"Cymatic Audio uTool2");
  local_8._0_1_ = 6;
  uVar3 = FUN_00635a10(&param_1,"News.dta");
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_00586930(uVar3);
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
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
  local_8._0_1_ = 0xb;
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
  FUN_00587340(in_ECX);
  local_8 = CONCAT31(local_8._1_3_,0xc);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004097d0(puVar1);
  }
  FUN_006e5050(in_ECX + 0x22,0xffffffff);
  ExceptionList = local_10;
  return;
}

