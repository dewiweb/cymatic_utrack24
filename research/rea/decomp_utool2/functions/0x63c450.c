// rea decompile_all
// name: FUN_0063c450
// address: 0x63c450
// body: available
// range: 0x63c450-0x63c4e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063c450(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f607;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((in_ECX != (int *)0x0) && (*in_ECX == 0xc403)) {
    puVar3 = operator_new(0xc);
    iVar1 = in_ECX[2];
    *puVar3 = juce::ReferenceCountedObject::vftable;
    puVar3[1] = 0;
    local_8 = 1;
    *puVar3 = `void___cdecl_juce::WindowsMessageHelpers::handleBroadcastMessage(tagCOPYDATASTRUCT_const*_const)'
              ::__l5::BroadcastMessage::vftable;
    FUN_0045ce10(iVar1,uVar2);
    FUN_0063e270();
  }
  ExceptionList = local_10;
  return;
}

