// rea decompile_all
// name: FUN_006fb47e
// address: 0x6fb47e
// body: available
// range: 0x6fb47e-0x6fb608 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6fb604 to 0x6fa11f FUN_006fa11f (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_006fb47e(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  float10 fVar4;
  double in_XMM0_Qa;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  uVar1 = (ushort)((ulonglong)in_XMM0_Qa >> 0x30);
  uVar2 = (uVar1 & 0x7fff) + 0xcfd0;
  if (uVar2 < 0x10c6) {
    dVar10 = (in_XMM0_Qa * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    iVar3 = ((int)ROUND(in_XMM0_Qa * 10.185916357881302) + 0x1c7610U & 0x3f) * 0x20;
    dVar11 = dVar10 * 3.798187816439979e-12;
    dVar5 = in_XMM0_Qa - dVar10 * 0.09817477042088285;
    dVar15 = in_XMM0_Qa - dVar10 * 0.09817477042088285;
    dVar16 = dVar15 - dVar11;
    dVar6 = dVar5 - dVar11;
    dVar8 = dVar5 - dVar10 * 3.798187816439979e-12;
    dVar7 = dVar6 * dVar6;
    dVar9 = dVar8 * dVar8;
    dVar12 = *(double *)(&DAT_00c287a0 + iVar3) + *(double *)(&DAT_00c287b8 + iVar3);
    dVar13 = *(double *)(&DAT_00c287b8 + iVar3) * dVar16;
    dVar17 = dVar16 * *(double *)(&DAT_00c287a0 + iVar3);
    dVar14 = dVar13 + *(double *)(&DAT_00c287a8 + iVar3);
    dVar18 = dVar17 + dVar14;
    return (float10)(dVar18 + (dVar10 * 1.2639164054974691e-22 - ((dVar15 - dVar16) - dVar11)) *
                              (*(double *)(&DAT_00c287a8 + iVar3) * dVar16 - dVar12) +
                              *(double *)(&DAT_00c287b0 + iVar3) +
                              (*(double *)(&DAT_00c287a8 + iVar3) - dVar14) + dVar13 +
                              (dVar14 - dVar18) + dVar17 +
                              (dVar7 * 0.008333333333333333 + -0.16666666666666666 +
                              (dVar5 * 2.7557319223985893e-06 * dVar6 + -0.0001984126984126984) *
                              dVar7 * dVar7) * dVar12 * dVar16 * dVar7 +
                              (dVar9 * 0.041666666666666664 + -0.5 +
                              (dVar5 * 2.48015873015873e-05 * dVar8 + -0.001388888888888889) *
                              dVar9 * dVar9) * *(double *)(&DAT_00c287a8 + iVar3) * dVar9);
  }
  if ((short)uVar2 < 0x10c6) {
    return (float10)(1.0 - (double)((ulonglong)in_XMM0_Qa & 0xffffffffffff |
                                   (ulonglong)(uVar1 & 0x7fff) << 0x30));
  }
  fVar4 = (float10)FUN_006fa11f();
  return fVar4;
}

