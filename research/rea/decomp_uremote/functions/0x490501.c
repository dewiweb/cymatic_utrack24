// rea decompile_all
// name: FUN_00490501
// address: 0x490501
// body: available
// range: 0x490501-0x490540 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00490501(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = FUN_0049033e(param_1,param_2);
  if (iVar1 != 0) {
    FUN_0048feef(CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(unaff_ESI + 0x40),
                                            *(undefined1 *)(unaff_ESI + 0x41)),
                                   *(undefined1 *)(unaff_ESI + 0x42)),
                          *(undefined1 *)(unaff_ESI + 0x43)));
  }
  return;
}

