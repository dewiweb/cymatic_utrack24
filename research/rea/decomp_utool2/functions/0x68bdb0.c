// rea decompile_all
// name: FUN_0068bdb0
// address: 0x68bdb0
// body: available
// range: 0x68bdb0-0x68beff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068bdb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072137c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0068a830(param_1,param_3);
  *in_ECX = juce::ResizableWindow::vftable;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0x1000000;
  *(undefined1 *)(in_ECX + 0x22) = 0;
  in_ECX[0x23] = juce::ComponentDragger::vftable;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = juce::ComponentBoundsConstrainer::vftable;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0x3fffffff;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0x3fffffff;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  *(undefined8 *)(in_ECX + 0x34) = 0;
  local_8 = 5;
  in_ECX[0x36] = 0;
  FUN_0068b3f0(param_2);
  FUN_0068bc50(param_3);
  ExceptionList = local_10;
  return;
}

