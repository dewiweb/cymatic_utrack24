// rea decompile_all
// name: FUN_0064ec70
// address: 0x64ec70
// body: available
// range: 0x64ec70-0x64ede8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64eddd to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x64ede4 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064ec70(uint param_1)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  uint uVar2;
  ushort local_2ec;
  short local_2e8 [366];
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar2 = *(uint *)(in_ECX + 0x28);
  if ((uVar2 & 1) == 0) {
LAB_0064eddd:
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  if (((uVar2 & 4) != 0) || ((uVar2 & 2) == 0)) {
    FUN_00650a40();
    if ((*(uint *)(in_ECX + 0x2c) & 0x100000) != 0) {
      FUN_00656080("out of place");
      FUN_006563b0();
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    goto LAB_0064eddd;
  }
  if ((in_EDX == 0) || ((*(byte *)(in_EDX + 8) & 0x40) == 0)) {
    param_1 = param_1 >> 1;
    if ((param_1 == *(ushort *)(in_ECX + 0xfc)) && (param_1 < 0x101)) {
      uVar2 = 0;
      if (param_1 != 0) {
        do {
          if (*(code **)(in_ECX + 0x10) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00656590();
          }
          (**(code **)(in_ECX + 0x10))();
          FUN_006598a0(2);
          local_2e8[uVar2] = local_2ec * 0x100 + (local_2ec >> 8);
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_1);
      }
      iVar1 = FUN_00650a40();
      if (iVar1 == 0) {
        FUN_0064c610(local_2e8);
        __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
        return;
      }
      goto LAB_0064ecc7;
    }
    FUN_00650a40();
  }
  else {
    FUN_00650a40();
  }
  FUN_00655fd0();
LAB_0064ecc7:
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

