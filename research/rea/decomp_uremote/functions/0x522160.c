// rea decompile_all
// name: FUN_00522160
// address: 0x522160
// body: available
// range: 0x522160-0x52220d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00522160(char param_1)

{
  int iVar1;
  int *in_ECX;
  int local_8;
  
  if (param_1 == '\0') {
    if ((in_ECX[2] != 0) && (in_ECX[2] = in_ECX[2] + -1, in_ECX[2] == 0)) {
      for (local_8 = FUN_00512850(); local_8 != 0; local_8 = FUN_00512890(local_8)) {
        *(undefined1 *)(local_8 + 0x1a) = 1;
      }
      FUN_00522210();
      iVar1 = *in_ECX;
      FUN_00515830();
      SetEvent(*(HANDLE *)(iVar1 + 0x3b8));
    }
  }
  else {
    in_ECX[2] = in_ECX[2] + 1;
  }
  return;
}

