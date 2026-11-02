// rea decompile_all
// name: FUN_004beef4
// address: 0x4beef4
// body: available
// range: 0x4beef4-0x4bef62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004beef4(int param_1,undefined1 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *in_EAX;
  byte *pbVar5;
  int unaff_EBX;
  int iVar6;
  
  bVar1 = *in_EAX;
  bVar2 = in_EAX[1];
  iVar6 = 0x100 - unaff_EBX;
  pbVar5 = in_EAX + *(int *)(*(int *)(param_1 + 0x4c) + 0xc);
  bVar3 = *pbVar5;
  bVar4 = pbVar5[1];
  param_2[2] = (char)((uint)in_EAX[2] * iVar6 + 0x80 + (uint)pbVar5[2] * unaff_EBX >> 8);
  param_2[1] = (char)((uint)bVar2 * iVar6 + 0x80 + (uint)bVar4 * unaff_EBX >> 8);
  *param_2 = (char)((uint)bVar1 * iVar6 + 0x80 + (uint)bVar3 * unaff_EBX >> 8);
  return;
}

