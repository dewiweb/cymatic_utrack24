// rea decompile_all
// name: FUN_005ba308
// address: 0x5ba308
// body: available
// range: 0x5ba308-0x5ba30d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_005ba308(double param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dStack_c;
  
  iVar4 = 0;
  dVar8 = param_1;
  while( true ) {
    uVar2 = (uint)(ushort)((ulonglong)dVar8 >> 0x34);
    dVar7 = (double)((ulonglong)dVar8 & 0xfffffffffffff | 0x3ff0000000000000);
    uVar1 = SUB82(dVar7 + 4398046511103.008,0) & 0x7f0;
    dVar9 = (double)((ulonglong)dVar8 & 0xfffff80000000 | 0x3ff0000000000000);
    dVar12 = (double)((ulonglong)dVar8 & 0xfffff80000000 | 0x3ff0000000000000);
    dVar10 = dVar9 * *(double *)(&DAT_005f1540 + uVar1) - 0.43359375;
    dVar7 = (dVar7 - dVar9) * *(double *)(&DAT_005f1540 + uVar1);
    dVar9 = ((double)((ulonglong)dVar8 & 0xfffffffffffff | 0x3ff0000000000000) - dVar12) *
            *(double *)(&UNK_005f1548 + uVar1);
    dVar8 = dVar7 + dVar10;
    dVar12 = dVar9 + (dVar12 * *(double *)(&UNK_005f1548 + uVar1) - 0.43359375);
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar11 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      return (float10)(((dVar12 * -3.0717952561537047 + 1.775881635348345) * dVar12 +
                       -1.155016766740187) * dVar12 * dVar12 +
                       ((dVar8 * 21.535473262846583 + -10.893557852776363) * dVar8 +
                       5.667600603343536) * dVar8 * dVar8 * dVar8 * dVar8 * dVar8 +
                       dVar8 * 0.0016161024074997105 +
                       *(double *)(&UNK_005f1138 + uVar1) + dVar11 * 2.8363394551044964e-14 +
                       (double)((ulonglong)dVar9 & *(ulonglong *)(&UNK_005f1088 + iVar5)) +
                      *(double *)(&DAT_005f1130 + uVar1) + dVar10 + dVar11 * 0.30102999566395283 +
                      (double)((ulonglong)dVar7 & *(ulonglong *)(&DAT_005f1080 + iVar5)));
    }
    dStack_c = (double)-(ulonglong)(param_1 == 0.0);
    if (SUB82(dStack_c,0) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        dStack_c = 2.225073858507201e-308;
        if ((double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) == 1.0) {
          return (float10)INFINITY;
        }
        uVar6 = 0x3e9;
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) ||
              (SUB84(param_1,0) == 0 && ((ulonglong)param_1 & 0xfffff00000000) == 0)) {
        dStack_c = -NAN;
        uVar6 = 9;
      }
      else {
        uVar6 = 0x3e9;
      }
      goto LAB_005ba51a;
    }
    dVar8 = param_1 * 4503599627370496.0;
    iVar4 = -0x34;
  }
  dStack_c = -INFINITY;
  uVar6 = 8;
LAB_005ba51a:
  ___libm_error_support(&param_1,&param_1,&dStack_c,uVar6);
  return (float10)dStack_c;
}

