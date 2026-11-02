// rea decompile_all
// name: FUN_004654d6
// address: 0x4654d6
// body: available
// range: 0x4654d6-0x465521 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004654d6(char *param_1,int param_2)

{
  void *in_ECX;
  undefined4 *unaff_EBX;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    *unaff_EBX = &DAT_005ffbd8;
  }
  else {
    FUN_004651d8();
    _memcpy(in_ECX,param_1,param_2 - (int)param_1);
    *(undefined1 *)((int)in_ECX + (param_2 - (int)param_1)) = 0;
    *unaff_EBX = in_ECX;
  }
  return;
}

