// rea decompile_all
// name: FUN_004a3de2
// address: 0x4a3de2
// body: available
// range: 0x4a3de2-0x4a3e29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a3de2(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBX;
  int iVar4;
  
  iVar1 = *(int *)(unaff_EBX + 0x1c);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*(int *)(*(int *)(unaff_EBX + 0x14) + iVar4 * 4) + 8) != 0) {
        uVar2 = FUN_0049f7d4(0,&juce::Typeface::RTTI_Type_Descriptor,
                             &juce::WindowsDirectWriteTypeface::RTTI_Type_Descriptor,0);
        iVar3 = FUN_005cdbcf(uVar2);
        if (iVar3 == 0) {
          return 0;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return 1;
}

