// rea decompile_all
// name: FUN_005afecd
// address: 0x5afecd
// body: available
// range: 0x5afecd-0x5aff69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5aff06 to 0x5ba20b __math_exit (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005afecd(uint param_1,uint param_2)

{
  uint uVar1;
  bool in_ZF;
  short in_FPUControlWord;
  
  if (in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = FUN_005ba18c();
      goto LAB_005aff4b;
    }
    param_1 = param_2 & 0x80000000;
    param_2 = 0;
joined_r0x005aff3c:
    if (param_1 == 0) {
LAB_005afeee:
      if (DAT_0095ca40 != 0) {
        return param_2;
      }
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      param_2 = FUN_005ba175();
    }
    if ((param_2 & 0x80000000) == 0) goto LAB_005afeee;
    if (((param_2 & 0x7ff00000) == 0) && ((param_2 & 0xfffff) == 0)) goto joined_r0x005aff3c;
  }
  uVar1 = 1;
LAB_005aff4b:
  if (DAT_0095ca40 != 0) {
    return uVar1;
  }
  uVar1 = __startOneArgErrorHandling();
  return uVar1;
}

