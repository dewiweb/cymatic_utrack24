// rea decompile_all
// name: FUN_00408161
// address: 0x408161
// body: available
// range: 0x408161-0x4081c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00408161(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 local_8;
  
  local_8 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(undefined **)(param_1 + 0xc) != &DAT_008fb3a8) &&
     (*(undefined **)(param_1 + 0xc) != &DAT_008fb3d0)) {
    FUN_0040ff71(&DAT_0090ed4c);
    puVar1 = (undefined4 *)FUN_0040ffcd("tt-cmaps");
    if ((puVar1 != (undefined4 *)0x0) && ((code *)*puVar1 != (code *)0x0)) {
      local_8 = (*(code *)*puVar1)(param_1,param_2);
    }
  }
  return local_8;
}

