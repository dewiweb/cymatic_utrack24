// rea decompile_all
// name: FUN_004e39ab
// address: 0x4e39ab
// body: available
// range: 0x4e39ab-0x4e3a81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_004e39ab(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x4e39b7;
  FUN_004e2ed8();
  local_8 = 0;
  FUN_004e2ed8();
  FUN_004652cd();
  local_8 = CONCAT31(local_8._1_3_,2);
  local_14[0] = (undefined4 *)*param_2;
  FUN_00463f2d(local_1c,local_14,extraout_ECX);
  thunk_FUN_00463e98();
  FUN_004e2ee9(param_1);
  FUN_004e2f64();
  FUN_00463e49();
  FUN_00460973();
  local_14[0] = param_2;
  iVar1 = FUN_00460791();
  if (iVar1 == 0x2c) {
    FUN_004607e3();
  }
  FUN_00463f2d(local_1c,local_14,local_18);
  thunk_FUN_00463e98();
  FUN_004e2ee9(param_1 + 4);
  FUN_004e2f64();
  FUN_00463e49();
  FUN_004652d6();
  return param_1;
}

