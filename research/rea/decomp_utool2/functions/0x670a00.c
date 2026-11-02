// rea decompile_all
// name: FUN_00670a00
// address: 0x670a00
// body: available
// range: 0x670a00-0x670b3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00670a00(byte *param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_10;
  
  param_5 = param_5 + -1;
  iVar2 = *(int *)(*(int *)((int)param_1 + 0x150) + 8);
  iVar3 = *(int *)((int)param_1 + 0x1c);
  if (-1 < param_5) {
    param_4 = param_4 * 4;
    do {
      iVar9 = *param_2;
      param_2 = param_2 + 1;
      iVar4 = *(int *)(param_4 + param_3[1]);
      puVar5 = *(undefined1 **)(param_4 + *param_3);
      iVar6 = *(int *)(param_4 + param_3[2]);
      iVar7 = *(int *)(param_4 + param_3[3]);
      param_4 = param_4 + 4;
      if (iVar3 != 0) {
        puVar8 = puVar5;
        param_1 = (byte *)(iVar9 + 2);
        local_10 = iVar3;
        do {
          puVar1 = puVar8 + 1;
          iVar11 = 0xff - (uint)param_1[-2];
          iVar10 = 0xff - (uint)param_1[-1];
          iVar9 = 0xff - (uint)*param_1;
          puVar1[(iVar7 - (int)puVar5) + -1] = param_1[1];
          *puVar8 = (char)((uint)(*(int *)(iVar2 + 0x800 + iVar9 * 4) +
                                  *(int *)(iVar2 + 0x400 + iVar10 * 4) +
                                 *(int *)(iVar2 + iVar11 * 4)) >> 0x10);
          puVar1[(iVar4 - (int)puVar5) + -1] =
               (char)((uint)(*(int *)(iVar2 + 0x1400 + iVar9 * 4) +
                             *(int *)(iVar2 + 0x1000 + iVar10 * 4) +
                            *(int *)(iVar2 + 0xc00 + iVar11 * 4)) >> 0x10);
          local_10 = local_10 + -1;
          puVar1[(iVar6 - (int)puVar5) + -1] =
               (char)((uint)(*(int *)(iVar2 + 0x1c00 + iVar9 * 4) +
                             *(int *)(iVar2 + 0x1800 + iVar10 * 4) +
                            *(int *)(iVar2 + 0x1400 + iVar11 * 4)) >> 0x10);
          puVar8 = puVar1;
          param_1 = param_1 + 4;
        } while (local_10 != 0);
      }
      param_5 = param_5 + -1;
    } while (-1 < param_5);
  }
  return;
}

