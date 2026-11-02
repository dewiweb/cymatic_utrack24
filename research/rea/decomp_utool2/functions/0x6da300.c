// rea decompile_all
// name: FUN_006da300
// address: 0x6da300
// body: available
// range: 0x6da300-0x6da6c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006da300(int param_1,undefined4 *param_2,int param_3,undefined4 *param_4,int param_5,
                 int param_6,int *param_7,char param_8)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  int iStack_b0;
  int iStack_ac;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  undefined4 **local_a0;
  undefined4 *local_9c;
  void *local_64;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_2c [4];
  undefined4 *local_28 [2];
  undefined4 *local_20;
  float local_1c;
  undefined4 *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727976;
  local_10 = ExceptionList;
  if (param_3 * (int)param_4 == 0) {
    return;
  }
  local_11 = *(char *)(param_1 + 0x72);
  if (local_11 == '\0') {
    local_20 = (undefined4 *)0x3d4ccccd;
  }
  else {
    local_20 = (undefined4 *)0x3e19999a;
  }
  local_a0 = local_28;
  local_1c = (float)(int)param_4;
  local_9c = (undefined4 *)&stack0xffffff68;
  puStack_a4 = (undefined1 *)0x6da38b;
  ExceptionList = &local_10;
  FUN_0068b4a0();
  local_a0 = (undefined4 **)0x6da397;
  FUN_00680c60();
  local_a0 = &local_9c;
  puStack_a4 = (undefined1 *)0x6da3a0;
  FUN_0068b4a0();
  local_a0 = (undefined4 **)0x6da3ae;
  FUN_006840c0();
  local_8 = 0;
  FUN_00683ff0();
  local_8 = 0xffffffff;
  FID_conflict__free(local_64);
  (**(code **)(*(int *)*param_2 + 0x2c))();
  (**(code **)(*(int *)*param_2 + 0x54))();
  local_1c = local_1c * 0.65;
  local_9c = (undefined4 *)0x6da403;
  puVar3 = operator_new(0x28);
  param_2 = (undefined4 *)0x3dcccccd;
  if ((0.1 <= local_1c) && (param_2 = (undefined4 *)0x461c4000, local_1c <= 10000.0)) {
    param_2 = (undefined4 *)local_1c;
  }
  local_8 = 1;
  *puVar3 = juce::ReferenceCountedObject::vftable;
  puVar3[1] = 0;
  *puVar3 = juce::Font::SharedFontInternal::vftable;
  puVar3[2] = 0;
  piVar4 = (int *)FUN_00643f40();
  iVar7 = *piVar4;
  puVar3[3] = iVar7;
  piVar4 = (int *)(iVar7 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  local_9c = (undefined4 *)0x6da479;
  FUN_0045c990();
  puVar3[5] = param_2;
  fVar8 = 1.0;
  puVar3[6] = 0x3f800000;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 0;
  local_20 = (undefined4 *)0x3f800000;
  LOCK();
  puVar3[1] = puVar3[1] + 1;
  UNLOCK();
  local_8 = 2;
  local_18 = puVar3;
  if (*(char *)(puVar1 + 2) != '\0') {
    *(undefined1 *)(puVar1 + 2) = 0;
    (**(code **)(*(int *)*puVar1 + 0x34))();
  }
  local_9c = (undefined4 *)0x6da4d8;
  (**(code **)(*(int *)*puVar1 + 0x68))();
  local_9c = (undefined4 *)(param_1 + 4);
  local_a0 = (undefined4 **)0x6da4e7;
  local_28[0] = local_9c;
  FUN_006831f0();
  local_9c = (undefined4 *)0x6da4ec;
  FUN_004363b0();
  param_2 = (undefined4 *)0x0;
  local_1c = 0.0;
  if (param_7 != (int *)0x0) {
    local_1c = (float)(int)(float)local_18[5];
    iVar7 = *param_7;
    if (iVar7 == 0) {
      iVar6 = 0;
      iVar7 = 0;
    }
    else {
      iVar6 = *(int *)(iVar7 + 0xc);
      iVar7 = *(int *)(iVar7 + 0x10);
    }
    param_2 = (undefined4 *)((iVar6 * (int)local_1c) / iVar7 + 4);
  }
  iVar7 = param_6;
  if ((int)fVar8 + (int)param_2 < param_6) {
    iVar7 = (int)fVar8 + (int)param_2;
  }
  iVar6 = param_5;
  if ((param_8 == '\0') && (iVar5 = (param_3 - iVar7) / 2, param_5 < iVar5)) {
    iVar6 = iVar5;
  }
  if (param_6 + param_5 < iVar6 + iVar7) {
    iVar6 = (param_5 - iVar7) + param_6;
  }
  if (param_7 != (int *)0x0) {
    if (local_11 == '\0') {
      local_20 = (undefined4 *)0x3f19999a;
    }
    if (*(char *)(puVar1 + 2) != '\0') {
      *(undefined1 *)(puVar1 + 2) = 0;
      local_9c = (undefined4 *)0x6da59c;
      (**(code **)(*(int *)*puVar1 + 0x34))();
    }
    local_9c = local_20;
    local_a0 = (undefined4 **)0x6da5ae;
    (**(code **)(*(int *)*puVar1 + 0x48))();
    puStack_a4 = (undefined1 *)local_1c;
    puStack_a8 = (undefined1 *)param_2;
    local_a0 = (undefined4 **)0x24;
    iStack_ac = ((int)param_4 - (int)local_1c) / 2;
    iStack_b0 = iVar6;
    FUN_00676a00(param_7);
    iVar7 = iVar7 - (int)param_2;
  }
  local_9c = (undefined4 *)0x1005701;
  local_a0 = (undefined4 **)0x6da5e9;
  cVar2 = FUN_006d7a60();
  if (cVar2 == '\0') {
    local_9c = &local_38;
    local_38 = 0x1005701;
    local_34 = 0;
    local_a0 = (undefined4 **)0x6da60a;
    iVar6 = FUN_004ae580();
    if (iVar6 < 0) {
      local_a0 = &local_9c;
      puStack_a4 = local_2c;
      puStack_a8 = (undefined1 *)0x6da63d;
      FUN_0068b4a0();
      puStack_a4 = (undefined1 *)0x6da649;
      FUN_00680c60();
      goto LAB_006da65e;
    }
  }
  puStack_a8 = (undefined1 *)&local_9c;
  local_a0 = (undefined4 **)0x0;
  puStack_a4 = (undefined1 *)0x1005701;
  iStack_ac = 0x6da65e;
  FUN_006e8e70();
LAB_006da65e:
  local_a0 = (undefined4 **)0x6da665;
  FUN_00684c50();
  local_9c = param_4;
  puStack_a4 = (undefined1 *)0x0;
  puStack_a8 = (undefined1 *)0x6da675;
  local_a0 = (undefined4 **)iVar7;
  FUN_00472d90();
  local_9c = (undefined4 *)0x1;
  local_a0 = (undefined4 **)0x21;
  FUN_0040e4d0(&iStack_b0);
  FUN_006830c0(local_28[0]);
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_18 + 1;
    iVar7 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      local_9c = (undefined4 *)0x1;
      local_a0 = (undefined4 **)0x6da6ae;
      (**(code **)*local_18)();
    }
  }
  ExceptionList = local_10;
  return;
}

