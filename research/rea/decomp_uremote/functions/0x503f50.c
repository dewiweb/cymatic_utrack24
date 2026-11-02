// rea decompile_all
// name: FUN_00503f50
// address: 0x503f50
// body: available
// range: 0x503f50-0x503fa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00503f50(int param_1,int param_2)

{
  undefined1 local_5;
  
  local_5 = FUN_005036a0(param_1,param_2);
  if (local_5 == '\0') {
    if (*(ushort *)(param_1 + 0xc) < *(ushort *)(param_2 + 0xc)) {
      local_5 = -1;
    }
    else if (*(ushort *)(param_2 + 0xc) < *(ushort *)(param_1 + 0xc)) {
      local_5 = '\x01';
    }
  }
  return local_5;
}

