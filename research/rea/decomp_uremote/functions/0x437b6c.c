// rea decompile_all
// name: FUN_00437b6c
// address: 0x437b6c
// body: available
// range: 0x437b6c-0x437ba5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00437b6c(uint param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_ESI;
  
  while( true ) {
    uVar2 = *(int *)(unaff_ESI + 0x2050) - *(int *)(unaff_ESI + 0x204c);
    if (param_1 <= uVar2) {
      uVar2 = param_1;
    }
    *(int *)(unaff_ESI + 0x2048) = *(int *)(unaff_ESI + 0x2048) + uVar2;
    param_1 = param_1 - uVar2;
    *(uint *)(unaff_ESI + 0x204c) = *(int *)(unaff_ESI + 0x204c) + uVar2;
    if (param_1 == 0) break;
    iVar1 = FUN_00437b00();
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  return 0;
}

