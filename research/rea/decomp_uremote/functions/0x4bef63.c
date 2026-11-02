// rea decompile_all
// name: FUN_004bef63
// address: 0x4bef63
// body: available
// range: 0x4bef63-0x4bf073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bef63(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  byte *in_EAX;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  iVar17 = (0x100 - param_4) * (0x100 - param_3);
  bVar1 = in_EAX[1];
  bVar2 = in_EAX[2];
  bVar3 = in_EAX[3];
  iVar13 = *(int *)(*(int *)(param_1 + 0x4c) + 0xc);
  pbVar14 = in_EAX + iVar13;
  iVar18 = (0x100 - param_4) * param_3;
  bVar4 = pbVar14[1];
  bVar5 = pbVar14[2];
  bVar6 = pbVar14[3];
  pbVar15 = pbVar14 + *(int *)(*(int *)(param_1 + 0x4c) + 8);
  iVar19 = param_3 * param_4;
  bVar7 = pbVar15[1];
  bVar8 = pbVar15[2];
  bVar9 = pbVar15[3];
  pbVar16 = pbVar15 + -iVar13;
  param_4 = (0x100 - param_3) * param_4;
  bVar10 = pbVar16[1];
  bVar11 = pbVar16[2];
  bVar12 = pbVar16[3];
  *param_2 = (char)((uint)*in_EAX * iVar17 + 0x8000 + (uint)*pbVar14 * iVar18 +
                    (uint)*pbVar15 * iVar19 + (uint)*pbVar16 * param_4 >> 0x10);
  param_2[1] = (char)((uint)bVar1 * iVar17 + 0x8000 + (uint)bVar4 * iVar18 + (uint)bVar7 * iVar19 +
                      (uint)bVar10 * param_4 >> 0x10);
  param_2[2] = (char)((uint)bVar2 * iVar17 + 0x8000 + (uint)bVar5 * iVar18 + (uint)bVar8 * iVar19 +
                      (uint)bVar11 * param_4 >> 0x10);
  param_2[3] = (char)((uint)bVar3 * iVar17 + 0x8000 + (uint)bVar6 * iVar18 + (uint)bVar9 * iVar19 +
                      (uint)bVar12 * param_4 >> 0x10);
  return;
}

