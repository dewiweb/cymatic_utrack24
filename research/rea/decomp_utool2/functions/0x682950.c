// rea decompile_all
// name: FUN_00682950
// address: 0x682950
// body: available
// range: 0x682950-0x682b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00682950(int *param_1,undefined4 param_2,float param_3,float param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  char *pcVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  
  fVar3 = param_3;
  iVar9 = in_ECX[2];
  FUN_00642ff0(param_1,param_2,param_3,0x501502f9,0);
  iVar5 = in_ECX[2];
  if (iVar9 < iVar5) {
    fVar10 = 0.0001;
    do {
      iVar1 = *in_ECX;
      iVar6 = *(int *)(iVar1 + 4 + iVar9 * 0x1c);
      iVar7 = iVar9;
      if ((iVar6 != 10) && (iVar6 != 0xd)) {
        iVar7 = iVar9 + 1;
      }
      iVar6 = -1;
      iVar8 = iVar7;
      if (iVar7 < iVar5) {
        pcVar4 = (char *)(iVar1 + 0x18 + iVar7 * 0x1c);
        do {
          iVar2 = *(int *)(pcVar4 + -0x14);
          if ((iVar2 == 0xd) || (iVar2 == 10)) {
            iVar8 = iVar7 + 1;
            if ((iVar2 == 0xd) && ((iVar8 < iVar5 && (*(int *)(iVar1 + 4 + iVar8 * 0x1c) == 10)))) {
              iVar8 = iVar7 + 2;
            }
            break;
          }
          if (*pcVar4 == '\0') {
            if (*(float *)(iVar1 + 0xc + iVar9 * 0x1c) + param_4 <=
                (*(float *)(pcVar4 + -0xc) + *(float *)(pcVar4 + -4)) - fVar10) {
              iVar8 = iVar7;
              if (-1 < iVar6) {
                iVar8 = iVar6;
              }
              break;
            }
          }
          else {
            iVar6 = iVar7 + 1;
          }
          iVar7 = iVar7 + 1;
          pcVar4 = pcVar4 + 0x1c;
          iVar8 = iVar7;
        } while (iVar7 < iVar5);
      }
      iVar5 = iVar8 + -1;
      if (iVar9 <= iVar5) {
        pcVar4 = (char *)(iVar1 + (iVar5 * 7 + 6) * 4);
        do {
          if (*pcVar4 == '\0') break;
          iVar5 = iVar5 + -1;
          pcVar4 = pcVar4 + -0x1c;
        } while (iVar9 <= iVar5);
      }
      if ((param_5 >> 6 & 1) != 0) {
        FUN_00642700(iVar9,iVar8 - iVar9);
      }
      FUN_00642c90(iVar9,iVar8 - iVar9,param_3 - fVar3);
      param_3 = *(float *)(*param_1 + 0x14) + param_3;
      iVar5 = in_ECX[2];
      iVar9 = iVar8;
    } while (iVar8 < iVar5);
  }
  return;
}

