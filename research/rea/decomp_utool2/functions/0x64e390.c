// rea decompile_all
// name: FUN_0064e390
// address: 0x64e390
// body: available
// range: 0x64e390-0x64e491 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64e48d to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064e390(int param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  short local_1c;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  byte local_14;
  byte local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar1 = *(uint *)(in_ECX + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_0064e48d:
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  if ((in_EDX == 0) || ((*(uint *)(in_EDX + 8) & 0x200) == 0)) {
    if ((uVar1 & 4) != 0) {
      *(uint *)(in_ECX + 0x28) = uVar1 | 8;
    }
    if (param_1 == 7) {
      if (*(code **)(in_ECX + 0x10) == (code *)0x0) goto LAB_0064e48d;
      (**(code **)(in_ECX + 0x10))();
      FUN_006598a0(7);
      iVar2 = FUN_00650a40();
      if (iVar2 == 0) {
        local_16 = local_e;
        local_17 = local_f;
        local_18 = local_10;
        local_19 = local_11;
        local_1a = local_12;
        local_1c = (ushort)local_14 * 0x100 + (ushort)local_13;
        FUN_0064bae0(&local_1c);
        __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
        return;
      }
      goto LAB_0064e3d2;
    }
    FUN_00650a40();
  }
  else {
    FUN_00650a40();
  }
  FUN_00655fd0();
LAB_0064e3d2:
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

