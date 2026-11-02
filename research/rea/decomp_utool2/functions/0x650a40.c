// rea decompile_all
// name: FUN_00650a40
// address: 0x650a40
// body: available
// range: 0x650a40-0x650b4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x650b48 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00650a40(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  uint in_EDX;
  uint uVar4;
  
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  while (in_EDX != 0) {
    uVar4 = 0x400;
    if (in_EDX < 0x400) {
      uVar4 = in_EDX;
    }
    in_EDX = in_EDX - uVar4;
    if (in_ECX != 0) {
      if (*(code **)(in_ECX + 0x10) == (code *)0x0) goto LAB_00650b48;
      (**(code **)(in_ECX + 0x10))();
      FUN_006598a0(uVar4);
    }
  }
  iVar2 = FUN_006509a0();
  if (iVar2 != 0) {
    uVar4 = *(uint *)(in_ECX + 0x2c);
    if ((*(uint *)(in_ECX + 0xd0) & 0x20000000) == 0) {
      uVar3 = uVar4 & 0x400;
    }
    else {
      uVar3 = ~(uVar4 >> 9) & 1;
    }
    if (uVar3 != 0) {
      FUN_00656080("CRC error");
      FUN_006563b0();
      __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
      return;
    }
    if ((uVar4 & 0x100000) == 0) {
LAB_00650b48:
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
    FUN_00656080("CRC error");
    FUN_006563b0();
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

