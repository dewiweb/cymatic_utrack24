// rea decompile_all
// name: FUN_005e6fe0
// address: 0x5e6fe0
// body: available
// range: 0x5e6fe0-0x5e712d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e6fe0(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (0 < param_1[2]) {
    iVar8 = 0;
    if (*param_1 < 9) {
      if (0 < param_4) {
        do {
          iVar6 = FUN_005e7470();
          if (iVar6 == -1) {
            return 0xffffffff;
          }
          pfVar2 = (float *)(param_1[4] + *param_1 * iVar6 * 4);
          iVar6 = 0;
          switch(*param_1) {
          case 8:
            iVar6 = 1;
            *(float *)(param_2 + iVar8 * 4) = *pfVar2 + *(float *)(param_2 + iVar8 * 4);
            iVar8 = iVar8 + 1;
          case 7:
            pfVar3 = pfVar2 + iVar6;
            iVar6 = iVar6 + 1;
            *(float *)(param_2 + iVar8 * 4) = *pfVar3 + *(float *)(param_2 + iVar8 * 4);
            iVar8 = iVar8 + 1;
          case 6:
            pfVar3 = pfVar2 + iVar6;
            iVar6 = iVar6 + 1;
            *(float *)(param_2 + iVar8 * 4) = *pfVar3 + *(float *)(param_2 + iVar8 * 4);
            iVar8 = iVar8 + 1;
          case 5:
            pfVar3 = pfVar2 + iVar6;
            iVar6 = iVar6 + 1;
            *(float *)(param_2 + iVar8 * 4) = *pfVar3 + *(float *)(param_2 + iVar8 * 4);
            iVar8 = iVar8 + 1;
          case 4:
            pfVar3 = pfVar2 + iVar6;
            iVar6 = iVar6 + 1;
            *(float *)(param_2 + iVar8 * 4) = *pfVar3 + *(float *)(param_2 + iVar8 * 4);
            iVar8 = iVar8 + 1;
          case 3:
            pfVar3 = pfVar2 + iVar6;
            iVar6 = iVar6 + 1;
            *(float *)(param_2 + iVar8 * 4) = *pfVar3 + *(float *)(param_2 + iVar8 * 4);
            iVar8 = iVar8 + 1;
          case 2:
            pfVar3 = pfVar2 + iVar6;
            iVar6 = iVar6 + 1;
            *(float *)(param_2 + iVar8 * 4) = *pfVar3 + *(float *)(param_2 + iVar8 * 4);
            iVar8 = iVar8 + 1;
          case 1:
            *(float *)(param_2 + iVar8 * 4) = pfVar2[iVar6] + *(float *)(param_2 + iVar8 * 4);
            iVar8 = iVar8 + 1;
          }
        } while (iVar8 < param_4);
      }
    }
    else if (0 < param_4) {
      do {
        iVar6 = FUN_005e7470();
        if (iVar6 == -1) {
          return 0xffffffff;
        }
        iVar4 = *param_1;
        iVar5 = param_1[4];
        iVar7 = 0;
        if (0 < iVar4) {
          do {
            iVar1 = iVar7 * 4;
            iVar7 = iVar7 + 1;
            *(float *)(param_2 + iVar8 * 4) =
                 *(float *)(iVar5 + iVar4 * iVar6 * 4 + iVar1) + *(float *)(param_2 + iVar8 * 4);
            iVar8 = iVar8 + 1;
          } while (iVar7 < *param_1);
        }
      } while (iVar8 < param_4);
      return 0;
    }
  }
  return 0;
}

