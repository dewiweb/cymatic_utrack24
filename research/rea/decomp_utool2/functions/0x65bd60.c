// rea decompile_all
// name: FUN_0065bd60
// address: 0x65bd60
// body: available
// range: 0x65bd60-0x65bf0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065bd60(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  size_t sVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  size_t _Size;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  char *pcVar12;
  short *psVar13;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_c;
  
  iVar3 = *(int *)(param_1 + 0x1a8);
  iVar4 = *(int *)(param_1 + 100);
  _Size = *(size_t *)(param_1 + 0x5c);
  iVar5 = *(int *)(param_1 + 0x120);
  if (0 < param_4) {
    param_2 = param_2 - (int)param_3;
    do {
      _memset((void *)*param_3,0,_Size);
      local_28 = 0;
      if (0 < iVar4) {
        do {
          pcVar12 = (char *)*param_3;
          pbVar11 = (byte *)(*(int *)(param_2 + (int)param_3) + local_28);
          if (*(char *)(iVar3 + 0x54) == '\0') {
            psVar13 = *(short **)(iVar3 + 0x44 + local_28 * 4);
            local_c = 1;
            local_20 = iVar4;
          }
          else {
            local_c = -1;
            pcVar12 = pcVar12 + (_Size - 1);
            pbVar11 = pbVar11 + (_Size - 1) * iVar4;
            psVar13 = (short *)(*(int *)(iVar3 + 0x44 + local_28 * 4) + (_Size + 1) * 2);
            local_20 = -iVar4;
          }
          iVar6 = *(int *)(local_28 * 4 + *(int *)(iVar3 + 0x18));
          iVar7 = *(int *)(local_28 * 4 + *(int *)(iVar3 + 0x10));
          iVar8 = 0;
          local_18 = 0;
          local_18._0_2_ = 0;
          local_1c = 0;
          for (sVar1 = _Size; sVar1 != 0; sVar1 = sVar1 - 1) {
            bVar2 = *pbVar11;
            pbVar11 = pbVar11 + local_20;
            uVar9 = (uint)*(byte *)((uint)bVar2 + ((int)psVar13[local_c] + iVar8 + 8 >> 4) + iVar5);
            bVar2 = *(byte *)(uVar9 + iVar6);
            *pcVar12 = *pcVar12 + bVar2;
            iVar10 = uVar9 - *(byte *)((uint)bVar2 + iVar7);
            *psVar13 = (short)local_18 + (short)iVar10 * 3;
            local_18 = local_1c + iVar10 * 9;
            iVar8 = iVar10 * 0xf;
            pcVar12 = pcVar12 + local_c;
            psVar13 = psVar13 + local_c;
            local_1c = iVar10;
          }
          local_28 = local_28 + 1;
          *psVar13 = (short)local_18;
        } while (local_28 < iVar4);
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
      *(bool *)(iVar3 + 0x54) = *(char *)(iVar3 + 0x54) == '\0';
    } while (param_4 != 0);
  }
  return;
}

