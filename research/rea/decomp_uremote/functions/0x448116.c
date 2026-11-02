// rea decompile_all
// name: FUN_00448116
// address: 0x448116
// body: available
// range: 0x448116-0x448189 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_00448116(undefined4 param_1)

{
  int in_ECX;
  undefined4 uStack_34;
  int iStack_30;
  undefined1 *local_1c;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0;
  local_14 = 0;
  iStack_30 = in_ECX + 4;
  uStack_34 = param_1;
  FUN_00465bec();
  local_8 = 0;
  local_14 = 1;
  while (in_ECX = *(int *)(in_ECX + 0x34), in_ECX != 0) {
    iStack_30 = param_1;
    local_1c = (undefined1 *)&uStack_34;
    FUN_00465bec(&uStack_34,in_ECX + 4);
    FUN_00465c30(local_18);
    iStack_30 = param_1;
    uStack_34 = 0x448171;
    FUN_00465317();
    iStack_30 = 0x448179;
    FUN_004652d6();
  }
  return param_1;
}

