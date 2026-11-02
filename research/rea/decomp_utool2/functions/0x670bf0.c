// rea decompile_all
// name: FUN_00670bf0
// address: 0x670bf0
// body: available
// range: 0x670bf0-0x670cf8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00670bf0(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int local_8;
  
  param_5 = param_5 + -1;
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar3 = *(int *)(*(int *)(param_1 + 0x150) + 8);
  if (-1 < param_5) {
    param_4 = param_4 * 4;
    do {
      iVar4 = *param_2;
      param_2 = param_2 + 1;
      iVar5 = *(int *)(param_4 + *param_3);
      puVar6 = *(undefined1 **)(param_4 + param_3[1]);
      iVar7 = *(int *)(param_4 + param_3[2]);
      param_4 = param_4 + 4;
      if (iVar2 != 0) {
        pbVar8 = (byte *)(iVar4 + 2);
        puVar10 = puVar6;
        local_8 = iVar2;
        do {
          uVar9 = (uint)*pbVar8;
          puVar1 = puVar10 + 1;
          uVar12 = (uint)pbVar8[-2];
          uVar11 = (uint)pbVar8[-1];
          pbVar8 = pbVar8 + 3;
          puVar1[(iVar5 - (int)puVar6) + -1] =
               (char)((uint)(*(int *)(iVar3 + 0x800 + uVar9 * 4) +
                             *(int *)(iVar3 + 0x400 + uVar11 * 4) + *(int *)(iVar3 + uVar12 * 4)) >>
                     0x10);
          *puVar10 = (char)((uint)(*(int *)(iVar3 + 0x1400 + uVar9 * 4) +
                                   *(int *)(iVar3 + 0x1000 + uVar11 * 4) +
                                  *(int *)(iVar3 + 0xc00 + uVar12 * 4)) >> 0x10);
          local_8 = local_8 + -1;
          puVar1[(iVar7 - (int)puVar6) + -1] =
               (char)((uint)(*(int *)(iVar3 + 0x1c00 + uVar9 * 4) +
                             *(int *)(iVar3 + 0x1800 + uVar11 * 4) +
                            *(int *)(iVar3 + 0x1400 + uVar12 * 4)) >> 0x10);
          puVar10 = puVar1;
        } while (local_8 != 0);
      }
      param_5 = param_5 + -1;
    } while (-1 < param_5);
  }
  return;
}

