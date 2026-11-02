// rea decompile_all
// name: FUN_005ae860
// address: 0x5ae860
// body: available
// range: 0x5ae860-0x5aeabe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ae860(undefined1 *param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  int *piStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007184df;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  in_ECX[0x1c] = param_1;
  in_ECX[0x1d] = PnPDetector::Listener::vftable;
  in_ECX[0x1e] = juce::Button::Listener::vftable;
  *in_ECX = WelcomeWizard::Page2::vftable;
  in_ECX[0x1d] = WelcomeWizard::Page2::vftable;
  in_ECX[0x1e] = WelcomeWizard::Page2::vftable;
  param_1 = &DAT_00bfe12c;
  local_8 = 4;
  piStack_30 = (int *)&param_1;
  uStack_34 = 0x5ae8e3;
  FUN_006e8b40();
  piVar2 = (int *)(param_1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      piStack_30 = (int *)0x5ae905;
      FID_conflict__free(piVar2);
    }
  }
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,9);
  piStack_30 = (int *)&param_1;
  piVar2 = in_ECX + 0x53;
  uStack_34 = 0x5ae92f;
  FUN_006e8b40();
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      piStack_30 = (int *)0x5ae94f;
      FID_conflict__free(piVar3);
    }
  }
  in_ECX[0x87] = 0;
  in_ECX[0x88] = 0;
  in_ECX[0x89] = 0;
  local_8._0_1_ = 0xd;
  piStack_30 = (int *)0x5ae985;
  FUN_0045c990();
  piStack_30 = (int *)&param_1;
  local_8._0_1_ = 0xe;
  uStack_34 = 0x5ae99a;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0xd);
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      piStack_30 = (int *)0x5ae9be;
      FID_conflict__free(piVar3);
    }
  }
  if (in_ECX + 0x1f != (int *)0x0) {
    piStack_30 = (int *)0x5ae9cf;
    (**(code **)(in_ECX[0x1f] + 0x28))();
    piStack_30 = in_ECX + 0x1f;
    uStack_34 = 0x5ae9dc;
    FUN_006e5050();
  }
  piStack_30 = (int *)0x5ae9ed;
  FUN_0045c990();
  piStack_30 = (int *)&param_1;
  local_8._0_1_ = 0xf;
  uStack_34 = 0x5aea01;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0xd);
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      piStack_30 = (int *)0x5aea22;
      FID_conflict__free(piVar3);
    }
  }
  if (in_ECX[0x7a] != 0x22) {
    in_ECX[0x7a] = 0x22;
    FUN_006e6400(auStack_38);
    FUN_006ce9f0(1);
  }
  if (piVar2 != (int *)0x0) {
    piStack_30 = (int *)0x5aea5e;
    (**(code **)(*piVar2 + 0x28))();
    uStack_34 = 0x5aea68;
    piStack_30 = piVar2;
    FUN_006e5050();
  }
  if (DAT_00c8a5e8 == 0) {
    piStack_30 = (int *)0x5aea78;
    param_1 = operator_new(0x34);
    local_8._0_1_ = 0x10;
    DAT_00c8a5e8 = FUN_005b6bb0();
    local_8 = CONCAT31(local_8._1_3_,0xd);
  }
  if (in_ECX != (undefined4 *)0xffffff8c) {
    piStack_30 = (int *)0x5aeaa2;
    FUN_004097d0();
  }
  FUN_005b7090();
  ExceptionList = local_10;
  return;
}

