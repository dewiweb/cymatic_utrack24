// rea decompile_all
// name: FUN_001bc7a8
// address: 0x1bc7a8
// body: available
// range: 0x1bc7a8-0x1bcac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001bc7a8(int *param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,
                 int *param_7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int ***pppiVar6;
  int *local_70;
  int *local_6c;
  int local_68;
  int ***local_64;
  int *local_60;
  int local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  int *local_44 [2];
  int **local_3c;
  int *local_38;
  int local_34;
  int **local_2c;
  int *piStack_24;
  int iStack_20;
  uint local_1c;
  int local_18;
  
  iVar2 = 0;
  piStack_24 = param_1;
  iStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  if (0 < param_6) {
    do {
      FUN_00002898(&DAT_001bcac8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_6);
  }
  if (param_2 != 0) {
    uVar1 = (**(code **)(*param_1 + 0xc))(param_1);
    iVar2 = FUN_000d6330(&local_6c,uVar1);
    iVar2 = *(int *)(iVar2 + 8);
    if (iVar2 == 0) {
      iVar2 = *DAT_001bcacc;
    }
    FUN_00002898(s_d___s_001bcad0,iVar2);
    if (local_64 != (int ***)0x0) {
      if ((local_5c != 0) && (local_5c = local_5c + -1, local_5c == 0)) {
        (**(code **)(*local_60 + 0x20))(local_60,&local_64);
      }
      (**(code **)(*local_6c + 0x10))(local_6c,&local_64);
    }
    if (local_64 != (int ***)0x0) {
      if (local_5c != 0) {
        local_5c = 0;
        (**(code **)(*local_60 + 0x20))(local_60,&local_64);
      }
      (**(code **)(*local_60 + 0x28))(local_60,&local_64);
    }
    FUN_00201f54(&local_6c);
  }
  if (local_18 == 0) {
    uVar1 = FUN_00201f28(&local_38,0);
    FUN_001aaefc(&local_50,uVar1);
    FUN_00201f54(&local_38);
    iVar4 = 0;
    iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    if (0 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x14))(param_1,iVar4,&local_50);
        iVar2 = FUN_000d6330(&local_70,&local_50);
        iVar2 = *(int *)(iVar2 + 8);
        if (iVar2 == 0) {
          iVar2 = *DAT_001bcacc;
        }
        FUN_00002898(s_d___s_001bcad8,iVar2);
        local_3c = &local_70;
        if (local_68 != 0) {
          if ((local_60 != (int *)0x0) &&
             (local_60 = (int *)((int)local_60 + -1), local_60 == (int *)0x0)) {
            (*(code *)(*local_64)[8])(local_64,&local_68);
          }
          (**(code **)(*local_70 + 0x10))(local_70,&local_68);
        }
        if (local_68 != 0) {
          if (local_60 != (int *)0x0) {
            local_60 = (int *)0x0;
            (*(code *)(*local_64)[8])(local_64,&local_68);
          }
          (*(code *)(*local_64)[10])(local_64,&local_68);
        }
        FUN_00201f54(local_3c);
        iVar4 = iVar4 + 1;
        iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
      } while (iVar4 < iVar2);
    }
    FUN_001aafac(&local_50);
  }
  uVar3 = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  param_6 = param_6 + 2;
  if (0 < iVar2) {
    local_64 = &local_3c;
    local_48 = param_5 | local_1c;
    do {
      iVar2 = 0;
      if (0 < param_6) {
        do {
          FUN_00002898(&DAT_001bcac8);
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_6);
      }
      FUN_00002898(&DAT_001bcae4);
      local_50 = 0;
      local_4c = 0;
      FUN_001aaefc(&local_60,&local_50);
      FUN_00201f54(&local_50);
      iVar2 = (**(code **)(*param_1 + 0x24))(param_1,uVar3,&local_60);
      if (iVar2 != 0) {
        iVar2 = FUN_000d6330(local_44,&local_60);
        iVar2 = *(int *)(iVar2 + 8);
        if (iVar2 == 0) {
          iVar2 = *DAT_001bcacc;
        }
        FUN_00002898(&DAT_001bcae8,iVar2);
        local_2c = local_44;
        if (local_3c != (int **)0x0) {
          pppiVar6 = local_64;
          if ((local_34 != 0) && (local_34 = local_34 + -1, local_34 == 0)) {
            local_34 = 0;
            (**(code **)(*local_38 + 0x20))();
          }
          (**(code **)(*local_44[0] + 0x10))(local_44[0],pppiVar6);
        }
        if (local_3c != (int **)0x0) {
          pppiVar6 = local_64;
          if (local_34 != 0) {
            local_34 = 0;
            (**(code **)(*local_38 + 0x20))(local_38,local_64);
          }
          (**(code **)(*local_38 + 0x28))(local_38,pppiVar6);
        }
        FUN_00201f54(local_2c);
      }
      if (((int)uVar3 < 0) || ((uint)(param_1[0x13] - param_1[0x12] >> 2) <= uVar3)) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = *(int **)(*(int *)(param_1[0x12] + uVar3 * 4) + 8);
      }
      if (local_1c == 0) {
        if (piVar5 != (int *)0x0) goto LAB_001bca40;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x1c))(param_1,uVar3);
        if (iVar2 != 0) {
          FUN_00002898(s_type___s__001bcaec,*(undefined4 *)(iVar2 + 4));
        }
        if (piVar5 == (int *)0x0) {
          uVar1 = (**(code **)(*param_1 + 0x28))(param_1,uVar3);
          FUN_00002898(s__NO_SysData___d_Proxies__001bcb18,uVar1);
        }
        else {
          local_70 = (int *)(**(code **)(*piVar5 + 0x2c))(piVar5);
          uVar1 = (**(code **)(*param_1 + 0x28))(param_1,uVar3);
          FUN_00002898(s__SysData___d_Proxies__CM__s__001bcaf8,uVar1,local_70);
LAB_001bca40:
          if ((local_48 != 0) && (iVar2 = (**(code **)(*piVar5 + 0x20))(piVar5), iVar2 != 0)) {
            FUN_00002898(s___val__001bcb34);
            (**(code **)(*piVar5 + 0x28))(piVar5,param_7);
          }
        }
      }
      FUN_00002898(&DAT_001bcb3c);
      FUN_001aafac(&local_60);
      uVar3 = uVar3 + 1;
      iVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    } while ((int)uVar3 < iVar2);
  }
  if (local_18 != 0) {
    iVar4 = 0;
    iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    if (0 < iVar2) {
      do {
        piVar5 = (int *)(**(code **)(*param_1 + 0x44))(param_1,iVar4);
        if (piVar5 != (int *)0x0) {
          local_70 = param_7;
          (**(code **)(*piVar5 + 0x38))(piVar5,1,local_1c,local_18,param_5,param_6);
        }
        iVar4 = iVar4 + 1;
        iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
      } while (iVar4 < iVar2);
    }
  }
  return;
}

