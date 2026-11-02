// rea decompile_all
// name: FUN_00404a98
// address: 0x404a98
// body: available
// range: 0x404a98-0x404ad1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00404a98(void)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  int in_ECX;
  int extraout_EDX;
  
  *in_EAX = in_ECX;
  piVar1 = in_EAX + 1;
  *piVar1 = *(int *)(in_ECX + 0x74);
  FUN_0040d5dd();
  iVar2 = extraout_EDX;
  if (*piVar1 == extraout_EDX) {
    iVar2 = FUN_004011f5(piVar1);
    if (iVar2 == 0) {
      *(int *)(in_ECX + 0x74) = *piVar1;
      *(code **)(in_ECX + 0x78) = FUN_00401248;
    }
  }
  return iVar2;
}

