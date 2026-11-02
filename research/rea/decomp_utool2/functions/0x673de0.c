// rea decompile_all
// name: FUN_00673de0
// address: 0x673de0
// body: available
// range: 0x673de0-0x673e6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00673de0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_007204af;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = juce::ImagePixelData::vftable;
  iVar1 = in_ECX[10];
  while (0 < iVar1) {
    iVar1 = iVar1 + -1;
    if (((int)in_ECX[10] <= iVar1) && (iVar1 = in_ECX[10] + -1, iVar1 < 0)) break;
    FUN_00410543();
  }
  FID_conflict__free((void *)in_ECX[8]);
  FUN_0045a4f0();
  FID_conflict__free((void *)in_ECX[5]);
  *in_ECX = juce::ReferenceCountedObject::vftable;
  ExceptionList = local_10;
  return;
}

