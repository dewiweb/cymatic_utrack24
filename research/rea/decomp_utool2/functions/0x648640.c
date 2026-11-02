// rea decompile_all
// name: FUN_00648640
// address: 0x648640
// body: available
// range: 0x648640-0x64875c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64873c to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x648741 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x648746 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x64874d to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x648752 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x64875c with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00648640(undefined1 *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *local_468;
  uint local_464;
  int local_460;
  undefined1 local_5c;
  undefined1 auStack_5b [83];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (param_1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  uVar4 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  if (uVar4 < 0x84) {
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  if ((param_1[3] & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  iVar2 = FUN_00648ed0(&local_5c);
  if (iVar2 != 0) {
    if (0x50 < iVar2 + 1U) {
      ___report_rangecheckfailure();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    auStack_5b[iVar2] = 0;
    iVar2 = iVar2 + 2;
    local_468 = param_1;
    local_460 = 0;
    local_464 = uVar4;
    iVar3 = FUN_006490a0(&local_468,iVar2);
    if (iVar3 == 0) {
      FUN_00649770(local_460 + iVar2);
      FUN_00649730(iVar2);
      FUN_00649030();
      FUN_006496e0();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00656590();
}

