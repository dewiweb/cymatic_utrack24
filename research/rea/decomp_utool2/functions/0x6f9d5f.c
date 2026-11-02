// rea decompile_all
// name: FUN_006f9d5f
// address: 0x6f9d5f
// body: available
// range: 0x6f9d5f-0x6f9e15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6f9dab to 0x4de0bb __math_exit (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_006f9d5f(int param_1,uint param_2)

{
  uint uVar1;
  undefined1 in_ZF;
  short in_FPUControlWord;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar2;
  
  uVar1 = __fload_withFB();
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) == 0) && (param_1 == 0)) {
LAB_006f9dea:
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_004de03c();
    }
    if (DAT_00c8a570 == 0) {
      uVar1 = __startOneArgErrorHandling();
      return uVar1;
    }
  }
  else {
    fVar2 = extraout_ST0;
    if (in_FPUControlWord != 0x27f) {
      uVar1 = FUN_004de025();
      fVar2 = extraout_ST0_00;
    }
    if (uVar1 < 0x3ff00000) {
      fpatan(SQRT(((float10)1 - fVar2) * ((float10)1 + fVar2)),fVar2);
    }
    else {
      if ((0x3ff00000 < uVar1) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_006f9dea;
      uVar1 = 0;
    }
    if (DAT_00c8a570 == 0) {
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  return uVar1;
}

