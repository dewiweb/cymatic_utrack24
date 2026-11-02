// rea decompile_all
// name: FUN_004be226
// address: 0x4be226
// body: available
// range: 0x4be226-0x4be2ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004be226(int param_1)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  int *in_ECX;
  int iVar4;
  byte *pbVar5;
  
  iVar2 = *(int *)(*in_ECX + 0xc);
  pbVar5 = (byte *)(iVar2 * in_EAX + in_ECX[5]);
  iVar4 = in_EAX - in_ECX[3];
  if (in_ECX[2] < 0xfe) {
    do {
      uVar3 = (uint)*(byte *)((iVar4 % *(int *)(in_ECX[1] + 0x10)) * *(int *)(in_ECX[1] + 0xc) +
                             in_ECX[6]) * (in_ECX[2] + 1);
      *pbVar5 = (char)((0x100 - (uVar3 >> 8)) * (uint)*pbVar5 >> 8) + (char)(uVar3 >> 8);
      pbVar5 = pbVar5 + iVar2;
      iVar4 = iVar4 + 1;
      param_1 = param_1 + -1;
    } while (0 < param_1);
  }
  else {
    do {
      bVar1 = *(byte *)((iVar4 % *(int *)(in_ECX[1] + 0x10)) * *(int *)(in_ECX[1] + 0xc) + in_ECX[6]
                       );
      iVar4 = iVar4 + 1;
      *pbVar5 = (char)((0x100 - (uint)bVar1) * (uint)*pbVar5 >> 8) + bVar1;
      pbVar5 = pbVar5 + iVar2;
      param_1 = param_1 + -1;
    } while (0 < param_1);
  }
  return;
}

