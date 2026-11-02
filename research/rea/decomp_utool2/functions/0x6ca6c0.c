// rea decompile_all
// name: FUN_006ca6c0
// address: 0x6ca6c0
// body: available
// range: 0x6ca6c0-0x6ca77f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ca6c0(int param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00726216;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 != 0) {
    puVar1 = operator_new(0x44);
    local_8 = 0;
    FUN_006b3120(param_1);
    *puVar1 = juce::ModalComponentManager::ModalItem::vftable;
    puVar1[0xb] = param_1;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *(undefined1 *)(puVar1 + 0x10) = 1;
    *(undefined1 *)((int)puVar1 + 0x41) = param_2;
    iVar2 = *(int *)(in_ECX + 0x14) + 1;
    if (*(int *)(in_ECX + 0x10) < iVar2) {
      FUN_00409cf0(iVar2 / 2 + *(int *)(in_ECX + 0x14) + 9 & 0xfffffff8);
    }
    iVar2 = *(int *)(in_ECX + 0x14);
    *(int *)(in_ECX + 0x14) = iVar2 + 1;
    *(undefined4 **)(*(int *)(in_ECX + 0xc) + iVar2 * 4) = puVar1;
  }
  ExceptionList = local_10;
  return;
}

