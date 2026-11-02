// rea decompile_all
// name: FUN_0064b4a0
// address: 0x64b4a0
// body: available
// range: 0x64b4a0-0x64b53c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64b4eb to 0x6563b0 FUN_006563b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x64b4f0 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x64b538 to 0x6563b0 FUN_006563b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064b4a0(void)

{
  int in_ECX;
  
  if (in_ECX == 0) {
    return;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x8000) != 0) {
    *(uint *)(in_ECX + 0x30) = *(uint *)(in_ECX + 0x30) | 0x8000;
    *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) | 0x80;
    *(undefined2 *)(in_ECX + 0x114) = 0xff;
    return;
  }
  if (*(char *)(in_ECX + 0x10b) == '\0') {
    if (7 < *(byte *)(in_ECX + 0x10c)) {
      *(uint *)(in_ECX + 0x30) = *(uint *)(in_ECX + 0x30) | 0x8000;
      *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) | 0x80;
      *(undefined1 *)(in_ECX + 0x110) = 2;
      return;
    }
    if ((*(uint *)(in_ECX + 0x2c) & 0x400000) != 0) {
      FUN_006563b0();
      return;
    }
  }
  else {
    if (*(char *)(in_ECX + 0x10b) == '\x02') {
      *(uint *)(in_ECX + 0x30) = *(uint *)(in_ECX + 0x30) | 0x8000;
      *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) | 0x80;
      *(undefined1 *)(in_ECX + 0x110) = 4;
      return;
    }
    if ((*(uint *)(in_ECX + 0x2c) & 0x400000) != 0) {
      FUN_006563b0();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00656590();
}

