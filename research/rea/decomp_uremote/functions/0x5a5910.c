// rea decompile_all
// name: FUN_005a5910
// address: 0x5a5910
// body: available
// range: 0x5a5910-0x5a5983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a5910(void)

{
  int in_ECX;
  
  FUN_005a5990();
  *(undefined ***)(in_ECX + 0xac) = CPNS::IParameter::vftable;
  *(undefined ***)(in_ECX + 0xb0 + *(int *)(*(int *)(in_ECX + 0xb0) + 4)) =
       CPNS::IParameter::vftable;
  *(undefined ***)(in_ECX + 0xa0) = CPNS::IHookedObject::vftable;
  *(undefined ***)(in_ECX + 0xa4 + *(int *)(*(int *)(in_ECX + 0xa4) + 4)) =
       CPNS::IHookedObject::vftable;
  *(undefined ***)(in_ECX + 0x98) = CPNS::IObject::vftable;
  return;
}

