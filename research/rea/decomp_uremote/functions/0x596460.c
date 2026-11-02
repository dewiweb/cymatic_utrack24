// rea decompile_all
// name: FUN_00596460
// address: 0x596460
// body: available
// range: 0x596460-0x5964fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00596460(int *param_1,int *param_2)

{
  ushort uVar1;
  undefined4 local_14;
  undefined1 local_d;
  undefined1 local_5;
  
  *(ushort *)*param_1 = *(ushort *)((int)param_2 + 6) ^ 0x9f35;
  *param_1 = *param_1 + 2;
  uVar1 = *(ushort *)((int)param_2 + 6);
  local_d = 0x30;
  local_5 = '\a';
  for (local_14 = 0; local_14 < uVar1; local_14 = local_14 + 1) {
    *(byte *)(*param_1 + local_14) = local_d ^ *(byte *)(*param_2 + local_14);
    local_5 = local_5 + '\a';
    local_d = local_d + local_5;
  }
  *param_1 = *param_1 + (uint)uVar1;
  return;
}

