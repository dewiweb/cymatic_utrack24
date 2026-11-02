// rea decompile_all
// name: FUN_004a6fdc
// address: 0x4a6fdc
// body: available
// range: 0x4a6fdc-0x4a7011 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a6fdc(void)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = unaff_ESI[2];
  while (0 < iVar1) {
    unaff_ESI[2] = unaff_ESI[2] + -1;
    iVar1 = *(int *)(*unaff_ESI + unaff_ESI[2] * 4);
    if (iVar1 != 0) {
      _free(*(void **)(iVar1 + 0x28));
      FUN_004f7994();
      FUN_005af7b6(iVar1);
    }
    iVar1 = unaff_ESI[2];
  }
  return;
}

