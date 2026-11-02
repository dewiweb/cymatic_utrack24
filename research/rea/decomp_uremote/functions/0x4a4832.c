// rea decompile_all
// name: FUN_004a4832
// address: 0x4a4832
// body: available
// range: 0x4a4832-0x4a489e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_004a4832(undefined4 param_1)

{
  float fVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = FUN_004a6acf(&stack0xfffffff0);
  if (iVar2 < 0) {
    iVar2 = FUN_004a6acf(&stack0xfffffff0);
    if (iVar2 < 0) {
      iVar2 = FUN_004a4804(param_1);
      fVar1 = (float)iVar2 / (float)*(int *)(unaff_EDI + 0x38);
      FUN_004a6b3f((int *)(unaff_EDI + 0x88),&stack0xfffffff0);
      goto LAB_004a489a;
    }
  }
  fVar1 = *(float *)(iVar2 * 0xc + 8 + *(int *)(unaff_EDI + 0x88));
LAB_004a489a:
  return (float10)fVar1;
}

