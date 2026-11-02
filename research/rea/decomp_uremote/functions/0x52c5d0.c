// rea decompile_all
// name: FUN_0052c5d0
// address: 0x52c5d0
// body: available
// range: 0x52c5d0-0x52c60a inclusive
// range: 0x52c60d-0x52c688 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052c5d0(undefined4 param_1)

{
  int in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = *(int *)(in_ECX + 4);
  if (local_8 != 0) {
    FUN_00544600();
  }
  while (local_8 != 0) {
    if (local_8 == 0) {
      local_c = *(int *)(in_ECX + 4);
    }
    else {
      local_c = *(int *)(local_8 + 8);
    }
    if (local_c != 0) {
      FUN_00544600();
    }
    if (*(char *)(local_8 + 0x4d) == '\0') {
      FUN_005443d0(param_1);
    }
    else if (*(int *)(local_8 + 0x1c) == 1) {
      FUN_0054d810(local_8);
      Destroy();
      local_8 = 0;
    }
    if (local_8 != 0) {
      FUN_00544620();
    }
    local_8 = local_c;
  }
  return;
}

