// rea decompile_all
// name: FUN_004a37b8
// address: 0x4a37b8
// body: available
// range: 0x4a37b8-0x4a39f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004a37b8(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int *unaff_ESI;
  int *piVar5;
  float10 fVar6;
  float *pfVar7;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  undefined1 local_1c [4];
  int *local_18;
  int *local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  piVar5 = param_1;
  uStack_4 = 0x34;
  local_8 = 0x4a37c4;
  iVar1 = *param_1;
  local_30 = FUN_00440367(param_1[1] - iVar1);
  local_28 = (float)piVar5[2];
  if (local_28 != 0.0) {
    FUN_0049dfa5(local_1c);
    local_8 = 0;
    iVar4 = *param_4;
    local_20 = 0;
    piVar5 = &local_20;
    pfVar7 = &local_24;
    uVar3 = FUN_00466b89(local_1c);
    (**(code **)(iVar4 + 0x14))(param_4,uVar3,pfVar7,piVar5);
    if (local_20 == 0) {
      local_24 = 0.0;
    }
    local_8._0_1_ = 1;
    local_18 = (int *)0x0;
    (**(code **)(*param_4 + 0x10))(param_4,local_24,&local_18);
    local_14[0] = (int *)0x0;
    local_8 = CONCAT31(local_8._1_3_,2);
    iVar4 = (**(code **)(*local_18 + 0x10))(local_18);
    do {
      iVar4 = iVar4 + -1;
      if (iVar4 < 0) break;
      param_2 = local_18;
      if (local_14[0] != (int *)0x0) {
        (**(code **)(*local_14[0] + 8))(local_14[0]);
      }
      local_14[0] = (int *)0x0;
      (**(code **)(*param_2 + 0x14))(param_2,iVar4,local_14);
      FUN_004a28ea(&local_2c,local_14[0]);
      FUN_0049f74a();
      uVar2 = FUN_00465948();
      param_2 = (int *)CONCAT13(uVar2,param_2._0_3_);
      FUN_004652d6();
    } while (param_2._3_1_ == '\0');
    iVar4 = *unaff_ESI;
    FUN_00466b89(local_1c);
    (**(code **)(iVar4 + 0x7c))();
    iVar4 = *unaff_ESI;
    (**(code **)(*local_14[0] + 0x10))(local_14[0],iVar1,local_30);
    (**(code **)(iVar4 + 0x80))();
    iVar4 = *unaff_ESI;
    (**(code **)(*local_14[0] + 0x14))(local_14[0],iVar1,local_30);
    (**(code **)(iVar4 + 0x88))();
    iVar4 = *unaff_ESI;
    (**(code **)(*local_14[0] + 0x18))(local_14[0],iVar1,local_30);
    (**(code **)(iVar4 + 0x84))();
    fVar6 = (float10)FUN_004a36d0(local_14[0]);
    param_2 = (int *)(float)fVar6;
    fVar6 = (float10)FUN_0049fa3d(iVar1,local_30);
    param_2 = (int *)(float)(fVar6 * (float10)(float)param_2);
    (**(code **)(extraout_ECX + 0x8c))();
    local_8._0_1_ = 1;
    if (local_14[0] != (int *)0x0) {
      (**(code **)(*local_14[0] + 8))(local_14[0]);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))(local_18);
    }
    local_8 = 0xffffffff;
    FUN_004652d6();
    piVar5 = param_1;
  }
  if (piVar5[3] != 0) {
    local_8 = 3;
    param_1 = (int *)0x0;
    fVar6 = (float10)FUN_00476314();
    param_2 = (int *)(float)fVar6;
    fVar6 = (float10)FUN_00476330();
    local_2c = (float)fVar6;
    fVar6 = (float10)FUN_0047634c();
    local_28 = (float)fVar6;
    fVar6 = (float10)FUN_00476367();
    local_38 = (float)fVar6;
    local_44 = (float)param_2;
    local_40 = local_2c;
    local_3c = local_28;
    local_24 = local_38;
    (**(code **)(*param_3 + 0x20))(param_3,&local_44,0,&param_1);
    (**(code **)(*unaff_ESI + 0x98))();
    local_8 = 0xffffffff;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return;
}

