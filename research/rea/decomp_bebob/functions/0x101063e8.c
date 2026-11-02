// rea decompile_all
// name: FUN_101063e8
// address: 0x101063e8
// body: available
// range: 0x101063e8-0x101063ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_101063e8(double param_1)

{
  ushort uVar1;
  void *in_ECX;
  int iVar2;
  float10 extraout_ST0;
  double dVar3;
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
  
  uVar1 = ((ushort)((ulonglong)param_1 >> 0x30) & 0x7fff) + 0xcfd0;
  if (uVar1 < 0x10c6) {
    dVar8 = (param_1 * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    iVar2 = ((int)ROUND(param_1 * 10.185916357881302) + 0x1c7600U & 0x3f) * 0x20;
    dVar9 = dVar8 * 3.798187816439979e-12;
    dVar3 = param_1 - dVar8 * 0.09817477042088285;
    dVar13 = param_1 - dVar8 * 0.09817477042088285;
    dVar14 = dVar13 - dVar9;
    dVar4 = dVar3 - dVar9;
    dVar6 = dVar3 - dVar8 * 3.798187816439979e-12;
    dVar5 = dVar4 * dVar4;
    dVar7 = dVar6 * dVar6;
    dVar10 = *(double *)(&DAT_101424d0 + iVar2) + *(double *)(&DAT_101424e8 + iVar2);
    dVar11 = *(double *)(&DAT_101424e8 + iVar2) * dVar14;
    dVar15 = dVar14 * *(double *)(&DAT_101424d0 + iVar2);
    dVar12 = dVar11 + *(double *)(&DAT_101424d8 + iVar2);
    dVar16 = dVar15 + dVar12;
    return (float10)(dVar16 + (dVar8 * 1.2639164054974691e-22 - ((dVar13 - dVar14) - dVar9)) *
                              (*(double *)(&DAT_101424d8 + iVar2) * dVar14 - dVar10) +
                              *(double *)(&DAT_101424e0 + iVar2) +
                              (*(double *)(&DAT_101424d8 + iVar2) - dVar12) + dVar11 +
                              (dVar12 - dVar16) + dVar15 +
                              (dVar5 * 0.008333333333333333 + -0.16666666666666666 +
                              (dVar3 * 2.7557319223985893e-06 * dVar4 + -0.0001984126984126984) *
                              dVar5 * dVar5) * dVar10 * dVar14 * dVar5 +
                              (dVar7 * 0.041666666666666664 + -0.5 +
                              (dVar3 * 2.48015873015873e-05 * dVar6 + -0.001388888888888889) *
                              dVar7 * dVar7) * *(double *)(&DAT_101424d8 + iVar2) * dVar7);
  }
  if ((short)uVar1 < 0x10c6) {
    if (uVar1 >> 4 == 0xcfd) {
      return (float10)(param_1 * 0.9999999999999999);
    }
    return (float10)param_1;
  }
  FUN_100fc98f(in_ECX,param_1._0_4_,param_1._4_4_);
  return extraout_ST0;
}

