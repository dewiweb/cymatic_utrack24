// rea decompile_all
// name: FUN_000596dc
// address: 0x596dc
// body: available
// range: 0x596dc-0x59f1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_000596dc(int *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,int param_6,
            int param_7,int *param_8,undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int local_90;
  uint local_8c;
  undefined1 auStack_88 [4];
  undefined4 local_84;
  undefined4 local_80;
  uint local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined1 auStack_6c [24];
  int local_54;
  undefined1 auStack_50 [20];
  undefined1 auStack_3c [8];
  int *piStack_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  
  piStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  FUN_001a2920(auStack_3c,param_1 + 0xb);
  iVar1 = FUN_001b2348(local_30);
  if (iVar1 == 0) {
    FUN_001a2938(auStack_3c);
    return 0;
  }
  FUN_00064a34(auStack_50);
  if (param_8 != (int *)0x0) {
    *param_8 = 0;
  }
  FUN_000d7ae4(&local_54,0,0,0,0);
  if (param_6 == 0) {
    local_54 = param_1[0x76];
  }
  else {
    FUN_000039e0(&local_54,param_6,4);
  }
  FUN_000fad30(auStack_6c);
  if (param_7 == 0) {
    FUN_00003b88(auStack_6c,param_1 + 0x77,0x18);
  }
  else {
    FUN_00003b88(auStack_6c,param_7,0x18);
  }
  iVar1 = FUN_001b8a38(&local_54);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x48))(param_1,param_5,auStack_50,param_9,param_10);
    iVar1 = FUN_001b237c(local_30);
    local_2c = FUN_001b237c(auStack_50);
    local_2c = iVar1 - local_2c;
    if (local_2c < 0) {
      local_2c = 0;
    }
    iVar1 = FUN_001b239c(local_30);
    local_28 = FUN_001b239c(auStack_50);
    local_28 = iVar1 - local_28;
    iVar1 = FUN_001b8a38(&local_54);
    if (iVar1 == 2) {
      local_2c = local_2c >> 1;
      local_28 = local_28 >> 1;
    }
  }
  iVar1 = FUN_001b8a7c(&local_54);
  if (iVar1 == 0) goto LAB_00059b88;
  if (param_8 == (int *)0x0) {
    FUN_000fad60(auStack_6c);
    FUN_000d7afc(&local_54);
    FUN_00064a58(auStack_50);
    FUN_001a2938(auStack_3c);
    return 0;
  }
  (**(code **)(*param_1 + 0x48))(param_1,param_5,auStack_50,param_9,param_10);
  iVar1 = FUN_001b237c(auStack_50);
  iVar2 = FUN_001b237c(local_30);
  iVar1 = iVar1 - (iVar2 - local_2c);
  iVar2 = FUN_001b8a7c(&local_54);
  if (((iVar1 < 1) && (iVar2 != 1)) && (iVar2 != 2)) goto LAB_00059b88;
  iVar3 = FUN_001b8a44(&local_54);
  if (iVar3 == 0) {
    iVar3 = FUN_001b237c(local_30);
    local_2c = FUN_001b237c(auStack_50);
    local_2c = iVar3 - local_2c;
  }
  local_70 = FUN_00057af0(param_1);
  iVar3 = FUN_001c01d8(local_70);
  *param_8 = iVar3;
  if ((*param_8 == 0) || (local_70 == 0)) {
    FUN_000fad60(auStack_6c);
    FUN_000d7afc(&local_54);
    FUN_00064a58(auStack_50);
    FUN_001a2938(auStack_3c);
    return 0;
  }
  local_74 = 0;
  switch(iVar2) {
  case 0:
    break;
  case 1:
    goto LAB_00059a74;
  case 2:
LAB_00059a74:
    local_78 = FUN_001c6b14(0x5c,DAT_00059f1c);
    if (local_78 == 0) {
      local_78 = 0;
      local_74 = local_78;
    }
    else {
      local_78 = FUN_00127f1c(local_78,local_30,local_2c,local_28,param_5,&local_54,iVar1,auStack_6c
                              ,param_9,param_10);
      local_74 = local_78;
    }
    break;
  case 3:
    goto LAB_00059ad8;
  case 4:
LAB_00059ad8:
    iVar2 = FUN_001c6b14(0x60,DAT_00059f1c);
    if (iVar2 == 0) {
      local_74 = 0;
    }
    else {
      local_74 = FUN_00127d6c(iVar2,local_30,local_2c,local_28,param_5,&local_54,iVar1,auStack_6c,
                              param_9,param_10);
    }
    break;
  case 5:
    goto LAB_000599c0;
  case 6:
LAB_000599c0:
    local_80 = FUN_001b9a74(param_7);
    local_84 = FUN_001b9a5c(param_7);
    iVar2 = FUN_00003e14(local_84,local_80);
    local_80 = FUN_001b9a74(param_7);
    local_84 = FUN_001b9a44(param_7);
    local_7c = FUN_00003e14(local_84,local_80);
    local_78 = FUN_001c6b14(0x6c,DAT_00059f1c);
    if (local_78 == 0) {
      local_78 = 0;
      local_74 = local_78;
    }
    else {
      local_8c = local_7c;
      local_90 = iVar2;
      local_78 = FUN_00131188(local_78,local_30,local_2c,local_28,param_5,&local_54,iVar1,auStack_6c
                              ,param_9,param_10);
      local_74 = local_78;
    }
  }
  if (local_74 == 0) {
    FUN_00057b88(param_1,*param_8);
    FUN_000fad60(auStack_6c);
    FUN_000d7afc(&local_54);
    FUN_00064a58(auStack_50);
    FUN_001a2938(auStack_3c);
    return 0;
  }
  FUN_001a2b08(local_70,local_74);
LAB_00059b88:
  iVar1 = FUN_001b8a88(&local_54);
  if (iVar1 == 0) {
    uVar5 = FUN_001b8a94(&local_54);
    (**(code **)(*param_1 + 0x38))(param_1,local_30,1,uVar5 ^ 1,0);
  }
  else if (iVar1 != 1) {
    if ((iVar1 == 2) || (iVar1 == 3)) {
      FUN_000ed2b8(auStack_88,0xffffffff,0,0,0,0,0xffffffff);
      piVar4 = (int *)FUN_0022bc6c(*DAT_00059f20 + 0x20);
      iVar1 = (**(code **)(*piVar4 + 0x2c))(piVar4,0x20,auStack_88,param_9,param_10,1);
      if (iVar1 == 0) {
        FUN_000fad60(auStack_6c);
        FUN_000d7afc(&local_54);
        FUN_00064a58(auStack_50);
        FUN_001a2938(auStack_3c);
        return 0;
      }
      uVar5 = FUN_001ba36c(auStack_88);
      uVar5 = uVar5 & 0xff;
      FUN_00064a5c(auStack_50,local_30);
      iVar1 = FUN_001b2390(auStack_50);
      FUN_000649bc(auStack_50,iVar1 + local_28);
      iVar1 = FUN_001b2390(auStack_50);
      iVar2 = FUN_001b23c8(local_30);
      if (iVar2 < iVar1) {
        uVar6 = FUN_001b23c8(local_30);
        FUN_000649bc(auStack_50,uVar6);
      }
      iVar1 = FUN_001b2390(auStack_50);
      FUN_000649d4(auStack_50,iVar1 + uVar5);
      iVar1 = FUN_001b23c8(auStack_50);
      iVar2 = FUN_001b23c8(local_30);
      if (iVar2 < iVar1) {
        uVar6 = FUN_001b23c8(local_30);
        FUN_000649d4(auStack_50,uVar6);
      }
      iVar1 = FUN_001b2390(auStack_50);
      iVar2 = FUN_001b2390(local_30);
      if (iVar1 < iVar2) {
        uVar6 = FUN_001b2390(local_30);
        FUN_000649bc(auStack_50,uVar6);
      }
      iVar1 = FUN_001b23c8(auStack_50);
      iVar2 = FUN_001b2390(local_30);
      if (iVar1 < iVar2) {
        uVar6 = FUN_001b2390(local_30);
        FUN_000649d4(auStack_50,uVar6);
      }
      iVar1 = FUN_001b8a88(&local_54);
      if (iVar1 == 2) {
        local_90 = FUN_001b239c(auStack_50);
        local_8c = uVar5;
        piVar4 = (int *)FUN_00247c08(&local_8c,&local_90);
        iVar1 = *piVar4;
        while (iVar1 = iVar1 + -1, -1 < iVar1) {
          FUN_0005a094(param_1,auStack_50,1);
          uVar6 = FUN_001b8a94(&local_54);
          FUN_0005897c(param_1,auStack_50,local_2c,iVar1,param_5,uVar6,param_9,param_10);
          FUN_001b9a68(auStack_6c);
          FUN_001d0130();
        }
      }
      else {
        iVar1 = -uVar5;
        while( true ) {
          iVar1 = iVar1 + 1;
          local_8c = 0;
          piVar4 = (int *)FUN_00247c08(&local_28,&local_8c);
          if (*piVar4 < iVar1) break;
          FUN_0005a094(param_1,auStack_50,0);
          local_90 = FUN_001b8a94(&local_54);
          FUN_0005897c(param_1,auStack_50,local_2c,iVar1,param_5,local_90,param_9,param_10);
          local_90 = FUN_001b9a68(auStack_6c);
          local_90 = local_90 * 5;
          FUN_001d0130();
        }
      }
    }
    goto LAB_00059eec;
  }
  uVar6 = FUN_001b8a94(&local_54);
  FUN_0005897c(param_1,local_30,local_2c,local_28,param_5,uVar6,param_9,0xffffffff);
LAB_00059eec:
  FUN_000fad60(auStack_6c);
  FUN_000d7afc(&local_54);
  FUN_00064a58(auStack_50);
  FUN_001a2938(auStack_3c);
  return 1;
}

