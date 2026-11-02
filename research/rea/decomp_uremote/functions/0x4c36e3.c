// rea decompile_all
// name: FUN_004c36e3
// address: 0x4c36e3
// body: available
// range: 0x4c36e3-0x4c3744 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c36e3(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_3c;
  undefined4 local_38 [2];
  undefined4 uStack_30;
  undefined1 auStack_2c [24];
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x4c36ef;
  local_14 = auStack_2c;
  uStack_30 = 0x4c36fe;
  FUN_00467e6f();
  local_8 = 0;
  local_14 = (undefined1 *)&local_3c;
  local_3c = param_3;
  local_38[0] = param_4;
  FUN_004c353c();
  local_14 = (undefined1 *)local_38;
  local_3c = 0x4c3731;
  FUN_004c751a();
  local_8 = 0xffffffff;
  local_3c = 0x4c373d;
  FUN_004c22a2();
  return;
}

