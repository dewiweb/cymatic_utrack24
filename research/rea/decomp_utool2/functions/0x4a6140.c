// rea decompile_all
// name: FUN_004a6140
// address: 0x4a6140
// body: available
// range: 0x4a6140-0x4a61c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a6140(undefined4 param_1)

{
  int iVar1;
  byte bVar2;
  int *in_ECX;
  
  iVar1 = FUN_006f6dd6(param_1,0,&juce::ComponentPeer::RTTI_Type_Descriptor,
                       &juce::HWNDComponentPeer::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    (**(code **)(*in_ECX + 0x30))(0);
    bVar2 = *(byte *)(*(int *)(iVar1 + 4) + 0x69) & 1;
    if ((*(byte *)(in_ECX[1] + 0x69) & 1) == bVar2) {
      SetWindowPos((HWND)in_ECX[0xe],*(HWND *)(iVar1 + 0x38),0,0,0,0,0x413);
      return;
    }
    if (bVar2 != 0) {
      SetWindowPos((HWND)in_ECX[0xe],(HWND)0x0,0,0,0,0,0x413);
    }
  }
  return;
}

