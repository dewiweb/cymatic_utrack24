// rea decompile_all
// name: FUN_00509d50
// address: 0x509d50
// body: available
// range: 0x509d50-0x509f31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00509d50(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 in_XMM2_Qa;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  uint uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00708354;
  local_10 = ExceptionList;
  uStack_30 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar4 = (undefined4)in_XMM2_Qa;
  uVar5 = (undefined4)((ulonglong)in_XMM2_Qa >> 0x20);
  puStack_34 = (undefined4 *)0x509d8a;
  FUN_006ea2c0();
  local_8 = 0;
  in_ECX[0x1c] = juce::Slider::Listener::vftable;
  in_ECX[0x1d] = juce::SettableTooltipClient::vftable;
  in_ECX[0x1e] = &DAT_00bfe12c;
  piVar1 = in_ECX + 0x28;
  *in_ECX = ProgressBarSlider::vftable;
  in_ECX[0x1c] = ProgressBarSlider::vftable;
  in_ECX[0x1d] = ProgressBarSlider::vftable;
  in_ECX[0x1f] = param_1;
  in_ECX[0x20] = 0;
  *(ulonglong *)(in_ECX + 0x22) = CONCAT44(uVar5,uVar4);
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  puStack_34 = (undefined4 *)0x509e0a;
  FUN_006ea2c0();
  in_ECX[0x44] = juce::SettableTooltipClient::vftable;
  in_ECX[0x45] = &DAT_00bfe12c;
  *piVar1 = (int)juce::Slider::vftable;
  in_ECX[0x44] = juce::Slider::vftable;
  in_ECX[0x46] = 0;
  local_8._0_1_ = 5;
  piStack_3c = (int *)0x509e38;
  FUN_00699500();
  *piVar1 = (int)ProgressBarSlider::_Slider::vftable;
  in_ECX[0x44] = ProgressBarSlider::_Slider::vftable;
  in_ECX[0x47] = 0;
  in_ECX[0x48] = 0;
  in_ECX[0x49] = 0;
  local_8 = CONCAT31(local_8._1_3_,7);
  iVar2 = in_ECX[0x46];
  *(undefined1 *)(in_ECX + 0x4a) = 0;
  if (*(int *)(iVar2 + 0x18) != 0) {
    *(undefined4 *)(iVar2 + 0x18) = 0;
    FUN_006e6400(&uStack_40);
    FUN_006ce9f0(1);
    pcVar3 = *(code **)(**(int **)(iVar2 + 0x14) + 0x4c);
    if (pcVar3 == FUN_006e10b0) {
      puStack_34 = (undefined4 *)0x509eb5;
      puStack_34 = (undefined4 *)FUN_006e9580();
      uStack_38 = 0x509ebd;
      FUN_0049c530();
    }
    else {
      puStack_34 = (undefined4 *)0x509ec1;
      (*pcVar3)();
    }
  }
  puStack_34 = (undefined4 *)0x509ed8;
  FUN_006e17c0();
  FUN_0049c410();
  *(undefined1 *)(in_ECX[0x46] + 0x139) = 1;
  puStack_34 = in_ECX + 0x1c;
  if (puStack_34 != (undefined4 *)0x0) {
    uStack_38 = 0x509f09;
    FUN_004097d0();
  }
  puStack_34 = (undefined4 *)0x1;
  uStack_38 = 0x509f12;
  (**(code **)(*piVar1 + 0x28))();
  uStack_38 = 0xffffffff;
  uStack_40 = 0x509f1c;
  piStack_3c = piVar1;
  FUN_006e5050();
  ExceptionList = local_10;
  return;
}

