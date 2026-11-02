// rea decompile_all
// name: FUN_004be17b
// address: 0x4be17b
// body: available
// range: 0x4be17b-0x4be225 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004be17b(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int *unaff_ESI;
  
  iVar2 = *(int *)(*unaff_ESI + 0xc);
  pbVar5 = (byte *)(iVar2 * in_EAX + unaff_ESI[5]);
  iVar6 = in_EAX - unaff_ESI[3];
  iVar3 = unaff_ESI[2] * param_2 >> 8;
  if (iVar3 < 0xfe) {
    do {
      uVar4 = (uint)*(byte *)((iVar6 % *(int *)(unaff_ESI[1] + 0x10)) * *(int *)(unaff_ESI[1] + 0xc)
                             + unaff_ESI[6]) * (iVar3 + 1);
      *pbVar5 = (char)((0x100 - (uVar4 >> 8)) * (uint)*pbVar5 >> 8) + (char)(uVar4 >> 8);
      pbVar5 = pbVar5 + iVar2;
      iVar6 = iVar6 + 1;
      param_1 = param_1 + -1;
    } while (0 < param_1);
  }
  else {
    do {
      bVar1 = *(byte *)((iVar6 % *(int *)(unaff_ESI[1] + 0x10)) * *(int *)(unaff_ESI[1] + 0xc) +
                       unaff_ESI[6]);
      iVar6 = iVar6 + 1;
      *pbVar5 = (char)((0x100 - (uint)bVar1) * (uint)*pbVar5 >> 8) + bVar1;
      pbVar5 = pbVar5 + iVar2;
      param_1 = param_1 + -1;
    } while (0 < param_1);
  }
  return;
}

