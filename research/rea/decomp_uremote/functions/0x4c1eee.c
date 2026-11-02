// rea decompile_all
// name: FUN_004c1eee
// address: 0x4c1eee
// body: available
// range: 0x4c1eee-0x4c1f58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c1eee(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  undefined1 local_24 [28];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x4c1efa;
  FUN_004761f9();
  FUN_00461619();
  local_8 = 0;
  uVar2 = FUN_004bfbb4(param_1);
  local_8 = CONCAT31(local_8._1_3_,1);
  cVar1 = FUN_00460bc4(unaff_ESI + 0x16,uVar2,local_24);
  thunk_FUN_004652d6();
  local_8 = 0xffffffff;
  FUN_004615f7();
  if (cVar1 != '\0') {
    (**(code **)(*unaff_ESI + 0xa4))();
  }
  return;
}

