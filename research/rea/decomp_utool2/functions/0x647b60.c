// rea decompile_all
// name: FUN_00647b60
// address: 0x647b60
// body: available
// range: 0x647b60-0x647c70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x647c5a to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x647c61 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x647c66 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x647c70 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00647b60(char *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *local_468;
  int local_464;
  int local_460;
  undefined1 local_5c;
  undefined1 auStack_5b [83];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (param_3 == -1) {
    FUN_00647c80(param_1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  iVar3 = FUN_00648ed0(&local_5c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  if (iVar3 + 1U < 0x51) {
    auStack_5b[iVar3] = 0;
    iVar3 = iVar3 + 2;
    if (param_1 == (char *)0x0) {
      local_464 = 0;
    }
    else {
      pcVar5 = param_1;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      local_464 = (int)pcVar5 - (int)(param_1 + 1);
    }
    local_468 = param_1;
    local_460 = 0;
    iVar4 = FUN_006490a0(&local_468,iVar3);
    if (iVar4 == 0) {
      FUN_00649770(local_460 + iVar3);
      FUN_00649730(iVar3);
      FUN_00649030();
      FUN_006496e0();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  ___report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

