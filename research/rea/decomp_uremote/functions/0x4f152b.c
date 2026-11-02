// rea decompile_all
// name: FUN_004f152b
// address: 0x4f152b
// body: available
// range: 0x4f152b-0x4f1563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f152b(int *param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_EBX;
  undefined1 local_24 [32];
  
  piVar2 = (int *)FUN_004f0b41(local_24,*(undefined4 *)(unaff_EBX + 0x38));
  iVar1 = piVar2[1];
  *param_1 = *(int *)(unaff_EBX + 100) + *piVar2;
  param_1[1] = *(int *)(unaff_EBX + 0x60) + iVar1;
  return;
}

