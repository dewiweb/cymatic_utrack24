// rea decompile_all
// name: FUN_00444699
// address: 0x444699
// body: available
// range: 0x444699-0x44470e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_00444699(undefined4 *param_1)

{
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x4446a5;
  FUN_004bfd7b();
  local_8 = 0;
  *param_1 = FaderMeter::Cursor::vftable;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  FUN_00461619();
  local_8._0_1_ = 2;
  FUN_00465075(local_18);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00460bc4(param_1 + 0x16,local_18,local_28);
  thunk_FUN_004652d6();
  FUN_004615f7();
  return param_1;
}

