// rea decompile_all
// name: FUN_00500aa9
// address: 0x500aa9
// body: available
// range: 0x500aa9-0x500b52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00500aa9(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00474f26();
  if (cVar1 == '\0') {
    (**(code **)(*(int *)*param_1 + 0x2c))();
    FUN_0043bc2d();
    FUN_004a6dc2();
    cVar1 = FUN_004a4daa();
    if (cVar1 == '\0') {
      iVar2 = FUN_005af82d();
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_005002da();
      }
      if (iVar2 != 0) {
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      }
      FUN_004fea07();
    }
  }
  else {
    iVar2 = *(int *)*param_1;
    FUN_004761ad();
    (**(code **)(iVar2 + 0x30))();
  }
  return;
}

