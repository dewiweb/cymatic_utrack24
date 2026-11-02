// rea decompile_all
// name: FUN_0045a610
// address: 0x45a610
// body: available
// range: 0x45a610-0x45a6d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45a6c5 to 0x4bed22 FUN_004bed22 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45a6cf to 0x4bed22 FUN_004bed22 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045a610(uint param_1,char param_2)

{
  int *in_ECX;
  int *_Dst;
  
  if (param_1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_004bed22("string too long");
  }
  if (param_1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_004bed22("string too long");
  }
  if ((uint)in_ECX[5] < param_1) {
    FUN_0045bd50(param_1,in_ECX[4]);
    if (param_1 == 0) {
      return;
    }
  }
  else if (param_1 == 0) {
    in_ECX[4] = 0;
    if (0xf < (uint)in_ECX[5]) {
      *(undefined1 *)*in_ECX = 0;
      return;
    }
    *(undefined1 *)in_ECX = 0;
    return;
  }
  if (param_1 == 1) {
    if ((uint)in_ECX[5] < 0x10) {
      *(char *)in_ECX = param_2;
    }
    else {
      *(char *)*in_ECX = param_2;
    }
  }
  else {
    _Dst = in_ECX;
    if (0xf < (uint)in_ECX[5]) {
      _Dst = (int *)*in_ECX;
    }
    _memset(_Dst,(int)param_2,param_1);
  }
  in_ECX[4] = param_1;
  if ((uint)in_ECX[5] < 0x10) {
    *(undefined1 *)((int)in_ECX + param_1) = 0;
    return;
  }
  *(undefined1 *)(*in_ECX + param_1) = 0;
  return;
}

