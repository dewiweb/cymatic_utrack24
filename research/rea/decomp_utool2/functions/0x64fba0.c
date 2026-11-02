// rea decompile_all
// name: FUN_0064fba0
// address: 0x64fba0
// body: available
// range: 0x64fba0-0x64fda7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64fda3 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064fba0(int param_1)

{
  ushort uVar1;
  int iVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if ((*(uint *)(in_ECX + 0x28) & 1) == 0) {
LAB_0064fda3:
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  if ((*(uint *)(in_ECX + 0x28) & 6) != 0) {
    FUN_00650a40();
    if ((*(uint *)(in_ECX + 0x2c) & 0x100000) != 0) {
      FUN_00656080("out of place");
      FUN_006563b0();
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    goto LAB_0064fda3;
  }
  if (param_1 == 0x20) {
    if (*(code **)(in_ECX + 0x10) == (code *)0x0) goto LAB_0064fda3;
    (**(code **)(in_ECX + 0x10))();
    FUN_006598a0(0x20);
    iVar2 = FUN_00650a40();
    if (iVar2 != 0) goto LAB_0064fd92;
    iVar2 = FUN_00650d00();
    local_110 = iVar2;
    local_10c = FUN_00650d00();
    local_128 = FUN_00650d00();
    local_124 = FUN_00650d00();
    local_120 = FUN_00650d00();
    local_11c = FUN_00650d00();
    local_118 = FUN_00650d00();
    local_114 = FUN_00650d00();
    if (((((iVar2 != -1) && (local_10c != -1)) && (local_128 != -1)) &&
        ((local_124 != -1 && (local_120 != -1)))) &&
       ((local_11c != -1 && ((local_118 != -1 && (local_114 != -1)))))) {
      uVar1 = *(ushort *)(in_ECX + 0x2ce);
      if ((short)uVar1 < 0) goto LAB_0064fd92;
      if ((uVar1 & 0x10) == 0) {
        *(ushort *)(in_ECX + 0x2ce) = uVar1 | 0x10;
        FUN_00658420(&local_128,extraout_ECX);
        FUN_00658ca0();
        __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
        return;
      }
      *(ushort *)(in_ECX + 0x2ce) = uVar1 | 0x8000;
      FUN_00658ca0();
    }
  }
  else {
    FUN_00650a40();
  }
  FUN_00655fd0();
LAB_0064fd92:
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

