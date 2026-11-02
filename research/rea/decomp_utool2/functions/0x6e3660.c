// rea decompile_all
// name: FUN_006e3660
// address: 0x6e3660
// body: available
// range: 0x6e3660-0x6e3872 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e3660(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_ECX;
  int *extraout_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007284f1;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006cfeb0(param_1);
  in_ECX[0x1c] = juce::SettableTooltipClient::vftable;
  in_ECX[0x1d] = &DAT_00bfe12c;
  *in_ECX = juce::Button::vftable;
  in_ECX[0x1c] = juce::Button::vftable;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  iVar1 = *extraout_EDX;
  in_ECX[0x22] = iVar1;
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  local_8._0_1_ = 6;
  local_8._1_3_ = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0xffffffff;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0xffffffff;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  FUN_0063b600(uVar3);
  local_8 = CONCAT31(local_8._1_3_,7);
  in_ECX[0x36] = 0;
  *(undefined2 *)(in_ECX + 0x37) = 0;
  *(undefined1 *)((int)in_ECX + 0xde) = 0;
  param_1 = operator_new(0x24);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = juce::ApplicationCommandManagerListener::vftable;
  param_1[6] = juce::Value::Listener::vftable;
  param_1[7] = juce::KeyListener::vftable;
  *param_1 = juce::Button::CallbackHelper::vftable;
  param_1[5] = juce::Button::CallbackHelper::vftable;
  param_1[6] = juce::Button::CallbackHelper::vftable;
  param_1[7] = juce::Button::CallbackHelper::vftable;
  param_1[8] = in_ECX;
  puVar2 = (undefined4 *)in_ECX[0x26];
  if ((puVar2 != param_1) && (in_ECX[0x26] = param_1, puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) | 0x20;
  uVar3 = -(uint)(in_ECX[0x26] != 0) & in_ECX[0x26] + 0x18;
  if (uVar3 != 0) {
    if (in_ECX[0x35] == 0) {
      param_1 = in_ECX + 0x32;
      FUN_00447220(&param_1);
    }
    FUN_004097d0(uVar3);
  }
  ExceptionList = local_10;
  return;
}

