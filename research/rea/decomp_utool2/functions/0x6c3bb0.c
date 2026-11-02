// rea decompile_all
// name: FUN_006c3bb0
// address: 0x6c3bb0
// body: available
// range: 0x6c3bb0-0x6c3cad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c3bb0(int param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00725978;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006c6110(param_1);
  *in_ECX = juce::DrawableImage::vftable;
  iVar1 = *(int *)(param_1 + 0x78);
  in_ECX[0x1e] = iVar1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  in_ECX[0x1f] = *(undefined4 *)(param_1 + 0x7c);
  in_ECX[0x20] = *(undefined4 *)(param_1 + 0x80);
  iVar1 = *(int *)(param_1 + 0x84);
  in_ECX[0x21] = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  iVar1 = *(int *)(param_1 + 0x88);
  in_ECX[0x22] = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  iVar1 = *(int *)(param_1 + 0x8c);
  in_ECX[0x23] = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  iVar1 = *(int *)(param_1 + 0x90);
  in_ECX[0x24] = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  iVar1 = *(int *)(param_1 + 0x94);
  in_ECX[0x25] = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  iVar1 = *(int *)(param_1 + 0x98);
  in_ECX[0x26] = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  local_8 = 2;
  FUN_006e9790(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  ExceptionList = local_10;
  return;
}

