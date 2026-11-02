// rea decompile_all
// name: FUN_004b62c0
// address: 0x4b62c0
// body: available
// range: 0x4b62c0-0x4b6346 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4b6342 to 0x4b6f10 FUN_004b6f10 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b62c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00c8aaa0) {
    do {
      if (param_1 == *(int *)(DAT_00c8aa98 + iVar2 * 4)) {
        DAT_00c8aaa0 = DAT_00c8aaa0 + -1;
        iVar1 = DAT_00c8aa98 + iVar2 * 4;
        if (0 < DAT_00c8aaa0 - iVar2) {
          FUN_004c1df0(iVar1,iVar1 + 4,(DAT_00c8aaa0 - iVar2) * 4);
        }
        iVar2 = 0;
        if (0 < DAT_00c8aaa0 * 2) {
          iVar2 = DAT_00c8aaa0 * 2;
        }
        if (DAT_00c8aa9c <= iVar2) {
          return;
        }
        iVar2 = DAT_00c8aaa0;
        if (DAT_00c8aaa0 < 0x10) {
          iVar2 = 0x10;
        }
        if (DAT_00c8aa9c <= iVar2) {
          return;
        }
        FUN_004b6f10();
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_00c8aaa0);
  }
  return;
}

