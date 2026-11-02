// rea decompile_all
// name: FUN_004988e9
// address: 0x4988e9
// body: available
// range: 0x4988e9-0x498935 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49892e to 0x495a5d FUN_00495a5d (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004988e9(void)

{
  int in_EAX;
  
  if ((*(byte *)(in_EAX + 0x2c) & 8) == 0) {
    FUN_004987a0(0,0);
    *(undefined4 *)(in_EAX + 0x44) = 0;
    if ((*(uint *)(in_EAX + 0x2c) & 8) == 0) {
      *(uint *)(in_EAX + 0x28) = *(uint *)(in_EAX + 0x28) | 8;
      *(uint *)(in_EAX + 0x2c) = *(uint *)(in_EAX + 0x2c) | 8;
    }
  }
  if (*(int *)(in_EAX + 0x34) == 0x49444154) {
    *(undefined4 *)(in_EAX + 0x38) = 0;
    *(undefined4 *)(in_EAX + 0x3c) = 0;
    *(undefined4 *)(in_EAX + 0x34) = 0;
    FUN_00495a5d();
    return;
  }
  return;
}

