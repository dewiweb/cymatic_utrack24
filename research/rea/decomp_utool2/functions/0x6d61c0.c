// rea decompile_all
// name: FUN_006d61c0
// address: 0x6d61c0
// body: available
// range: 0x6d61c0-0x6d64d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d61c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6,undefined1 *param_7,undefined4 param_8,
                 int param_9,int param_10)

{
  int iVar1;
  char cVar2;
  undefined4 *local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  void *pvStack_24;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar1 = param_10;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727507;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_78 = &stack0xffffff94;
  local_74 = 0x1001200;
  local_7c = (undefined4 *)0x6d6200;
  FUN_006e8e70();
  FUN_00684a80();
  if ((param_9 != 2) && (param_9 != 3)) {
    local_74 = param_8;
    local_78 = param_7;
    local_7c = param_6;
    FUN_006d5a50(param_1,param_2,param_3,param_4,param_5);
    local_74 = param_8;
    local_78 = param_7;
    local_7c = param_6;
    FUN_006db800(param_1,param_2,param_3,param_4,param_5);
    ExceptionList = local_10;
    return;
  }
  local_8 = 0;
  FUN_00682020();
  if (((*(byte *)(iVar1 + 0x69) & 0x10) == 0) &&
     ((*(int *)(iVar1 + 0xc) == 0 || (cVar2 = FUN_006e6320(), cVar2 != '\0')))) {
    param_10 = 0x3f800000;
  }
  else {
    param_10 = 0x3f000000;
  }
  local_74 = 0;
  local_78 = (undefined1 *)0x1001300;
  local_7c = &param_8;
  FUN_006e8e70();
  local_74 = 0x6d6387;
  FUN_0067f460();
  FUN_00684d10();
  local_7c = &local_78;
  local_74 = 0;
  FUN_006841a0();
  FUN_00684210(&local_7c);
  FUN_006840c0();
  local_8._0_1_ = 1;
  FUN_00683ff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FID_conflict__free(pvStack_24);
  cVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
  if ((cVar2 == '\0') && (cVar2 = FUN_00682580(), cVar2 == '\0')) {
    local_74 = 0x6d643e;
    (**(code **)(*(int *)*param_1 + 0x5c))();
  }
  local_74 = 0x6d6450;
  FUN_006841a0();
  FUN_00684c50();
  FUN_00472db0();
  (**(code **)(*(int *)*param_1 + 0x50))();
  local_74 = 0x6d64bb;
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

