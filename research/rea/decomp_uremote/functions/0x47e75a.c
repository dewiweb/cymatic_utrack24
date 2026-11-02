// rea decompile_all
// name: FUN_0047e75a
// address: 0x47e75a
// body: available
// range: 0x47e75a-0x47e79a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

int FUN_0047e75a(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  *(undefined4 *)(param_1 + 0x14) = param_6;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uStack_24 = param_7;
  local_8 = 0;
  uStack_28 = param_4;
  uStack_2c = param_3;
  iStack_30 = param_1;
  puVar1 = &uStack_34;
  uStack_34 = 0x47e791;
  (**(code **)(*(int *)*param_2 + 0x10))();
  puVar1[-1] = 0x47e798;
  return param_1;
}

