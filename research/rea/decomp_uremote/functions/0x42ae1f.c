// rea decompile_all
// name: FUN_0042ae1f
// address: 0x42ae1f
// body: available
// range: 0x42ae1f-0x42ae7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042ae1f(ushort param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  int in_EAX;
  byte *pbVar2;
  
  if (*(short *)(in_EAX + 0x12a) != 0) {
    piVar1 = (int *)(*(int *)(in_EAX + 0x7c) + (uint)param_1 * 8);
    *piVar1 = *piVar1 + param_2;
    if (param_4 != '\0') {
      pbVar2 = (byte *)(*(int *)(in_EAX + 0x84) + (uint)param_1);
      *pbVar2 = *pbVar2 | 8;
    }
  }
  if (*(short *)(in_EAX + 300) != 0) {
    piVar1 = (int *)(*(int *)(in_EAX + 0x7c) + 4 + (uint)param_1 * 8);
    *piVar1 = *piVar1 + param_3;
    if (param_4 != '\0') {
      pbVar2 = (byte *)(*(int *)(in_EAX + 0x84) + (uint)param_1);
      *pbVar2 = *pbVar2 | 0x10;
    }
  }
  return;
}

