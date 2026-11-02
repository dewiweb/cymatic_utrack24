// rea decompile_all
// name: FUN_006509a0
// address: 0x6509a0
// body: available
// range: 0x6509a0-0x650a3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x650a36 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_006509a0(void)

{
  uint in_ECX;
  bool bVar1;
  
  bVar1 = true;
  if ((*(uint *)(in_ECX + 0xd0) & 0x20000000) == 0) {
    if ((*(uint *)(in_ECX + 0x2c) & 0x800) != 0) {
      bVar1 = false;
    }
  }
  else {
    bVar1 = (*(uint *)(in_ECX + 0x2c) & 0x300) != 0x300;
  }
  *(undefined4 *)(in_ECX + 0x26c) = 0x81;
  if (*(code **)(in_ECX + 0x10) != (code *)0x0) {
    (**(code **)(in_ECX + 0x10))();
    if (bVar1) {
      return (((in_ECX & 0xff) * 0x100 + (in_ECX >> 8 & 0xff)) * 0x100 + (in_ECX >> 0x10 & 0xff)) *
             0x100 + (in_ECX >> 0x18) != *(int *)(in_ECX + 0xf4);
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00656590();
}

