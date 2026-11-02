// rea decompile_all
// name: FUN_00642700
// address: 0x642700
// body: available
// range: 0x642700-0x6427f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00642700(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  float *pfVar6;
  int *in_ECX;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float in_XMM3_Da;
  
  if (param_1 + param_2 < in_ECX[2]) {
    iVar4 = *in_ECX;
    iVar7 = *(int *)(iVar4 + -0x18 + (param_1 + param_2) * 0x1c);
    if ((iVar7 != 0xd) && (iVar7 != 10)) {
      iVar8 = 0;
      iVar7 = 0;
      if (0 < param_2) {
        pcVar5 = (char *)(iVar4 + 0x18 + param_1 * 0x1c);
        iVar9 = param_2;
        do {
          if (*pcVar5 == '\0') {
            iVar7 = 0;
          }
          else {
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + 1;
          }
          pcVar5 = pcVar5 + 0x1c;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      if (0 < iVar8 - iVar7) {
        fVar10 = 0.0;
        iVar9 = (param_1 - iVar7) + param_2;
        fVar1 = *(float *)(iVar4 + -8 + iVar9 * 0x1c);
        fVar2 = *(float *)(iVar4 + -0x10 + iVar9 * 0x1c);
        fVar3 = *(float *)(param_1 * 0x1c + 0xc + iVar4);
        if (0 < param_2) {
          pfVar6 = (float *)(param_1 * 0x1c + 0x10 + iVar4);
          do {
            pfVar6[-1] = fVar10 + pfVar6[-1];
            *pfVar6 = *pfVar6 + 0.0;
            if (*(char *)(pfVar6 + 2) != '\0') {
              fVar10 = fVar10 + (in_XMM3_Da - ((fVar1 + fVar2) - fVar3)) / (float)(iVar8 - iVar7);
            }
            pfVar6 = pfVar6 + 7;
            param_2 = param_2 + -1;
          } while (param_2 != 0);
        }
      }
    }
  }
  return;
}

