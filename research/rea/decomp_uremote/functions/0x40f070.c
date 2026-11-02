// rea decompile_all
// name: FUN_0040f070
// address: 0x40f070
// body: available
// range: 0x40f070-0x40f0dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040f070(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EDI;
  undefined4 local_8;
  
  local_8 = 0x23;
  if ((unaff_EDI != 0) && (*(int *)(unaff_EDI + 0x60) != 0)) {
    piVar1 = (int *)(*(int *)(unaff_EDI + 0x80) + 0x3c);
    *piVar1 = *piVar1 + -1;
    if (*(int *)(*(int *)(unaff_EDI + 0x80) + 0x3c) == 0) {
      uVar2 = *(undefined4 *)(*(int *)(unaff_EDI + 0x60) + 8);
      iVar3 = FUN_00411af4();
      if (iVar3 != 0) {
        FUN_00411b21();
        FUN_00411a5c(iVar3);
        FUN_0040e13e(uVar2);
        local_8 = 0;
      }
    }
    else {
      local_8 = 0;
    }
  }
  return local_8;
}

