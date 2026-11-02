// rea decompile_all
// name: FUN_005d9a60
// address: 0x5d9a60
// body: available
// range: 0x5d9a60-0x5d9bfd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005d9a60(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_8;
  
  piVar1 = (int *)*param_2;
  iVar2 = piVar1[2];
  iVar3 = *(int *)param_2[4];
  iVar4 = *(int *)(param_1 + 0x24) * param_5 >> 1;
  if (piVar1[1] < iVar4) {
    iVar4 = piVar1[1];
  }
  if (0 < iVar4 - *piVar1) {
    iVar4 = (iVar4 - *piVar1) / iVar2;
    piVar5 = (int *)FUN_005e9360();
    iVar9 = 0;
    if (0 < param_5) {
      do {
        if (*(int *)(param_4 + iVar9 * 4) != 0) break;
        iVar9 = iVar9 + 1;
      } while (iVar9 < param_5);
    }
    if ((iVar9 != param_5) && (local_8 = 0, 0 < param_2[2])) {
      do {
        iVar9 = 0;
        piVar6 = piVar5;
        if (0 < iVar4) {
          do {
            if (local_8 == 0) {
              iVar10 = param_2[4];
              if (*(int *)(iVar10 + 8) < 1) {
                return 0;
              }
              iVar7 = FUN_005e7470();
              if (iVar7 < 0) {
                return 0;
              }
              iVar10 = *(int *)(*(int *)(iVar10 + 0x18) + iVar7 * 4);
              if (iVar10 == -1) {
                return 0;
              }
              if (piVar1[4] <= iVar10) {
                return 0;
              }
              iVar10 = *(int *)(param_2[7] + iVar10 * 4);
              *piVar6 = iVar10;
              if (iVar10 == 0) {
                return 0;
              }
            }
            iVar10 = 0;
            if (0 < iVar3) {
              iVar7 = iVar9 * iVar2;
              do {
                if (iVar4 <= iVar9) break;
                iVar8 = *(int *)(*piVar6 + iVar10 * 4);
                if ((((piVar1[iVar8 + 6] & 1 << ((byte)local_8 & 0x1f)) != 0) &&
                    (*(int *)(*(int *)(param_2[5] + iVar8 * 4) + local_8 * 4) != 0)) &&
                   (iVar8 = FUN_005e6bf0(*piVar1 + iVar7,param_5,param_1 + 4,iVar2), iVar8 == -1)) {
                  return 0;
                }
                iVar7 = iVar7 + iVar2;
                iVar10 = iVar10 + 1;
                iVar9 = iVar9 + 1;
              } while (iVar10 < iVar3);
            }
            piVar6 = piVar6 + 1;
          } while (iVar9 < iVar4);
        }
        local_8 = local_8 + 1;
      } while (local_8 < param_2[2]);
    }
  }
  return 0;
}

