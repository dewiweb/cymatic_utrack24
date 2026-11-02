// rea decompile_all
// name: FUN_005b2500
// address: 0x5b2500
// body: available
// range: 0x5b2500-0x5b253e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5b253a to 0x5c0088 FUN_005c0088 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_005b2500(int param_1)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 extraout_ST0;
  float10 fVar4;
  
  bVar3 = DAT_0095dce0 == 0;
  if ((!bVar3) && (bVar3 = false, (MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f))
  {
    uVar1 = FUN_005c0088();
    return uVar1;
  }
  uVar2 = __fload_withFB();
  if (bVar3) {
    if (((uVar2 & 0xfffff) == 0) && (param_1 == 0)) {
      in_FPUStatusWord = 1;
    }
    else {
      in_FPUStatusWord = FUN_005ba18c();
    }
    if (DAT_0095ca40 == 0) {
      uVar1 = __startOneArgErrorHandling();
      return uVar1;
    }
  }
  else {
    fVar4 = (float10)fsin(extraout_ST0);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar4 = fVar4 - ROUND(fVar4 / _DAT_005f0fea) * _DAT_005f0fea;
      } while ((in_FPUStatusWord & 0x400) != 0);
      fsin(fVar4);
    }
    if (DAT_0095ca40 == 0) {
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  return in_FPUStatusWord;
}

