// rea decompile_all
// name: FUN_0045b071
// address: 0x45b071
// body: available
// range: 0x45b071-0x45b0ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0045b071(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = 0;
  if (*(int *)(unaff_EDI + 0x60) != 0) {
    (**(code **)(**(int **)(unaff_EDI + 0x28) + 0x60))(*(int *)(unaff_EDI + 0x60));
  }
  *(undefined4 *)(unaff_EDI + 0x60) = 0;
  if (0 < *(int *)(unaff_EDI + 0x58)) {
    do {
      iVar1 = FUN_0045b3d0();
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1) + 4))();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(unaff_EDI + 0x58));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(unaff_EDI + 0x38));
  if (*(int *)(unaff_EDI + 0x54) != 0) {
    _free(*(void **)(unaff_EDI + 0x50));
    *(undefined4 *)(unaff_EDI + 0x50) = 0;
    *(undefined4 *)(unaff_EDI + 0x54) = 0;
  }
  *(undefined4 *)(unaff_EDI + 0x58) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(unaff_EDI + 0x38));
  *(undefined1 *)(unaff_EDI + 100) = 1;
  return;
}

