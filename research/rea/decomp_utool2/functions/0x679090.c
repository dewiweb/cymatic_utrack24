// rea decompile_all
// name: FUN_00679090
// address: 0x679090
// body: available
// range: 0x679090-0x67945f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00679090(float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  float *in_ECX;
  float *in_EDX;
  float in_XMM0_Da;
  float in_XMM1_Da;
  float fVar1;
  float in_XMM2_Da;
  float fVar2;
  float in_XMM3_Da;
  float fVar3;
  float fVar4;
  
  if ((in_XMM2_Da == param_1) && (in_XMM3_Da == param_2)) {
    *in_ECX = in_XMM2_Da;
    *in_EDX = in_XMM3_Da;
LAB_006790d0:
    *param_5 = 0.0;
    return 1;
  }
  fVar3 = in_XMM2_Da - in_XMM0_Da;
  fVar1 = in_XMM3_Da - in_XMM1_Da;
  param_3 = param_3 - param_1;
  param_4 = param_4 - param_2;
  fVar2 = param_4 * fVar3 - param_3 * fVar1;
  if (fVar2 != 0.0) {
    fVar4 = ((in_XMM1_Da - param_2) * param_3 - (in_XMM0_Da - param_1) * param_4) / fVar2;
    *in_ECX = fVar4 * fVar3 + in_XMM0_Da;
    *in_EDX = fVar4 * fVar1 + in_XMM1_Da;
    if ((((fVar4 < 0.0) || (1.0 < fVar4)) ||
        (fVar2 = ((in_XMM1_Da - param_2) * fVar3 - (in_XMM0_Da - param_1) * fVar1) / fVar2,
        fVar2 < 0.0)) || (1.0 < fVar2)) {
      fVar3 = (fVar1 * fVar1 + fVar3 * fVar3) * (fVar4 - 1.0) * (fVar4 - 1.0);
      *param_5 = fVar3;
      if (fVar4 < 1.0) {
        *param_5 = -fVar3;
      }
      return 0;
    }
    goto LAB_006790d0;
  }
  if (((fVar3 == 0.0) && (fVar1 == 0.0)) || ((param_3 == 0.0 && (param_4 == 0.0))))
  goto LAB_0067937a;
  if (fVar1 == 0.0) {
    if (param_4 != 0.0) {
      *in_EDX = in_XMM1_Da;
      param_4 = (in_XMM1_Da - param_2) / param_4;
      param_1 = param_4 * param_3 + param_1;
      *in_ECX = param_1;
      fVar3 = (param_1 - in_XMM2_Da) * (param_1 - in_XMM2_Da);
      *param_5 = fVar3;
      if (in_XMM0_Da < in_XMM2_Da == param_1 < in_XMM2_Da) {
        *param_5 = -fVar3;
      }
      if (param_4 < 0.0) {
        return 0;
      }
      if (1.0 < param_4) {
        return 0;
      }
      return 1;
    }
LAB_006791f7:
    if (fVar1 != 0.0) {
      *in_EDX = param_2;
      fVar1 = (param_2 - in_XMM1_Da) / fVar1;
      *in_ECX = fVar1 * fVar3 + in_XMM0_Da;
      fVar3 = (fVar1 - 1.0) * fVar3;
      fVar3 = fVar3 * fVar3;
      *param_5 = fVar3;
      if (fVar1 < 1.0) {
        *param_5 = -fVar3;
      }
      if (fVar1 < 0.0) {
        return 0;
      }
      if (1.0 < fVar1) {
        return 0;
      }
      return 1;
    }
  }
  else if (param_4 == 0.0) goto LAB_006791f7;
  if (fVar3 == 0.0) {
    if (param_3 != 0.0) {
      *in_ECX = in_XMM0_Da;
      param_3 = (in_XMM0_Da - param_1) / param_3;
      param_2 = param_3 * param_4 + param_2;
      *in_EDX = param_2;
      fVar3 = (param_2 - in_XMM3_Da) * (param_2 - in_XMM3_Da);
      *param_5 = fVar3;
      if (in_XMM1_Da < in_XMM3_Da == param_2 < in_XMM3_Da) {
        *param_5 = -fVar3;
      }
      if (param_3 < 0.0) {
        return 0;
      }
      if (1.0 < param_3) {
        return 0;
      }
      return 1;
    }
  }
  else if (param_3 != 0.0) goto LAB_0067937a;
  if (fVar3 != 0.0) {
    *in_ECX = param_1;
    fVar3 = (param_1 - in_XMM0_Da) / fVar3;
    *in_EDX = fVar3 * fVar1 + in_XMM1_Da;
    fVar1 = (fVar3 - 1.0) * fVar1;
    fVar1 = fVar1 * fVar1;
    *param_5 = fVar1;
    if (fVar3 < 1.0) {
      *param_5 = -fVar1;
    }
    if ((0.0 <= fVar3) && (fVar3 <= 1.0)) {
      return 1;
    }
    return 0;
  }
LAB_0067937a:
  *param_5 = 0.0;
  *in_ECX = (in_XMM2_Da + param_1) * 0.5;
  *in_EDX = (in_XMM3_Da + param_2) * 0.5;
  return 0;
}

