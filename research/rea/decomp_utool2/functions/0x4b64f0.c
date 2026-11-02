// rea decompile_all
// name: FUN_004b64f0
// address: 0x4b64f0
// body: available
// range: 0x4b64f0-0x4b6547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4b653e to 0x432d10 FUN_00432d10 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004b64f0(int *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  
  piVar2 = &DAT_00c20e44;
  uVar3 = 0xc;
  do {
    if (*param_2 != *piVar2) {
      uVar1 = FUN_00432d10();
      return uVar1;
    }
    param_2 = param_2 + 1;
    piVar2 = piVar2 + 1;
    bVar4 = 3 < uVar3;
    uVar3 = uVar3 - 4;
  } while (bVar4);
  if (*(code **)(*param_1 + 4) == FUN_00432da0) {
    param_1[1] = param_1[1] + 1;
    *param_3 = param_1;
    return 0;
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = param_1;
  return 0;
}

