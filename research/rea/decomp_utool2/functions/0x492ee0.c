// rea decompile_all
// name: FUN_00492ee0
// address: 0x492ee0
// body: available
// range: 0x492ee0-0x493293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00492ee0(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                 double *param_6,double param_7,double param_8,double param_9,double param_10,
                 double param_11)

{
  char in_CL;
  char in_DL;
  float10 fVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  
  dVar3 = (param_7 - param_9) * 0.5;
  dVar4 = (param_8 - param_10) * 0.5;
  dVar5 = param_11;
  FUN_006f7d20();
  FUN_006f9250();
  dVar7 = *param_2 * *param_2;
  dVar9 = param_11 * dVar4 + dVar5 * dVar3;
  dVar6 = dVar5 * dVar4 - param_11 * dVar3;
  dVar3 = *param_1;
  dVar10 = dVar3 * dVar3;
  dVar4 = (dVar6 * dVar6) / dVar7 + (dVar9 * dVar9) / dVar10;
  if (1.0 < dVar4) {
    __libm_sse2_sqrt_precise();
    *param_1 = dVar3 * dVar4;
    *param_2 = *param_2 * dVar4;
    dVar3 = 0.0;
  }
  else {
    dVar4 = dVar10 * dVar6 * dVar6;
    dVar3 = dVar7 * dVar9 * dVar9;
    dVar3 = ((dVar7 * dVar10 - dVar4) - dVar3) / (dVar3 + dVar4);
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    uVar2 = SUB84(dVar3,0);
    uVar8 = (undefined4)((ulonglong)dVar3 >> 0x20);
    __libm_sse2_sqrt_precise();
    dVar3 = (double)CONCAT44(uVar8,uVar2);
    if (in_CL == in_DL) {
      dVar3 = -(double)CONCAT44(uVar8,uVar2);
    }
  }
  dVar4 = ((*param_1 * dVar6) / *param_2) * dVar3;
  dVar3 = ((*param_2 * dVar9) / *param_1) * dVar3;
  *param_3 = ((param_7 + param_9) * 0.5 + dVar4 * dVar5) - -dVar3 * param_11;
  *param_4 = (param_8 + param_10) * 0.5 + dVar4 * param_11 + -dVar3 * dVar5;
  dVar10 = (dVar6 - -dVar3) / *param_2;
  dVar5 = (dVar9 - dVar4) / *param_1;
  dVar7 = (-dVar9 - dVar4) / *param_1;
  dVar6 = (-dVar6 - -dVar3) / *param_2;
  dVar9 = __hypot(dVar5,dVar10);
  dVar4 = dVar5 / dVar9;
  dVar3 = -1.0;
  if ((-1.0 <= dVar4) && (dVar3 = 1.0, dVar4 <= 1.0)) {
    dVar3 = dVar4;
  }
  FUN_006f6fc0();
  *param_5 = dVar3;
  if (dVar10 < 0.0) {
    *param_5 = -dVar3;
  }
  *param_5 = *param_5 + 1.5707963267948966;
  dVar3 = __hypot(dVar7,dVar6);
  dVar3 = (dVar6 * dVar10 + dVar7 * dVar5) / (dVar3 * dVar9);
  dVar4 = -1.0;
  if ((-1.0 <= dVar3) && (dVar4 = 1.0, dVar3 <= 1.0)) {
    dVar4 = dVar3;
  }
  FUN_006f6fc0();
  *param_6 = dVar4;
  if (dVar6 * dVar5 - dVar7 * dVar10 < 0.0) {
    *param_6 = -dVar4;
  }
  dVar3 = *param_6;
  if (in_DL == '\0') {
    if (dVar3 <= 0.0) goto LAB_0049327f;
    dVar3 = dVar3 - 6.283185307179586;
  }
  else {
    if (0.0 <= dVar3) goto LAB_0049327f;
    dVar3 = dVar3 + 6.283185307179586;
  }
  *param_6 = dVar3;
LAB_0049327f:
  fVar1 = (float10)FUN_006f6f9a();
  *param_6 = (double)fVar1;
  return;
}

