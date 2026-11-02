// rea decompile_all
// name: FUN_005b1510
// address: 0x5b1510
// body: available
// range: 0x5b1510-0x5b154e inclusive
// range: 0x5b159f-0x5b1655 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5b154a to 0x5beb58 FUN_005beb58 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x5b15eb to 0x5ba20b __math_exit (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005b1510(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  ushort in_FPUControlWord;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar3;
  
  bVar2 = DAT_0095dce0 == 0;
  if ((!bVar2) && (bVar2 = false, (MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f))
  {
    uVar1 = FUN_005beb58();
    return uVar1;
  }
  uVar1 = __fload_withFB();
  if (bVar2) {
    if (((uVar1 & 0xfffff) == 0) && (param_1 == 0)) {
LAB_005b162a:
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_005ba18c();
    }
    if (DAT_0095ca40 == 0) {
      uVar1 = __startOneArgErrorHandling();
      return uVar1;
    }
  }
  else {
    fVar3 = extraout_ST0;
    if (in_FPUControlWord != 0x27f) {
      uVar1 = FUN_005ba175();
      fVar3 = extraout_ST0_00;
    }
    if (uVar1 < 0x3ff00000) {
      fpatan(SQRT(((float10)1 - fVar3) * ((float10)1 + fVar3)),fVar3);
    }
    else {
      if ((0x3ff00000 < uVar1) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_005b162a;
      uVar1 = 0;
    }
    if (DAT_0095ca40 == 0) {
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  return uVar1;
}

