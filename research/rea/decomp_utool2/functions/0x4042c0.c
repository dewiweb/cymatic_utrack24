// rea decompile_all
// name: FUN_004042c0
// address: 0x4042c0
// body: available
// range: 0x4042c0-0x4044dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004042c0(double *param_1,int *param_2,int param_3)

{
  double *pdVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  int iVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  iVar5 = in_ECX >> 2;
  iVar6 = *param_2;
  if (*param_2 * 4 < in_ECX) {
    FUN_004044e0(param_3);
    iVar6 = iVar5;
  }
  iVar3 = param_2[1];
  if (param_2[1] * 4 < in_ECX) {
    pdVar1 = (double *)(param_3 + iVar6 * 8);
    param_2[1] = iVar5;
    iVar3 = iVar5;
    if (1 < iVar5) {
      dVar10 = 1.0;
      iVar2 = in_ECX >> 3;
      FUN_006f7a30();
      dVar10 = dVar10 / (double)iVar2;
      dVar8 = (double)iVar2 * dVar10;
      FUN_006f7d20();
      *pdVar1 = dVar8;
      pdVar1[iVar2] = dVar8 * 0.5;
      iVar7 = 1;
      if (1 < iVar2) {
        pdVar4 = pdVar1 + iVar5 + -1;
        do {
          dVar9 = (double)iVar7 * dVar10;
          dVar8 = dVar9;
          FUN_006f7d20();
          pdVar1[iVar7] = dVar8 * 0.5;
          FUN_006f9250();
          iVar7 = iVar7 + 1;
          *pdVar4 = dVar9 * 0.5;
          pdVar4 = pdVar4 + -1;
        } while (iVar7 < iVar2);
      }
    }
  }
  if (in_EDX < 0) {
    dVar10 = (*param_1 - param_1[1]) * 0.5;
    param_1[1] = dVar10;
    *param_1 = *param_1 - dVar10;
    if (in_ECX < 5) {
      if (in_ECX == 4) {
        FUN_00404930(param_3);
      }
      return;
    }
    FUN_004058f0(iVar3,param_3 + iVar6 * 8);
    FUN_00404780(param_1);
    FUN_00404ad0(param_3);
    return;
  }
  if (in_ECX < 5) {
    if (in_ECX == 4) {
      FUN_00404930(param_3);
    }
  }
  else {
    FUN_00404780(param_1);
    FUN_00404930(param_3);
    FUN_00405810(iVar3,param_3 + iVar6 * 8);
  }
  dVar10 = param_1[1];
  param_1[1] = *param_1 - dVar10;
  *param_1 = dVar10 + *param_1;
  return;
}

