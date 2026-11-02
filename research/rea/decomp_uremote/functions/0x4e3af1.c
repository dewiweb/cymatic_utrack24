// rea decompile_all
// name: FUN_004e3af1
// address: 0x4e3af1
// body: available
// range: 0x4e3af1-0x4e3b4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004e3af1(undefined4 param_1)

{
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  undefined1 *local_18;
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x4e3afd;
  local_14[0] = 0;
  puStack_2c = local_14;
  uStack_30 = 0x4e3b0d;
  puStack_2c = (undefined4 *)FUN_004e2fe2();
  local_8 = 0;
  local_18 = (undefined1 *)&uStack_34;
  FUN_004e2fe2(&uStack_34);
  FUN_00465c6b(&uStack_30);
  uStack_34 = param_1;
  FUN_00465c30();
  puStack_2c = (undefined4 *)0x4e3b43;
  FUN_004652d6();
  return param_1;
}

