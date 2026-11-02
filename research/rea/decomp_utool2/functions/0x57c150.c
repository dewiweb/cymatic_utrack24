// rea decompile_all
// name: FUN_0057c150
// address: 0x57c150
// body: available
// range: 0x57c150-0x57c491 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057c150(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *_Memory;
  float in_stack_00000014;
  char in_stack_0000001c;
  int local_40;
  int *local_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00712288;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  in_stack_00000014 = in_stack_00000014 * 0.9;
  FUN_00684c50();
  FUN_00472db0(in_stack_00000014);
  FUN_00684310();
  FUN_00684d10();
  FUN_00684c50();
  FUN_00472db0(in_stack_00000014);
  FUN_00683310();
  if (in_stack_0000001c != '\0') {
    FUN_00684c50();
    local_8 = 0;
    FUN_0061f730();
    FUN_0061fa00();
    local_8 = CONCAT31(local_8._1_3_,1);
    puVar4 = (undefined4 *)FUN_00636cf0();
    cVar2 = (**(code **)(*(int *)*puVar4 + 0x14))();
    (**(code **)(*local_34 + 0x54))();
    _Memory = (int *)(local_40 + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar1 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(_Memory);
      }
    }
    local_8 = 0xffffffff;
    (**(code **)(PTR_vftable_00c7ed34 + 0x54))();
    if (cVar2 == '\0') {
      local_8 = 2;
      FUN_00682e50();
      FUN_00682d90();
      FUN_00682d90();
      FUN_00682be0();
      FID_conflict__free((void *)0x0);
    }
    else {
      FUN_00472db0(in_stack_00000014 - 4.0);
      FUN_00684310();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}

