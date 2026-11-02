// rea decompile_all
// name: FUN_0044d2c6
// address: 0x44d2c6
// body: available
// range: 0x44d2c6-0x44d350 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_0044d2c6(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x44d2d2;
  FUN_004652cd();
  local_8 = 0;
  FUN_004652cd();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004c4e62();
  iVar1 = FUN_004761f9();
  *param_1 = *(undefined4 *)(iVar1 + 8);
  param_1[1] = *(undefined4 *)(iVar1 + 0xc);
  uVar2 = FUN_005b3fb0();
  param_1[2] = uVar2;
  uVar2 = FUN_005b3fb0();
  param_1[3] = uVar2;
  FUN_0046537e(local_18);
  FUN_00465317(param_1 + 4);
  FUN_004652d6();
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_0044d3c5();
  return param_1;
}

