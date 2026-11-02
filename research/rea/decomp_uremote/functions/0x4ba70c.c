// rea decompile_all
// name: FUN_004ba70c
// address: 0x4ba70c
// body: available
// range: 0x4ba70c-0x4ba7a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ba70c(int param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  int in_ECX;
  byte *pbVar4;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x30) + 0xc);
  pbVar4 = (byte *)(iVar1 * param_1 + *(int *)(in_ECX + 0x34));
  if (in_EAX < 0xff) {
    do {
      iVar2 = FUN_00475582(param_1);
      uVar3 = (uint)*(byte *)(iVar2 + 3) * (in_EAX + 1);
      param_1 = param_1 + 1;
      *pbVar4 = (char)((0x100 - (uVar3 >> 8)) * (uint)*pbVar4 >> 8) + (char)(uVar3 >> 8);
      pbVar4 = pbVar4 + iVar1;
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  else {
    do {
      iVar2 = FUN_00475582(param_1);
      param_1 = param_1 + 1;
      *pbVar4 = (char)((0x100 - (uint)*(byte *)(iVar2 + 3)) * (uint)*pbVar4 >> 8) +
                *(byte *)(iVar2 + 3);
      pbVar4 = pbVar4 + iVar1;
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  return;
}

