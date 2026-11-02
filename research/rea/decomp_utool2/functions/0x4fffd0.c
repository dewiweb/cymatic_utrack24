// rea decompile_all
// name: FUN_004fffd0
// address: 0x4fffd0
// body: available
// range: 0x4fffd0-0x50036b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fffd0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 extraout_EDX;
  int iVar4;
  undefined1 auStack_6c [4];
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  float *pfStack_5c;
  undefined4 **ppuStack_58;
  undefined4 *local_54;
  uint uStack_50;
  float local_30;
  float local_2c;
  int local_28;
  float local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_007072f0;
  local_10 = ExceptionList;
  uStack_50 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_54 = (undefined4 *)DAT_00c7ebbc;
  ppuStack_58 = (undefined4 **)0x50000e;
  FUN_00684c50();
  if (*(uint *)(in_ECX + 0x80) < *(uint *)(*(int *)(in_ECX + 0x17c) + 0x374)) {
    local_54 = (undefined4 *)0x500030;
    FUN_0057f4a0();
    local_54 = &param_1;
    ppuStack_58 = (undefined4 **)0x500046;
    local_8 = extraout_EDX;
    uVar3 = FUN_00683640();
    local_8 = CONCAT31(local_8._1_3_,1);
    if (*(char *)(puVar2 + 2) != '\0') {
      *(undefined1 *)(puVar2 + 2) = 0;
      local_54 = (undefined4 *)0x50005d;
      (**(code **)(*(int *)*puVar2 + 0x34))();
    }
    ppuStack_58 = (undefined4 **)0x500065;
    local_54 = (undefined4 *)uVar3;
    (**(code **)(*(int *)*puVar2 + 0x68))();
    if (param_1 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = param_1 + 1;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        ppuStack_58 = (undefined4 **)0x1;
        pfStack_5c = (float *)0x500084;
        (**(code **)*param_1)();
      }
    }
    local_8 = 0xffffffff;
    if (local_14 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = local_14 + 1;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        ppuStack_58 = (undefined4 **)0x1;
        pfStack_5c = (float *)0x5000a7;
        (**(code **)*local_14)();
      }
    }
    local_30 = *(float *)(in_ECX + 0x220) + 2.0;
    local_28 = *(int *)(in_ECX + 0x224);
    local_2c = ((float)*(int *)(in_ECX + 0x1c) - *(float *)(in_ECX + 0x248)) * 0.5;
    ppuStack_58 = (undefined4 **)&local_30;
    local_24 = (float)*(int *)(in_ECX + 0x1c);
    pfStack_5c = (float *)puVar2;
    iStack_60 = 0x500104;
    FUN_00684760();
    if (**(char **)(in_ECX + 0x260) == '\0') {
      local_14 = (undefined4 *)(int)*(float *)(in_ECX + 0x228);
      param_1 = (undefined4 *)(int)*(float *)(in_ECX + 0x22c);
      if (*(char *)(in_ECX + 600) != '\0') {
        iVar4 = *(int *)(in_ECX + 0x1c) + -6;
        pfStack_5c = (float *)(float)iVar4;
        ppuStack_58 = (undefined4 **)DAT_00c7ebbc;
        iStack_60 = 0x500170;
        FUN_00561df0();
        local_14 = (undefined4 *)((int)local_14 + iVar4);
        param_1 = (undefined4 *)((int)param_1 - iVar4);
      }
      ppuStack_58 = (undefined4 **)0x500184;
      FUN_0057f440();
      local_8 = 2;
      ppuStack_58 = &local_1c;
      pfStack_5c = (float *)0x5001a6;
      local_18 = FUN_00683640();
      local_8 = CONCAT31(local_8._1_3_,3);
      if (*(char *)(puVar2 + 2) != '\0') {
        *(undefined1 *)(puVar2 + 2) = 0;
        ppuStack_58 = (undefined4 **)0x5001be;
        (**(code **)(*(int *)*puVar2 + 0x34))();
      }
      ppuStack_58 = (undefined4 **)local_18;
      pfStack_5c = (float *)0x5001c8;
      (**(code **)(*(int *)*puVar2 + 0x68))();
      if (local_1c != (undefined4 *)0x0) {
        LOCK();
        piVar1 = local_1c + 1;
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          ppuStack_58 = (undefined4 **)0x1;
          pfStack_5c = (float *)0x5001e4;
          (**(code **)*local_1c)();
        }
      }
      local_8 = 0xffffffff;
      if (local_20 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = local_20 + 1;
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          ppuStack_58 = (undefined4 **)0x1;
          pfStack_5c = (float *)0x500205;
          (**(code **)*local_20)();
        }
      }
      ppuStack_58 = (undefined4 **)(*(int *)(in_ECX + 0x1c) / 2);
      pfStack_5c = (float *)param_1;
      iStack_60 = 0;
      uStack_64 = 0x50021e;
      FUN_00472d90();
      ppuStack_58 = (undefined4 **)0x1;
      pfStack_5c = (float *)0x24;
      FUN_0040e4d0(auStack_6c);
      FUN_006830c0(in_ECX + 0x250);
      ppuStack_58 = (undefined4 **)(*(int *)(in_ECX + 0x1c) / 2);
      pfStack_5c = (float *)param_1;
      iStack_60 = *(int *)(in_ECX + 0x1c) / 2;
      uStack_64 = 0x500263;
      FUN_00472d90();
      ppuStack_58 = (undefined4 **)0x1;
      pfStack_5c = (float *)0x24;
      FUN_0040e4d0(auStack_6c);
      FUN_006830c0(in_ECX + 0x254);
      pfStack_5c = (float *)(int)*(float *)(in_ECX + 0x234);
      ppuStack_58 = *(undefined4 ***)(in_ECX + 0x1c);
      iStack_60 = 0;
      uStack_64 = 0x5002a6;
      FUN_00472d90();
      ppuStack_58 = (undefined4 **)0x1;
      pfStack_5c = (float *)0x24;
      FUN_0040e4d0(auStack_6c);
      FUN_006830c0(in_ECX + 0x25c);
    }
    else {
      local_30 = (float)(int)*(float *)(in_ECX + 0x228);
      ppuStack_58 = (undefined4 **)0x1;
      local_2c = 0.0;
      local_28 = (int)*(float *)(in_ECX + 0x22c);
      local_24 = *(float *)(in_ECX + 0x1c);
      pfStack_5c = &local_30;
      iStack_60 = 0x5002fd;
      FUN_0057f1c0();
    }
    if (*(uint *)(in_ECX + 0x80) < *(uint *)(*(int *)(in_ECX + 0x17c) + 0x374)) {
      iVar4 = *(int *)(*(int *)(*(int *)(in_ECX + 0x17c) + 0x36c) + *(uint *)(in_ECX + 0x80) * 4);
    }
    else {
      iVar4 = 0;
    }
    if (*(char *)(iVar4 + 0x15) != '\0') {
      ppuStack_58 = (undefined4 **)DAT_00c7ebb0;
      pfStack_5c = (float *)0x500338;
      FUN_00684c50();
      ppuStack_58 = (undefined4 **)0x0;
      pfStack_5c = (float *)0x2;
      iStack_60 = *(undefined4 *)(in_ECX + 0x18);
      iVar4 = *(int *)*puVar2;
      uStack_64 = 0;
      uStack_68 = 0x50034f;
      pfStack_5c = (float *)FUN_00472d90();
      iStack_60 = 0x500358;
      (**(code **)(iVar4 + 0x54))();
    }
  }
  ExceptionList = local_10;
  return;
}

