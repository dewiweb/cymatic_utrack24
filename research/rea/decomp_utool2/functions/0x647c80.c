// rea decompile_all
// name: FUN_00647c80
// address: 0x647c80
// body: available
// range: 0x647c80-0x647d50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x647d45 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x647d4c to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00647c80(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  undefined1 local_58 [80];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar3 = FUN_00648ed0(local_58);
  if (iVar3 != 0) {
    if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
      uVar4 = 0;
    }
    else {
      pcVar1 = param_1 + 1;
      do {
        cVar2 = *param_1;
        param_1 = param_1 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)param_1 - (int)pcVar1;
    }
    if (0x7ffffffeU - iVar3 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
    FUN_00649770(iVar3 + 1 + uVar4);
    if ((in_ECX != 0) && (iVar3 != -1)) {
      if (*(code **)(in_ECX + 0xc) == (code *)0x0) goto LAB_00647d43;
      (**(code **)(in_ECX + 0xc))();
      FUN_006598a0(iVar3 + 1);
    }
    if (uVar4 != 0) {
      FUN_00649730(uVar4);
    }
    FUN_006496e0();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_00647d43:
                    /* WARNING: Subroutine does not return */
  FUN_00656590();
}

