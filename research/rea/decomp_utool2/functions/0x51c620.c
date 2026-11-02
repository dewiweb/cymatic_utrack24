// rea decompile_all
// name: FUN_0051c620
// address: 0x51c620
// body: available
// range: 0x51c620-0x51c6fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051c620(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int *_Memory;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00709ee5;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0051a1c0(param_1,0);
  *in_ECX = ProjectExplorerItem_Group::TVIGroup::vftable;
  in_ECX[0x1c] = ProjectExplorerItem_Group::TVIGroup::vftable;
  in_ECX[0x1d] = ProjectExplorerItem_Group::TVIGroup::vftable;
  in_ECX[0x24] = ProjectExplorerItem_Group::TVIGroup::vftable;
  in_ECX[0x26] = ProjectExplorerItem_Group::TVIGroup::vftable;
  uVar2 = DAT_00c7ebac;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  uVar4 = FUN_005bdda0(uVar3);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_006e4900(uVar4,0);
  FUN_006e6170(0x1000281,uVar2);
  _Memory = (int *)(param_1 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  ExceptionList = local_10;
  return;
}

