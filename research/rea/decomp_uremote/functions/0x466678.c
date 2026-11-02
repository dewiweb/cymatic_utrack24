// rea decompile_all
// name: FUN_00466678
// address: 0x466678
// body: available
// range: 0x466678-0x466709 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00466678(undefined4 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 extraout_ECX;
  undefined4 local_1c;
  
  if (*(char *)*param_1 != '\0') {
    FUN_00460973();
    local_1c = 0x46669e;
    puVar1 = (undefined1 *)_strlen((char *)0x0);
    local_1c = 0;
    FUN_00466632();
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_004652cd();
      return extraout_ECX;
    }
    if (&local_1c < puVar1) {
      local_1c = 0;
      FUN_004654d6();
      return param_2;
    }
  }
  local_1c = 0x466700;
  FUN_004652e4();
  return param_2;
}

