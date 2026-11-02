// rea decompile_all
// name: FUN_004c9f23
// address: 0x4c9f23
// body: available
// range: 0x4c9f23-0x4c9fe6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004c9f23(undefined4 *param_1)

{
  undefined4 local_30;
  undefined4 *local_2c;
  undefined1 local_18 [4];
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x4c9f2f;
  local_2c = (undefined4 *)0x4c9f39;
  FUN_004c8b3a();
  local_8 = 0;
  *param_1 = juce::DrawableImage::vftable;
  local_2c = (undefined4 *)0x4c9f4b;
  FUN_004c6ae2();
  local_8._0_1_ = 1;
  param_1[0x1f] = 0x3f800000;
  local_2c = (undefined4 *)0x4c9f61;
  FUN_0047604f();
  local_2c = param_1 + 0x21;
  local_30 = 0x4c9f6d;
  FUN_004e3720();
  local_8 = CONCAT31(local_8._1_3_,2);
  local_14 = (undefined1 *)&local_30;
  local_30 = 0x3f800000;
  local_2c = (undefined4 *)0x0;
  FUN_004e3933(local_18);
  local_2c = (undefined4 *)0x4c9f97;
  FUN_004c96de();
  local_2c = (undefined4 *)0x4c9f9f;
  FUN_004e2f64();
  local_2c = (undefined4 *)0x4c9fa7;
  FUN_004e2f64();
  local_14 = (undefined1 *)&local_30;
  local_30 = 0;
  local_2c = (undefined4 *)0x3f800000;
  FUN_004e3933(local_18);
  local_2c = (undefined4 *)0x4c9fcd;
  FUN_004c96de();
  local_2c = (undefined4 *)0x4c9fd5;
  FUN_004e2f64();
  local_2c = (undefined4 *)0x4c9fdd;
  FUN_004e2f64();
  return param_1;
}

