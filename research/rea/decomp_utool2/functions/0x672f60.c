// rea decompile_all
// name: FUN_00672f60
// address: 0x672f60
// body: available
// range: 0x672f60-0x673032 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00672f60(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_ECX;
  undefined4 local_3c;
  int local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720350;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar3 = (int *)(**(code **)(*(int *)*in_ECX + 4))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_3c = param_2;
  local_38 = 0;
  local_34 = (undefined4 *)0x0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_20 = 0x3f800000;
  local_1c = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_14 = piVar3;
  (**(code **)(*piVar3 + 0x44))(&local_3c);
  local_8 = (uint)local_8._1_3_ << 8;
  if (local_34 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_34 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_34)(1);
    }
  }
  iVar2 = local_38;
  if (local_38 != 0) {
    FID_conflict__free(*(void **)(local_38 + 0x14));
    FUN_004bfe14(iVar2,0x20);
  }
  (**(code **)(*piVar3 + 0x54))(param_1,1);
  (**(code **)*piVar3)(1);
  ExceptionList = local_10;
  return;
}

