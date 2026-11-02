// rea decompile_all
// name: FUN_0064fdb0
// address: 0x64fdb0
// body: available
// range: 0x64fdb0-0x64fee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64fee3 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064fdb0(uint param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  
  if ((*(uint *)(in_ECX + 0x28) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  if ((*(uint *)(in_ECX + 0x28) & 6) != 0) {
    FUN_00650a40();
    FUN_00655fd0();
    return;
  }
  if ((in_EDX != 0) && ((*(byte *)(in_EDX + 8) & 2) != 0)) {
    FUN_00650a40();
    FUN_00655fd0();
    return;
  }
  uVar1 = 3;
  if (*(char *)(in_ECX + 0x10b) != '\x03') {
    uVar1 = (uint)*(byte *)(in_ECX + 0x10f);
  }
  if ((param_1 == uVar1) && (param_1 < 5)) {
    FUN_00650b50(uVar1);
    iVar2 = FUN_00650a40();
    if (iVar2 == 0) {
      if ((*(byte *)(in_ECX + 0x10b) & 2) != 0) {
        *(undefined1 *)(in_ECX + 0x15c) = 0;
        *(undefined1 *)(in_ECX + 0x15d) = 0;
        *(undefined1 *)(in_ECX + 0x15e) = 0;
        *(undefined1 *)(in_ECX + 0x160) = 0;
        FUN_0064bff0();
        return;
      }
      *(undefined1 *)(in_ECX + 0x15f) = 0;
      *(undefined1 *)(in_ECX + 0x15c) = 0;
      *(undefined1 *)(in_ECX + 0x15d) = 0;
      *(undefined1 *)(in_ECX + 0x15e) = 0;
      *(undefined1 *)(in_ECX + 0x160) = 0;
      FUN_0064bff0();
      return;
    }
  }
  else {
    FUN_00655fd0();
    FUN_00650a40();
  }
  return;
}

