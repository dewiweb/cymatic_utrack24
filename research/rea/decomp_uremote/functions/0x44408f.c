// rea decompile_all
// name: FUN_0044408f
// address: 0x44408f
// body: available
// range: 0x44408f-0x444147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 *
FUN_0044408f(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 in_ECX;
  
  FUN_004bfd7b();
  puVar1 = (undefined4 *)FUN_00474777();
  *puVar1 = FaderMeter::vftable;
  param_1[0x21] = param_2;
  *param_1 = FaderMeter::vftable;
  param_1[0x22] = in_ECX;
  param_1[0x23] = param_4;
  FUN_0043dc05(param_1 + 0x24,in_ECX,param_3);
  FUN_00444699(param_1 + 0x54);
  param_1[0x73] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0xc1400000;
  *(undefined1 *)(param_1 + 0x53) = 0;
  FUN_004c0e0e(0);
  FUN_004c1064(0xffffffff);
  FUN_004c1064(0xffffffff);
  return param_1;
}

