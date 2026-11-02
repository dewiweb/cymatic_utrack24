// rea decompile_all
// name: FUN_001712b4
// address: 0x1712b4
// body: available
// range: 0x1712b4-0x17174d inclusive
// range: 0x17178c-0x171825 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001712b4(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_68;
  int *local_64;
  undefined4 local_60;
  char *local_5c;
  int local_58;
  int local_54;
  int local_50;
  char *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int iStack_1c;
  int local_18;
  
  local_38 = 0;
  local_50 = 0;
  local_34 = 0;
  local_54 = 0;
  if ((((param_2 == 0) || (*(int *)(param_2 + 0x7c) == 0)) ||
      (iVar2 = *(int *)(*(int *)(param_2 + 0x7c) + 4), iVar2 == 0)) || (*(int *)(iVar2 + 4) == 0)) {
    return -2;
  }
  local_48 = param_2 + 0x44;
  local_30 = param_1 + 0x80;
  local_3c = param_2 + 0x94;
  local_20 = param_1;
  iStack_1c = param_2;
  if (param_3 == 0) {
    local_28 = 0;
    local_18 = 0;
    do {
      local_4c = (char *)(local_28 * 0x8c + local_20 + DAT_00171750);
      if ((*local_4c != '\0') &&
         (iVar2 = FUN_001a6f04(local_4c,**(undefined4 **)(param_2 + 0x4c)), iVar2 == 0)) {
        local_60 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x7c) + 4) + 4);
        iVar7 = *(int *)(*(int *)(local_4c + 0x40) + 4);
        iVar2 = 0;
        local_2c = local_30;
        for (iVar5 = *(int *)(local_30 + 0x30); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x100)) {
          iVar3 = FUN_001a6f04(iVar5,local_60);
          iVar6 = iVar2;
          if (((iVar3 == 0) && (iVar6 = iVar5, iVar5 != -200)) && (*(char *)(iVar5 + 200) != '\0'))
          {
            if (iVar7 == 0) goto LAB_0017142e;
            local_58 = iVar5 + 200;
            iVar6 = FUN_001a6f04(iVar7);
            if (iVar6 == 0) goto LAB_0017142e;
            iVar6 = FUN_000034d0(iVar7);
            iVar3 = FUN_001a7022(iVar7 + 1,local_58,iVar6 + -2);
            iVar6 = iVar2;
            if (iVar3 == 0) goto LAB_0017142e;
          }
          iVar2 = iVar6;
        }
        for (iVar6 = *(int *)(local_2c + 0x30); iVar5 = iVar2, iVar6 != 0;
            iVar6 = *(int *)(iVar6 + 0x100)) {
          if (((iVar6 != -200) && (*(char *)(iVar6 + 200) != '\0')) || (iVar3 = iVar6, iVar2 != 0))
          {
            iVar5 = iVar6;
            if (iVar7 == 0) break;
            local_5c = (char *)(iVar6 + 200);
            iVar3 = FUN_001a6f04(iVar7);
            if (iVar3 == 0) break;
            iVar3 = FUN_000034d0(iVar7);
            iVar4 = FUN_001a7022(iVar7 + 1,local_5c,iVar3 + -2);
            iVar3 = iVar2;
            if (iVar4 == 0) break;
          }
          iVar2 = iVar3;
        }
LAB_0017142e:
        if (iVar5 == 0) {
          return -6;
        }
        iVar2 = FUN_001a82fc(*(undefined4 *)(param_2 + 4),&local_44);
        pcVar1 = local_4c;
        if (iVar2 != 0) {
          return iVar2;
        }
        local_64 = &local_38;
        local_58 = *(int *)(local_4c + 0x84) + 1;
        *(int *)(local_4c + 0x84) = local_58;
        local_60 = *(undefined4 *)(param_2 + 8);
        local_68 = iVar5 + 0x96;
        local_5c = local_4c + 0x44;
        iVar2 = FUN_001729d4(*(undefined4 *)(local_4c + 0x40),local_44,iVar5 + 0x32,iVar5 + 100);
        if (local_44 != 0) {
          if ((code *)*DAT_00171754 == entry) {
            FUN_0018a280();
          }
          else {
            (*(code *)*DAT_00171754)();
          }
        }
        if (iVar2 != 0) {
          return iVar2;
        }
        if (local_38 != 0) {
          iVar2 = local_3c;
          if (*(int *)(pcVar1 + 0x88) == 0x191) {
            iVar2 = local_48;
          }
          FUN_001a4a80(iVar2,local_38,DAT_00171758);
          FUN_001a52cc(param_2);
        }
      }
      local_28 = local_28 + 1;
    } while (local_28 < 100);
  }
  else {
    local_2c = 0;
    local_18 = param_3;
    FUN_001a56c8(param_3,0,&local_50);
    FUN_001a5566(local_18,0,&local_54);
    if (local_54 == 0 && local_50 == 0) {
      return -5;
    }
    local_28 = param_2 + 0x80;
    while (local_50 != 0) {
      local_58 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x7c) + 4) + 4);
      iVar7 = *(int *)(local_50 + 4);
      iVar2 = 0;
      local_40 = local_30;
      for (iVar5 = *(int *)(local_30 + 0x30); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x100)) {
        iVar3 = FUN_001a6f04(iVar5,local_58);
        iVar6 = iVar2;
        if (((iVar3 == 0) && (iVar6 = iVar5, iVar5 != -200)) && (*(char *)(iVar5 + 200) != '\0')) {
          if (iVar7 == 0) goto LAB_0017156a;
          local_5c = (char *)(iVar5 + 200);
          iVar6 = FUN_001a6f04(iVar7);
          if (iVar6 == 0) goto LAB_0017156a;
          iVar6 = FUN_000034d0(iVar7);
          iVar3 = FUN_001a7022(iVar7 + 1,local_5c,iVar6 + -2);
          iVar6 = iVar2;
          if (iVar3 == 0) goto LAB_0017156a;
        }
        iVar2 = iVar6;
      }
      for (iVar6 = *(int *)(local_40 + 0x30); iVar5 = iVar2, iVar6 != 0;
          iVar6 = *(int *)(iVar6 + 0x100)) {
        if (((iVar6 != -200) && (*(char *)(iVar6 + 200) != '\0')) || (iVar3 = iVar6, iVar2 != 0)) {
          iVar5 = iVar6;
          if (iVar7 == 0) break;
          local_5c = (char *)(iVar6 + 200);
          iVar3 = FUN_001a6f04(iVar7);
          if (iVar3 == 0) break;
          iVar3 = FUN_000034d0(iVar7);
          iVar4 = FUN_001a7022(iVar7 + 1,local_5c,iVar3 + -2);
          iVar3 = iVar2;
          if (iVar4 == 0) break;
        }
        iVar2 = iVar3;
      }
LAB_0017156a:
      if (iVar5 == 0) {
        return -6;
      }
      iVar2 = FUN_001a82fc(*(undefined4 *)(param_2 + 4),&local_44);
      if (iVar2 != 0) {
        return iVar2;
      }
      local_60 = *(undefined4 *)(param_2 + 8);
      local_64 = &local_38;
      local_5c = s_0a4f113b_0017175c;
      local_58 = 1;
      local_68 = iVar5 + 0x96;
      iVar2 = FUN_001729d4(local_50,local_44,iVar5 + 0x32,iVar5 + 100);
      if (local_44 != 0) {
        if ((code *)*DAT_00171754 == entry) {
          FUN_0018a280();
        }
        else {
          (*(code *)*DAT_00171754)();
        }
      }
      if (iVar2 != 0) {
        return iVar2;
      }
      if (local_38 != 0) {
        FUN_001a4a80(local_48,local_38,0xffffffff);
        FUN_001a52cc(param_2);
      }
      iVar2 = FUN_001a6f04(*(undefined4 *)(param_2 + 8),s_REGISTER_00171768);
      if (((iVar2 == 0) ||
          (iVar2 = FUN_001a6f04(*(undefined4 *)(param_2 + 8),s_INVITE_00171774), iVar2 == 0)) ||
         (iVar2 = FUN_001a6f04(*(undefined4 *)(param_2 + 8),s_SUBSCRIBE_0017177c), iVar2 == 0)) {
LAB_00171610:
        FUN_0017928c(local_20,**(undefined4 **)(param_2 + 0x4c),local_50,0x191);
      }
      else {
        local_68 = 0;
        FUN_001a7c44(*(int *)(local_28 + 0x2c) + 8,&DAT_00171788,&local_68);
        if (local_68 != 0) goto LAB_00171610;
      }
      local_2c = local_2c + 1;
      FUN_001a56c8(local_18,local_2c,&local_50);
    }
    local_2c = 0;
    local_50 = 0;
    local_48 = local_30;
    while (local_54 != 0) {
      local_58 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x7c) + 4) + 4);
      iVar7 = *(int *)(local_54 + 4);
      iVar2 = 0;
      local_30 = local_48;
      for (iVar5 = *(int *)(local_48 + 0x30); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x100)) {
        iVar3 = FUN_001a6f04(iVar5,local_58);
        iVar6 = iVar2;
        if (((iVar3 == 0) && (iVar6 = iVar5, iVar5 != -200)) && (*(char *)(iVar5 + 200) != '\0')) {
          if (iVar7 == 0) goto LAB_00171702;
          local_64 = (int *)(iVar5 + 200);
          iVar6 = FUN_001a6f04(iVar7);
          if (iVar6 == 0) goto LAB_00171702;
          iVar6 = FUN_000034d0(iVar7);
          iVar3 = FUN_001a7022(iVar7 + 1,local_64,iVar6 + -2);
          iVar6 = iVar2;
          if (iVar3 == 0) goto LAB_00171702;
        }
        iVar2 = iVar6;
      }
      for (iVar6 = *(int *)(local_48 + 0x30); iVar5 = iVar2, iVar6 != 0;
          iVar6 = *(int *)(iVar6 + 0x100)) {
        if (((iVar6 != -200) && (*(char *)(iVar6 + 200) != '\0')) || (iVar3 = iVar6, iVar2 != 0)) {
          iVar5 = iVar6;
          if (iVar7 == 0) break;
          local_44 = iVar6 + 200;
          iVar3 = FUN_001a6f04(iVar7);
          if (iVar3 == 0) break;
          iVar3 = FUN_000034d0(iVar7);
          iVar4 = FUN_001a7022(iVar7 + 1,local_44,iVar3 + -2);
          iVar3 = iVar2;
          if (iVar4 == 0) break;
        }
        iVar2 = iVar3;
      }
LAB_00171702:
      if (iVar5 == 0) {
        return -6;
      }
      iVar2 = FUN_001a82fc(*(undefined4 *)(param_2 + 4),&local_4c);
      if (iVar2 != 0) {
        return iVar2;
      }
      local_60 = *(undefined4 *)(param_2 + 8);
      local_64 = &local_34;
      local_5c = s_0a4f113b_0017175c;
      local_58 = 1;
      local_68 = iVar5 + 0x96;
      iVar2 = FUN_001729d4(local_54,local_4c,iVar5 + 0x32,iVar5 + 100);
      if (local_4c != (char *)0x0) {
        if ((code *)*DAT_00171754 == entry) {
          FUN_0018a280();
        }
        else {
          (*(code *)*DAT_00171754)();
        }
      }
      if (iVar2 != 0) {
        return iVar2;
      }
      if (local_34 != 0) {
        FUN_001a4a80(local_3c,local_34,0xffffffff);
        FUN_001a52cc(param_2);
      }
      iVar2 = FUN_001a6f04(*(undefined4 *)(param_2 + 8),s_REGISTER_00171828);
      if (((iVar2 == 0) ||
          (iVar2 = FUN_001a6f04(*(undefined4 *)(param_2 + 8),s_INVITE_00171834), iVar2 == 0)) ||
         (iVar2 = FUN_001a6f04(*(undefined4 *)(param_2 + 8),s_SUBSCRIBE_0017183c), iVar2 == 0)) {
LAB_001717f8:
        FUN_0017928c(local_20,**(undefined4 **)(param_2 + 0x4c),local_54,0x197);
      }
      else {
        local_68 = 0;
        FUN_001a7c44(*(int *)(local_28 + 0x2c) + 8,&DAT_00171848,&local_68);
        if (local_68 != 0) goto LAB_001717f8;
      }
      local_2c = local_2c + 1;
      FUN_001a5566(local_18,local_2c,&local_54);
      local_48 = local_30;
    }
  }
  return 0;
}

