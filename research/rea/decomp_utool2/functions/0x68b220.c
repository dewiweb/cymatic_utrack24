// rea decompile_all
// name: FUN_0068b220
// address: 0x68b220
// body: available
// range: 0x68b220-0x68b290 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068b220(void)

{
  int *piVar1;
  WINDOWPLACEMENT local_34;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)FUN_006d1d80();
  if (piVar1 == (int *)0x0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if ((undefined **)*piVar1 == juce::HWNDComponentPeer::vftable) {
    local_34.length = 0x2c;
    GetWindowPlacement((HWND)piVar1[0xe],&local_34);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  (*(code *)((undefined **)*piVar1)[0xd])();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

