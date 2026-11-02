// rea decompile_all
// name: FUN_006e8b40
// address: 0x6e8b40
// body: available
// range: 0x6e8b40-0x6e8da2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e8b40(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_ECX;
  int *local_28;
  undefined **local_24 [2];
  int local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728ce4;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  FUN_006cfeb0(param_1);
  in_ECX[0x1c] = juce::SettableTooltipClient::vftable;
  in_ECX[0x1d] = &DAT_00bfe12c;
  in_ECX[0x1e] = juce::TextEditor::Listener::vftable;
  in_ECX[0x1f] = juce::ComponentListener::vftable;
  in_ECX[0x20] = juce::Value::Listener::vftable;
  *in_ECX = juce::Label::vftable;
  in_ECX[0x1c] = juce::Label::vftable;
  in_ECX[0x1e] = juce::Label::vftable;
  in_ECX[0x1f] = juce::Label::vftable;
  in_ECX[0x20] = juce::Label::vftable;
  local_1c[0] = *param_2;
  piVar2 = (int *)(local_1c[0] + -8);
  local_24[0] = &PTR_vftable_00c7ed4c;
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  local_8._0_1_ = 5;
  local_8._1_3_ = 0;
  piVar2 = in_ECX + 0x21;
  local_28 = piVar2;
  local_28 = operator_new(0x30);
  local_8._0_1_ = 6;
  iVar3 = FUN_00460c70(local_24);
  *piVar2 = iVar3;
  if (iVar3 != 0) {
    LOCK();
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    UNLOCK();
  }
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  (**(code **)(*local_24[0] + 0x54))(local_1c,uVar1);
  iVar3 = *param_2;
  in_ECX[0x25] = iVar3;
  piVar4 = (int *)(iVar3 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  local_8._0_1_ = 9;
  local_28 = in_ECX + 0x26;
  operator_new(0x28);
  iVar3 = FUN_00468a40(0);
  in_ECX[0x26] = iVar3;
  if (iVar3 != 0) {
    LOCK();
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    UNLOCK();
  }
  in_ECX[0x27] = 0x21;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  local_8 = CONCAT31(local_8._1_3_,0xd);
  in_ECX[0x2d] = 1;
  in_ECX[0x2e] = 5;
  in_ECX[0x2f] = 1;
  in_ECX[0x30] = 5;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  *(undefined2 *)(in_ECX + 0x33) = 0;
  *(undefined1 *)((int)in_ECX + 0xce) = 0;
  FUN_006e6170(0x1000201,DAT_00c7ef90);
  FUN_006e6170(0x1000200,DAT_00c8a948);
  FUN_006e6170(0x1000205,DAT_00c8a948);
  uVar1 = -(uint)(in_ECX != (undefined4 *)0x0) & (uint)(in_ECX + 0x20);
  if (uVar1 != 0) {
    if (in_ECX[0x24] == 0) {
      local_28 = piVar2;
      FUN_00447220(&local_28);
    }
    FUN_004097d0(uVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

