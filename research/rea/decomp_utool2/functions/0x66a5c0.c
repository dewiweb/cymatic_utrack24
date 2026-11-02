// rea decompile_all
// name: FUN_0066a5c0
// address: 0x66a5c0
// body: available
// range: 0x66a5c0-0x66a843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066a5c0(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  int local_28;
  int *local_24;
  int local_18;
  undefined1 *local_c;
  byte *local_8;
  
  iVar4 = *(int *)(param_2 + 0x1c);
  FUN_0066ac00(*(undefined4 *)(param_1 + 0x1c),iVar4 * 0x10);
  iVar10 = *(int *)(param_1 + 0xb4) * 0x10;
  iVar12 = *(int *)(param_1 + 0xb4) * -0x50 + 0x4000;
  local_28 = 0;
  if (0 < *(int *)(param_2 + 0xc)) {
    local_24 = (int *)(param_3 + -4);
    do {
      pbVar5 = (byte *)*local_24;
      local_c = *(undefined1 **)(param_4 + local_28 * 4);
      piVar1 = local_24 + 2;
      pbVar6 = (byte *)local_24[3];
      pbVar2 = (byte *)*piVar1 + 2;
      uVar7 = (uint)*(byte *)*piVar1;
      pbVar3 = (byte *)local_24[1] + 2;
      uVar8 = (uint)*(byte *)local_24[1];
      *local_c = (char)((*(byte *)(*piVar1 + 1) + uVar8 + (uint)*(byte *)(local_24[1] + 1) + uVar7)
                        * iVar12 + 0x8000 +
                        ((uint)pbVar6[2] +
                        (uint)pbVar5[2] + (uint)*pbVar5 * 3 +
                        ((uint)*pbVar2 + *pbVar3 + uVar8 + (uint)pbVar6[1] + (uint)pbVar5[1] + uVar7
                        ) * 2 + (uint)*pbVar6 * 3) * iVar10 >> 0x10);
      local_c = local_c + 1;
      pbVar6 = pbVar6 + 2;
      local_18 = iVar4 * 8 + -2;
      pbVar5 = pbVar5 + 2;
      do {
        local_8 = pbVar5;
        pbVar13 = pbVar3;
        pbVar11 = pbVar2;
        pbVar9 = pbVar6;
        pbVar2 = pbVar11 + 2;
        pbVar6 = pbVar9 + 2;
        pbVar3 = pbVar13 + 2;
        pbVar5 = local_8 + 2;
        *local_c = (char)(((uint)*pbVar13 + (uint)pbVar11[1] + (uint)pbVar13[1] + (uint)*pbVar11) *
                          iVar12 + 0x8000 +
                          ((uint)pbVar9[-1] +
                           ((uint)pbVar9[1] + (uint)local_8[1] + (uint)pbVar11[-1] +
                            (uint)pbVar13[-1] + (uint)*pbVar9 + (uint)*local_8 + (uint)*pbVar3 +
                           (uint)*pbVar2) * 2 + (uint)local_8[-1] + (uint)*pbVar5 + (uint)*pbVar6) *
                          iVar10 >> 0x10);
        local_c = local_c + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      *local_c = (char)(((uint)*pbVar2 + (uint)pbVar13[3] + (uint)*pbVar3 + (uint)pbVar11[3]) *
                        iVar12 + 0x8000 +
                        ((uint)local_8[1] +
                        (uint)pbVar9[1] + (uint)local_8[3] * 3 +
                        ((uint)*pbVar5 +
                         (uint)*pbVar6 + (uint)pbVar13[3] + (uint)pbVar11[1] + (uint)pbVar13[1] +
                        (uint)pbVar11[3]) * 2 + (uint)pbVar9[3] * 3) * iVar10 >> 0x10);
      local_28 = local_28 + 1;
      local_24 = piVar1;
    } while (local_28 < *(int *)(param_2 + 0xc));
  }
  return;
}

