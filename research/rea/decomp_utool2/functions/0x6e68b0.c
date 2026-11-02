// rea decompile_all
// name: FUN_006e68b0
// address: 0x6e68b0
// body: available
// range: 0x6e68b0-0x6e6ae1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e68b0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined **ppuVar5;
  undefined4 **ppuStack_3c;
  undefined4 *puStack_38;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007288c7;
  local_10 = ExceptionList;
  uStack_28 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iStack_2c = 0x6e68df;
  iVar3 = FUN_006e9580();
  iStack_2c = in_ECX + 0x80;
  iStack_30 = in_ECX + 0xdc;
  puStack_38 = param_1;
  ppuStack_3c = (undefined4 **)0x6e68fa;
  (**(code **)(*(int *)(iVar3 + 0x1c) + 8))();
  FUN_006e8e70(&ppuStack_3c,0x1001810,0);
  FUN_00684c50();
  ppuStack_3c = (undefined4 **)0x6e691a;
  iVar3 = FUN_006e9580();
  ppuStack_3c = &local_14;
  uVar4 = (**(code **)(*(int *)(iVar3 + 0x1c) + 0x1c))();
  local_8 = 0;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x68))(uVar4);
  local_8 = 0xffffffff;
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_14 + 1;
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*local_14)(1);
    }
  }
  uVar2 = *(uint *)(in_ECX + 0x100);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    iVar3 = *(int *)(*(int *)(in_ECX + 0xf8) + uVar2 * 4);
    local_14 = *(undefined4 **)(iVar3 + 0x10);
    if (uVar2 < *(uint *)(in_ECX + 0x148)) {
      ppuVar5 = (undefined **)(*(int *)(in_ECX + 0x140) + uVar2 * 4);
    }
    else {
      ppuVar5 = &PTR_DAT_00c7ed68;
    }
    FUN_00472d90(*(int *)(iVar3 + 0x14) + -0xe,*(undefined4 *)(iVar3 + 0x18),0xe);
    FUN_00682290(ppuVar5,0x21,1,0);
  }
  uVar2 = *(uint *)(in_ECX + 0x154);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    iVar3 = *(int *)(*(int *)(in_ECX + 0x104) + uVar2 * 4);
    local_14 = *(undefined4 **)(iVar3 + 0x10);
    if (uVar2 < *(uint *)(in_ECX + 0x154)) {
      ppuVar5 = (undefined **)(*(int *)(in_ECX + 0x14c) + uVar2 * 4);
    }
    else {
      ppuVar5 = &PTR_DAT_00c7ed68;
    }
    FUN_00472d90(*(int *)(iVar3 + 0x14) + -0xe,*(undefined4 *)(iVar3 + 0x18),0xe);
    FUN_00682290(ppuVar5,0x21,1,0);
  }
  local_14 = *(undefined4 **)(in_ECX + 0x124);
  while (local_14 = (undefined4 *)((int)local_14 + -1), -1 < (int)local_14) {
    iVar3 = *(int *)(*(int *)(in_ECX + 0x11c) + (int)local_14 * 4);
    FUN_00472d90(*(int *)(iVar3 + 0x14) + -0xe,*(undefined4 *)(iVar3 + 0x18),0xe);
    FUN_00682290(iVar3 + 4,0x21,1,0);
  }
  ExceptionList = local_10;
  return;
}

