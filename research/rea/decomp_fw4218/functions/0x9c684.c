// rea decompile_all
// name: FUN_0009c684
// address: 0x9c684
// body: available
// range: 0x9c684-0x9c82d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009c684(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *local_a0;
  undefined1 auStack_9c [8];
  int *local_94;
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [48];
  int local_50;
  int local_4c;
  int local_40;
  undefined1 auStack_3c [8];
  int local_34;
  undefined1 auStack_1c [8];
  
  local_90[0] = 0;
  FUN_00204508(auStack_9c);
  uVar5 = _DAT_0009c830;
  local_84 = 0xffffffff;
  local_8c = _DAT_0009c830;
  uVar1 = FUN_000b4964();
  iVar2 = FUN_000b4840(uVar1,s___UserResourceRetrieverService_0009c832 + 2,auStack_9c);
  if (iVar2 == 0) {
    iVar2 = s_4l__FFS_BASE_ADDRESS__0x_08X_0009c854._0_4_ + 0x58;
  }
  else {
    iVar3 = (**(code **)(*local_94 + 0x14))(local_94,&local_8c,&local_84,0);
    iVar2 = s_4l__FFS_BASE_ADDRESS__0x_08X_0009c854._0_4_;
    if (iVar3 == 0) {
      FUN_00002898(s_4l__FFS_BASE_ADDRESS__0x_08X_0009c854._0_4_ + -0x58);
      local_8c = uVar5;
      goto LAB_0009c6d4;
    }
  }
  FUN_00002898(iVar2);
LAB_0009c6d4:
  iVar2 = (**(code **)(*param_1 + 0x4c))(param_1,local_8c,0xffffffff);
  if (iVar2 == 0) {
    FUN_00002898(s_4l__FFS_BASE_ADDRESS__0x_08X_0009c854._0_4_ + 0xac);
  }
  FUN_00002898(s_4l__FFS_BASE_ADDRESS__0x_08X_0009c854 + 4,local_8c);
  local_a0 = param_1 + 3;
  iVar3 = FUN_001b5fe8(param_1,param_1 + 1,param_1 + 2,local_90);
  iVar2 = DAT_0009c878;
  if (iVar3 == 0) {
LAB_0009c820:
    FUN_00002898(iVar2);
LAB_0009c824:
    FUN_000b1228(auStack_9c);
    uVar5 = 0;
  }
  else {
    FUN_0007bac8(auStack_80,param_1[1] - param_1[3],param_1[2],local_90[0]);
    iVar2 = FUN_001b404a(auStack_80);
    if (iVar2 == DAT_0009c874) {
      FUN_001b4024(auStack_80,&local_50,0x32);
      local_88 = 0;
      while( true ) {
        local_a0 = (int *)((int)&DAT_0000002f + 3);
        iVar2 = FUN_0007b9dc(auStack_80,&local_88,auStack_1c,&local_50);
        if (iVar2 != 1) break;
        iVar2 = FUN_0007b744(auStack_80,&local_50);
        if (iVar2 != -1) {
          FUN_0007b71c(auStack_80,iVar2,&local_a0);
          iVar3 = (**(code **)(*param_1 + 0x4c))(param_1,local_a0,0xffffffff);
          if (iVar3 == 0) {
            FUN_00002898(DAT_0009c878 + 100);
            FUN_0007b824(auStack_80,iVar2);
            goto LAB_0009c824;
          }
          FUN_0007b824(auStack_80,iVar2);
        }
      }
    }
    else {
      iVar3 = param_1[1];
      uVar6 = iVar3 + 0x1c;
      FUN_000039e0(auStack_3c,iVar3,0x1c);
      FUN_000039e0(&local_50,uVar6,0x14);
      while ((((uVar6 < (uint)(iVar3 + local_34) && (local_50 != -1)) && (local_4c != 0)) &&
             (local_50 == DAT_0009c87c))) {
        iVar4 = (**(code **)(*param_1 + 0x4c))(param_1,local_40 + uVar6 + 0x14,0xffffffff);
        if (iVar4 == 0) {
          iVar2 = DAT_0009c880 + -0x68;
          goto LAB_0009c820;
        }
        uVar6 = local_4c + uVar6;
        FUN_000039e0(&local_50,uVar6,0x14);
      }
      FUN_00002898(DAT_0009c880,iVar2);
    }
    FUN_00002898(DAT_0009c880 + 0x58);
    FUN_000b1228(auStack_9c);
    uVar5 = 1;
  }
  return uVar5;
}

