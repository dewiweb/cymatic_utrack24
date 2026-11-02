// rea decompile_all
// name: FUN_006ae1d0
// address: 0x6ae1d0
// body: available
// range: 0x6ae1d0-0x6ae339 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ae1d0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_ECX;
  undefined4 *extraout_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723752;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  puVar1 = in_ECX + 0x1c;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  *puVar1 = juce::ChangeBroadcaster::vftable;
  FUN_0063ea10();
  in_ECX[0x1d] = juce::ChangeBroadcaster::ChangeBroadcasterCallback::vftable;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x1f] = puVar1;
  *in_ECX = juce::TabbedButtonBar::vftable;
  *puVar1 = juce::TabbedButtonBar::vftable;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  *(undefined8 *)(in_ECX + 0x28) = 0x3fe6666666666666;
  in_ECX[0x2a] = 0xffffffff;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  local_8 = CONCAT31(local_8._1_3_,5);
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) | 0x18;
  operator_new(0x78);
  FUN_006ea2c0();
  extraout_EDX[0x1c] = juce::Button::Listener::vftable;
  *extraout_EDX = juce::TabbedButtonBar::BehindFrontTabComp::vftable;
  extraout_EDX[0x1c] = juce::TabbedButtonBar::BehindFrontTabComp::vftable;
  extraout_EDX[0x1d] = in_ECX;
  *(byte *)(extraout_EDX + 0x1a) = *(byte *)(extraout_EDX + 0x1a) & 0xef | 8;
  puVar1 = (undefined4 *)in_ECX[0x2b];
  if ((puVar1 != extraout_EDX) && (in_ECX[0x2b] = extraout_EDX, puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  piVar2 = (int *)in_ECX[0x2b];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x28))(1);
    FUN_006e5050(piVar2,0xffffffff);
  }
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) | 0x40;
  ExceptionList = local_10;
  return;
}

