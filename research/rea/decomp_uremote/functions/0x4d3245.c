// rea decompile_all
// name: FUN_004d3245
// address: 0x4d3245
// body: available
// range: 0x4d3245-0x4d32a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d3245(undefined4 param_1,char param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 unaff_ESI;
  
  if (param_2 == '\0') {
    _param_2 = 0x3f666666;
  }
  else {
    _param_2 = 0x3fa66666;
  }
  FUN_00476450(&param_1,&param_2,_param_2);
  if (param_4 == '\0') {
    if (param_3 == '\0') {
      FUN_004d076d();
      return;
    }
    uVar1 = 0x3dcccccd;
  }
  else {
    uVar1 = 0x3e4ccccd;
  }
  FUN_004765bf(unaff_ESI,uVar1);
  return;
}

