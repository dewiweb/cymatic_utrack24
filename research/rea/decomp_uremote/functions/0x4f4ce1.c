// rea decompile_all
// name: FUN_004f4ce1
// address: 0x4f4ce1
// body: available
// range: 0x4f4ce1-0x4f4d3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f4ce1(void)

{
  HWND pHVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  HWND pHVar5;
  
  pHVar1 = GetForegroundWindow();
  if (pHVar1 != (HWND)0x0) {
    pHVar1 = GetAncestor(pHVar1,2);
    iVar2 = FUN_004ed4d9();
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return 0;
      }
      uVar3 = FUN_004ed4e7(0,&juce::ComponentPeer::RTTI_Type_Descriptor,
                           &juce::HWNDComponentPeer::RTTI_Type_Descriptor,0);
      iVar4 = FUN_005cdbcf(uVar3);
    } while ((iVar4 == 0) || (pHVar5 = GetAncestor(*(HWND *)(iVar4 + 0x38),2), pHVar5 != pHVar1));
  }
  return 1;
}

