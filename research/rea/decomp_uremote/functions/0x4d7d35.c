// rea decompile_all
// name: FUN_004d7d35
// address: 0x4d7d35
// body: available
// range: 0x4d7d35-0x4d7d9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004d7d35(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18 [4];
  uint local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x4d7d41;
  local_14 = 0;
  iVar1 = FUN_005af82d(0xdc);
  local_8 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00465153(local_18);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_14 = 1;
    uVar2 = FUN_004c8a55(param_1,uVar2);
  }
  if ((local_14 & 1) != 0) {
    FUN_004652d6();
  }
  return uVar2;
}

