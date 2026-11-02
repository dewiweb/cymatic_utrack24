// rea decompile_all
// name: FUN_00515f60
// address: 0x515f60
// body: available
// range: 0x515f60-0x5160ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00515f60(uint param_1)

{
  int iVar1;
  int in_ECX;
  int local_18;
  int local_8;
  
  for (local_18 = FUN_005160b0(); local_18 != 0; local_18 = FUN_00516110(local_18)) {
    if ((*(char *)(local_18 + 0x1c) == '\0') &&
       ((*(uint *)(local_18 + 0x18) < param_1 ||
        (*(char *)(*(int *)(local_18 + 0x14) + 0x44) != '\0')))) {
      (**(code **)(**(int **)(local_18 + 0x14) + 0xc))
                (*(undefined4 *)(local_18 + 0xc),*(undefined4 *)(local_18 + 0x10));
      *(undefined1 *)(local_18 + 0x1c) = 1;
    }
  }
  FUN_00513420();
  local_8 = 0;
  local_18 = *(int *)(in_ECX + 100);
  while (local_18 != 0) {
    iVar1 = *(int *)(local_18 + 8);
    if (*(char *)(local_18 + 0x1c) == '\0') {
      local_8 = local_18;
      local_18 = iVar1;
    }
    else {
      if (local_18 == *(int *)(in_ECX + 100)) {
        *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(local_18 + 8);
      }
      else {
        *(undefined4 *)(local_8 + 8) = *(undefined4 *)(local_18 + 8);
      }
      *(undefined4 *)(local_18 + 8) = 0;
      FUN_00516280();
      local_18 = iVar1;
    }
  }
  LOCK();
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + -1;
  UNLOCK();
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xc));
  return;
}

