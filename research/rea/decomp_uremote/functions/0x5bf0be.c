// rea decompile_all
// name: FUN_005bf0be
// address: 0x5bf0be
// body: available
// range: 0x5bf0be-0x5bf38a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_005bf0be(double param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double in_XMM7_Qa;
  
  dVar2 = ABS(in_XMM7_Qa);
  dVar3 = ABS(in_XMM7_Qa);
  if (!NAN(dVar2)) {
    if (dVar2 < 1.633123935319537e+16) {
      if (0.03125 <= dVar2) {
        if (dVar2 < 0.375) {
          dVar2 = dVar2 * dVar2;
          dVar5 = dVar2 * dVar2;
          dVar3 = dVar3 * dVar3 * dVar3 * dVar3;
          return (float10)(in_XMM7_Qa -
                          ((((((((dVar5 * 0.0026934075931626827 + 0.022732276941641268) * dVar5 +
                                0.04125694610825324) * dVar5 + 0.05252293309770195) * dVar5 +
                              0.06666504934349429) * dVar5 + 0.09090908458517269) * dVar5 +
                            0.14285714285263723) * dVar5 + 0.33333333333333315) * dVar2 +
                          ((((((dVar3 * -0.010952639006211013 + -0.033483926618350056) * dVar3 +
                              -0.047051350333818964) * dVar3 + -0.0588080589751801) * dVar3 +
                            -0.07692295551132346) * dVar3 + -0.11111111089426066) * dVar3 +
                          -0.19999999999995077) * dVar3 + 0.0) * in_XMM7_Qa);
        }
        if (8.0 <= dVar2) {
          iVar1 = 0x300;
          dVar3 = -1.0 / dVar2;
        }
        else {
          iVar4 = (uint)((ulonglong)(dVar2 + 8.0) >> 0x2c) - 0x40201;
          iVar1 = iVar4 * 3;
          dVar3 = (dVar2 - *(double *)(&DAT_005fd3b0 + iVar4 * 0x18)) /
                  (dVar2 * *(double *)(&DAT_005fd3b0 + iVar4 * 0x18) + 1.0);
        }
        dVar5 = dVar3 * dVar3;
        dVar6 = dVar5 * dVar5;
        dVar7 = dVar3 * dVar3 * dVar3 * dVar3;
        return (float10)(double)((ulonglong)
                                 (*(double *)(&DAT_005fd3a0 + iVar1 * 8) -
                                 ((((((dVar6 * 0.0597832644196164 + 0.09090016113103182) * dVar6 +
                                     0.14285714182967618) * dVar6 + 0.33333333333332743) * dVar5 +
                                   ((dVar7 * -0.07658138963640501 + -0.11111098126247418) * dVar7 +
                                   -0.19999999999600315) * dVar7 + 0.0) * dVar3 -
                                  *(double *)(&DAT_005fd3a8 + iVar1 * 8)) - dVar3)) |
                                (ulonglong)in_XMM7_Qa ^ (ulonglong)dVar2);
      }
      if (7.450580596923828e-09 <= dVar2) {
        dVar2 = dVar2 * dVar2;
        dVar5 = dVar2 * dVar2;
        dVar3 = dVar3 * dVar3 * dVar3 * dVar3;
        return (float10)(in_XMM7_Qa -
                        ((((dVar5 * 0.0597832644196164 + 0.09090016113103182) * dVar5 +
                          0.14285714182967618) * dVar5 + 0.33333333333332743) * dVar2 +
                        ((dVar3 * -0.07658138963640501 + -0.11111098126247418) * dVar3 +
                        -0.19999999999600315) * dVar3 + 0.0) * in_XMM7_Qa);
      }
      if (dVar2 == 0.0) {
        return (float10)param_1;
      }
      if (dVar2 < 2.2250738585072014e-308) {
        return (float10)0.0 + (float10)param_1;
      }
      return (float10)4.778309726736481e-299 * (float10)4.778309726736481e-299 + (float10)param_1;
    }
    if (!NAN((double)((ulonglong)dVar2 & 0x7ff0000000000000))) {
      return (float10)4.778309726736481e-299 +
             (float10)*(double *)(&DAT_005f9530 + (param_1._4_4_ >> 0x1f) * -8);
    }
  }
  ___libm_error_support(&param_1,&param_1,&param_1,0x3eb);
  return (float10)param_1;
}

