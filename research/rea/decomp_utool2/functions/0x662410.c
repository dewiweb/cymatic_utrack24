// rea decompile_all
// name: FUN_00662410
// address: 0x662410
// body: available
// range: 0x662410-0x662532 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00662410(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  int *piVar13;
  int iVar14;
  int local_10;
  
  puVar12 = (uint *)*param_4;
  local_10 = 0;
  bVar1 = *(byte *)(*(int *)(param_2 + 4) + 0x8c + *(int *)(param_1 + 0x1a0));
  uVar10 = (uint)bVar1;
  uVar7 = (uint)*(byte *)(*(int *)(param_2 + 4) + 0x96 + *(int *)(param_1 + 0x1a0));
  if (0 < *(int *)(param_1 + 0x114)) {
    do {
      piVar9 = (int *)*puVar12;
      piVar6 = (int *)(*(int *)(param_1 + 0x5c) + (int)piVar9);
      pbVar3 = (byte *)*param_3;
      piVar5 = piVar9;
      while (piVar9 < piVar6) {
        bVar2 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        if (uVar10 != 0) {
          piVar13 = piVar9;
          for (uVar8 = (uint)(bVar1 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
            *piVar13 = (uint)bVar2 * 0x1010101;
            piVar13 = piVar13 + 1;
          }
          piVar9 = (int *)((int)piVar5 + uVar10);
          for (uVar8 = uVar10 & 3; piVar5 = piVar9, uVar8 != 0; uVar8 = uVar8 - 1) {
            *(char *)piVar13 = (char)((uint)bVar2 * 0x1010101);
            piVar13 = (int *)((int)piVar13 + 1);
          }
        }
      }
      if (1 < uVar7) {
        iVar14 = uVar7 - 1;
        uVar4 = *(undefined4 *)(param_1 + 0x5c);
        if (0 < iVar14) {
          puVar11 = puVar12 + 1;
          do {
            FUN_004c2c30(*puVar11,*(undefined4 *)
                                   (((int)puVar12 - (int)(puVar12 + 1)) + (int)puVar11),uVar4);
            iVar14 = iVar14 + -1;
            puVar11 = puVar11 + 1;
          } while (0 < iVar14);
        }
      }
      param_3 = param_3 + 1;
      puVar12 = puVar12 + uVar7;
      local_10 = local_10 + uVar7;
    } while (local_10 < *(int *)(param_1 + 0x114));
  }
  return;
}

