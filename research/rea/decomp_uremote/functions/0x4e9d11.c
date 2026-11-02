// rea decompile_all
// name: FUN_004e9d11
// address: 0x4e9d11
// body: available
// range: 0x4e9d11-0x4e9d4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4e9d48 to 0x4e9764 FUN_004e9764 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e9d11(void)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  
  cVar1 = FUN_004c30fb(in_EAX,0);
  if (cVar1 != '\0') {
    cVar1 = FUN_004c14d9();
    if (cVar1 == '\0') {
      *(byte *)(in_EAX + 0x94) = *(byte *)(in_EAX + 0x94) | 0x80;
    }
  }
  uVar2 = FUN_00467ee3();
  if (*(int *)(in_EAX + 0xec) + 200U < uVar2) {
    FUN_004e9764();
    return;
  }
  return;
}

