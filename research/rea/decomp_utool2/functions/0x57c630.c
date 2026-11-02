// rea decompile_all
// name: FUN_0057c630
// address: 0x57c630
// body: available
// range: 0x57c630-0x57c8aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057c630(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined1 *in_stack_ffffff58;
  undefined4 in_stack_ffffff5c;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  void *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 local_6c;
  undefined1 local_68 [24];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007122f3;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_20 = 4;
  local_1c = 0;
  local_18 = 0;
  if (0 < param_4 + -8) {
    local_18 = param_4 + -8;
  }
  local_14 = (undefined4 *)0x0;
  if (0 < (int)param_5) {
    local_14 = param_5;
  }
  uVar6 = 0x57c692;
  FUN_0040dd60(local_30,local_14 + -6);
  if (((uint)param_8 & 0x60) != 0) {
    local_88 = (void *)0x0;
    local_84 = 0;
    local_80 = 0;
    local_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    local_6c = 1;
    local_8 = 0;
    if (((uint)param_8 & 0x20) == 0) {
      uVar6 = 0x3f4ccccd;
    }
    else {
      uVar6 = 0xbf4ccccd;
    }
    FUN_006824f0(uVar6,0x3f800000,0);
    FUN_00684c50(0x99000000);
    puVar9 = local_30;
    uVar6 = 2;
    puVar7 = local_40;
    FUN_0040dcd0(local_50,(int)local_14 / 2);
    FUN_00418db0(puVar7,uVar6);
    iVar4 = FUN_0040e4d0(puVar9);
    in_stack_ffffff58 = local_68;
    uVar6 = *(undefined4 *)(iVar4 + 0xc);
    in_stack_ffffff5c = *(undefined4 *)(iVar4 + 8);
    FUN_0067fe30(in_stack_ffffff58,in_stack_ffffff5c,uVar6,1,0x24);
    cVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
    if (cVar2 == '\0') {
      cVar2 = FUN_00682580();
      if (cVar2 == '\0') {
        uVar6 = 0x57c7b7;
        (**(code **)(*(int *)*param_1 + 0x5c))(&local_88,local_68);
      }
    }
    local_8 = 0xffffffff;
    FID_conflict__free(local_88);
  }
  FUN_00684c50(DAT_00c7ef7c);
  FUN_0057f4a0(uVar3);
  local_8 = 1;
  uVar5 = FUN_00683640(&param_5);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  uVar8 = 0x57c828;
  (**(code **)(*(int *)*param_1 + 0x68))(uVar5);
  if (param_5 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = param_5 + 1;
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      uVar8 = 1;
      uVar6 = 0x57c847;
      (**(code **)*param_5)(1);
    }
  }
  local_8 = 0xffffffff;
  if (param_8 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = param_8 + 1;
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      uVar8 = 1;
      uVar6 = 0x57c868;
      (**(code **)*param_8)(1);
    }
  }
  FUN_00472d90(local_1c,param_4,local_14);
  FUN_00682290(param_2,0x24,1,extraout_EDX,in_stack_ffffff58,in_stack_ffffff5c,uVar6,uVar8);
  ExceptionList = local_10;
  return;
}

