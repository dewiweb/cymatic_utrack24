// rea decompile_all
// name: FUN_0040d141
// address: 0x40d141
// body: available
// range: 0x40d141-0x40d194 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d17e to 0x40d13e FUN_0040d13e (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040d141(undefined4 param_1)

{
  code *pcVar1;
  uint in_EAX;
  int in_ECX;
  int iVar2;
  
  if (in_ECX == 0) {
    iVar2 = 0x23;
  }
  else if (in_EAX < *(uint *)(in_ECX + 0x10)) {
    pcVar1 = *(code **)(*(int *)(*(int *)(in_ECX + 0x60) + 0xc) + 0x5c);
    if (pcVar1 != (code *)0x0) {
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) {
        iVar2 = FUN_0040d13e();
        return iVar2;
      }
      if (iVar2 != 7) {
        return iVar2;
      }
    }
    iVar2 = FUN_0040d195(param_1);
  }
  else {
    iVar2 = 0x10;
  }
  return iVar2;
}

