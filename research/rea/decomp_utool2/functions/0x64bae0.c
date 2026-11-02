// rea decompile_all
// name: FUN_0064bae0
// address: 0x64bae0
// body: available
// range: 0x64bae0-0x64bb4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64bb46 to 0x6563b0 FUN_006563b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064bae0(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  int in_EDX;
  
  if ((((in_ECX != 0) && (in_EDX != 0)) && (param_1 != (undefined4 *)0x0)) &&
     ((*(uint *)(in_ECX + 0x28) & 0x200) == 0)) {
    if (((((*(byte *)((int)param_1 + 2) == 0) || (0xc < *(byte *)((int)param_1 + 2))) ||
         ((*(byte *)((int)param_1 + 3) == 0 ||
          ((0x1f < *(byte *)((int)param_1 + 3) || (0x17 < *(byte *)(param_1 + 1))))))) ||
        (0x3b < *(byte *)((int)param_1 + 5))) || (0x3c < *(byte *)((int)param_1 + 6))) {
      FUN_006563b0();
      return;
    }
    uVar1 = *param_1;
    *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) | 0x200;
    *(undefined4 *)(in_EDX + 0x8c) = uVar1;
    *(undefined4 *)(in_EDX + 0x90) = param_1[1];
  }
  return;
}

