// rea decompile_all
// name: FUN_00475bc0
// address: 0x475bc0
// body: available
// range: 0x475bc0-0x475ce3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float * FUN_00475bc0(float *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_2 >> 0x10 & 0xff;
  uVar7 = param_2 >> 8 & 0xff;
  uVar4 = FUN_004a8e60(uVar6);
  iVar5 = FUN_004a8e78(uVar6);
  if (uVar4 == 0) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
  }
  else {
    fVar1 = (float)(int)(uVar4 - iVar5) / (float)(int)uVar4;
    param_1[1] = fVar1;
    fVar2 = 0.0;
    if (0.0 < fVar1) {
      fVar1 = 1.0 / (float)(int)(uVar4 - iVar5);
      fVar2 = (float)(int)(uVar4 - uVar6) * fVar1;
      fVar3 = (float)(int)(uVar4 - uVar7) * fVar1;
      fVar1 = (float)(int)(uVar4 - (param_2 & 0xff)) * fVar1;
      if (uVar6 == uVar4) {
        fVar1 = fVar1 - fVar3;
      }
      else if (uVar7 == uVar4) {
        fVar1 = (fVar2 + 2.0) - fVar1;
      }
      else {
        fVar1 = (fVar3 + 4.0) - fVar2;
      }
      *param_1 = fVar1;
      fVar2 = *param_1 * 0.16666667;
      *param_1 = fVar2;
      if (0.0 <= fVar2) goto LAB_00475ccf;
      fVar2 = fVar2 + 1.0;
    }
    *param_1 = fVar2;
  }
LAB_00475ccf:
  param_1[2] = (float)(int)uVar4 / 255.0;
  return param_1;
}

