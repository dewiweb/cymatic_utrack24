// rea decompile_all
// name: FUN_006fbd2e
// address: 0x6fbd2e
// body: available
// range: 0x6fbd2e-0x6fbf61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6fbf5d to 0x6fa55f FUN_006fa55f (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_006fbd2e(void)

{
  int iVar1;
  ushort uVar2;
  float10 fVar3;
  double in_XMM0_Qa;
  double dVar4;
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
  
  uVar2 = ((ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff) + 0xc7e0;
  if (uVar2 < 0x8a9) {
    dVar11 = (in_XMM0_Qa * 10.185916357881302 + 1.080863910568919e+17) - 1.080863910568919e+17;
    dVar12 = (in_XMM0_Qa * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    dVar4 = in_XMM0_Qa - dVar11 * 0.0981747704247482;
    dVar8 = in_XMM0_Qa - dVar12 * 0.09817477042452083;
    dVar5 = dVar4 - dVar11 * -6.716466596861444e-14;
    dVar9 = dVar8 - dVar12 * 1.6020900947399724e-13;
    iVar1 = ((int)ROUND(in_XMM0_Qa * 10.185916357881302) + 0x72900U & 0x1f) * 0xb0;
    dVar16 = (double)((ulonglong)(dVar11 * 6.716466596857464e-14 + dVar4) & 0xfffffffffffc0000);
    dVar17 = 1.0 / dVar16;
    dVar6 = dVar9 * dVar9;
    dVar10 = dVar9 * dVar9;
    dVar7 = dVar6 * dVar6;
    dVar14 = dVar9 * *(double *)(&DAT_00c29c80 + iVar1) + dVar9 * *(double *)(&DAT_00c29c88 + iVar1)
    ;
    dVar13 = (double)(*(ulonglong *)(&DAT_00c29c98 + iVar1) & (ulonglong)dVar17) -
             *(double *)(&DAT_00c29c70 + iVar1);
    dVar15 = dVar14 - dVar13;
    return (float10)(((dVar7 * dVar7 *
                       (*(double *)(&DAT_00c29c00 + iVar1) * dVar9 +
                        *(double *)(&DAT_00c29bf0 + iVar1) +
                        (*(double *)(&DAT_00c29c20 + iVar1) * dVar9 +
                        *(double *)(&DAT_00c29c10 + iVar1)) * dVar6 +
                        *(double *)(&DAT_00c29c30 + iVar1) * dVar7 +
                       (*(double *)(&DAT_00c29c50 + iVar1) * dVar9 +
                        *(double *)(&DAT_00c29c40 + iVar1) +
                       *(double *)(&DAT_00c29c60 + iVar1) * dVar6) * dVar9 * dVar7) +
                       *(double *)(&UNK_00c29c08 + iVar1) * dVar9 +
                       *(double *)(&DAT_00c29bf8 + iVar1) +
                       (*(double *)(&UNK_00c29c28 + iVar1) * dVar9 +
                       *(double *)(&DAT_00c29c18 + iVar1)) * dVar10 +
                       *(double *)(&UNK_00c29c38 + iVar1) * dVar10 * dVar10 +
                       (*(double *)(&UNK_00c29c58 + iVar1) * dVar9 +
                        *(double *)(&DAT_00c29c48 + iVar1) +
                       *(double *)(&UNK_00c29c68 + iVar1) * dVar10) * dVar9 * dVar10 * dVar10 +
                       (*(double *)(&DAT_00c29c80 + iVar1) + *(double *)(&DAT_00c29c88 + iVar1)) *
                       (((dVar8 - dVar9) - dVar12 * 1.6020900947399724e-13) -
                       dVar12 * 6.601874416867142e-25) + *(double *)(&DAT_00c29c78 + iVar1) +
                       dVar9 * *(double *)(&DAT_00c29c88 + iVar1) +
                       (dVar9 * *(double *)(&DAT_00c29c80 + iVar1) - dVar14) +
                      (dVar14 - (dVar13 + dVar15))) -
                     ((1.0 - dVar16 * (double)(*(ulonglong *)(&DAT_00c29c98 + iVar1) &
                                              (ulonglong)dVar17)) -
                     ((((dVar4 - dVar5) - dVar11 * -6.716466596861444e-14) -
                      dVar11 * 3.9801982271943437e-26) + (dVar5 - dVar16)) * dVar17) *
                     dVar17 * *(double *)(&DAT_00c29c90 + iVar1)) + dVar15);
  }
  if ((short)uVar2 < 0x8a9) {
    return (float10)((in_XMM0_Qa * 3.602879701896397e+16 + in_XMM0_Qa) * 2.7755575615628914e-17);
  }
  fVar3 = (float10)FUN_006fa55f();
  return fVar3;
}

