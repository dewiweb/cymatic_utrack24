// rea decompile_all
// name: FUN_004ed3d7
// address: 0x4ed3d7
// body: available
// range: 0x4ed3d7-0x4ed471 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004ed3d7(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  param_1[1] = param_2;
  *param_1 = juce::ComponentPeer::vftable;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  DAT_00957680 = DAT_00957680 + 2;
  iVar3 = DAT_00957680;
  param_1[10] = 0;
  param_1[0xb] = iVar3;
  *(undefined1 *)(param_1 + 0xc) = 0;
  iVar3 = FUN_004c4e62();
  if (*(int *)(iVar3 + 0x4c) < *(int *)(iVar3 + 0x50) + 1) {
    FUN_004f8197();
  }
  iVar2 = *(int *)(iVar3 + 0x50);
  *(int *)(iVar3 + 0x50) = iVar2 + 1;
  puVar1 = (undefined4 *)(*(int *)(iVar3 + 0x48) + iVar2 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  return param_1;
}

