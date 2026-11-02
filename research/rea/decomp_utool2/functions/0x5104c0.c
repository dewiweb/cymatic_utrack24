// rea decompile_all
// name: FUN_005104c0
// address: 0x5104c0
// body: available
// range: 0x5104c0-0x510581 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005104c0(void)

{
  float fVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(in_ECX + 0x84) = 0xffffffd0;
  *(undefined4 *)(in_ECX + 0x78) = 0x24;
  *(undefined4 *)(in_ECX + 0x88) = 0xffffffe8;
  *(undefined4 *)(in_ECX + 0x8c) = 0xfffffff4;
  *(undefined4 *)(in_ECX + 0x90) = 0xfffffffa;
  *(undefined4 *)(in_ECX + 0x94) = 0xfffffffd;
  fVar1 = *(float *)(in_ECX + 0x74);
  iVar3 = (int)((float)*(int *)(in_ECX + 0x84) - *(float *)(in_ECX + 0x7c));
  *(int *)(in_ECX + 0x98) = iVar3;
  iVar2 = (int)(fVar1 * 0.5);
  *(int *)(in_ECX + 0xa0) = iVar2;
  *(int *)(in_ECX + 0x9c) = (iVar2 - iVar3) / 2 + iVar3;
  iVar2 = (int)(fVar1 * 0.25 + (float)iVar2);
  *(int *)(in_ECX + 0xa4) = iVar2;
  *(int *)(in_ECX + 0xa8) = (int)(fVar1 * 0.125 + (float)iVar2);
  return;
}

