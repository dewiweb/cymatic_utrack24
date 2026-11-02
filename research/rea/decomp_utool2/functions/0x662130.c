// rea decompile_all
// name: FUN_00662130
// address: 0x662130
// body: available
// range: 0x662130-0x66225a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00662130(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int local_10;
  
  iVar6 = 0;
  iVar2 = *param_4;
  if (0 < *(int *)(param_1 + 0x114)) {
    do {
      local_10 = 0;
      do {
        pbVar3 = (byte *)*param_3;
        if (local_10 == 0) {
          pbVar11 = (byte *)param_3[-1];
        }
        else {
          pbVar11 = (byte *)param_3[1];
        }
        puVar4 = *(undefined1 **)(iVar2 + iVar6 * 4);
        iVar6 = iVar6 + 1;
        iVar7 = (uint)*pbVar3 * 3 + (uint)*pbVar11;
        pbVar8 = pbVar3 + 2;
        iVar9 = (uint)pbVar3[1] * 3 + (uint)pbVar11[1];
        *puVar4 = (char)(iVar7 * 4 + 8U >> 4);
        puVar4[1] = (char)(iVar9 + iVar7 * 3 + 7U >> 4);
        pbVar3 = pbVar11 + 2;
        for (iVar5 = *(int *)(param_2 + 0x28) + -2; puVar4 = puVar4 + 2, iVar5 != 0;
            iVar5 = iVar5 + -1) {
          bVar1 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          iVar10 = (uint)bVar1 * 3 + (uint)*pbVar3;
          *puVar4 = (char)((uint)(iVar7 + 8 + iVar9 * 3) >> 4);
          puVar4[1] = (char)((uint)(iVar9 * 3 + 7 + iVar10) >> 4);
          iVar7 = iVar9;
          iVar9 = iVar10;
          pbVar3 = pbVar3 + 1;
        }
        *puVar4 = (char)(iVar7 + iVar9 * 3 + 8U >> 4);
        puVar4[1] = (char)(iVar9 * 4 + 7U >> 4);
        local_10 = local_10 + 1;
      } while (local_10 < 2);
      param_3 = param_3 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x114));
  }
  return;
}

