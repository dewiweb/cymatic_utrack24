// rea decompile_all
// name: FUN_0055a810
// address: 0x55a810
// body: available
// range: 0x55a810-0x55a882 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0055a810(undefined4 param_1,ushort param_2)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 local_14 [12];
  undefined2 local_8;
  undefined1 local_6;
  
  FUN_00503c60(&DAT_0095c854);
  if (param_2 < *(ushort *)(in_ECX + 10)) {
    uVar1 = FUN_0055af60(*(undefined2 *)(*(int *)(in_ECX + 4) + (uint)param_2 * 8));
    FUN_00503650(uVar1);
    local_8 = *(undefined2 *)(*(int *)(in_ECX + 4) + 2 + (uint)param_2 * 8);
    local_6 = 0;
  }
  FUN_00503c60(local_14);
  return param_1;
}

