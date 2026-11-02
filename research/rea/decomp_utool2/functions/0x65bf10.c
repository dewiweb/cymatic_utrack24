// rea decompile_all
// name: FUN_0065bf10
// address: 0x65bf10
// body: available
// range: 0x65bf10-0x65c009 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065bf10(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  char *pcVar16;
  int iVar17;
  uint uVar18;
  
  iVar5 = *(int *)(param_1 + 0x1a8);
  piVar6 = *(int **)(iVar5 + 0x18);
  iVar7 = *piVar6;
  iVar8 = piVar6[1];
  iVar9 = piVar6[2];
  iVar10 = *(int *)(param_1 + 0x5c);
  if (0 < param_4) {
    param_2 = param_2 - (int)param_3;
    do {
      uVar18 = 0;
      iVar11 = *(int *)(iVar5 + 0x30);
      iVar12 = *(int *)(iVar5 + 0x38);
      iVar17 = iVar11 * 0x40;
      iVar13 = *(int *)(iVar5 + 0x34);
      iVar14 = *(int *)(iVar5 + 0x3c);
      pbVar15 = *(byte **)(param_2 + (int)param_3);
      pcVar16 = (char *)*param_3;
      for (iVar4 = iVar10; iVar4 != 0; iVar4 = iVar4 + -1) {
        iVar1 = uVar18 * 4;
        iVar2 = uVar18 * 4;
        iVar3 = uVar18 * 4;
        uVar18 = uVar18 + 1 & 0xf;
        *pcVar16 = *(char *)(*(int *)(iVar13 + iVar17 + iVar1) + (uint)*pbVar15 + iVar7) +
                   *(char *)(*(int *)(iVar12 + iVar17 + iVar2) + (uint)pbVar15[1] + iVar8) +
                   *(char *)(*(int *)(iVar14 + iVar17 + iVar3) + (uint)pbVar15[2] + iVar9);
        pbVar15 = pbVar15 + 3;
        pcVar16 = pcVar16 + 1;
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
      *(uint *)(iVar5 + 0x30) = iVar11 + 1U & 0xf;
    } while (param_4 != 0);
  }
  return;
}

