// rea decompile_all
// name: FUN_004ecfc0
// address: 0x4ecfc0
// body: available
// range: 0x4ecfc0-0x4ed0f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004ecfc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *_Memory;
  undefined4 in_EDX;
  undefined4 *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00705237;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = operator_new(0x3c4);
  local_8 = 0;
  local_18 = puVar3;
  FUN_004e9c40(extraout_ECX,in_EDX);
  *puVar3 = PopupDialog2Btn::vftable;
  puVar3[0x1c] = PopupDialog2Btn::vftable;
  puVar3[0x4c] = PopupDialog2Btn::vftable;
  puVar3[0xf0] = 0xffffffff;
  local_8 = 1;
  FUN_004e9710(param_1,extraout_ECX_00);
  FUN_004eabf0(0,param_2,1);
  FUN_004eabf0(1,param_3,1);
  puVar3[0x4b] = 1;
  FUN_004eb590(in_ECX);
  FUN_006e5240();
  if (puVar3[0xf0] == 0) {
    puVar4 = (undefined4 *)FUN_0040e690(&local_18);
    uVar2 = *param_1;
    *param_1 = *puVar4;
    *puVar4 = uVar2;
    _Memory = local_18 + -2;
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar1 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(_Memory);
      }
    }
    local_11 = 1;
  }
  else {
    local_11 = 0;
  }
  (**(code **)*puVar3)(1);
  ExceptionList = local_10;
  return local_11;
}

