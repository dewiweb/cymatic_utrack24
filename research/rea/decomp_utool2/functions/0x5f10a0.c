// rea decompile_all
// name: FUN_005f10a0
// address: 0x5f10a0
// body: available
// range: 0x5f10a0-0x5f1232 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5f122e to 0x5f1c10 FUN_005f1c10 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f10a0(void)

{
  int iVar1;
  int *in_ECX;
  
  *(undefined4 *)(*in_ECX + 4) = 0;
  *(undefined4 *)(*in_ECX + 8) = 1;
  *(undefined4 *)(*in_ECX + 0xc) = 1;
  *(undefined4 *)(*in_ECX + 0x10) = 0;
  *(undefined4 *)(*in_ECX + 0x14) = 0;
  *(undefined4 *)(*in_ECX + 0x18) = 2;
  *(undefined4 *)(*in_ECX + 0x1c) = 0x10;
  *(undefined4 *)(*in_ECX + 0x20) = 0xac44;
  *(undefined4 *)(*in_ECX + 0x24) = 0;
  *(undefined4 *)(*in_ECX + 0x28) = 1;
  *(undefined4 *)(*in_ECX + 0x2c) = 0xd;
  *(undefined4 *)(*in_ECX + 0x30) = 0x3f000000;
  *(undefined4 *)(*in_ECX + 0x22c) = 0;
  *(undefined4 *)(*in_ECX + 0x230) = 0;
  *(undefined4 *)(*in_ECX + 0x234) = 0;
  *(undefined4 *)(*in_ECX + 0x238) = 0;
  *(undefined4 *)(*in_ECX + 0x23c) = 0;
  *(undefined4 *)(*in_ECX + 0x240) = 0;
  *(undefined4 *)(*in_ECX + 0x244) = 0;
  *(undefined4 *)(*in_ECX + 0x248) = 0;
  iVar1 = *in_ECX;
  *(undefined4 *)(iVar1 + 0x250) = 0;
  *(undefined4 *)(iVar1 + 0x254) = 0;
  *(undefined4 *)(*in_ECX + 600) = 0;
  *(undefined4 *)(*in_ECX + 0x25c) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1b88) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1c50) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1c54) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1c58) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1c5c) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1c68) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1c60) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1c64) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1c6c) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1c70) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1c74) = 0;
  FUN_005f1c10();
  return;
}

