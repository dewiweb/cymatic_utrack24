// rea decompile_all
// name: FUN_00529c50
// address: 0x529c50
// body: available
// range: 0x529c50-0x529d0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00529c50(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *_Memory;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c1b4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x80) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined4 **)(in_ECX + 0x78);
  }
  local_14 = in_ECX;
  FUN_006f6dd6(uVar2,0,&ProjectExplorerBaseItem::RTTI_Type_Descriptor,
               &ProjectExplorerItem_Group::RTTI_Type_Descriptor,0,
               DAT_00c76070 ^ (uint)&stack0xfffffffc);
  uVar2 = FUN_00413a40(&local_14);
  local_8 = 0;
  FUN_006e4900(uVar2,0);
  local_8 = 0xffffffff;
  _Memory = (int *)(local_14 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  uVar2 = FUN_0051c060();
  *(undefined4 *)(in_ECX + 0x4f0) = uVar2;
  ExceptionList = local_10;
  return;
}

