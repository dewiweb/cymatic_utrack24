// rea decompile_all
// name: FUN_00499949
// address: 0x499949
// body: available
// range: 0x499949-0x49998f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00499949(byte *param_1)

{
  byte bVar1;
  int in_EAX;
  byte *pbVar2;
  char *pcVar3;
  
  bVar1 = *(byte *)(in_EAX + 9);
  if (bVar1 < 8) {
    pbVar2 = param_1 + *(int *)(in_EAX + 4);
    if (bVar1 == 1) {
      pcVar3 = "";
    }
    else if (bVar1 == 2) {
      pcVar3 = "";
    }
    else {
      if (bVar1 != 4) {
        return;
      }
      pcVar3 = "";
    }
    for (; param_1 < pbVar2; param_1 = param_1 + 1) {
      *param_1 = pcVar3[*param_1];
    }
  }
  return;
}

