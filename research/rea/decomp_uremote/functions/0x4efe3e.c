// rea decompile_all
// name: FUN_004efe3e
// address: 0x4efe3e
// body: available
// range: 0x4efe3e-0x4efeb1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004efe3e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_c = -1;
  iVar2 = FUN_004efe1c();
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    iVar3 = FUN_004efe28();
    if (*(char *)(iVar3 + 0x72) != '\0') {
      iVar1 = *(int *)(iVar3 + 0xc);
      local_8 = 0;
      for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
        iVar4 = FUN_005cdbcf(iVar1,0,&juce::Component::RTTI_Type_Descriptor,
                             &juce::TopLevelWindow::RTTI_Type_Descriptor,0);
        if (iVar4 != 0) {
          local_8 = local_8 + 1;
        }
      }
      if (local_c < local_8) {
        local_10 = iVar3;
        local_c = local_8;
      }
    }
  }
  return local_10;
}

