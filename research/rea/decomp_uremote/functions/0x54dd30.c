// rea decompile_all
// name: FUN_0054dd30
// address: 0x54dd30
// body: available
// range: 0x54dd30-0x54de5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 FUN_0054dd30(void)

{
  char cVar1;
  int in_ECX;
  int local_c;
  undefined2 local_8;
  
  local_8 = 0x305;
  if (*(char *)(in_ECX + 4) != '\0') {
    FUN_00513420();
    if (*(int *)(in_ECX + 0xc78) == 1) {
      local_8 = 0;
    }
    else {
      cVar1 = FUN_00596d60();
      if (cVar1 != '\0') {
        local_c = 0;
        while ((*(int *)(in_ECX + 0xc78) != 1 && (local_c < 0x1e))) {
          LOCK();
          *(int *)(in_ECX + 0xca0) = *(int *)(in_ECX + 0xca0) + -1;
          UNLOCK();
          LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xca4));
          FUN_00596e80();
          Sleep(100);
          FUN_00513420();
          local_c = local_c + 1;
        }
        if (*(int *)(in_ECX + 0xc78) == 1) {
          local_8 = 0;
        }
        else {
          local_8 = 0;
        }
      }
    }
    LOCK();
    *(int *)(in_ECX + 0xca0) = *(int *)(in_ECX + 0xca0) + -1;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xca4));
  }
  return local_8;
}

