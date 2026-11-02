// rea decompile_all
// name: FUN_006d9c30
// address: 0x6d9c30
// body: available
// range: 0x6d9c30-0x6da1af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d9c30(undefined4 *param_1,int param_2,float param_3,undefined4 *param_4,uint *param_5,
                 int param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_a4 [4];
  undefined4 uStack_a0;
  undefined4 *puStack_9c;
  undefined4 uStack_98;
  void **ppvStack_94;
  void *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727945;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  operator_new(0x28);
  local_14 = (undefined4 *)FUN_00468a40();
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    local_14[1] = local_14[1] + 1;
    UNLOCK();
  }
  local_78 = (void *)0x0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_5c = 1;
  local_8 = 1;
  local_30 = (double)(ulonglong)(uint)local_30;
  if ((float)local_14[8] == 0.0) {
    if (local_14[2] == 0) {
      ppvStack_94 = (void **)0x6d9cda;
      FUN_004681b0();
      ppvStack_94 = (void **)0x6d9ce1;
      puVar4 = (undefined4 *)FUN_004682f0();
      uVar3 = local_14[2];
      local_14[2] = *puVar4;
      *puVar4 = uVar3;
      if (local_28._4_4_ != (undefined4 *)0x0) {
        LOCK();
        piVar1 = local_28._4_4_ + 1;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_28._4_4_)();
        }
      }
    }
    puVar4 = local_14;
    fVar5 = (float10)(**(code **)(*(int *)local_14[2] + 8))();
    puVar4[8] = (float)fVar5;
  }
  puVar4 = param_4;
  fVar7 = 0.0;
  local_1c = (float)local_14[8] * (float)local_14[5] - 3.0;
  local_18 = (float)param_2 - 6.0;
  local_20 = ((float)(int)param_3 - local_1c) - 3.0;
  if (local_18 <= 0.0) {
    local_18 = 0.0;
  }
  if (local_20 <= 0.0) {
    local_20 = 0.0;
  }
  fVar8 = local_18 * 0.5;
  fVar6 = 5.0;
  param_3 = local_20 * 0.5;
  if (5.0 <= fVar8) {
    if (5.0 <= param_3) {
      param_3 = 5.0;
    }
  }
  else if (fVar8 <= param_3) {
    param_3 = fVar8;
  }
  local_28._4_4_ = (undefined4 *)(param_3 + param_3);
  if (*(char *)*param_4 != '\0') {
    FUN_006831f0();
    FUN_004363b0();
    fVar8 = (local_18 - (float)local_28._4_4_) - 8.0;
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    fVar6 = (float)(int)fVar6 + 8.0;
    fVar7 = 0.0;
    if ((0.0 <= fVar6) && (fVar7 = fVar8, fVar6 <= fVar8)) {
      fVar7 = fVar6;
    }
    local_30 = (double)CONCAT44(fVar7,(uint)local_30);
  }
  fVar6 = param_3 + 4.0;
  if ((*param_5 >> 2 & 1) == 0) {
    if ((*param_5 >> 1 & 1) != 0) {
      fVar6 = ((local_18 - param_3) - fVar7) - 4.0;
    }
  }
  else {
    fVar6 = ((local_18 - (float)local_28._4_4_) - fVar7) * 0.5 + param_3;
  }
  param_4 = (undefined4 *)(fVar6 + 3.0);
  FUN_00682e50();
  local_18 = local_18 + 3.0;
  FUN_00682d90();
  fVar7 = (float)local_28._4_4_ * 0.5;
  ppvStack_94 = (void **)0x0;
  uStack_98 = 0;
  param_5 = (uint *)((local_18 - (float)local_28._4_4_) + fVar7);
  local_38 = CONCAT44(fVar7 + local_1c,(undefined4)local_38);
  uStack_a0 = 0x6d9f03;
  puStack_9c = (undefined4 *)fVar7;
  FUN_0067b920();
  local_20 = local_20 + local_1c;
  FUN_00682d90();
  ppvStack_94 = (void **)0x3fc90fdb;
  uStack_98 = 0;
  local_28 = (double)CONCAT44((local_20 - (float)local_28._4_4_) + fVar7,(undefined4)local_28);
  uStack_a0 = 0x6d9f6f;
  puStack_9c = (undefined4 *)fVar7;
  FUN_0067b920();
  FUN_00682d90();
  param_5 = (uint *)(fVar7 + 3.0);
  ppvStack_94 = (void **)0x40490fdb;
  uStack_98 = 0;
  uStack_a0 = 0x6d9fce;
  puStack_9c = (undefined4 *)fVar7;
  FUN_0067b920();
  FUN_00682d90();
  ppvStack_94 = (void **)0x4096cbe4;
  uStack_98 = 0;
  uStack_a0 = 0x6da01f;
  puStack_9c = (undefined4 *)fVar7;
  FUN_0067b920();
  FUN_00682d90();
  if (((*(byte *)(param_6 + 0x69) & 0x10) == 0) && (*(int *)(param_6 + 0xc) != 0)) {
    FUN_006e6320();
  }
  ppvStack_94 = (void **)0x0;
  uStack_98 = 0x1005400;
  puStack_9c = &param_3;
  uStack_a0 = 0x6da078;
  FUN_006e8e70();
  ppvStack_94 = (void **)0x6da084;
  FUN_00684d10();
  FUN_00684c50();
  local_48 = 0x3f800000;
  ppvStack_94 = &local_78;
  local_44 = 0;
  local_3c = 0x40000000;
  local_58 = 0x3f800000;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_38 = 0;
  uStack_98 = 0x6da0cf;
  FUN_00682be0();
  puStack_9c = &param_3;
  ppvStack_94 = (void **)0x0;
  uStack_98 = 0x1005410;
  uStack_a0 = 0x6da0e4;
  FUN_006e8e70();
  ppvStack_94 = (void **)0x6da0f0;
  FUN_00684d10();
  FUN_00684c50();
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x68))();
  local_38 = 0x433800000000000f;
  local_30 = (double)local_30._4_4_ + 6755399441055744.0;
  ppvStack_94 = (void **)(uint)local_30;
  uStack_98 = 0;
  local_28 = (double)(float)param_4 + 6755399441055744.0;
  puStack_9c = (undefined4 *)0x6da15d;
  FUN_00472d90();
  ppvStack_94 = (void **)0x24;
  FUN_0040e4d0(auStack_a4);
  FUN_006830c0(puVar4);
  ppvStack_94 = (void **)0x6da184;
  FID_conflict__free(local_78);
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_14 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ppvStack_94 = (void **)0x6da19c;
      (**(code **)*local_14)();
    }
  }
  ExceptionList = local_10;
  return;
}

