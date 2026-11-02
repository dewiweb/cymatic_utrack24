// rea decompile_all
// name: FUN_0048f720
// address: 0x48f720
// body: available
// range: 0x48f720-0x48f7ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048f720(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00701e08;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x2c) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(in_ECX + 0x2c) + 8);
  }
  iVar2 = 0;
  if (iVar3 != 0) {
    piVar1 = (int *)FUN_006e9580(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    piVar1 = (int *)(**(code **)(*piVar1 + 0x24))(&local_18,iVar3);
    iVar2 = *piVar1;
    *piVar1 = 0;
    local_14 = iVar2;
    if (local_18 != 0) {
      FUN_004912c0();
    }
  }
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
    iVar3 = iVar2;
  }
  FUN_0048f620(iVar3,param_1);
  if (iVar2 != 0) {
    FUN_004912c0();
  }
  ExceptionList = local_10;
  return;
}

