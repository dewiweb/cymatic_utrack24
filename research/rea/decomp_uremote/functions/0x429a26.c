// rea decompile_all
// name: FUN_00429a26
// address: 0x429a26
// body: available
// range: 0x429a26-0x429aa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00429a26(int param_1,int param_2,ushort param_3)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  
  if (*(short *)(param_1 + 0x12a) != 0) {
    piVar1 = (int *)(*(int *)(param_2 + 0x10) + (uint)param_3 * 8);
    iVar2 = FUN_0040d230((int)*(short *)(param_1 + 0x12a) << 0x10);
    *piVar1 = *piVar1 + iVar2;
    pbVar3 = (byte *)((uint)param_3 + *(int *)(param_2 + 0x18));
    *pbVar3 = *pbVar3 | 8;
  }
  if (*(short *)(param_1 + 300) != 0) {
    piVar1 = (int *)(*(int *)(param_2 + 0x10) + 4 + (uint)param_3 * 8);
    iVar2 = FUN_0040d230((int)*(short *)(param_1 + 300) << 0x10);
    *piVar1 = *piVar1 + iVar2;
    pbVar3 = (byte *)((uint)param_3 + *(int *)(param_2 + 0x18));
    *pbVar3 = *pbVar3 | 0x10;
  }
  return;
}

