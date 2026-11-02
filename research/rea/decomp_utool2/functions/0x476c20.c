// rea decompile_all
// name: FUN_00476c20
// address: 0x476c20
// body: available
// range: 0x476c20-0x476d52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00476c20(undefined1 *param_1,byte *param_2,int param_3,int param_4)

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
  int iVar14;
  byte *pbVar15;
  int in_ECX;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  
  iVar14 = (0x100 - param_4) * (0x100 - param_3);
  iVar16 = (0x100 - param_4) * param_3;
  iVar19 = param_3 * param_4;
  bVar1 = param_2[1];
  bVar2 = param_2[2];
  bVar3 = param_2[3];
  iVar13 = *(int *)(*(int *)(in_ECX + 0x4c) + 0xc);
  pbVar15 = param_2 + iVar13;
  bVar4 = pbVar15[1];
  bVar5 = pbVar15[2];
  bVar6 = pbVar15[3];
  pbVar17 = pbVar15 + *(int *)(*(int *)(in_ECX + 0x4c) + 8);
  bVar7 = pbVar17[1];
  bVar8 = pbVar17[2];
  bVar9 = pbVar17[3];
  pbVar18 = pbVar17 + -iVar13;
  param_4 = (0x100 - param_3) * param_4;
  bVar10 = pbVar18[1];
  bVar11 = pbVar18[2];
  bVar12 = pbVar18[3];
  *param_1 = (char)((uint)*param_2 * iVar14 + 0x8000 + (uint)*pbVar15 * iVar16 +
                    (uint)*pbVar17 * iVar19 + (uint)*pbVar18 * param_4 >> 0x10);
  param_1[1] = (char)((uint)bVar1 * iVar14 + 0x8000 + (uint)bVar4 * iVar16 + (uint)bVar7 * iVar19 +
                      (uint)bVar10 * param_4 >> 0x10);
  param_1[2] = (char)((uint)bVar2 * iVar14 + 0x8000 + (uint)bVar5 * iVar16 + (uint)bVar8 * iVar19 +
                      (uint)bVar11 * param_4 >> 0x10);
  param_1[3] = (char)((uint)bVar3 * iVar14 + 0x8000 + (uint)bVar6 * iVar16 + (uint)bVar9 * iVar19 +
                      (uint)bVar12 * param_4 >> 0x10);
  return;
}

