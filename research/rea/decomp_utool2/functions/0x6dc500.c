// rea decompile_all
// name: FUN_006dc500
// address: 0x6dc500
// body: available
// range: 0x6dc500-0x6dc9e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006dc500(undefined4 *param_1,int param_2,undefined4 **param_3,char param_4,char param_5,
                 char param_6,char param_7,undefined4 param_8,undefined4 *param_9,int *param_10,
                 undefined4 *param_11)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int in_ECX;
  undefined4 **extraout_ECX;
  undefined4 **ppuVar5;
  float fVar6;
  float fStack_98;
  undefined1 *puStack_94;
  int iStack_90;
  undefined4 *puStack_8c;
  void **ppvStack_88;
  undefined4 **local_80;
  uint uStack_7c;
  undefined1 local_70 [8];
  undefined1 local_68 [16];
  void *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_3c;
  undefined4 local_38;
  int iStack_34;
  float fStack_30;
  undefined1 *puStack_2c;
  undefined4 local_28;
  int iStack_24;
  float fStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727c2b;
  local_10 = ExceptionList;
  uStack_7c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((char)param_3 == '\0') {
    local_80 = (undefined4 **)0x1000600;
    ppvStack_88 = (void **)0x6dc5db;
    FUN_006ab460();
    ppuVar5 = param_3;
    if (param_11 != (undefined4 *)0x0) {
      ppuVar5 = (undefined4 **)*param_11;
    }
    local_80 = (undefined4 **)0x1;
    ppvStack_88 = (void **)0x6dc5f7;
    FUN_00418db0();
    local_80 = ppuVar5;
    if (param_5 != '\0') {
      puStack_8c = (undefined4 *)0x6dc60d;
      ppvStack_88 = &local_80;
      FUN_006ab460();
      FUN_00684c50();
      local_80 = (undefined4 **)0x0;
      local_38 = local_28;
      iStack_34 = iStack_24;
      fStack_30 = fStack_20;
      puStack_2c = puStack_1c;
      ppvStack_88 = (void **)0x6dc62c;
      (**(code **)(*(int *)*param_1 + 0x54))();
      ppvStack_88 = &local_80;
      puStack_8c = (undefined4 *)0x6dc63c;
      local_80 = extraout_ECX;
      FUN_006ab460();
    }
    FUN_00684c50();
    if (param_4 == '\0') {
      if (*(char *)(param_1 + 2) != '\0') {
        *(undefined1 *)(param_1 + 2) = 0;
        local_80 = (undefined4 **)0x6dc661;
        (**(code **)(*(int *)*param_1 + 0x34))();
      }
      local_80 = (undefined4 **)0x3e99999a;
      (**(code **)(*(int *)*param_1 + 0x48))();
    }
    local_80 = &local_14;
    FUN_006dc390();
    local_8 = 0;
    fVar6 = (float)local_14[5];
    if ((float)*(int *)(param_2 + 0xc) / 1.3 < fVar6) {
      local_80 = (undefined4 **)0x6dc6ab;
      FUN_00680a80();
    }
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      local_80 = (undefined4 **)0x6dc6bc;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    local_80 = &local_14;
    (**(code **)(*(int *)*param_1 + 0x68))();
    ppvStack_88 = (void **)0x3;
    puStack_8c = &uStack_48;
    iStack_90 = (int)((int)puStack_1c * 5 + ((int)puStack_1c * 5 >> 0x1f & 3U)) >> 2;
    puStack_94 = local_68;
    fStack_98 = 1.008143e-38;
    FUN_0040dd10();
    iStack_90 = 0x6dc6f4;
    FUN_00418db0();
    ppvStack_88 = (void **)0x6dc6fb;
    FUN_0040e4d0();
    if (param_10 == (int *)0x0) {
      if (param_6 != '\0') {
        ppvStack_88 = &local_58;
        puStack_8c = (undefined4 *)0x6dc75c;
        (**(code **)(*(int *)(in_ECX + -0x20) + 0x30))();
        local_8 = CONCAT31(local_8._1_3_,1);
        iStack_90 = 1;
        puStack_8c = (undefined4 *)0x24;
        puStack_94 = puStack_2c;
        fStack_98 = fStack_30;
        fVar6 = fStack_30;
        FUN_0067fe30(local_70);
        puStack_8c = (undefined4 *)0x6dc7a2;
        cVar3 = (**(code **)(*(int *)*param_1 + 0x30))();
        if ((cVar3 == '\0') && (cVar3 = FUN_00682580(), cVar3 == '\0')) {
          ppvStack_88 = &local_58;
          puStack_8c = (undefined4 *)0x6dc7c1;
          (**(code **)(*(int *)*param_1 + 0x5c))();
        }
        local_8 = local_8 & 0xffffff00;
        ppvStack_88 = (void **)0x6dc7cd;
        FID_conflict__free(local_58);
      }
    }
    else {
      param_3 = (undefined4 **)&DAT_00000124;
      ppvStack_88 = (void **)local_68;
      puStack_8c = (undefined4 *)0x6dc71b;
      ppvStack_88 = (void **)(**(code **)(*param_10 + 0xb8))();
      puStack_8c = &local_50;
      iStack_90 = 0x6dc728;
      FUN_00677570();
      ppvStack_88 = (void **)param_1;
      puStack_8c = (undefined4 *)0x6dc73a;
      FUN_006c5e40();
    }
    if (param_7 != '\0') {
      ppvStack_88 = (void **)0x6dc7e9;
      FUN_006dc390();
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_006823f0();
      fVar6 = fVar6 * 0.6;
      if (param_3 != (undefined4 **)0x0) {
        LOCK();
        ppuVar5 = param_3 + 1;
        puVar1 = *ppuVar5;
        *ppuVar5 = (undefined4 *)((int)*ppuVar5 + -1);
        UNLOCK();
        if (puVar1 == (undefined4 *)0x1) {
          ppvStack_88 = (void **)0x6dc820;
          (*(code *)**param_3)();
        }
      }
      ppvStack_88 = (void **)local_68;
      puStack_8c = (undefined4 *)0x6dc836;
      piVar4 = (int *)FUN_0040dcd0();
      local_58 = (void *)0x0;
      local_54 = 0;
      local_50 = 0;
      local_3c = 1;
      local_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      local_8._0_1_ = 3;
      puStack_8c = (undefined4 *)(fVar6 * 0.5 + (float)((int)puStack_1c / 2 + iStack_24));
      ppvStack_88 = (void **)(fVar6 * 0.6 + (float)*piVar4);
      iStack_90 = 0x6dc8b4;
      FUN_006824f0();
      ppvStack_88 = (void **)0x6dc8bf;
      FUN_006839e0();
      local_8 = (uint)local_8._1_3_ << 8;
      ppvStack_88 = (void **)0x6dc8cb;
      FID_conflict__free(local_58);
    }
    ppvStack_88 = (void **)local_68;
    puStack_8c = (undefined4 *)0x6dc8dc;
    FUN_0040dcd0();
    iStack_90 = local_28;
    puStack_8c = (undefined4 *)iStack_24;
    puStack_94 = (undefined1 *)0x0;
    ppvStack_88 = (void **)fStack_20;
    fStack_98 = 1.4013e-45;
    FUN_00682290(param_8,0x21);
    puVar1 = local_14;
    if (*(char *)*param_9 != '\0') {
      if (local_14 != (undefined4 *)0x0) {
        LOCK();
        local_14[1] = local_14[1] + 1;
        UNLOCK();
      }
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_00680a80();
      FUN_00643b30();
      if (*(char *)(param_1 + 2) != '\0') {
        *(undefined1 *)(param_1 + 2) = 0;
        (**(code **)(*(int *)*param_1 + 0x34))();
      }
      ppvStack_88 = (void **)0x6dc979;
      (**(code **)(*(int *)*param_1 + 0x68))();
      local_38 = local_28;
      iStack_34 = iStack_24;
      fStack_30 = fStack_20;
      puStack_2c = puStack_1c;
      ppvStack_88 = (void **)0x22;
      FUN_0040e4d0(&fStack_98);
      FUN_006830c0(param_9);
      if (puVar1 != (undefined4 *)0x0) {
        LOCK();
        piVar4 = puVar1 + 1;
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          ppvStack_88 = (void **)0x6dc9b9;
          (**(code **)*puVar1)();
        }
      }
    }
    if (local_14 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = local_14 + 1;
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        ppvStack_88 = (void **)0x6dc9ce;
        (**(code **)*local_14)();
      }
    }
    ExceptionList = local_10;
    return;
  }
  ppvStack_88 = (void **)&local_38;
  local_80 = (undefined4 **)0x0;
  puStack_8c = (undefined4 *)0x6dc546;
  FUN_00418f80();
  local_80 = (undefined4 **)((int)puStack_2c / 2 + -1);
  ppvStack_88 = (void **)0x6dc55c;
  FUN_0040dd60();
  local_80 = (undefined4 **)0x33000000;
  FUN_00684c50();
  local_80 = (undefined4 **)0x1;
  ppvStack_88 = (void **)0x6dc57d;
  FUN_0040dd60();
  local_80 = (undefined4 **)0x0;
  ppvStack_88 = (void **)0x6dc58a;
  (**(code **)(*(int *)*param_1 + 0x54))();
  ppvStack_88 = (void **)0x66ffffff;
  puStack_8c = (undefined4 *)0x6dc59a;
  FUN_00684c50();
  ppvStack_88 = (void **)0x1;
  puStack_8c = &local_28;
  iStack_90 = 0x6dc5a8;
  FUN_0040dd60();
  puStack_8c = &local_28;
  ppvStack_88 = (void **)0x0;
  iStack_90 = 0x6dc5b5;
  (**(code **)(*(int *)*param_1 + 0x54))();
  ExceptionList = local_10;
  return;
}

