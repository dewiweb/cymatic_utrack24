// rea decompile_all
// name: FUN_004ced3c
// address: 0x4ced3c
// body: available
// range: 0x4ced3c-0x4cefcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ced3c(char param_1,char param_2,double *param_3,double *param_4,double *param_5,
                 double param_6,double param_7,double param_8,double param_9,undefined8 param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double *in_EAX;
  double *unaff_EBX;
  double *unaff_EDI;
  float10 fVar9;
  float10 fVar10;
  
  dVar4 = (param_6 - param_8) * 0.5;
  dVar3 = (param_7 - param_9) * 0.5;
  fVar9 = (float10)FUN_005b04f0(param_10);
  dVar1 = (double)fVar9;
  fVar9 = (float10)FUN_005b2500(param_10);
  dVar2 = (double)fVar9;
  dVar5 = dVar1 * dVar4 + dVar2 * dVar3;
  dVar4 = dVar1 * dVar3 - dVar2 * dVar4;
  dVar7 = *unaff_EDI * *unaff_EDI;
  dVar8 = *in_EAX * *in_EAX;
  dVar3 = (dVar5 * dVar5) / dVar7 + (dVar4 * dVar4) / dVar8;
  if (1.0 < dVar3) {
    fVar9 = (float10)FUN_005afec4(dVar3);
    *unaff_EDI = (double)((float10)*unaff_EDI * fVar9);
    *in_EAX = (double)(fVar9 * (float10)*in_EAX);
    fVar9 = (float10)0;
  }
  else {
    dVar6 = dVar7 * dVar4 * dVar4;
    dVar3 = dVar8 * dVar5 * dVar5;
    fVar9 = (float10)FUN_0043a995(0,((dVar8 * dVar7 - dVar6) - dVar3) / (dVar3 + dVar6));
    fVar9 = (float10)FUN_005afec4((double)fVar9);
    if (param_1 == param_2) {
      fVar9 = -fVar9;
    }
  }
  fVar10 = (((float10)*unaff_EDI * (float10)dVar4) / (float10)*in_EAX) * fVar9;
  fVar9 = (-((float10)*in_EAX * (float10)dVar5) / (float10)*unaff_EDI) * fVar9;
  *param_3 = (double)((fVar10 * (float10)dVar1 +
                      ((float10)param_6 + (float10)param_8) * (float10)0.5) - fVar9 * (float10)dVar2
                     );
  *param_4 = (double)(fVar9 * (float10)dVar1 +
                     fVar10 * (float10)dVar2 + ((float10)param_7 + (float10)param_9) * (float10)0.5)
  ;
  dVar1 = (double)(((float10)dVar5 - fVar10) / (float10)*unaff_EDI);
  dVar2 = (double)(((float10)dVar4 - fVar9) / (float10)*in_EAX);
  dVar3 = (double)((-(float10)dVar5 - fVar10) / (float10)*unaff_EDI);
  dVar4 = (double)((-(float10)dVar4 - fVar9) / (float10)*in_EAX);
  fVar9 = (float10)FUN_004a8ed8(dVar1,dVar2);
  fVar10 = (float10)FUN_0047065b(0xbff0000000000000,0x3ff0000000000000,dVar1 / (double)fVar9);
  fVar10 = (float10)FUN_005b1510((double)fVar10);
  *unaff_EBX = (double)fVar10;
  if (dVar2 < 0.0) {
    *unaff_EBX = (double)-fVar10;
  }
  *unaff_EBX = *unaff_EBX + 1.5707963267948966;
  fVar10 = (float10)FUN_004a8ed8(dVar3,dVar4);
  fVar9 = (float10)FUN_0047065b(0xbff0000000000000,0x3ff0000000000000,
                                (double)((float10)(dVar3 * dVar1 + dVar4 * dVar2) /
                                        (fVar10 * (float10)(double)fVar9)));
  fVar9 = (float10)FUN_005b1510((double)fVar9);
  *param_5 = (double)fVar9;
  if (dVar4 * dVar1 - dVar3 * dVar2 < 0.0) {
    *param_5 = (double)-fVar9;
  }
  if (param_2 == '\0') {
    if (*param_5 <= 0.0) goto LAB_004cefb7;
    dVar1 = *param_5 - 6.283185307179586;
  }
  else {
    if (0.0 <= *param_5) goto LAB_004cefb7;
    dVar1 = *param_5 + 6.283185307179586;
  }
  *param_5 = dVar1;
LAB_004cefb7:
  fVar9 = (float10)FUN_005b3370(*param_5,0x401921fb54442d18);
  *param_5 = (double)fVar9;
  return;
}

