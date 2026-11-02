// rea decompile_all
// name: FUN_0066b9a0
// address: 0x66b9a0
// body: available
// range: 0x66b9a0-0x66baf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0066b9a0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  byte local_10;
  int local_8;
  
  iVar2 = param_1[0x57];
  iVar3 = param_1[0x4e];
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)param_1[6];
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1[6] + 4);
  if ((param_1[0x2f] != 0) && (*(int *)(iVar2 + 0x44) == 0)) {
    FUN_0066bb00();
  }
  local_8 = 0;
  if (0 < param_1[0x40]) {
    piVar7 = param_1 + 0x41;
    do {
      iVar9 = *piVar7;
      iVar4 = param_1[iVar9 + 0x3a];
      local_10 = (byte)iVar3;
      iVar8 = (int)**(short **)(param_2 + local_8 * 4) >> (local_10 & 0x1f);
      iVar5 = iVar8 - *(int *)(iVar2 + 0x24 + iVar9 * 4);
      *(int *)(iVar2 + 0x24 + iVar9 * 4) = iVar8;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      iVar9 = 0;
      if (iVar5 != 0) {
        do {
          iVar9 = iVar9 + 1;
          iVar5 = iVar5 >> 1;
        } while (iVar5 != 0);
        if (0xb < iVar9) {
          *(undefined4 *)(*param_1 + 0x14) = 6;
          (**(code **)*param_1)(param_1);
        }
      }
      if (*(char *)(iVar2 + 0xc) == '\0') {
        FUN_0066be00((int)*(char *)(*(int *)(iVar2 + 0x4c + *(int *)(iVar4 + 0x14) * 4) + 0x400 +
                                   iVar9));
      }
      else {
        piVar1 = (int *)(*(int *)(iVar2 + 0x5c + *(int *)(iVar4 + 0x14) * 4) + iVar9 * 4);
        *piVar1 = *piVar1 + 1;
      }
      if (iVar9 != 0) {
        FUN_0066be00(iVar9);
      }
      local_8 = local_8 + 1;
      piVar7 = piVar7 + 1;
    } while (local_8 < param_1[0x40]);
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(param_1[6] + 4) = *(undefined4 *)(iVar2 + 0x14);
  uVar6 = param_1[0x2f];
  if (uVar6 != 0) {
    if (*(int *)(iVar2 + 0x44) == 0) {
      *(uint *)(iVar2 + 0x44) = uVar6;
      uVar6 = *(int *)(iVar2 + 0x48) + 1U & 7;
      *(uint *)(iVar2 + 0x48) = uVar6;
    }
    *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + -1;
  }
  return CONCAT31((int3)(uVar6 >> 8),1);
}

