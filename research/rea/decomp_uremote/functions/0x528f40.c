// rea decompile_all
// name: FUN_00528f40
// address: 0x528f40
// body: available
// range: 0x528f40-0x528fc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00528f40(int param_1)

{
  int in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00513420();
  local_8 = param_1;
  local_c = FUN_00512850();
  while ((local_c != 0 && (local_8 != 0))) {
    local_8 = local_8 + -1;
    local_c = FUN_00512890(local_c);
  }
  if (local_c != 0) {
    FUN_00528940();
  }
  LOCK();
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + -1;
  UNLOCK();
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xc));
  return local_c;
}

