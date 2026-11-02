// rea decompile_all
// name: FUN_004cb2ed
// address: 0x4cb2ed
// body: available
// range: 0x4cb2ed-0x4cb38d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004cb2ed(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0;
  local_14 = 0;
  FUN_004721d6(&DAT_0095db0c);
  local_14 = 1;
  thunk_FUN_00472232();
  local_8 = 1;
  FUN_004c902b(local_24,in_ECX + 8);
  FUN_004cc0bf(local_24,param_2);
  if (*(int *)(in_ECX + 0x144) == 0) {
    FUN_004e3bc6(local_34);
    local_8._0_1_ = 2;
    FUN_004caec6();
    local_8 = CONCAT31(local_8._1_3_,1);
    thunk_FUN_004f69da(local_34);
  }
  else {
    FUN_004caec6();
  }
  FUN_004722b6();
  return param_1;
}

