// rea decompile_all
// name: FUN_004c365a
// address: 0x4c365a
// body: available
// range: 0x4c365a-0x4c36b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c365a(undefined4 param_1)

{
  float *pfVar1;
  int unaff_EDI;
  
  if (*(char *)(unaff_EDI + 0xc) == '\0') {
    pfVar1 = (float *)(unaff_EDI + 0x10);
  }
  else {
    pfVar1 = (float *)FUN_004f4dd7();
  }
  FUN_004f8845(param_1,*pfVar1 + *(float *)(unaff_EDI + 0x18),
               *(float *)(unaff_EDI + 0x1c) + pfVar1[1]);
  return param_1;
}

