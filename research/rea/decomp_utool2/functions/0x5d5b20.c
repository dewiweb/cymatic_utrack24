// rea decompile_all
// name: FUN_005d5b20
// address: 0x5d5b20
// body: available
// range: 0x5d5b20-0x5d5c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_005d5b20(undefined4 param_1,double *param_2)

{
  undefined **ppuVar1;
  int *piVar2;
  double *pdVar3;
  int iVar4;
  undefined *puVar5;
  int in_ECX;
  int iVar6;
  int in_EDX;
  double *pdVar7;
  int iVar8;
  double in_XMM2_Qa;
  
  iVar8 = 0;
  do {
    piVar2 = (int *)(&PTR_DAT_00ba3040)[iVar8];
    if ((((piVar2[3] == -1) || (piVar2[3] == in_ECX)) && (piVar2[4] <= in_EDX)) &&
       (in_EDX <= piVar2[5])) {
      pdVar3 = (double *)piVar2[2];
      iVar4 = *piVar2;
      if ((*pdVar3 <= in_XMM2_Qa) && (in_XMM2_Qa < pdVar3[iVar4] || in_XMM2_Qa == pdVar3[iVar4])) {
        iVar6 = 0;
        if (iVar4 < 4) goto joined_r0x005d5bf5;
        pdVar7 = pdVar3 + 2;
        break;
      }
    }
    ppuVar1 = &PTR_DAT_00ba3044 + iVar8;
    iVar8 = iVar8 + 1;
    if (*ppuVar1 == (undefined *)0x0) {
      return (undefined *)0x0;
    }
  } while( true );
  while( true ) {
    if ((*pdVar7 <= in_XMM2_Qa) && (in_XMM2_Qa < pdVar7[1])) {
      iVar6 = iVar6 + 2;
      goto LAB_005d5c11;
    }
    if ((pdVar7[1] <= in_XMM2_Qa) && (in_XMM2_Qa < pdVar7[2])) {
      iVar6 = iVar6 + 3;
      goto LAB_005d5c11;
    }
    iVar6 = iVar6 + 4;
    pdVar7 = pdVar7 + 4;
    if (iVar4 + -3 <= iVar6) break;
    if ((pdVar7[-2] <= in_XMM2_Qa) && (in_XMM2_Qa < pdVar7[-1])) goto LAB_005d5c11;
    if ((pdVar7[-1] <= in_XMM2_Qa) && (in_XMM2_Qa < *pdVar7)) {
      iVar6 = iVar6 + 1;
      goto LAB_005d5c11;
    }
  }
joined_r0x005d5bf5:
  for (; (iVar6 < iVar4 && ((in_XMM2_Qa < pdVar3[iVar6] || (pdVar3[iVar6 + 1] <= in_XMM2_Qa))));
      iVar6 = iVar6 + 1) {
  }
LAB_005d5c11:
  if (iVar6 == iVar4) {
    *param_2 = (double)iVar6 - 0.001;
    return (&PTR_DAT_00ba3040)[iVar8];
  }
  puVar5 = (&PTR_DAT_00ba3040)[iVar8];
  *param_2 = (double)((float)((in_XMM2_Qa - (double)(float)pdVar3[iVar6]) /
                             (double)((float)pdVar3[iVar6 + 1] - (float)pdVar3[iVar6])) +
                     (float)iVar6);
  return puVar5;
}

