// rea decompile_all
// name: FUN_004fbe37
// address: 0x4fbe37
// body: available
// range: 0x4fbe37-0x4fbec5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_004fbe37(int *param_1,int param_2)

{
  int iVar1;
  int local_2c;
  int local_28;
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x4fbe43;
  local_28 = 0x14;
  local_2c = 0x4fbe4d;
  local_2c = FUN_005af82d();
  local_8 = 0;
  if (local_2c == 0) {
    iVar1 = 0;
  }
  else {
    local_28 = param_2 + 8;
    local_14 = (undefined1 *)local_2c;
    iVar1 = FUN_00500482();
  }
  *param_1 = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  local_14 = (undefined1 *)&local_2c;
  local_2c = 0;
  local_28 = 0;
  FUN_00474f39();
  local_28 = 0x4fbe90;
  FUN_00476c45();
  param_1[0x14] = 0x3f800000;
  param_1[0x13] = 1;
  local_8 = 1;
  local_28 = 0x4fbea6;
  FUN_0049f4b3();
  param_1[0x16] = param_2;
  *(undefined1 *)(param_1 + 0x17) = 0;
  local_28 = 0x4fbeb8;
  FUN_004c6ae2();
  param_1[0x19] = 0;
  return param_1;
}

