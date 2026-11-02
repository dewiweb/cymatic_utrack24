// rea decompile_all
// name: FUN_006ae910
// address: 0x6ae910
// body: available
// range: 0x6ae910-0x6aea5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ae910(void)

{
  double *pdVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double in_XMM1_Qa;
  double dVar10;
  
  iVar5 = 0;
  do {
    iVar3 = in_ECX[2];
    dVar6 = 0.0;
    dVar10 = 0.0;
    dVar8 = 0.0;
    iVar4 = 0x7fffffff;
    dVar7 = 0.0;
    if (0 < iVar3) {
      pdVar1 = (double *)*in_ECX;
      iVar3 = in_ECX[2];
      do {
        dVar7 = *pdVar1;
        iVar2 = *(int *)(pdVar1 + 3);
        dVar6 = dVar7 + dVar6;
        if (iVar5 < iVar2) {
          dVar9 = dVar7;
          if (iVar2 < iVar4) {
            iVar4 = iVar2;
          }
        }
        else {
          dVar7 = pdVar1[2];
          dVar9 = pdVar1[1];
        }
        dVar10 = dVar9 + dVar10;
        pdVar1 = pdVar1 + 4;
        dVar8 = dVar7 + dVar8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar3 = in_ECX[2];
      dVar7 = dVar10;
    }
    dVar10 = dVar7;
    if ((dVar7 <= in_XMM1_Qa) && (dVar10 = dVar8, in_XMM1_Qa <= dVar8)) {
      dVar10 = in_XMM1_Qa;
    }
    if (dVar10 < dVar6) {
      iVar2 = 0;
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          pdVar1 = (double *)(*in_ECX + iVar3);
          if (*(int *)(pdVar1 + 3) <= iVar5) {
            dVar8 = pdVar1[1];
            dVar9 = (*pdVar1 - dVar8) * ((dVar10 - dVar7) / (dVar6 - dVar7)) + dVar8;
            if (dVar9 <= dVar8) {
              dVar9 = dVar8;
            }
            *pdVar1 = dVar9;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x20;
        } while (iVar2 < in_ECX[2]);
      }
    }
    else {
      if (dVar8 - dVar6 <= 0.0) {
        dVar10 = 1.0;
      }
      else {
        dVar10 = (dVar10 - dVar6) / (dVar8 - dVar6);
      }
      iVar2 = 0;
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          pdVar1 = (double *)(*in_ECX + iVar3);
          if (*(int *)(pdVar1 + 3) <= iVar5) {
            dVar7 = pdVar1[2];
            dVar8 = (dVar7 - *pdVar1) * dVar10 + *pdVar1;
            dVar6 = pdVar1[1];
            if ((pdVar1[1] <= dVar8) && (dVar6 = dVar7, dVar8 <= dVar7)) {
              dVar6 = dVar8;
            }
            *pdVar1 = dVar6;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x20;
        } while (iVar2 < in_ECX[2]);
      }
    }
    iVar5 = iVar4;
  } while (iVar4 < 0x7fffffff);
  return;
}

