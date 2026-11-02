// rea decompile_all
// name: FUN_00647e30
// address: 0x647e30
// body: available
// range: 0x647e30-0x64800b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x648007 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00647e30(uint param_1)

{
  uint uVar1;
  int in_ECX;
  byte *in_EDX;
  
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (param_1 == 3) {
    if (((*(ushort *)(in_ECX + 0xfc) != 0) || ((*(byte *)(in_ECX + 0x21c) & 1) == 0)) &&
       (*(ushort *)(in_ECX + 0xfc) <= (ushort)*in_EDX)) {
      FUN_006563b0();
      __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00649770(1);
    if (*(code **)(in_ECX + 0xc) != (code *)0x0) {
      (**(code **)(in_ECX + 0xc))();
      FUN_006598a0(1);
      FUN_006496e0();
      __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  else if ((param_1 & 2) == 0) {
    if (1 << (*(byte *)(in_ECX + 0x10c) & 0x1f) <= (int)(uint)*(ushort *)(in_EDX + 8)) {
      FUN_006563b0();
      __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00649770(2);
    if (*(code **)(in_ECX + 0xc) != (code *)0x0) {
      (**(code **)(in_ECX + 0xc))();
      FUN_006598a0(2);
      FUN_006496e0();
      __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  else {
    if ((*(char *)(in_ECX + 0x10c) == '\b') &&
       (((char)((ushort)*(undefined2 *)(in_EDX + 6) >> 8) != '\0' ||
        (char)((ushort)*(undefined2 *)(in_EDX + 4) >> 8) != '\0') ||
        (char)((ushort)*(undefined2 *)(in_EDX + 2) >> 8) != '\0')) {
      FUN_006563b0();
      __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00649770(6);
    if (*(code **)(in_ECX + 0xc) != (code *)0x0) {
      (**(code **)(in_ECX + 0xc))();
      FUN_006598a0(6);
      FUN_006496e0();
      __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00656590();
}

