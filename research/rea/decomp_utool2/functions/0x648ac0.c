// rea decompile_all
// name: FUN_00648ac0
// address: 0x648ac0
// body: available
// range: 0x648ac0-0x648bd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x648bcd to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x648bd4 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00648ac0(uint param_1)

{
  int in_ECX;
  uint local_c;
  
  if ((((*(byte *)(in_ECX + 0x21c) & 1) == 0) && (param_1 == 0)) || (0x100 < param_1)) {
    if (*(char *)(in_ECX + 0x10b) == '\x03') {
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
    FUN_006563b0();
    return;
  }
  if ((*(byte *)(in_ECX + 0x10b) & 2) == 0) {
    FUN_006563b0();
    return;
  }
  *(short *)(in_ECX + 0xfc) = (short)param_1;
  FUN_00649770(param_1 * 3);
  local_c = 0;
  if (param_1 != 0) {
    do {
      if (*(code **)(in_ECX + 0xc) == (code *)0x0) goto LAB_00648bd2;
      (**(code **)(in_ECX + 0xc))();
      FUN_006598a0(3);
      local_c = local_c + 1;
    } while (local_c < param_1);
  }
  *(undefined4 *)(in_ECX + 0x26c) = 0x82;
  if (*(code **)(in_ECX + 0xc) != (code *)0x0) {
    (**(code **)(in_ECX + 0xc))();
    *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 2;
    return;
  }
LAB_00648bd2:
                    /* WARNING: Subroutine does not return */
  FUN_00656590();
}

