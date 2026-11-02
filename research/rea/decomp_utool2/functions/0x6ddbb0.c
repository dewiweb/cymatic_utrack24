// rea decompile_all
// name: FUN_006ddbb0
// address: 0x6ddbb0
// body: available
// range: 0x6ddbb0-0x6de027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ddbb0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 int *param_6,undefined4 *param_7)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  undefined4 *puVar4;
  float fVar5;
  char cVar6;
  DWORD DVar7;
  undefined4 extraout_EDX;
  float local_80 [2];
  undefined4 *local_78;
  undefined4 *puStack_74;
  undefined4 *local_70;
  void **local_6c;
  void *local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 *local_24;
  uint local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727d9a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_70 = &local_1c;
  local_6c = (void **)0x1001900;
  puStack_74 = (undefined4 *)0x6ddbeb;
  FUN_006e8e70();
  local_70 = &local_14;
  local_6c = (void **)0x1001a00;
  puStack_74 = (undefined4 *)0x6ddbfe;
  FUN_006e8e70();
  local_6c = (void **)0x6ddc10;
  FUN_00684a80();
  if (((double)CONCAT44(param_6,param_5) < 0.0) || (1.0 <= (double)CONCAT44(param_6,param_5))) {
    local_6c = (void **)0x6ddcb4;
    FUN_00684c50();
    fVar3 = (float)(param_4 * 2);
    local_18 = fVar3;
    DVar7 = timeGetTime();
    fVar5 = local_18;
    if ((DAT_00c8a644 <= DVar7) || (DVar7 < DAT_00c8a644 - 1000)) {
      DAT_00c8a644 = DVar7;
    }
    local_54 = (void *)0x0;
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    local_50 = 0;
    local_4c = 0;
    local_38 = 1;
    local_8 = 0;
    param_2 = (float)-((int)(DVar7 / 0xf) % (int)fVar3);
    if (param_2 < (float)((int)fVar3 + param_3)) {
      local_18 = (float)(int)local_18 * 0.5;
      do {
        FUN_00682e50();
        FUN_00682d90();
        FUN_00682d90();
        FUN_00682d90();
        if ((local_4c != 0) && (*(float *)((int)local_54 + local_4c * 4 + -4) != 100005.0)) {
          if (local_50 < local_4c + 1) {
            local_6c = (void **)0x6dddde;
            FUN_00409cf0();
          }
          *(undefined4 *)((int)local_54 + local_4c * 4) = 0x47c35280;
          local_4c = local_4c + 1;
        }
        param_2 = (float)(int)fVar5 + param_2;
      } while (param_2 < (float)((int)fVar3 + param_3));
    }
    local_78 = &param_6;
    local_70 = (undefined4 *)param_3;
    puStack_74 = (undefined4 *)0x2;
    local_8._0_1_ = 1;
    local_80[1] = 1.008979e-38;
    local_6c = (void **)param_4;
    FUN_00673a00();
    local_8 = CONCAT31(local_8._1_3_,2);
    if (param_6 == (int *)0x0) {
      puStack_28 = (undefined4 *)0x0;
    }
    else {
      puStack_28 = (undefined4 *)(**(code **)(*param_6 + 4))();
    }
    local_6c = (void **)0x1;
    local_20 = local_20 & 0xffffff00;
    local_70 = (undefined4 *)0x1;
    puStack_74 = (undefined4 *)0x1;
    local_80[0] = (float)(param_4 + -2);
    local_78 = (undefined4 *)0x0;
    local_80[1] = 0.5;
    local_24 = puStack_28;
    FUN_006a59b0();
    if (local_24 != (undefined4 *)0x0) {
      local_6c = (void **)0x6ddeba;
      (**(code **)*local_24)();
    }
    puStack_74 = &param_6;
    local_78 = (undefined4 *)0x6dded0;
    FUN_006772e0();
    cVar6 = (**(code **)(*(int *)*param_1 + 0x30))();
    if ((cVar6 == '\0') && (cVar6 = FUN_00682580(), cVar6 == '\0')) {
      local_34 = 0x3f800000;
      uStack_30 = 0;
      uStack_2c = 0;
      puStack_28 = (undefined4 *)0x0;
      local_24 = (undefined4 *)0x3f800000;
      local_20 = 0;
      local_6c = &local_54;
      local_70 = (undefined4 *)0x6ddf11;
      (**(code **)(*(int *)*param_1 + 0x5c))();
    }
    if (param_6 != (int *)0x0) {
      LOCK();
      piVar1 = param_6 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        local_6c = (void **)0x6ddf2e;
        (**(code **)*param_6)();
      }
    }
    local_8 = 0xffffffff;
    local_6c = (void **)0x6ddf3d;
    FID_conflict__free(local_54);
  }
  else {
    local_6c = (void **)0x1;
    local_70 = (undefined4 *)0x1;
    puStack_74 = (undefined4 *)0x1;
    local_80[0] = (float)(param_4 + -2);
    local_78 = (undefined4 *)0x0;
    local_80[1] = 0.5;
    FUN_006a59b0();
  }
  puVar4 = param_7;
  if (*(char *)*param_7 != '\0') {
    local_6c = (void **)local_14;
    local_70 = (undefined4 *)local_1c;
    puStack_74 = (undefined4 *)0x6ddf68;
    FUN_0067f090();
    local_6c = (void **)0x6ddf72;
    FUN_00684c50();
    local_6c = (void **)0x6ddf91;
    (**(code **)(*(int *)*param_1 + 0x6c))();
    local_6c = (void **)0x6ddf9d;
    FUN_00683640();
    local_8 = 3;
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    local_6c = (void **)0x6ddfc2;
    (**(code **)(*(int *)*param_1 + 0x68))();
    local_8 = 0xffffffff;
    if (param_1 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = param_1 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        local_6c = (void **)0x1;
        local_70 = (undefined4 *)0x6ddfe6;
        (**(code **)*param_1)();
      }
    }
    local_70 = (undefined4 *)param_3;
    puStack_74 = (undefined4 *)0x0;
    local_78 = (undefined4 *)0x6ddff6;
    local_6c = (void **)param_4;
    FUN_00472d90();
    local_70 = (undefined4 *)0x24;
    local_6c = (void **)extraout_EDX;
    FUN_0040e4d0(local_80);
    FUN_006830c0(puVar4);
  }
  ExceptionList = local_10;
  return;
}

