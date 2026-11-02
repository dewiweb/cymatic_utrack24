// rea decompile_all
// name: FUN_00519f10
// address: 0x519f10
// body: available
// range: 0x519f10-0x519f7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00519f10(void)

{
  int in_ECX;
  
  FUN_0054f510();
  *(undefined ***)(in_ECX + 0x74) = CPNS::IIndexList::vftable;
  *(undefined ***)(in_ECX + 0x78 + *(int *)(*(int *)(in_ECX + 0x78) + 4)) =
       CPNS::IIndexList::vftable;
  *(undefined ***)(in_ECX + 0x68) = CPNS::IHookedObject::vftable;
  *(undefined ***)(in_ECX + 0x6c + *(int *)(*(int *)(in_ECX + 0x6c) + 4)) =
       CPNS::IHookedObject::vftable;
  *(undefined ***)(in_ECX + 0x60) = CPNS::IObject::vftable;
  return;
}

