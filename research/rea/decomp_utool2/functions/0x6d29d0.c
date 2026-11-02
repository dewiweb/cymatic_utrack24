// rea decompile_all
// name: FUN_006d29d0
// address: 0x6d29d0
// body: available
// range: 0x6d29d0-0x6d2b2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d29d0(undefined1 param_1)

{
  undefined4 *in_ECX;
  undefined8 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00726faa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0063ea10();
  in_ECX[0x1e] = juce::Timer::vftable;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  *in_ECX = juce::ScrollBar::vftable;
  in_ECX[0x1c] = juce::ScrollBar::vftable;
  in_ECX[0x1e] = juce::ScrollBar::vftable;
  FUN_00425be0();
  uVar1 = 0x3fb999999999999a;
  FUN_00425be0();
  *(undefined1 *)(in_ECX + 0x39) = param_1;
  *(undefined8 *)(in_ECX + 0x2c) = uVar1;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x36] = 100;
  in_ECX[0x37] = 0x32;
  in_ECX[0x38] = 10;
  *(undefined2 *)((int)in_ECX + 0xe5) = 0x100;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  *(byte *)((int)in_ECX + 0x69) = *(byte *)((int)in_ECX + 0x69) | 8;
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) | 0x40;
  ExceptionList = local_10;
  return;
}

