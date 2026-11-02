// rea decompile_all
// name: FUN_0041ab40
// address: 0x41ab40
// body: available
// range: 0x41ab40-0x41ab7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041ab40(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *unaff_ESI;
  
  piVar2 = *(int **)(in_EAX + 4);
  do {
    if (piVar2[3] < 2) {
      FUN_0041a9d9();
      piVar2 = extraout_ECX;
    }
    piVar2[3] = 0;
    iVar1 = FUN_0041a973();
  } while (((iVar1 == 0) && (extraout_ECX_00[3] < 3)) &&
          (piVar2 = extraout_ECX_00, 1 < extraout_ECX_00[3]));
  if (unaff_ESI != (int *)0x0) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*extraout_ECX_00 - iVar1) + -1;
    }
    *unaff_ESI = iVar1;
  }
  return;
}

