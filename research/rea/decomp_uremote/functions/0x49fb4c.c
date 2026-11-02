// rea decompile_all
// name: FUN_0049fb4c
// address: 0x49fb4c
// body: available
// range: 0x49fb4c-0x49fc0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0049fb4c(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  FUN_004652cd();
  thunk_FUN_0049f6e8();
  FUN_0049f744();
  cVar1 = FUN_00465953();
  if (cVar1 != '\0') {
    uVar2 = FUN_0049f744();
    uVar2 = thunk_FUN_00465ac3(uVar2);
    thunk_FUN_00465aae(uVar2);
  }
  uVar2 = 1;
  fVar3 = (float10)FUN_0049fa3d(1);
  uVar2 = FUN_004658d9((float)fVar3,uVar2);
  thunk_FUN_00465ac3(uVar2);
  FUN_004652d6();
  FUN_0049f73b();
  FUN_0049f74a();
  cVar1 = FUN_00465953();
  if (cVar1 != '\0') {
    uVar2 = FUN_0049f74a();
    thunk_FUN_00465b22(param_1);
    thunk_FUN_00465ac3(uVar2);
  }
  return param_1;
}

