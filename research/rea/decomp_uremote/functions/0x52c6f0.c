// rea decompile_all
// name: FUN_0052c6f0
// address: 0x52c6f0
// body: available
// range: 0x52c6f0-0x52c741 inclusive
// range: 0x52c744-0x52c754 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052c6f0(int param_1)

{
  int iVar1;
  int in_ECX;
  int local_8;
  
  local_8 = *(int *)(in_ECX + 4);
  while( true ) {
    if (local_8 == 0) {
      return;
    }
    iVar1 = FUN_00544770();
    if (iVar1 == param_1) break;
    if (local_8 == 0) {
      local_8 = *(int *)(in_ECX + 4);
    }
    else {
      local_8 = *(int *)(local_8 + 8);
    }
  }
  FUN_00544600();
  FUN_00544280(0);
  FUN_00544620();
  return;
}

