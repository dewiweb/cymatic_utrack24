// rea decompile_all
// name: FUN_00658d40
// address: 0x658d40
// body: available
// range: 0x658d40-0x658df8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x658df4 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00658d40(int param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int *in_EDX;
  char *pcVar3;
  
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (param_1 - 0x10U < 0x2540be31) {
    if (((*(uint *)(in_ECX + 0x28) & 0x8000) == 0) || ((*(byte *)((int)in_EDX + 0x4a) & 8) == 0)) {
      if (-1 < *(short *)((int)in_EDX + 0x4a)) {
        iVar2 = FUN_00658e00(param_1,1);
        if (iVar2 != 0) {
          *(ushort *)((int)in_EDX + 0x4a) = *(ushort *)((int)in_EDX + 0x4a) | 9;
          *in_EDX = param_1;
        }
      }
      __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
      return;
    }
    pcVar3 = "duplicate";
  }
  else {
    pcVar3 = "gamma value out of range";
  }
  *(ushort *)((int)in_EDX + 0x4a) = *(ushort *)((int)in_EDX + 0x4a) | 0x8000;
  if ((*(uint *)(in_ECX + 0x28) & 0x8000) == 0) {
    if ((*(uint *)(in_ECX + 0x2c) & 0x400000) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
  }
  else {
    FUN_00656080(pcVar3);
  }
  FUN_006563b0();
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

