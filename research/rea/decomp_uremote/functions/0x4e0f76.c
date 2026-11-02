// rea decompile_all
// name: FUN_004e0f76
// address: 0x4e0f76
// body: available
// range: 0x4e0f76-0x4e0ff2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004e0f76(int param_1)

{
  char cVar1;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_c;
  
  local_c = 0;
  if (0 < *(int *)(param_1 + 0xf8)) {
    do {
      iStack_2c = local_c;
      iStack_30 = local_c;
      iStack_34 = local_c;
      iStack_38 = local_c;
      FUN_004c4923(&iStack_38);
      FUN_004c0902(0);
      iStack_34 = 0x4e0fc4;
      FUN_004f5a5a();
      iStack_34 = 1;
      iStack_38 = 0x4e0fd1;
      cVar1 = FUN_004c0ee2();
      if (cVar1 != '\0') {
        return 1;
      }
      local_c = local_c + 1;
    } while (local_c < *(int *)(param_1 + 0xf8));
  }
  return 0;
}

