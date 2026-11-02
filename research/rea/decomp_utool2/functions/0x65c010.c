// rea decompile_all
// name: FUN_0065c010
// address: 0x65c010
// body: available
// range: 0x65c010-0x65c0fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065c010(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  size_t _Size;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  size_t sVar10;
  byte *pbVar11;
  int local_c;
  
  iVar3 = *(int *)(param_1 + 0x1a8);
  iVar4 = *(int *)(param_1 + 100);
  _Size = *(size_t *)(param_1 + 0x5c);
  if (0 < param_4) {
    param_2 = param_2 - (int)param_3;
    do {
      _memset((void *)*param_3,0,_Size);
      local_c = 0;
      iVar5 = *(int *)(iVar3 + 0x30);
      if (0 < iVar4) {
        do {
          pbVar11 = (byte *)(*(int *)(param_2 + (int)param_3) + local_c);
          iVar6 = *(int *)(iVar3 + 0x34 + local_c * 4);
          iVar7 = *(int *)(*(int *)(iVar3 + 0x18) + local_c * 4);
          uVar9 = 0;
          pcVar8 = (char *)*param_3;
          for (sVar10 = _Size; sVar10 != 0; sVar10 = sVar10 - 1) {
            iVar1 = uVar9 * 4;
            bVar2 = *pbVar11;
            pbVar11 = pbVar11 + iVar4;
            uVar9 = uVar9 + 1 & 0xf;
            *pcVar8 = *pcVar8 + *(char *)(*(int *)(iVar6 + iVar5 * 0x40 + iVar1) + (uint)bVar2 +
                                         iVar7);
            pcVar8 = pcVar8 + 1;
          }
          local_c = local_c + 1;
        } while (local_c < iVar4);
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
      *(uint *)(iVar3 + 0x30) = iVar5 + 1U & 0xf;
    } while (param_4 != 0);
  }
  return;
}

