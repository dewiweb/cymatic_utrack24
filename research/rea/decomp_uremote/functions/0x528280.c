// rea decompile_all
// name: FUN_00528280
// address: 0x528280
// body: available
// range: 0x528280-0x5282ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00528280(char param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  int local_38 [2];
  char *pcStack_30;
  undefined1 *puStack_2c;
  char *local_28;
  undefined1 *local_20;
  int local_c;
  
  if (param_1 == '\0') {
    local_28 = "Too many destination";
  }
  else {
    local_28 = "Too many recording destination";
  }
  local_c = (param_1 != '\0') + 0x7100;
  puStack_2c = &DAT_009114df;
  pcStack_30 = local_28;
  local_38[1] = 0x2000;
  local_20 = (undefined1 *)local_38;
  local_38[0] = local_c;
                    /* WARNING: Ignoring partial resolution of indirect */
  local_38[0]._0_2_ = (undefined2)local_c;
  uVar1 = FUN_00503c30(param_2,param_3);
  FUN_00528070(uVar1);
  return;
}

