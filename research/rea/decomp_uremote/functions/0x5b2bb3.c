// rea decompile_all
// name: FUN_005b2bb3
// address: 0x5b2bb3
// body: available
// range: 0x5b2bb3-0x5b2cd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_005b2bb3(float param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  double dVar6;
  double dVar7;
  int iStack_c;
  float local_8;
  
  uVar2 = (uint)param_1 >> 0x17 & 0xff;
  uVar3 = (uint)param_2 >> 0x17 & 0xff;
  if ((uVar2 == 0xff) || (uVar3 == 0xff)) {
    param_1 = ABS(param_1);
    param_2 = ABS(param_2);
    if (((uVar2 == 0xff) && (((uint)param_1 & 0x7fffff) != 0)) ||
       ((uVar3 == 0xff && (((uint)param_2 & 0x7fffff) != 0)))) {
      fVar1 = param_1 * param_2;
    }
    else {
      fVar1 = param_1 + param_2;
    }
    if ((uVar2 == 0xff) && (((uint)param_1 & 0x7fffff) == 0)) {
      return (float10)param_1;
    }
    if ((uVar3 == 0xff) && (((uint)param_2 & 0x7fffff) == 0)) {
      return (float10)param_2;
    }
    return (float10)fVar1;
  }
  if ((uVar2 - uVar3) + 0x1c < 0x39) {
    fVar5 = (float10)FUN_005afec4((double)(param_2 * param_2 + param_1 * param_1));
    if (uVar3 + uVar2 < 0x17b) goto LAB_005b2c7b;
    iStack_c = (int)((ulonglong)(double)fVar5 >> 0x20);
    bVar4 = SBORROW4(iStack_c,0x47f00000);
    iStack_c = iStack_c + -0x47f00000;
  }
  else {
    dVar6 = _fabs((double)param_1);
    dVar7 = _fabs((double)param_2);
    fVar1 = (float)((float10)dVar7 * (float10)0.5 + (float10)(dVar6 * 0.5));
    bVar4 = SBORROW4((int)fVar1,0x7f000000);
    iStack_c = (int)fVar1 + -0x7f000000;
    fVar5 = (float10)fVar1 + (float10)fVar1;
  }
  if (bVar4 == iStack_c < 0) {
    local_8 = (float)fVar5;
    ___libm_error_support(&param_1,&param_2,&local_8,0x2f);
    return (float10)local_8;
  }
LAB_005b2c7b:
  return (float10)(float)fVar5;
}

