// rea decompile_all
// name: FUN_005bf84e
// address: 0x5bf84e
// body: available
// range: 0x5bf84e-0x5bf9e7 inclusive
// range: 0x5bfa08-0x5bfaec inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_005bf84e(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  double in_XMM0_Qa;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined2 uStack_c;
  undefined6 uStack_a;
  undefined2 uStack_4;
  
  uVar1 = (ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff;
  if ((0x408f - uVar1 | uVar1 - 0x3c90) < 0x80000000) {
    dVar5 = in_XMM0_Qa * 92.33248261689366 + 6755399441055744.0;
    dVar6 = (in_XMM0_Qa * 92.33248261689366 + 6755399441055744.0) - 6755399441055744.0;
    uVar1 = SUB84(dVar5,0);
    iVar2 = (uVar1 & 0x3f) * 0x10;
    dVar4 = (in_XMM0_Qa - (dVar5 - 6755399441055744.0) * 0.010830424696223417) -
            (dVar5 - 6755399441055744.0) * 2.572804622327669e-14;
    dVar6 = (in_XMM0_Qa - dVar6 * 0.010830424696223417) - dVar6 * 2.572804622327669e-14;
    dVar5 = (double)(*(ulonglong *)(&UNK_005f9718 + iVar2) |
                    ((ulonglong)dVar5 & 0xffffffc0) + 0xffc0 << 0x2e);
    dVar4 = dVar6 * dVar6 * (dVar6 * 0.16666666669815094 + 0.4999999999995663) +
            dVar4 + *(double *)(&DAT_005f9710 + iVar2) +
            dVar4 * dVar4 * dVar4 * dVar4 * (dVar4 * 0.008332168270616733 + 0.04166672086872847);
    if (((int)uVar1 >> 6) + 0x37eU < 0x77d) {
      return (float10)(dVar4 * dVar5 + dVar5);
    }
    dVar6 = (double)(*(ulonglong *)(&UNK_005f9718 + iVar2) & 0xfffffffffffff |
                    (ulonglong)(((int)uVar1 >> 7) + 0x3ff) << 0x34);
    uStack_4 = (undefined2)((ulonglong)dVar6 >> 0x30);
    in_XMM0_Qa = (double)((ulonglong)((((int)uVar1 >> 6) - ((int)uVar1 >> 7)) + 0x3ff) << 0x34) *
                 (dVar6 + dVar4 * dVar6);
    if (((ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7ff0) < 0x7ff0) {
      if (((ulonglong)in_XMM0_Qa & 0x7ff0000000000000) != 0) goto LAB_005bfa42;
      uVar3 = 0xf;
    }
    else {
      uVar3 = 0xe;
    }
  }
  else {
    uVar1 = param_2 & 0x7fffffff;
    if (uVar1 < 0x40900000) {
      return (float10)((double)CONCAT44(param_2,param_1) + 1.0);
    }
    if (uVar1 < 0x7ff00000) {
      if (param_2 < 0x80000000) {
        in_XMM0_Qa = INFINITY;
        uVar3 = 0xe;
      }
      else {
        in_XMM0_Qa = 0.0;
        uVar3 = 0xf;
      }
    }
    else {
      if ((uVar1 < 0x7ff00001) && (param_1 == 0)) {
        if (param_2 != 0x7ff00000) {
          return (float10)0.0;
        }
        return (float10)INFINITY;
      }
      uVar3 = 0x3ea;
    }
  }
  uStack_c = SUB82(in_XMM0_Qa,0);
  uStack_a = (undefined6)((ulonglong)in_XMM0_Qa >> 0x10);
  ___libm_error_support(&param_1,&param_1,(short)&uStack_c,uVar3);
  in_XMM0_Qa = (double)CONCAT62(uStack_a,uStack_c);
LAB_005bfa42:
  return (float10)in_XMM0_Qa;
}

