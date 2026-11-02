// rea decompile_all
// name: FUN_00640960
// address: 0x640960
// body: available
// range: 0x640960-0x641115 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00640960(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  undefined1 local_ac [16];
  float local_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined1 local_78 [4];
  int local_74;
  undefined4 *local_70;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined1 local_34;
  void *local_30;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071fc47;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006842b0(&stack0xffffff24);
  FUN_006840c0(*in_ECX);
  local_8 = 0;
  local_14 = 0.05;
  do {
    FUN_00684d10();
    FUN_0067edd0();
    local_14 = local_14 + 0.1;
  } while (local_14 < 1.0);
  local_14 = (float)(int)in_ECX[1] + (float)(in_ECX[1] + 1) * 0.5;
  FUN_0040e4d0(local_ac);
  FUN_0046fb70();
  FUN_0046fb90();
  FUN_0040ef50();
  FUN_0044db30();
  FUN_0046fa80();
  FUN_0046fb20();
  local_44 = local_24 + fStack_1c;
  local_40 = fStack_20 + fStack_18;
  local_34 = 1;
  local_3c = fStack_1c * 0.0 + local_24;
  local_38 = local_40;
  FUN_0067e860();
  local_8._0_1_ = 1;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x44))();
  local_8 = (uint)local_8._1_3_ << 8;
  if (local_70 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_70 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_70)();
    }
  }
  if (local_74 != 0) {
    FID_conflict__free(*(void **)(local_74 + 0x14));
    FUN_004bfe14();
  }
  local_54 = local_24;
  fStack_50 = fStack_20;
  fStack_4c = fStack_1c;
  fStack_48 = fStack_18;
  (**(code **)(*(int *)*param_1 + 0x50))();
  FUN_0046fad0();
  local_34 = 1;
  local_40 = fStack_20 + fStack_18;
  local_44 = fStack_1c * 0.0 + local_24;
  local_3c = local_24 + fStack_1c;
  local_38 = local_40;
  FUN_0067e860();
  local_8._0_1_ = 2;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x44))();
  local_8 = (uint)local_8._1_3_ << 8;
  if (local_70 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_70 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_70)();
    }
  }
  iVar2 = local_74;
  if (local_74 != 0) {
    FID_conflict__free(*(void **)(local_74 + 0x14));
    FUN_004bfe14(iVar2,0x20);
  }
  local_54 = local_24;
  fStack_50 = fStack_20;
  fStack_4c = fStack_1c;
  fStack_48 = fStack_18;
  (**(code **)(*(int *)*param_1 + 0x50))();
  local_34 = 0;
  local_40 = fStack_80 + fStack_88;
  local_44 = fStack_84 * 0.0 + local_8c;
  local_38 = fStack_80 * 0.0 + fStack_88;
  local_3c = local_44;
  FUN_0067e860(&local_44);
  local_8._0_1_ = 3;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x44))(local_78);
  local_8 = (uint)local_8._1_3_ << 8;
  if (local_70 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_70 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_70)(1);
    }
  }
  iVar2 = local_74;
  if (local_74 != 0) {
    FID_conflict__free(*(void **)(local_74 + 0x14));
    FUN_004bfe14(iVar2,0x20);
  }
  local_54 = local_8c;
  fStack_50 = fStack_88;
  fStack_4c = fStack_84;
  fStack_48 = fStack_80;
  (**(code **)(*(int *)*param_1 + 0x50))(&local_54);
  FUN_0046fb20(&local_24);
  local_44 = local_24 + fStack_1c;
  local_34 = 1;
  local_40 = fStack_18 * 0.0 + fStack_20;
  local_3c = fStack_1c * 0.0 + local_24;
  local_38 = local_40;
  FUN_0067e860(&local_44);
  local_8._0_1_ = 4;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x44))(local_78);
  local_8 = (uint)local_8._1_3_ << 8;
  if (local_70 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_70 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_70)(1);
    }
  }
  iVar2 = local_74;
  if (local_74 != 0) {
    FID_conflict__free(*(void **)(local_74 + 0x14));
    FUN_004bfe14(iVar2,0x20);
  }
  local_54 = local_24;
  fStack_50 = fStack_20;
  fStack_4c = fStack_1c;
  fStack_48 = fStack_18;
  (**(code **)(*(int *)*param_1 + 0x50))(&local_54);
  FUN_0046fad0(&local_24);
  local_34 = 1;
  local_44 = fStack_1c * 0.0 + local_24;
  local_3c = local_24 + fStack_1c;
  local_40 = fStack_18 * 0.0 + fStack_20;
  local_38 = local_40;
  FUN_0067e860(&local_44);
  local_8._0_1_ = 5;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x44))(local_78);
  local_8 = (uint)local_8._1_3_ << 8;
  if (local_70 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_70 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_70)(1);
    }
  }
  iVar2 = local_74;
  if (local_74 != 0) {
    FID_conflict__free(*(void **)(local_74 + 0x14));
    FUN_004bfe14(iVar2,0x20);
  }
  local_54 = local_24;
  fStack_50 = fStack_20;
  fStack_4c = fStack_1c;
  fStack_48 = fStack_18;
  (**(code **)(*(int *)*param_1 + 0x50))(&local_54);
  local_34 = 0;
  local_38 = fStack_90 + fStack_98;
  local_44 = fStack_94 * 0.0 + local_9c;
  local_40 = fStack_90 * 0.0 + fStack_98;
  local_3c = local_44;
  FUN_0067e860(&local_44);
  local_8._0_1_ = 6;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x44))(local_78);
  local_8 = (uint)local_8._1_3_ << 8;
  if (local_70 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_70 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_70)(1);
    }
  }
  iVar2 = local_74;
  if (local_74 != 0) {
    FID_conflict__free(*(void **)(local_74 + 0x14));
    FUN_004bfe14(iVar2,0x20);
  }
  local_54 = local_9c;
  fStack_50 = fStack_98;
  fStack_4c = fStack_94;
  fStack_48 = fStack_90;
  (**(code **)(*(int *)*param_1 + 0x50))(&local_54);
  FUN_0046fb20(&local_24);
  local_34 = 0;
  local_44 = fStack_1c + local_24;
  local_40 = fStack_18 * 0.0 + fStack_20;
  local_3c = fStack_1c * 0.0 + local_24;
  local_38 = local_40;
  FUN_0067e860(&local_44);
  local_8._0_1_ = 7;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x44))(local_78);
  local_8 = (uint)local_8._1_3_ << 8;
  if (local_70 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_70 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_70)(1);
    }
  }
  if (local_74 != 0) {
    FID_conflict__free(*(void **)(local_74 + 0x14));
    FUN_004bfe14(local_74,0x20);
  }
  local_54 = local_24;
  fStack_50 = fStack_20;
  fStack_4c = fStack_1c;
  fStack_48 = fStack_18;
  (**(code **)(*(int *)*param_1 + 0x50))(&local_54);
  FUN_0046fad0(&local_24);
  local_3c = fStack_1c + local_24;
  local_34 = 0;
  local_44 = fStack_1c * 0.0 + local_24;
  local_40 = fStack_18 * 0.0 + fStack_20;
  local_38 = local_40;
  FUN_00683ff0(&local_44);
  local_54 = local_24;
  fStack_50 = fStack_20;
  fStack_4c = fStack_1c;
  fStack_48 = fStack_18;
  (**(code **)(*(int *)*param_1 + 0x50))(&local_54);
  FUN_00684c50(*in_ECX);
  (**(code **)(*(int *)*param_1 + 0x50))(&local_54);
  FID_conflict__free(local_30);
  ExceptionList = local_10;
  return;
}

