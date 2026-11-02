// rea decompile_all
// name: FUN_0064fef0
// address: 0x64fef0
// body: available
// range: 0x64fef0-0x64fff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64ffef to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064fef0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if ((*(uint *)(in_ECX + 0x28) & 1) != 0) {
    if ((*(uint *)(in_ECX + 0x28) & 6) == 0) {
      if (param_1 != 4) {
        FUN_00650a40();
        FUN_00655fd0();
        __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (*(code **)(in_ECX + 0x10) != (code *)0x0) {
        (**(code **)(in_ECX + 0x10))();
        FUN_006598a0(4);
        iVar2 = FUN_00650a40();
        if (iVar2 == 0) {
          uVar3 = FUN_00650d00();
          FUN_00658d40(uVar3);
          FUN_00658ca0();
        }
        __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    else {
      FUN_00650a40();
      if ((*(uint *)(in_ECX + 0x2c) & 0x100000) != 0) {
        FUN_00656080("out of place");
        FUN_006563b0();
        __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00656590();
}

