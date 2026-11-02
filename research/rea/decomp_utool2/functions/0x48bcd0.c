// rea decompile_all
// name: FUN_0048bcd0
// address: 0x48bcd0
// body: available
// range: 0x48bcd0-0x48bdc6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048bcd0(undefined1 *param_1,byte *param_2,int param_3,int param_4)

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
  int iVar10;
  byte *pbVar11;
  int in_ECX;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  
  iVar12 = (0x100 - param_4) * param_3;
  iVar10 = (0x100 - param_4) * (0x100 - param_3);
  iVar15 = param_3 * param_4;
  bVar1 = param_2[1];
  bVar2 = param_2[2];
  iVar9 = *(int *)(*(int *)(in_ECX + 0x4c) + 0xc);
  pbVar11 = param_2 + iVar9;
  bVar3 = pbVar11[1];
  bVar4 = pbVar11[2];
  pbVar13 = pbVar11 + *(int *)(*(int *)(in_ECX + 0x4c) + 8);
  bVar5 = pbVar13[1];
  bVar6 = pbVar13[2];
  pbVar14 = pbVar13 + -iVar9;
  param_4 = (0x100 - param_3) * param_4;
  bVar7 = pbVar14[1];
  bVar8 = pbVar14[2];
  *param_1 = (char)((uint)*param_2 * iVar10 + 0x8000 + (uint)*pbVar11 * iVar12 +
                    (uint)*pbVar13 * iVar15 + (uint)*pbVar14 * param_4 >> 0x10);
  param_1[2] = (char)((uint)bVar2 * iVar10 + 0x8000 + (uint)bVar4 * iVar12 + (uint)bVar6 * iVar15 +
                      (uint)bVar8 * param_4 >> 0x10);
  param_1[1] = (char)((uint)bVar1 * iVar10 + 0x8000 + (uint)bVar3 * iVar12 + (uint)bVar5 * iVar15 +
                      (uint)bVar7 * param_4 >> 0x10);
  return;
}

