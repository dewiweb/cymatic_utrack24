// rea decompile_all
// name: FUN_00539540
// address: 0x539540
// body: available
// range: 0x539540-0x5396f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00539540(undefined1 *param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *in_ECX;
  int *piVar2;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070dcca;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  in_ECX[0x1c] = juce::SettableTooltipClient::vftable;
  in_ECX[0x1d] = &DAT_00bfe12c;
  in_ECX[0x1e] = juce::ListBoxModel::vftable;
  *in_ECX = ViewPort_RelatedTargetPlaylist::vftable;
  in_ECX[0x1c] = ViewPort_RelatedTargetPlaylist::vftable;
  in_ECX[0x1e] = ViewPort_RelatedTargetPlaylist::vftable;
  in_ECX[0x1f] = param_1;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = param_2;
  if (param_2 != (undefined1 *)0x0) {
    LOCK();
    *(int *)((int)param_2 + 4) = *(int *)((int)param_2 + 4) + 1;
    UNLOCK();
  }
  in_ECX[0x22] = param_3;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  param_2 = &DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = 6;
  puStack_2c = &param_1;
  uStack_30 = 0x53960d;
  FUN_006e8b40();
  piVar2 = (int *)(param_1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      puStack_2c = (undefined4 *)0x53962f;
      FID_conflict__free(piVar2);
    }
  }
  param_1 = &DAT_00bfe12c;
  puStack_2c = &param_1;
  local_8._0_1_ = 10;
  uStack_30 = 0x53964f;
  FUN_006e8060();
  local_8._0_1_ = 0xc;
  puStack_2c = (undefined4 *)0x539664;
  FUN_0045c990();
  puStack_2c = &param_1;
  local_8._0_1_ = 0xd;
  uStack_30 = 0x53967c;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0xc);
  piVar2 = (int *)(param_1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      puStack_2c = (undefined4 *)0x53969d;
      FID_conflict__free(piVar2);
    }
  }
  puStack_2c = in_ECX + 0x26;
  uStack_30 = 0x5396b0;
  FUN_006e5050();
  if ((undefined4 *)in_ECX[0x78] != in_ECX + 0x1e) {
    in_ECX[0x78] = in_ECX + 0x1e;
    FUN_006e6400(auStack_34);
    FUN_006ce9f0(1);
    FUN_006e7e60();
  }
  uStack_30 = 0x5396e0;
  puStack_2c = in_ECX + 0x5a;
  FUN_006e5050();
  ExceptionList = local_10;
  return;
}

