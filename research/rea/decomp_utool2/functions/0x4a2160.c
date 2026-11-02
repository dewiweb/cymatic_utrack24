// rea decompile_all
// name: FUN_004a2160
// address: 0x4a2160
// body: available
// range: 0x4a2160-0x4a229d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a2160(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007033d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[0x1c] = juce::Timer::vftable;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  puVar1 = in_ECX + 0x21;
  *puVar1 = juce::Value::Listener::vftable;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  in_ECX[0x22] = param_1;
  *in_ECX = juce::TextEditor::TextHolderComponent::vftable;
  in_ECX[0x1c] = juce::TextEditor::TextHolderComponent::vftable;
  *puVar1 = juce::TextEditor::TextHolderComponent::vftable;
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) & 0xdf | 0x18;
  piVar2 = (int *)FUN_00491210();
  local_8._0_1_ = 3;
  if ((int *)in_ECX[0xe] == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)in_ECX[0xe];
  }
  if (piVar2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2;
  }
  param_1 = piVar2;
  if (iVar4 != iVar3) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      piVar2[1] = piVar2[1] + 1;
      UNLOCK();
    }
    if (in_ECX[0xe] != 0) {
      FUN_004912c0();
    }
    in_ECX[0xe] = piVar2;
    if ((*(byte *)(in_ECX + 0x1a) & 2) != 0) {
      FUN_006cec20();
    }
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  if (piVar2 != (int *)0x0) {
    FUN_004912c0();
  }
  iVar4 = in_ECX[0x22];
  FUN_006969f0();
  if (puVar1 != (undefined4 *)0x0) {
    if (*(int *)(iVar4 + 0x140) == 0) {
      param_1 = (int *)(iVar4 + 0x134);
      FUN_00447220(&param_1);
    }
    FUN_004097d0(puVar1);
  }
  ExceptionList = local_10;
  return;
}

