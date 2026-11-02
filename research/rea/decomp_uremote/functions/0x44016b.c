// rea decompile_all
// name: FUN_0044016b
// address: 0x44016b
// body: available
// range: 0x44016b-0x4401af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044016b(char param_1)

{
  int *in_EAX;
  code *pcVar1;
  
  FUN_004401b0();
  if (param_1 == '\0') {
    (**(code **)(*in_EAX + 0xb0))();
    pcVar1 = FUN_004f9d5b;
  }
  else {
    (**(code **)(*in_EAX + 0xb4))();
    pcVar1 = (code *)&LAB_0045f989;
  }
  FUN_004f8c45(pcVar1,in_EAX);
  return;
}

