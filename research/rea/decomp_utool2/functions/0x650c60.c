// rea decompile_all
// name: FUN_00650c60
// address: 0x650c60
// body: available
// range: 0x650c60-0x650cf0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x650cec to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00650c60(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  if (7 < *(byte *)(in_ECX + 0x111)) {
    return;
  }
  uVar2 = (uint)*(byte *)(in_ECX + 0x111);
  *(undefined4 *)(in_ECX + 0x26c) = 0x11;
  if (*(code **)(in_ECX + 0x10) != (code *)0x0) {
    (**(code **)(in_ECX + 0x10))();
    *(undefined1 *)(in_ECX + 0x111) = 8;
    iVar1 = FUN_006599c0(-uVar2 + 8);
    if (iVar1 == 0) {
      if (2 < uVar2) {
        return;
      }
      *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 0x1000;
      return;
    }
    if (uVar2 < 4) {
      FUN_006599c0(-uVar2 + 4);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00656590();
}

