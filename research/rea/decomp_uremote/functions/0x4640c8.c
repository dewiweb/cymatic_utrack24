// rea decompile_all
// name: FUN_004640c8
// address: 0x4640c8
// body: available
// range: 0x4640c8-0x46411c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004640c8(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 local_24 [16];
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x4640d4;
  local_14 = 0;
  if (*(char *)*param_2 != '\0') {
    uVar1 = FUN_00465bec(&param_2,param_2);
    local_8 = 0;
    FUN_00461d2c(uVar1);
    __CxxThrowException_8(local_24,&DAT_009416d8);
  }
  FUN_00463e1a();
  return param_1;
}

