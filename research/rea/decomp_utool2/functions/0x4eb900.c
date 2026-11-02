// rea decompile_all
// name: FUN_004eb900
// address: 0x4eb900
// body: available
// range: 0x4eb900-0x4ebd67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eb900(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,float param_5,
                 int param_6,int param_7)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_stack_00000034;
  int in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 uStack_74;
  undefined8 local_70;
  int local_68;
  undefined1 *local_64;
  void *local_38;
  float local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00704ff8;
  local_8 = 0;
  if (((float)in_stack_00000034 == 0.0) || ((float)(int)param_5 < (float)param_4 / 100.0)) {
    piVar2 = (int *)(param_7 + -8);
    if (piVar2 == &DAT_00bfe124) {
      return;
    }
    LOCK();
    iVar3 = *piVar2;
    ExceptionList = &local_10;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  else {
    ExceptionList = &local_10;
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    param_3 = param_6 + param_3;
    local_70._0_4_ = (undefined1 *)((int)&local_70 + 4);
    *(undefined1 *)(param_1 + 2) = 1;
    local_64 = (undefined1 *)(float)param_3;
    local_68 = 0x40000000;
    uStack_74 = 0x4eb9d9;
    FUN_006841a0();
    local_70._0_4_ = (undefined1 *)in_stack_0000003c;
    uStack_74 = 0x4eb9f8;
    FUN_006840c0();
    local_8 = CONCAT31(local_8._1_3_,1);
    local_64 = (undefined1 *)0x4eba07;
    FUN_00683ff0();
    iVar4 = 0;
    local_18 = 0.0;
    iVar3 = 0;
    param_5 = 0.0;
    do {
      fVar1 = *(float *)(in_stack_00000038 + iVar3 * 4);
      if (fVar1 == 0.0) break;
      param_5 = param_5 + fVar1;
      iVar4 = iVar4 + 1;
      local_64 = (undefined1 *)0x4eba88;
      FUN_00472db0();
      local_64 = (undefined1 *)0x4eba96;
      (**(code **)(*(int *)*param_1 + 0x50))();
      iVar3 = iVar3 + 1;
      local_18 = fVar1;
    } while (iVar3 < 100);
    if (*(char *)(param_1 + 2) == '\0') {
      (**(code **)(*(int *)*param_1 + 0x38))();
    }
    else {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (0 < iVar4) {
      local_64 = (undefined1 *)0x4ebadc;
      operator_new(0x28);
      local_64 = (undefined1 *)0x4ebaf0;
      in_stack_00000034 = (undefined4 *)FUN_00468a40();
      if (in_stack_00000034 != (undefined4 *)0x0) {
        LOCK();
        in_stack_00000034[1] = in_stack_00000034[1] + 1;
        UNLOCK();
      }
      local_8 = CONCAT31(local_8._1_3_,2);
      if (*(char *)(param_1 + 2) != '\0') {
        *(undefined1 *)(param_1 + 2) = 0;
        (**(code **)(*(int *)*param_1 + 0x34))();
      }
      local_64 = (undefined1 *)0x4ebb1b;
      (**(code **)(*(int *)*param_1 + 0x68))();
      if (in_stack_00000034 != (undefined4 *)0x0) {
        LOCK();
        piVar2 = in_stack_00000034 + 1;
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          local_64 = (undefined1 *)0x4ebb37;
          (**(code **)*in_stack_00000034)();
        }
      }
      param_6 = param_7;
      piVar2 = (int *)(param_7 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      local_8._0_1_ = 3;
      local_64 = (undefined1 *)FUN_006f53fe();
      local_68 = 0x4ebb70;
      FUN_00636d50();
      local_8._0_1_ = 4;
      local_68 = 0x4ebb88;
      local_70 = FUN_006f53fe();
      uStack_74 = 0x4ebb92;
      FUN_00636d50();
      local_70._4_4_ = 0x4ebba1;
      FUN_006377c0();
      local_68 = 0x4ebbaa;
      FUN_00637730();
      local_64 = (undefined1 *)0x4ebbb7;
      FUN_006377c0();
      local_8 = CONCAT31(local_8._1_3_,5);
      local_64 = (undefined1 *)0x4ebbc4;
      FUN_00636ec0();
      piVar2 = in_stack_00000034 + -2;
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          local_64 = (undefined1 *)0x4ebbe6;
          FID_conflict__free(piVar2);
        }
      }
      local_8._0_1_ = 3;
      piVar2 = (int *)((int)param_5 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          local_64 = (undefined1 *)0x4ebc0d;
          FID_conflict__free(piVar2);
        }
      }
      local_64 = (undefined1 *)0x4ebc1e;
      FUN_00683fc0();
      local_8._0_1_ = 6;
      local_64 = (undefined1 *)0x4ebc2d;
      FUN_006831f0();
      FUN_004363b0();
      local_8 = CONCAT31(local_8._1_3_,3);
      if (in_stack_00000034 != (undefined4 *)0x0) {
        LOCK();
        piVar2 = in_stack_00000034 + 1;
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          local_64 = (undefined1 *)0x4ebc59;
          (**(code **)*in_stack_00000034)();
        }
      }
      if ((int)local_18 + 6 < param_4) {
        local_64 = &stack0xffffffa0;
        local_68 = 0x4ebc79;
        FUN_006842b0();
        local_64 = (undefined1 *)0x4ebc80;
        FUN_00684c50();
        local_70._0_4_ = (undefined1 *)0x41600000;
        uStack_74 = 0x4ebcae;
        FUN_00472db0();
        local_70._0_4_ = (undefined1 *)0x4ebcc0;
        FUN_00684310();
        local_64 = (undefined1 *)0x4ebcd1;
        FUN_00684c50();
        local_70._4_4_ = 0x4ebce2;
        local_68 = param_3 + -0x10;
        local_64 = (undefined1 *)((int)local_18 + 4);
        FUN_00472d90();
        local_64 = (undefined1 *)0x24;
        FUN_0040e4d0(&uStack_74);
        FUN_006830c0(&param_6);
      }
      piVar2 = (int *)(param_6 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          local_64 = (undefined1 *)0x4ebd26;
          FID_conflict__free(piVar2);
        }
      }
    }
    local_64 = (undefined1 *)0x4ebd31;
    FID_conflict__free(local_38);
    piVar2 = (int *)(param_7 + -8);
    if (piVar2 == &DAT_00bfe124) {
      ExceptionList = local_10;
      return;
    }
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  if (iVar3 == 0) {
    local_64 = (undefined1 *)0x4ebd51;
    FID_conflict__free(piVar2);
  }
  ExceptionList = local_10;
  return;
}

