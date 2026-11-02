// rea decompile_all
// name: FUN_004a953f
// address: 0x4a953f
// body: available
// range: 0x4a953f-0x4a959e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004a953f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x4a954b;
  FUN_0047e7d7(local_2c,2);
  local_8 = 0;
  if (local_28 == 1) {
    FUN_004a9da6(param_1,param_2,param_3);
  }
  else if (local_28 == 2) {
    FUN_004a9e4b();
  }
  else {
    FUN_004a9e04();
  }
  local_8 = 0xffffffff;
  FUN_0047e819();
  return;
}

