// rea decompile_all
// name: FUN_0064e4a0
// address: 0x64e4a0
// body: available
// range: 0x64e4a0-0x64e6e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64e6e5 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064e4a0(uint param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  int in_EDX;
  uint local_f0;
  uint local_ec;
  char local_e5;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if ((*(uint *)(in_ECX + 0x28) & 1) == 0) {
LAB_0064e6e5:
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  if ((*(uint *)(in_ECX + 0x28) & 4) != 0) {
    FUN_00650a40();
    if ((*(uint *)(in_ECX + 0x2c) & 0x100000) != 0) {
      FUN_00656080("out of place");
      FUN_006563b0();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    goto LAB_0064e6e5;
  }
  if ((in_EDX == 0) || ((*(uint *)(in_EDX + 8) & 0x4000) == 0)) {
    if (param_1 < 4) {
      FUN_00650a40();
    }
    else {
      pcVar2 = (char *)FUN_00650920(2);
      if (pcVar2 == (char *)0x0) {
        FUN_00655fd0();
        FUN_00650a40();
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      FUN_00650b50(param_1);
      pcVar2[param_1] = '\0';
      iVar3 = FUN_00650a40();
      if (iVar3 != 0) goto LAB_0064e6d2;
      local_e5 = *pcVar2;
      if ((local_e5 == '\x01') || (local_e5 == '\x02')) {
        local_ec = 1;
        local_f0 = 0;
        iVar3 = FUN_006572d0(&local_f0,&local_ec);
        if ((iVar3 != 0) &&
           (((local_ec < param_1 &&
             (pcVar1 = pcVar2 + local_ec, uVar4 = local_ec + 1, local_ec = uVar4, *pcVar1 == '\0'))
            && ((local_f0 & 0x188) == 0x108)))) {
          local_f0 = 0;
          iVar3 = FUN_006572d0(&local_f0,&local_ec);
          if (((iVar3 != 0) && (local_ec == param_1)) && ((local_f0 & 0x188) == 0x108)) {
            FUN_0064c180(local_e5,pcVar2 + 1,pcVar2 + uVar4);
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
        }
      }
    }
  }
  else {
    FUN_00650a40();
  }
  FUN_00655fd0();
LAB_0064e6d2:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

