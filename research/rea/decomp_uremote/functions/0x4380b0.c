// rea decompile_all
// name: FUN_004380b0
// address: 0x4380b0
// body: available
// range: 0x4380b0-0x4380f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004380b0(void)

{
  uint uVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) != 0) {
    return -1;
  }
  uVar1 = FUN_0041112f(unaff_EDI + 8,*(undefined4 *)(unaff_EDI + 0x34));
  *(int *)(unaff_EDI + 0x24) = *(int *)(unaff_EDI + 0x24) + uVar1;
  *(undefined4 *)(unaff_EDI + 0x18) = 0;
  *(uint *)(unaff_EDI + 4) = (uint)(uVar1 < *(uint *)(unaff_EDI + 0x34));
  *(uint *)(unaff_EDI + 0x1c) = (uVar1 * 8 - *(uint *)(unaff_EDI + 0x34)) + 1;
  return (uVar1 != 0) - 1;
}

