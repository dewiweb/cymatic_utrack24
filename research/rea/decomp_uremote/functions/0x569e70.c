// rea decompile_all
// name: FUN_00569e70
// address: 0x569e70
// body: available
// range: 0x569e70-0x569ef8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00569e70(void)

{
  int iVar1;
  int *local_c;
  int local_8;
  
  local_c = (int *)FUN_0056a330();
  local_8 = 0;
  for (; local_c != (int *)0x0; local_c = (int *)FUN_0056a3e0(local_c)) {
    if (((local_c[0x1c] & 0x1000000U) == 0) && ((local_c[0x1c] & 0x10000U) == 0)) {
      iVar1 = (**(code **)(*local_c + 0x3c))();
      local_8 = iVar1 + local_8;
    }
  }
  return local_8;
}

