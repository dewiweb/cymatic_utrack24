// rea decompile_all
// name: FUN_00578660
// address: 0x578660
// body: available
// range: 0x578660-0x578701 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00578660(undefined4 param_1,undefined2 param_2)

{
  int local_2c;
  int local_28;
  undefined2 local_22;
  int local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  local_28 = 0x578677;
  FUN_0054f6b0();
  local_c = 0;
  local_14 = 0x400;
  local_22 = *(undefined2 *)(local_20 + -0x96);
  *(short *)(local_20 + -0x96) = *(short *)(local_20 + -0x96) + 1;
  local_18 = (undefined1 *)&local_28;
  local_28 = local_20;
                    /* WARNING: Ignoring partial resolution of indirect */
  local_28._0_2_ = 0;
  local_1c = (undefined1 *)&local_2c;
  local_2c = local_20;
                    /* WARNING: Ignoring partial resolution of indirect */
  local_2c._0_2_ = 0x400;
  FUN_005a20a0(local_20 + -0x130,param_1,local_22,0,param_2);
  local_28 = 0x5786fc;
  FUN_0054f6f0();
  return;
}

