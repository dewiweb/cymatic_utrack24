// rea decompile_all
// name: FUN_004bed4c
// address: 0x4bed4c
// body: available
// range: 0x4bed4c-0x4bee22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bed4c(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  byte *in_EAX;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  bVar1 = in_EAX[1];
  iVar13 = (0x100 - param_4) * param_3;
  iVar14 = (0x100 - param_4) * (0x100 - param_3);
  bVar2 = *in_EAX;
  iVar9 = *(int *)(*(int *)(param_1 + 0x4c) + 0xc);
  pbVar10 = in_EAX + iVar9;
  bVar3 = *pbVar10;
  bVar4 = pbVar10[1];
  pbVar11 = pbVar10 + *(int *)(*(int *)(param_1 + 0x4c) + 8);
  iVar15 = param_3 * param_4;
  bVar5 = *pbVar11;
  bVar6 = pbVar11[1];
  pbVar12 = pbVar11 + -iVar9;
  param_4 = (0x100 - param_3) * param_4;
  bVar7 = *pbVar12;
  bVar8 = pbVar12[1];
  param_2[2] = (char)((uint)in_EAX[2] * iVar14 + 0x8000 + (uint)pbVar10[2] * iVar13 +
                      (uint)pbVar11[2] * iVar15 + (uint)pbVar12[2] * param_4 >> 0x10);
  param_2[1] = (char)((uint)bVar1 * iVar14 + 0x8000 + (uint)bVar4 * iVar13 + (uint)bVar6 * iVar15 +
                      (uint)bVar8 * param_4 >> 0x10);
  *param_2 = (char)((uint)bVar2 * iVar14 + 0x8000 + (uint)bVar3 * iVar13 + (uint)bVar5 * iVar15 +
                    (uint)bVar7 * param_4 >> 0x10);
  return;
}

