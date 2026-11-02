// rea decompile_all
// name: FUN_004ed9d9
// address: 0x4ed9d9
// body: available
// range: 0x4ed9d9-0x4eda29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004ed9d9(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  
  iVar2 = FUN_004c3124();
  if ((((iVar2 != *(int *)(param_1 + 4)) &&
       (cVar1 = thunk_FUN_004c1278(*(int *)(param_1 + 4)), iVar2 = extraout_ECX, cVar1 == '\0')) ||
      (piVar3 = (int *)FUN_005cdbcf(iVar2,0,&juce::Component::RTTI_Type_Descriptor,
                                    &juce::TextInputTarget::RTTI_Type_Descriptor,0),
      piVar3 == (int *)0x0)) || (cVar1 = (**(code **)(*piVar3 + 4))(), cVar1 == '\0')) {
    piVar3 = (int *)0x0;
  }
  return piVar3;
}

