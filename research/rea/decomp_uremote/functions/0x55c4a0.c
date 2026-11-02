// rea decompile_all
// name: FUN_0055c4a0
// address: 0x55c4a0
// body: available
// range: 0x55c4a0-0x55c581 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ushort FUN_0055c4a0(void)

{
  int in_ECX;
  undefined4 local_c;
  undefined2 local_8;
  
  local_8 = 0;
  FUN_0054f6b0();
  for (local_c = in_ECX + -0x18c; *(int *)(local_c + 0x114) != 0;
      local_c = *(int *)(local_c + 0x114)) {
  }
  local_c = *(int *)(local_c + 0x11c);
  while (local_c != 0) {
    if (local_8 < *(ushort *)(local_c + 0x50)) {
      local_8 = *(ushort *)(local_c + 0x50);
    }
    if (*(int *)(local_c + 0x11c) == 0) {
      if (*(int *)(local_c + 0x120) == 0) {
        if (*(int *)(local_c + 0x114) == 0) {
          local_c = 0;
        }
        else {
          local_c = *(int *)(*(int *)(local_c + 0x114) + 0x120);
        }
      }
      else {
        local_c = *(int *)(local_c + 0x120);
      }
    }
    else {
      local_c = *(int *)(local_c + 0x11c);
    }
  }
  FUN_0054f6f0();
  return local_8;
}

