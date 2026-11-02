// rea decompile_all
// name: FUN_005501d0
// address: 0x5501d0
// body: available
// range: 0x5501d0-0x5503f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005501d0(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0071056a;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::ReferenceCountedObject::vftable;
  in_ECX[1] = 0;
  *in_ECX = TargetTreeNode::vftable;
  in_ECX[2] = 5;
  iVar1 = *param_1;
  in_ECX[3] = iVar1;
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  in_ECX[4] = &DAT_00bfe12c;
  in_ECX[5] = &DAT_00bfe12c;
  in_ECX[6] = &DAT_00bfe12c;
  in_ECX[9] = &DAT_00bfe12c;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = &DAT_00bfe12c;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  local_8 = 0xb;
  uStack_7 = 0;
  in_ECX[0x17] = 0;
  switch(param_3[0x12]) {
  case 1:
    in_ECX[2] = 3;
    break;
  case 2:
    in_ECX[2] = 2;
    break;
  case 3:
  case 4:
  case 5:
    in_ECX[2] = 4;
  }
  *(undefined2 *)(in_ECX + 7) = 1;
  in_ECX[8] = 3;
  *(undefined1 *)(in_ECX + 10) = 0;
  in_ECX[0xb] = param_3[0x11];
  FUN_0045c990("autoplay.play",uVar3);
  _local_8 = CONCAT31(uStack_7,0xc);
  piVar4 = (int *)FUN_00636a10(&local_18);
  if (*piVar4 == local_14) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)FUN_0045c1e0(*piVar4,local_14);
  }
  piVar4 = (int *)(local_18 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(local_14 + -8);
  _local_8 = CONCAT31(uStack_7,0xb);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  if (param_1 == (int *)0x0) {
    FUN_0045c990("Autoplay");
    local_20 = in_ECX[6];
    in_ECX[6] = local_1c;
  }
  else {
    puVar5 = (undefined4 *)(**(code **)(*param_3 + 0x80))(&local_20);
    uVar2 = in_ECX[6];
    in_ECX[6] = *puVar5;
    *puVar5 = uVar2;
  }
  piVar4 = (int *)(local_20 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_0054e940(param_2);
  ExceptionList = local_10;
  return;
}

