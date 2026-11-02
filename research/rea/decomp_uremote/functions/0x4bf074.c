// rea decompile_all
// name: FUN_004bf074
// address: 0x4bf074
// body: available
// range: 0x4bf074-0x4bf106 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bf074(int param_1,undefined1 *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *in_EAX;
  byte *pbVar7;
  int iVar8;
  
  bVar1 = in_EAX[1];
  bVar2 = in_EAX[2];
  iVar8 = 0x100 - param_3;
  bVar3 = in_EAX[3];
  pbVar7 = in_EAX + *(int *)(*(int *)(param_1 + 0x4c) + 0xc);
  bVar4 = pbVar7[1];
  bVar5 = pbVar7[2];
  bVar6 = pbVar7[3];
  *param_2 = (char)((uint)*in_EAX * iVar8 + 0x80 + (uint)*pbVar7 * param_3 >> 8);
  param_2[2] = (char)((uint)bVar2 * iVar8 + 0x80 + (uint)bVar5 * param_3 >> 8);
  param_2[1] = (char)((uint)bVar1 * iVar8 + 0x80 + (uint)bVar4 * param_3 >> 8);
  param_2[3] = (char)((uint)bVar3 * iVar8 + 0x80 + (uint)bVar6 * param_3 >> 8);
  return;
}

