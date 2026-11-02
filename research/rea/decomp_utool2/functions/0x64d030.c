// rea decompile_all
// name: FUN_0064d030
// address: 0x64d030
// body: available
// range: 0x64d030-0x64d0a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064d030(int param_1,char *param_2,char *param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char *pcVar17;
  int iVar18;
  uint uVar19;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar19 = 0;
  if (uVar1 != 0) {
    if ((0x1f < uVar1) && ((param_3 + (uVar1 - 1) < param_2 || (param_2 + (uVar1 - 1) < param_3))))
    {
      do {
        uVar19 = uVar19 + 0x20;
        cVar2 = param_3[1];
        cVar3 = param_3[2];
        cVar4 = param_3[3];
        cVar5 = param_3[4];
        cVar6 = param_3[5];
        cVar7 = param_3[6];
        cVar8 = param_3[7];
        cVar9 = param_3[8];
        cVar10 = param_3[9];
        cVar11 = param_3[10];
        cVar12 = param_3[0xb];
        cVar13 = param_3[0xc];
        cVar14 = param_3[0xd];
        cVar15 = param_3[0xe];
        cVar16 = param_3[0xf];
        *param_2 = *param_3 + *param_2;
        param_2[1] = cVar2 + param_2[1];
        param_2[2] = cVar3 + param_2[2];
        param_2[3] = cVar4 + param_2[3];
        param_2[4] = cVar5 + param_2[4];
        param_2[5] = cVar6 + param_2[5];
        param_2[6] = cVar7 + param_2[6];
        param_2[7] = cVar8 + param_2[7];
        param_2[8] = cVar9 + param_2[8];
        param_2[9] = cVar10 + param_2[9];
        param_2[10] = cVar11 + param_2[10];
        param_2[0xb] = cVar12 + param_2[0xb];
        param_2[0xc] = cVar13 + param_2[0xc];
        param_2[0xd] = cVar14 + param_2[0xd];
        param_2[0xe] = cVar15 + param_2[0xe];
        param_2[0xf] = cVar16 + param_2[0xf];
        pcVar17 = param_3 + 0x10;
        cVar2 = param_3[0x11];
        cVar3 = param_3[0x12];
        cVar4 = param_3[0x13];
        cVar5 = param_3[0x14];
        cVar6 = param_3[0x15];
        cVar7 = param_3[0x16];
        cVar8 = param_3[0x17];
        cVar9 = param_3[0x18];
        cVar10 = param_3[0x19];
        cVar11 = param_3[0x1a];
        cVar12 = param_3[0x1b];
        cVar13 = param_3[0x1c];
        cVar14 = param_3[0x1d];
        cVar15 = param_3[0x1e];
        cVar16 = param_3[0x1f];
        param_3 = param_3 + 0x20;
        param_2[0x10] = *pcVar17 + param_2[0x10];
        param_2[0x11] = cVar2 + param_2[0x11];
        param_2[0x12] = cVar3 + param_2[0x12];
        param_2[0x13] = cVar4 + param_2[0x13];
        param_2[0x14] = cVar5 + param_2[0x14];
        param_2[0x15] = cVar6 + param_2[0x15];
        param_2[0x16] = cVar7 + param_2[0x16];
        param_2[0x17] = cVar8 + param_2[0x17];
        param_2[0x18] = cVar9 + param_2[0x18];
        param_2[0x19] = cVar10 + param_2[0x19];
        param_2[0x1a] = cVar11 + param_2[0x1a];
        param_2[0x1b] = cVar12 + param_2[0x1b];
        param_2[0x1c] = cVar13 + param_2[0x1c];
        param_2[0x1d] = cVar14 + param_2[0x1d];
        param_2[0x1e] = cVar15 + param_2[0x1e];
        param_2[0x1f] = cVar16 + param_2[0x1f];
        param_2 = param_2 + 0x20;
      } while (uVar19 < (uVar1 & 0xffffffe0));
    }
    if (uVar19 < uVar1) {
      iVar18 = uVar1 - uVar19;
      pcVar17 = param_2;
      do {
        *pcVar17 = *pcVar17 + pcVar17[(int)param_3 - (int)param_2];
        iVar18 = iVar18 + -1;
        pcVar17 = pcVar17 + 1;
      } while (iVar18 != 0);
    }
  }
  return;
}

