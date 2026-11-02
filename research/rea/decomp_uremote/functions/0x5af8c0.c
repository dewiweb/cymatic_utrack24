// rea decompile_all
// name: FUN_005af8c0
// address: 0x5af8c0
// body: available
// range: 0x5af8c0-0x5af9e0 inclusive
// range: 0x5b9276-0x5b934a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005af8c0(double param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort in_FPUControlWord;
  float10 fVar4;
  double dVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  if ((DAT_0095dce0 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    uVar2 = (uint)((ulonglong)param_1 >> 0x20);
    uVar1 = uVar2 >> 0x14;
    uVar6 = (ulonglong)(0x433 - (uVar2 >> 0x14 & 0x7ff));
    if ((uVar1 & 0x800) == 0) {
      if (uVar1 < 0x3ff) {
        return (float10)0;
      }
      if (uVar1 < 0x433) {
        return (float10)(double)(((ulonglong)param_1 >> uVar6) << uVar6);
      }
    }
    else {
      dVar5 = (double)(((ulonglong)param_1 >> uVar6) << uVar6);
      if (uVar1 < 0xbff) {
        return (float10)(double)((-(ulonglong)(param_1 < -0.0) | (ulonglong)DAT_005f06a0) &
                                0xbff0000000000000);
      }
      if (uVar1 < 0xc33) {
        return (float10)(dVar5 - (double)(-(ulonglong)(param_1 < dVar5) & 0x3ff0000000000000));
      }
    }
    if (NAN(param_1)) {
      ___libm_error_support(&param_1,&param_1,&param_1,0x3ed);
    }
    return (float10)(double)CONCAT26(param_1._6_2_,param_1._0_6_);
  }
  uVar2 = __ctrlfp(DAT_009564b0,0xffff);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = __sptype();
    if (0 < iVar3) {
      if (iVar3 < 3) {
        __ctrlfp(uVar2,0xffff);
        return (float10)(double)CONCAT26(param_1._6_2_,param_1._0_6_);
      }
      if (iVar3 == 3) {
        fVar4 = (float10)__handle_qnan1();
        return fVar4;
      }
    }
    dVar5 = (double)CONCAT26(param_1._6_2_,param_1._0_6_) + 1.0;
    uVar8 = CONCAT26(param_1._6_2_,param_1._0_6_);
    uVar7 = 8;
  }
  else {
    fVar4 = (float10)__frnd((int)param_1._0_6_,(int)(CONCAT26(param_1._6_2_,param_1._0_6_) >> 0x20))
    ;
    dVar5 = (double)fVar4;
    if (((double)CONCAT26(param_1._6_2_,param_1._0_6_) == dVar5) || ((uVar2 & 0x20) != 0)) {
      __ctrlfp(uVar2,0xffff);
      return (float10)dVar5;
    }
    uVar8 = CONCAT26(param_1._6_2_,param_1._0_6_);
    uVar7 = 0x10;
  }
  fVar4 = (float10)__except1(uVar7,0xb,uVar8,dVar5,uVar2);
                    /* WARNING: Read-only address (ram,0x005f06a0) is written */
  return fVar4;
}

