// rea decompile_all
// name: FUN_0054dea0
// address: 0x54dea0
// body: available
// range: 0x54dea0-0x54dedc inclusive
// range: 0x54dedf-0x54df47 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054dea0(void)

{
  int in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00513420();
  local_8 = *(int *)(in_ECX + 0xc90);
  while (local_8 != 0) {
    if (local_8 == 0) {
      local_c = *(int *)(in_ECX + 0xc90);
    }
    else {
      local_c = *(int *)(local_8 + 8);
    }
    FUN_0052f1a0();
    local_8 = local_c;
  }
  *(undefined4 *)(in_ECX + 0xc90) = 0;
  *(undefined4 *)(in_ECX + 0xc94) = 0;
  *(undefined4 *)(in_ECX + 0xc98) = 0;
  LOCK();
  *(int *)(in_ECX + 0xca0) = *(int *)(in_ECX + 0xca0) + -1;
  UNLOCK();
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xca4));
  return;
}

