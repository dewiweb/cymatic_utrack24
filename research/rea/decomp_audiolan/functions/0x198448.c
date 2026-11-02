// rea decompile_all
// name: FUN_00198448
// address: 0x198448
// body: available
// range: 0x198448-0x198833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00198448(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,char *param_6,uint param_7,ushort *param_8,uint param_9,
                undefined4 param_10,uint param_11,int param_12,undefined4 param_13,
                undefined4 param_14,uint param_15)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  byte local_148;
  undefined1 auStack_147 [255];
  undefined4 *local_48;
  undefined4 *local_44;
  int local_40;
  int local_3c;
  undefined1 *local_38;
  int local_34;
  uint local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 *puStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if ((int)(param_15 << 0x1e) < 0) {
    uVar8 = 0x20;
  }
  else {
    uVar8 = 2;
  }
  param_2[1] = param_14;
  *param_2 = param_13;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[5] = param_10;
  piVar10 = DAT_00198834;
  param_2[4] = param_11;
  uVar1 = DAT_00198844;
  if (param_12 == *piVar10) {
    uVar9 = 2;
  }
  else if (param_12 == *DAT_00198838) {
    uVar9 = 3;
  }
  else if ((param_12 == *DAT_0019883c) && ((param_15 & 1) != 0)) {
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  local_28 = param_2 + 6;
  local_24 = param_1;
  puStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  FUN_001995b4(local_28,0,param_12,0xc,DAT_00198844,4,uVar9,DAT_00198840,param_2);
  local_2c = param_2 + 0xdf;
  FUN_001995b4(local_2c,0,param_12,0xc,uVar1,8,uVar9,DAT_00198840,param_2);
  iVar2 = FUN_0003b48a(local_18,&DAT_00198848);
  uVar1 = DAT_00198840;
  if (iVar2 == 0) {
    uVar3 = 0x78;
  }
  else {
    uVar3 = 10;
  }
  local_48 = param_2 + 0x1b8;
  FUN_001995b4(local_48,0,param_12,0x21,uVar3,uVar8,uVar9,DAT_00198840,param_2);
  local_40 = (int)param_2 + DAT_00198854;
  FUN_001995b4(local_40,0,param_12,0x10,DAT_00198844,2,uVar9,uVar1,param_2);
  local_30 = param_7 & 0xffff;
  if (local_30 == 0) {
    iVar2 = FUN_0019835c(local_24,local_48,local_1c,local_18,param_5,0,param_12,DAT_00198880,param_2
                         ,param_15 & 1);
    return iVar2;
  }
  local_44 = param_2 + 0x290;
  if (*(ushort *)param_2[0x29a] < param_9) {
    *(ushort *)param_2[0x29a] = (ushort)param_9;
  }
  iVar2 = FUN_0001e5b8(param_2 + 0x5c,s__services_00198868,&DAT_00198858,param_5);
  if (iVar2 == 0) {
    return DAT_00198888;
  }
  iVar2 = FUN_0001e5b8((int)param_2 + DAT_00198874,0,local_18,param_5);
  if (iVar2 == 0) {
    return DAT_00198888;
  }
  local_3c = (int)param_2 + DAT_00198878;
  iVar2 = FUN_0001e5b8(local_3c,local_1c,local_18,param_5);
  if (iVar2 == 0) {
    return DAT_00198888;
  }
  piVar10 = param_2 + 0x1c0;
  uVar4 = FUN_00020a0a(*piVar10,*piVar10 + 0x100);
  if (uVar4 < 0x101) {
    FUN_001952f0((int)param_2 + DAT_0019887c,*piVar10,uVar4);
  }
  else {
    *(undefined1 *)(param_2 + 0x2e7) = 0;
  }
  uVar4 = FUN_00020a0a(param_2[0xe7],param_2[0xe7] + 0x100);
  if (uVar4 < 0x101) {
    FUN_001952f0(param_2[0xf] + 4,param_2[0xe7],uVar4);
  }
  else {
    *(undefined1 *)(param_2[0xf] + 4) = 0;
  }
  uVar4 = FUN_00020a0a(*piVar10,*piVar10 + 0x100);
  if (uVar4 < 0x101) {
    FUN_001952f0(param_2[0xe8] + 4,*piVar10,uVar4);
  }
  else {
    *(undefined1 *)(param_2[0xe8] + 4) = 0;
  }
  uVar4 = 0;
  param_2[0xea] = local_48;
  param_2[0xeb] = local_40;
  if (param_11 != 0) {
    local_38 = auStack_147;
    local_34 = (int)param_2 + DAT_00198884;
    do {
      iVar7 = uVar4 * 0x364;
      iVar2 = iVar7 + 0x20;
      uVar5 = FUN_00020a0a(*(int *)(param_2[5] + iVar2),*(int *)(param_2[5] + iVar2) + 0x100);
      if (uVar5 < 0x101) {
        FUN_001952f0(&local_148,*(undefined4 *)(param_2[5] + iVar2),uVar5);
      }
      else {
        local_148 = 0;
      }
      local_38[local_148] = 0;
      FUN_0001b688(&local_148,local_18);
      FUN_001995b4(param_2[5] + iVar7,0,param_12,0xc,DAT_00198844,8,uVar9,DAT_00198840,param_2);
      iVar2 = FUN_0001e5b8(param_2[5] + iVar7 + 0x158,0,&local_148,param_5);
      if (iVar2 == 0) {
        return DAT_00198888;
      }
      uVar5 = FUN_00020a0a(local_3c,local_34);
      if (uVar5 < 0x101) {
        FUN_001952f0(*(int *)(param_2[5] + iVar7 + 0x24) + 4,local_3c,uVar5);
      }
      else {
        *(undefined1 *)(*(int *)(param_2[5] + iVar7 + 0x24) + 4) = 0;
      }
      *(undefined4 **)(param_2[5] + iVar7 + 0x2c) = local_48;
      *(int *)(param_2[5] + iVar7 + 0x30) = local_40;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_11);
  }
  *(undefined2 *)(piVar10[1] + 4) = 0;
  *(undefined2 *)(piVar10[1] + 6) = 0;
  *(short *)(piVar10[1] + 8) = (short)local_30;
  if ((param_6 == (char *)0x0) || (*param_6 == '\0')) {
    *(undefined1 *)(param_2 + 0x1c9) = 1;
  }
  else {
    uVar4 = FUN_00020a0a(param_6,param_6 + 0x100);
    if (uVar4 < 0x101) {
      FUN_001952f0(piVar10[1] + 10,param_6,uVar4);
      goto LAB_00198766;
    }
  }
  *(undefined1 *)(piVar10[1] + 10) = 0;
LAB_00198766:
  if (param_8 == (ushort *)0x0) {
    *(undefined2 *)(local_44 + 5) = 0;
  }
  else {
    puVar6 = (ushort *)local_44[10];
    if (puVar6 + 2 != param_8) {
      *(ushort *)(local_44 + 5) = (ushort)param_9;
      if (*puVar6 < param_9) {
        return DAT_00198888;
      }
      FUN_001952f0(puVar6 + 2,param_8,param_9);
    }
  }
  local_44[0xe] = local_48;
  FUN_00197c88(local_24,DAT_0019888c);
  iVar2 = FUN_00198890(local_24,local_48);
  if (iVar2 != 0) {
    FUN_0019a790(local_24,DAT_0019888c);
    return iVar2;
  }
  iVar2 = FUN_00198890(local_24,local_40);
  if (iVar2 == 0) {
    iVar2 = FUN_00198890(local_24,local_28);
  }
  uVar4 = 0;
  if (param_11 != 0) {
    do {
      if (iVar2 == 0) {
        iVar2 = FUN_00198890(local_24,param_2[5] + uVar4 * 0x364);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_11);
  }
  if (iVar2 == 0) {
    iVar2 = FUN_00198890(local_24,local_2c);
  }
  FUN_0019a790(local_24,DAT_0019888c);
  if (iVar2 != 0) {
    FUN_00196108(local_24,param_2,0);
  }
  return iVar2;
}

