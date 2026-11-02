// rea decompile_all
// name: FUN_00539d00
// address: 0x539d00
// body: available
// range: 0x539d00-0x539d78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00539d00(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  int iVar3;
  int *piVar4;
  
  iVar2 = DAT_00c8a5c4;
  piVar4 = (int *)(DAT_00c8a5c4 + 0xa8);
  in_ECX[1] = param_1;
  *(undefined1 *)(in_ECX + 3) = param_3;
  *in_ECX = PlaylistProjectSubSet::vftable;
  in_ECX[2] = 5;
  in_ECX[4] = param_4;
  *(undefined1 *)(in_ECX + 5) = 1;
  in_ECX[6] = 0;
  iVar3 = *(int *)(iVar2 + 0xb0) + 1;
  if (*(int *)(iVar2 + 0xac) < iVar3) {
    FUN_00409cf0(iVar3 / 2 + *(int *)(iVar2 + 0xb0) + 9 & 0xfffffff8);
  }
  iVar3 = *(int *)(iVar2 + 0xb0);
  *(int *)(iVar2 + 0xb0) = iVar3 + 1;
  puVar1 = (undefined4 *)(*piVar4 + iVar3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = in_ECX;
  }
  return;
}

