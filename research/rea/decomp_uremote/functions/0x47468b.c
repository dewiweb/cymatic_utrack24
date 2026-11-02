// rea decompile_all
// name: FUN_0047468b
// address: 0x47468b
// body: available
// range: 0x47468b-0x4746d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4746d5 to 0x467a4b FUN_00467a4b (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047468b(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int in_EDX;
  
  iVar1 = *(int *)(in_EAX + 0x48);
  if ((iVar1 == 0) || (*(int *)(in_EDX + 4) < *(int *)(iVar1 + 4))) {
    *(undefined4 *)(in_EDX + 0x10) = *(undefined4 *)(in_EAX + 0x48);
    *(int *)(in_EAX + 0x48) = in_EDX;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x10);
    while ((iVar2 != 0 &&
           (iVar3 = *(int *)(iVar1 + 0x10), *(int *)(iVar3 + 4) <= *(int *)(in_EDX + 4)))) {
      iVar2 = *(int *)(iVar3 + 0x10);
      iVar1 = iVar3;
    }
    *(undefined4 *)(in_EDX + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    *(int *)(in_EDX + 0xc) = iVar1;
    *(int *)(iVar1 + 0x10) = in_EDX;
  }
  if (*(int *)(in_EDX + 0x10) != 0) {
    *(int *)(*(int *)(in_EDX + 0x10) + 0xc) = in_EDX;
  }
  FUN_00467a4b();
  return;
}

