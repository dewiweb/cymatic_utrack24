// rea decompile_all
// name: FUN_00562840
// address: 0x562840
// body: available
// range: 0x562840-0x5628c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00562840(char param_1)

{
  char cVar1;
  int in_ECX;
  int local_8;
  
  cVar1 = FUN_00569510(1,0);
  if ((cVar1 == '\0') && (cVar1 = FUN_00569510(1,0), cVar1 == '\0')) {
    if (param_1 != '\0') {
      for (local_8 = *(int *)(in_ECX + 0x11c); local_8 != 0; local_8 = *(int *)(local_8 + 0x120)) {
        cVar1 = FUN_00562840(1);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
    return 0;
  }
  return 1;
}

