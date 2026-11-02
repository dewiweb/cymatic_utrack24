// rea decompile_all
// name: FUN_006f9fff
// address: 0x6f9fff
// body: available
// range: 0x6f9fff-0x6fa065 inclusive
// range: 0x6fa06b-0x6fa089 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6fa039 to 0x4de0bb __math_exit (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006f9fff(int param_1)

{
  uint uVar1;
  undefined1 in_ZF;
  unkbyte10 extraout_ST0;
  float10 fVar2;
  
  uVar1 = __fload_withFB();
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) != 0) || (param_1 != 0)) {
      fVar2 = (float10)FUN_004de03c();
      if (DAT_00c8a570 != 0) {
        return fVar2;
      }
      fVar2 = (float10)__startOneArgErrorHandling();
      return fVar2;
    }
    fVar2 = _DAT_00732c2a;
    if ((uVar1 & 0x80000000) != 0) {
      fVar2 = -_DAT_00732c2a;
    }
  }
  else {
    fVar2 = (float10)fpatan(extraout_ST0,(float10)1);
  }
  if (DAT_00c8a570 != 0) {
                    /* WARNING: Read-only address (ram,0x00732c2a) is written */
    return fVar2;
  }
  fVar2 = (float10)__math_exit();
  return fVar2;
}

