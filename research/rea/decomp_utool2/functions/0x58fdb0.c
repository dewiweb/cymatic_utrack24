// rea decompile_all
// name: FUN_0058fdb0
// address: 0x58fdb0
// body: available
// range: 0x58fdb0-0x58fe3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x58fe38 to 0x58a6a0 FUN_0058a6a0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058fdb0(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_0062ef90(in_ECX,5000,in_ECX);
  iVar1 = *(int *)(in_ECX + 0x24);
  if (iVar1 != 0) {
    *(undefined4 *)(in_ECX + 0x24) = 0;
    FUN_0041be30(iVar1);
  }
  FUN_00407fe0();
  if (*(int *)(in_ECX + 0x10) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0xc));
    *(undefined4 *)(in_ECX + 0xc) = 0;
    *(undefined4 *)(in_ECX + 0x10) = 0;
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  FUN_00407fe0();
  if (*(int *)(in_ECX + 0x1c) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0x18));
    *(undefined4 *)(in_ECX + 0x18) = 0;
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  *(undefined4 *)(in_ECX + 0x20) = 0;
  FUN_0058a6a0();
  return;
}

