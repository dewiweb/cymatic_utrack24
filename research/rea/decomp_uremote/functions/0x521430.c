// rea decompile_all
// name: FUN_00521430
// address: 0x521430
// body: available
// range: 0x521430-0x52148c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00521430(undefined4 param_1,ushort param_2)

{
  undefined4 uVar1;
  uint local_30 [3];
  undefined1 *local_24;
  uint local_10;
  ushort local_8;
  
  local_8 = param_2;
  local_30[0] = (uint)param_2;
  if (local_30[0] == 0) {
    local_8 = 5;
  }
  local_10 = (uint)local_8;
  local_24 = (undefined1 *)local_30;
                    /* WARNING: Ignoring partial resolution of indirect */
  local_30[0]._0_2_ = local_8;
  uVar1 = FUN_00503c30(param_1,0);
  uVar1 = FUN_00559da0(uVar1);
  return uVar1;
}

