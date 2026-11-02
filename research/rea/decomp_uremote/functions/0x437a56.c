// rea decompile_all
// name: FUN_00437a56
// address: 0x437a56
// body: available
// range: 0x437a56-0x437a9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00437a56(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  
  iVar2 = FUN_0041106d();
  if (iVar2 == 0) {
    FUN_00437312();
    *(undefined4 *)(unaff_EBX + 0x10) = 0;
    *(undefined4 *)(unaff_EBX + 0x1c) = 0;
    *(int *)(unaff_EBX + 0xc) = unaff_EBX + 0x48;
    *(int *)(unaff_EBX + 0x18) = unaff_EBX + 0x1048;
    puVar1 = (undefined4 *)(unaff_EBX + 0x2048);
    *puVar1 = 0;
    *(undefined4 **)(unaff_EBX + 0x2050) = puVar1;
    *(undefined4 **)(unaff_EBX + 0x204c) = puVar1;
  }
  return iVar2;
}

