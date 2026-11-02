// rea decompile_all
// name: FUN_004c4669
// address: 0x4c4669
// body: available
// range: 0x4c4669-0x4c46e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c4669(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  FUN_004c6ae6();
  if (*(int *)(in_ECX + 0x28) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x28) + 8);
  }
  if (iVar2 != 0) {
    piVar1 = (int *)thunk_FUN_004c1d58();
    (**(code **)(*piVar1 + 0x24))();
    FUN_004c6b25();
    FUN_004c6b17();
  }
  FUN_004c6b02();
  FUN_004c45e6();
  FUN_004c6b17();
  return;
}

