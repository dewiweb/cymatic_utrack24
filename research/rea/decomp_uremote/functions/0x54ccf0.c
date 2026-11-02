// rea decompile_all
// name: FUN_0054ccf0
// address: 0x54ccf0
// body: available
// range: 0x54ccf0-0x54cd6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ushort FUN_0054ccf0(ushort param_1,ushort param_2,void *param_3)

{
  int in_ECX;
  undefined2 local_8;
  
  local_8 = param_2;
  if (param_1 < *(ushort *)(in_ECX + -0x42a)) {
    if ((uint)*(ushort *)(in_ECX + -0x42a) < (uint)param_1 + (uint)param_2) {
      local_8 = *(short *)(in_ECX + -0x42a) - param_1;
    }
    _memcpy(param_3,(void *)(in_ECX + -0x428 + (uint)param_1),(uint)local_8);
  }
  else {
    local_8 = 0;
  }
  return local_8;
}

