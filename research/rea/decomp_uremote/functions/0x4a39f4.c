// rea decompile_all
// name: FUN_004a39f4
// address: 0x4a39f4
// body: available
// range: 0x4a39f4-0x4a3c16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4
FUN_004a39f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            int *param_6,int *param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int *local_24;
  int *local_20;
  int *local_1c [2];
  int *local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x4a3a00;
  FUN_0049f4b3();
  local_8 = 0;
  local_28 = 0;
  iVar1 = FUN_0049f7d4();
  iVar3 = *param_6;
  piVar5 = &local_28;
  puVar8 = &local_2c;
  uVar2 = FUN_00466b89(iVar1 + 8);
  (**(code **)(iVar3 + 0x14))(param_6,uVar2,puVar8,piVar5);
  if (local_28 == 0) {
    local_2c = 0;
  }
  local_8._0_1_ = 1;
  local_20 = (int *)0x0;
  (**(code **)(*param_6 + 0x10))(param_6,local_2c,&local_20);
  local_8._0_1_ = 2;
  local_1c[0] = (int *)0x0;
  (**(code **)(*local_20 + 0x1c))(local_20,400,5,0,local_1c);
  fVar4 = (float10)FUN_004a36d0(local_1c[0]);
  local_24 = (int *)(float)fVar4;
  local_8._0_1_ = 3;
  iVar3 = *param_5;
  local_14[0] = (int *)0x0;
  fVar4 = (float10)FUN_0049fa3d(L"en-us",local_14);
  local_24 = (int *)(float)(fVar4 * (float10)(float)local_24);
  uVar2 = FUN_0049f744(param_6,400,0,5,local_24);
  uVar2 = FUN_00466b89(uVar2);
  (**(code **)(iVar3 + 0x3c))(param_5,uVar2);
  FUN_004a3753();
  local_38 = 1;
  local_34 = 0;
  local_30 = 0;
  local_8._0_1_ = 4;
  local_24 = (int *)0x0;
  (**(code **)(*param_5 + 0x50))(param_5,local_14[0],&local_24);
  (**(code **)(*local_14[0] + 0x24))(local_14[0],&local_38,local_24);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))(local_24);
  }
  local_24 = (int *)thunk_FUN_0046087d();
  piVar5 = (int *)*param_7;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  *param_7 = 0;
  iVar3 = *param_5;
  piVar5 = local_24;
  piVar6 = local_14[0];
  piVar7 = param_7;
  uVar2 = FUN_00466b89(param_1);
  iVar3 = (**(code **)(iVar3 + 0x48))(param_5,uVar2,piVar5,piVar6,param_2,param_3,piVar7);
  if ((iVar3 < 0) || (*param_7 == 0)) {
    local_8._0_1_ = 2;
    if (local_14[0] != (int *)0x0) {
      (**(code **)(*local_14[0] + 8))(local_14[0]);
    }
    local_8._0_1_ = 1;
    if (local_1c[0] != (int *)0x0) {
      (**(code **)(*local_1c[0] + 8))(local_1c[0]);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))(local_20);
    }
    FUN_004c4d7a();
    uVar2 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x1c);
    param_5 = (int *)0x0;
    if (0 < iVar3) {
      do {
        FUN_004a37b8(*(undefined4 *)(*(int *)(param_1 + 0x14) + (int)param_5 * 4),local_24,param_4,
                     param_6);
        param_5 = (int *)((int)param_5 + 1);
      } while ((int)param_5 < iVar3);
    }
    local_8._0_1_ = 2;
    if (local_14[0] != (int *)0x0) {
      (**(code **)(*local_14[0] + 8))(local_14[0]);
    }
    local_8._0_1_ = 1;
    if (local_1c[0] != (int *)0x0) {
      (**(code **)(*local_1c[0] + 8))(local_1c[0]);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))(local_20);
    }
    FUN_004c4d7a();
    uVar2 = 1;
  }
  return uVar2;
}

