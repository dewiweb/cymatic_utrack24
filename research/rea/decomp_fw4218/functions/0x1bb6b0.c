// rea decompile_all
// name: FUN_001bb6b0
// address: 0x1bb6b0
// body: available
// range: 0x1bb6b0-0x1bba67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001bb6b0(int *param_1,int param_2,uint param_3,int param_4,int *param_5,int param_6,
                 int param_7)

{
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *local_e0;
  int *local_dc;
  int local_d8;
  int *local_d4;
  int **local_d0 [6];
  undefined1 auStack_b8 [20];
  undefined1 *local_a4;
  int local_a0;
  int local_9c;
  undefined1 *local_98;
  int *local_90;
  int local_8c;
  int *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int *local_70;
  int *local_6c [2];
  int local_64;
  int *local_60;
  int local_5c;
  uint local_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [12];
  int *piStack_24;
  int iStack_20;
  uint local_1c;
  int local_18;
  
  iVar5 = 0;
  piStack_24 = param_1;
  iStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  if (0 < param_6) {
    do {
      FUN_00002898(&DAT_001bba68);
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_6);
  }
  if (param_2 != 0) {
    uVar1 = (**(code **)(*param_1 + 0xc))(param_1);
    iVar5 = FUN_000d6330(&local_e0,uVar1);
    iVar5 = *(int *)(iVar5 + 8);
    if (iVar5 == 0) {
      iVar5 = *DAT_001bba6c;
    }
    FUN_00002898(s_d___s_001bba70,iVar5);
    if (local_d8 != 0) {
      if ((local_d0[0] != (int **)0x0) &&
         (local_d0[0] = (int **)((int)local_d0[0] + -1), local_d0[0] == (int **)0x0)) {
        (**(code **)(*local_d4 + 0x20))(local_d4,&local_d8);
      }
      (**(code **)(*local_e0 + 0x10))(local_e0,&local_d8);
    }
    if (local_d8 != 0) {
      if (local_d0[0] != (int **)0x0) {
        local_d0[0] = (int **)0x0;
        (**(code **)(*local_d4 + 0x20))(local_d4,&local_d8);
      }
      (**(code **)(*local_d4 + 0x28))(local_d4,&local_d8);
    }
    FUN_00201f54(&local_e0);
  }
  if (local_18 == 0) {
    local_a0 = local_18;
    local_9c = local_18;
    FUN_001aaefc(auStack_b8,&local_a0);
    FUN_00201f54(&local_a0);
    iVar6 = 0;
    iVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    if (0 < iVar5) {
      do {
        (**(code **)(*param_1 + 0x14))(param_1,iVar6,auStack_b8);
        iVar5 = FUN_000d6330(&local_e0,auStack_b8);
        iVar5 = *(int *)(iVar5 + 8);
        if (iVar5 == 0) {
          iVar5 = *DAT_001bba6c;
        }
        FUN_00002898(s_d___s_001bba78,iVar5);
        local_a4 = (undefined1 *)&local_e0;
        if (local_d8 != 0) {
          local_a4 = (undefined1 *)&local_e0;
          if ((local_d0[0] != (int **)0x0) &&
             (local_d0[0] = (int **)((int)local_d0[0] + -1), local_a4 = (undefined1 *)&local_e0,
             local_d0[0] == (int **)0x0)) {
            local_a4 = (undefined1 *)&local_e0;
            (**(code **)(*local_d4 + 0x20))(local_d4,&local_d8);
          }
          (**(code **)(*local_e0 + 0x10))(local_e0,&local_d8);
        }
        if (local_d8 != 0) {
          if (local_d0[0] != (int **)0x0) {
            local_d0[0] = (int **)0x0;
            (**(code **)(*local_d4 + 0x20))(local_d4,&local_d8);
          }
          (**(code **)(*local_d4 + 0x28))(local_d4,&local_d8);
        }
        FUN_00201f54(local_a4);
        iVar6 = iVar6 + 1;
        iVar5 = (**(code **)(*param_1 + 0x10))(param_1);
      } while (iVar6 < iVar5);
    }
    FUN_001aafac(auStack_b8);
  }
  iVar6 = 0;
  iVar5 = (**(code **)(*param_1 + 0x18))(param_1);
  piVar4 = (int *)(param_6 + 2);
  if (0 < iVar5) {
    local_70 = &local_64;
    local_58 = (uint)param_5 | local_1c;
    local_90 = DAT_001bba84;
    local_8c = DAT_001bba88;
    do {
      iVar5 = 0;
      if (0 < (int)piVar4) {
        do {
          FUN_00002898(&DAT_001bba68);
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)piVar4);
      }
      FUN_00002898(&DAT_001bba8c);
      local_78 = 0;
      local_74 = 0;
      FUN_001aaefc(auStack_40,&local_78);
      FUN_00201f54(&local_78);
      iVar5 = (**(code **)(*param_1 + 0x24))(param_1,iVar6,auStack_40);
      if (iVar5 != 0) {
        iVar5 = FUN_000d6330(local_6c,auStack_40);
        iVar5 = *(int *)(iVar5 + 8);
        if (iVar5 == 0) {
          iVar5 = *DAT_001bba6c;
        }
        FUN_00002898(&DAT_001bba90,iVar5);
        local_d0[0] = local_6c;
        if (local_64 != 0) {
          local_dc = local_70;
          if ((local_5c != 0) && (local_5c = local_5c + -1, local_5c == 0)) {
            local_5c = 0;
            (**(code **)(*local_60 + 0x20))();
          }
          (**(code **)(*local_6c[0] + 0x10))(local_6c[0],local_dc);
        }
        local_e0 = local_70;
        if (local_64 != 0) {
          if (local_5c != 0) {
            local_5c = 0;
            (**(code **)(*local_60 + 0x20))(local_60,local_70);
          }
          (**(code **)(*local_60 + 0x28))(local_60,local_e0);
        }
        FUN_00201f54(local_d0[0]);
      }
      if (local_1c != 0) {
        iVar5 = (**(code **)(*param_1 + 0x1c))(param_1,iVar6);
        if (iVar5 != 0) {
          FUN_00002898(s_type___s__001bba94,*(undefined4 *)(iVar5 + 4));
        }
        local_dc = (int *)(**(code **)(*param_1 + 0x28))(param_1,iVar6);
        iVar5 = (**(code **)(*param_1 + 0x2c))(param_1,iVar6);
        if (iVar5 == 0) {
          pcVar3 = s_No_SysData_001bbaac;
        }
        else {
          pcVar3 = s_SysData_set_001bbaa0;
        }
        FUN_00002898(s___s___d_Proxies__001bbab8,pcVar3,local_dc);
      }
      if (local_58 != 0) {
        piVar2 = (int *)FUN_000f1278(&local_e0);
        *piVar2 = (int)local_90;
        piVar2[0x11] = 0;
        piVar2[0x10] = local_8c;
        local_80 = 0;
        local_7c = 0;
        local_98 = (undefined1 *)&local_e0;
        FUN_001aaefc(auStack_50,&local_80);
        FUN_00201f54(&local_80);
        iVar5 = (**(code **)(*param_1 + 0x24))(param_1,iVar6,auStack_50);
        if ((iVar5 == 0) || (iVar5 = FUN_000f126a(local_98,auStack_50), iVar5 == 0)) {
          FUN_001aafac(auStack_50);
        }
        else {
          local_88 = param_1;
          FUN_00138750(&local_64,param_1);
          uVar1 = FUN_00138784(auStack_30,&local_64);
          iVar5 = FUN_000f121c(local_98,uVar1);
          FUN_001387a8(auStack_30);
          if (iVar5 == 1) {
            iVar5 = FUN_0012bb48(local_88,local_98);
            FUN_001387a8(&local_64);
            FUN_001aafac(auStack_50);
            if ((iVar5 != 0) && (iVar5 = FUN_001b981c(&local_e0), iVar5 != 0)) {
              FUN_00002898(s___val__001bbacc);
              FUN_001b97e0(&local_e0,param_7);
            }
          }
          else {
            FUN_001387a8(&local_64);
            FUN_001aafac(auStack_50);
          }
        }
        local_e0 = local_90;
        FUN_000f123c(&local_e0,&local_e0);
        local_a0 = local_8c;
        FUN_001eecc8(local_9c);
        FUN_000f12b8(&local_e0);
      }
      FUN_00002898(&DAT_001bbad4);
      FUN_001aafac(auStack_40);
      iVar6 = iVar6 + 1;
      iVar5 = (**(code **)(*param_1 + 0x18))(param_1);
    } while (iVar6 < iVar5);
  }
  if (local_18 != 0) {
    iVar6 = 0;
    iVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    if (0 < iVar5) {
      do {
        iVar5 = (**(code **)(*param_1 + 0x40))(param_1,iVar6);
        if (iVar5 != 0) {
          FUN_00138750(local_d0,iVar5);
          local_e0 = param_5;
          local_d8 = param_7;
          local_dc = piVar4;
          FUN_001bc394(local_d0,1,local_1c,local_18);
          FUN_001387a8(local_d0);
        }
        iVar6 = iVar6 + 1;
        iVar5 = (**(code **)(*param_1 + 0x10))(param_1);
      } while (iVar6 < iVar5);
    }
  }
  return;
}

