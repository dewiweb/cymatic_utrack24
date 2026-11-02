// rea decompile_all
// name: FUN_004ece70
// address: 0x4ece70
// body: available
// range: 0x4ece70-0x4ecfb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004ece70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  int *_Memory;
  undefined4 in_EDX;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00705202;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar3 = operator_new(0x3c4);
  local_8 = 0;
  local_14 = puVar3;
  FUN_004e9c40(extraout_ECX,in_EDX);
  *puVar3 = PopupDialog2Btn::vftable;
  puVar3[0x1c] = PopupDialog2Btn::vftable;
  puVar3[0x4c] = PopupDialog2Btn::vftable;
  puVar3[0xf0] = 0xffffffff;
  local_8 = 1;
  FUN_004eabf0(0,param_1,1);
  FUN_004eabf0(1,param_2,1);
  FUN_0045c990("Do Not Show Anymore",uVar2);
  local_8._0_1_ = 2;
  FUN_004eade0(2,0xffffffff,&local_14,1);
  local_8 = CONCAT31(local_8._1_3_,1);
  _Memory = local_14 + -2;
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  puVar3[0x4b] = 0;
  FUN_004eb590(in_ECX);
  FUN_006e5240();
  uVar2 = puVar3[0xf0] | 0x80;
  if (puVar3[0xf0] == 0) {
    uVar2 = 0;
  }
  (**(code **)*puVar3)(1);
  ExceptionList = local_10;
  return uVar2;
}

