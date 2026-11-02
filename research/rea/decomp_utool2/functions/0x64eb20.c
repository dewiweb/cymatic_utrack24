// rea decompile_all
// name: FUN_0064eb20
// address: 0x64eb20
// body: available
// range: 0x64eb20-0x64ec64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64ec60 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064eb20(int param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_c;
  
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if ((*(uint *)(in_ECX + 0x28) & 1) == 0) {
LAB_0064ec60:
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  if ((*(uint *)(in_ECX + 0x28) & 4) != 0) {
    FUN_00650a40();
    if ((*(uint *)(in_ECX + 0x2c) & 0x100000) != 0) {
      FUN_00656080("out of place");
      FUN_006563b0();
      __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
      return;
    }
    goto LAB_0064ec60;
  }
  if ((in_EDX == 0) || ((*(byte *)(in_EDX + 8) & 0x80) == 0)) {
    if (param_1 == 9) {
      if (*(code **)(in_ECX + 0x10) == (code *)0x0) goto LAB_0064ec60;
      (**(code **)(in_ECX + 0x10))();
      FUN_006598a0(9);
      iVar2 = FUN_00650a40();
      if (iVar2 == 0) {
        FUN_0064c150(CONCAT31(CONCAT21(CONCAT11(local_10,local_f),local_e),local_d),local_c);
        __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
        return;
      }
      goto LAB_0064ebad;
    }
    FUN_00650a40();
  }
  else {
    FUN_00650a40();
  }
  FUN_00655fd0();
LAB_0064ebad:
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

