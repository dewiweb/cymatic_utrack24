// rea decompile_all
// name: FUN_00591b90
// address: 0x591b90
// body: available
// range: 0x591b90-0x591c88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00591b90(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 *param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_007146c4;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  operator_new(0x40);
  local_8._0_1_ = 1;
  iVar5 = FUN_00591780(param_3,0);
  local_8 = (uint)local_8._1_3_ << 8;
  *(undefined4 *)(iVar5 + 0x10) = param_1;
  if (*(undefined4 **)(iVar5 + 0x14) != param_2) {
    if (param_2 != (undefined4 *)0x0) {
      LOCK();
      param_2[1] = param_2[1] + 1;
      UNLOCK();
    }
    puVar6 = *(undefined4 **)(iVar5 + 0x14);
    *(undefined4 **)(iVar5 + 0x14) = param_2;
    if (puVar6 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar6 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar6)(1,uVar4);
      }
    }
  }
  *(undefined4 *)(iVar5 + 0x20) = param_4;
  *(undefined4 *)(iVar5 + 0x24) = param_5;
  *(undefined1 *)(iVar5 + 0x2c) = param_6._0_1_;
  puVar6 = (undefined4 *)FUN_004e5c80(in_ECX,in_ECX >> 0x1f);
  uVar3 = *(undefined4 *)(iVar5 + 0x28);
  *(undefined4 *)(iVar5 + 0x28) = *puVar6;
  *puVar6 = uVar3;
  if (param_6 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = param_6 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*param_6)(1);
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = param_2 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*param_2)(1);
    }
  }
  ExceptionList = local_10;
  return iVar5;
}

