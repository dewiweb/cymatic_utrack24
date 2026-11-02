// rea decompile_all
// name: FUN_0041a8b0
// address: 0x41a8b0
// body: available
// range: 0x41a8b0-0x41aa13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0041a8b0(void)

{
  int iVar1;
  undefined1 uVar2;
  int *_Memory;
  undefined4 in_stack_00000034;
  int in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  int in_stack_00000048;
  void *local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *pvStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  void *local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  void *pvStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fcef8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_30 = (void *)0x0;
  uStack_2c = 0;
  uStack_28 = 0;
  pvStack_24 = (void *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 1;
  local_8 = 1;
  FUN_0045c990(&DAT_00c11498,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  FUN_00631980(&local_14,in_stack_00000034);
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
  if (0 < *(int *)(in_stack_00000038 + 8)) {
    FUN_006301d0(in_stack_00000038);
  }
  local_3c = 0;
  local_4c = (void *)0x0;
  uStack_48 = 0;
  uStack_44 = 0;
  pvStack_40 = (void *)0x0;
  local_38 = 0;
  local_34 = 1;
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_006310b0(&stack0x00000004);
  uVar2 = FUN_00582860();
  if (in_stack_00000048 != 0) {
    FUN_00630220(&local_4c);
  }
  FUN_0040f7f0();
  FID_conflict__free(pvStack_40);
  FUN_0040f7f0();
  FID_conflict__free(local_4c);
  FUN_0040f7f0();
  FID_conflict__free(pvStack_24);
  FUN_0040f7f0();
  FID_conflict__free(local_30);
  FUN_00636570();
  ExceptionList = local_10;
  return uVar2;
}

