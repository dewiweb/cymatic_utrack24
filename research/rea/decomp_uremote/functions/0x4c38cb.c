// rea decompile_all
// name: FUN_004c38cb
// address: 0x4c38cb
// body: available
// range: 0x4c38cb-0x4c393a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c38cb(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_40;
  undefined4 local_3c [2];
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_28 [20];
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x4c38d7;
  local_14 = auStack_28;
  uStack_2c = 0x4c38e5;
  FUN_004d076d();
  local_14 = auStack_30;
  uStack_34 = 0x4c38f4;
  FUN_00467e6f();
  local_8 = 0;
  local_14 = (undefined1 *)&local_40;
  local_40 = param_3;
  local_3c[0] = param_4;
  FUN_004c353c();
  local_14 = (undefined1 *)local_3c;
  local_40 = 0x4c3927;
  FUN_004c751a();
  local_8 = 0xffffffff;
  local_40 = 0x4c3933;
  FUN_004c26bd();
  return;
}

