// rea decompile_all
// name: FUN_004cc04c
// address: 0x4cc04c
// body: available
// range: 0x4cc04c-0x4cc0be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004cc04c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_88 [60];
  undefined1 local_4c [68];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x78;
  local_8 = 0x4cc058;
  uVar1 = FUN_004cccfe(param_2,local_4c,&DAT_0095da18,param_3);
  local_8 = 0;
  FUN_004cbfc9(uVar1);
  local_8 = 0xffffffff;
  FUN_004cbcb4();
  uVar1 = FUN_004cccfe(param_2,local_88,&DAT_0095daac,param_3);
  local_8 = 1;
  FUN_004cbfe6(uVar1);
  FUN_004cbcb4();
  return;
}

