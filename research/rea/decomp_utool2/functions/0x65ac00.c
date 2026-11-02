// rea decompile_all
// name: FUN_0065ac00
// address: 0x65ac00
// body: available
// range: 0x65ac00-0x65ae1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065ac00(int param_1,int param_2,int *param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 uVar8;
  byte *pbVar9;
  int iVar10;
  short *psVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  char *pcVar18;
  int local_18c;
  undefined1 local_188 [256];
  byte local_88 [128];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar4 = *(int *)(param_1 + 0x5c);
  iVar5 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x18);
  if (0 < param_4) {
    param_2 = param_2 - (int)param_3;
    do {
      pcVar18 = (char *)*param_3;
      pbVar7 = *(byte **)(param_2 + (int)param_3);
      for (iVar2 = iVar4; iVar2 != 0; iVar2 = iVar2 + -1) {
        bVar3 = *pbVar7;
        pbVar9 = pbVar7 + 1;
        pbVar1 = pbVar7 + 2;
        pbVar7 = pbVar7 + 3;
        iVar10 = (uint)(*pbVar9 >> 2) * 0x20 + (uint)(*pbVar1 >> 3);
        iVar6 = *(int *)(iVar5 + (uint)(bVar3 >> 3) * 4);
        if (*(short *)(iVar6 + iVar10 * 2) == 0) {
          iVar14 = (int)(uint)(*pbVar9 >> 2) >> 3;
          iVar12 = (int)(uint)(*pbVar1 >> 3) >> 2;
          iVar16 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x18);
          iVar15 = iVar12 * 0x20 + 4;
          iVar17 = iVar14 * 0x20 + 2;
          uVar8 = FUN_0065b110(iVar17,iVar15,local_188);
          FUN_0065af50(iVar17,iVar15,uVar8,local_188,local_88);
          pbVar9 = local_88;
          local_18c = 4;
          piVar13 = (int *)(iVar16 + ((int)(uint)(bVar3 >> 3) >> 2) * 0x10);
          do {
            iVar15 = 8;
            iVar16 = (iVar12 + iVar14 * 0x40) * 8;
            do {
              psVar11 = (short *)(*piVar13 + iVar16);
              iVar16 = iVar16 + 0x40;
              *psVar11 = *pbVar9 + 1;
              psVar11[1] = pbVar9[1] + 1;
              psVar11[2] = pbVar9[2] + 1;
              pbVar1 = pbVar9 + 3;
              pbVar9 = pbVar9 + 4;
              psVar11[3] = *pbVar1 + 1;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
            piVar13 = piVar13 + 1;
            local_18c = local_18c + -1;
          } while (local_18c != 0);
        }
        *pcVar18 = *(char *)(iVar6 + iVar10 * 2) + -1;
        pcVar18 = pcVar18 + 1;
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

