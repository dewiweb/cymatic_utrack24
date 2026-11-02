// rea decompile_all
// name: FUN_001013d4
// address: 0x1013d4
// body: available
// range: 0x1013d4-0x1019e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001013d4(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  bool bVar10;
  uint local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  uint local_1a8;
  uint uStack_1a4;
  int local_1a0;
  int local_19c;
  uint local_198;
  undefined1 *puStack_194;
  undefined1 *local_190;
  undefined1 *puStack_18c;
  undefined1 auStack_188 [22];
  ushort local_172;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [12];
  undefined4 local_14c;
  uint local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 local_134;
  ushort local_130;
  ushort local_12e;
  int local_12c;
  int local_128;
  ushort local_124;
  ushort local_122;
  byte local_120;
  byte local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 auStack_fc [8];
  undefined1 auStack_f4 [68];
  undefined1 auStack_b0 [84];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [12];
  
  FUN_000fa43c(auStack_188);
  iVar3 = FUN_000ea3bc(auStack_188,param_3);
  if (iVar3 == 0) goto LAB_001018fc;
  local_10c = (uint)local_172;
  FUN_0010f5fc(auStack_5c,auStack_170);
  uVar4 = (uint)local_120;
  bVar2 = local_120 >> 7;
  local_1c0 = (uint)local_110;
  local_190 = (undefined1 *)((uVar4 & 7) >> 2);
  if (local_1c0 == 0) {
    local_1c0 = 1;
  }
  FUN_0010f5fc(auStack_50,auStack_158);
  uVar5 = FUN_0015e90c(auStack_50);
  if (((uVar4 & 0x7f) >> 6 & ~(uint)local_190 & ~uVar5) != 0) {
    iVar3 = *(int *)(*param_1 + 4);
    if (*(int *)(*param_1 + 4) != 0) {
      do {
        iVar6 = FUN_0010f598(auStack_50,iVar3);
        bVar9 = iVar6 < 0;
        bVar10 = iVar6 == 0;
        if (0 < iVar6) {
          iVar6 = 1;
        }
        if (bVar9) {
          iVar6 = 0;
        }
        if (bVar10) {
          if (iVar3 != 0) {
            puStack_194 = (undefined1 *)(uint)local_122;
            local_198 = (uint)local_124;
            local_1a0 = local_12c;
            local_19c = local_128;
            uStack_1a4 = (uint)local_12e;
            local_1a8 = (uint)local_130;
            local_1b0 = local_138;
            local_1ac = local_134;
            local_1c0 = local_148;
            local_1bc = local_144;
            local_1b8 = local_140;
            uStack_1b4 = uStack_13c;
            iVar3 = FUN_00108720(*param_1,local_190,auStack_158,local_14c);
            if (iVar3 != 0) {
              thunk_FUN_000ea2a4(auStack_44,param_1[1]);
              local_198 = (uint)local_124;
              puStack_194 = (undefined1 *)(uint)local_122;
              local_190 = (undefined1 *)(uint)local_120;
              puStack_18c = auStack_44;
              local_1a8 = (uint)local_130;
              uStack_1a4 = (uint)local_12e;
              local_1a0 = local_12c;
              local_19c = local_128;
              local_1b8 = local_140;
              uStack_1b4 = uStack_13c;
              local_1b0 = local_138;
              local_1ac = local_134;
              local_1c0 = local_148;
              local_1bc = local_144;
              FUN_000f115c(auStack_b0,iVar3,auStack_158,local_14c);
              FUN_000ea314(auStack_44);
              FUN_000eea30(&local_108);
              FUN_0015e148(auStack_38,param_1[1]);
              FUN_0010f5fc(auStack_30,param_2 + 0x1c);
              local_190 = auStack_b0;
              puStack_194 = auStack_38;
              local_198 = iVar3 + 0x4c;
              local_19c = iVar3 + 0x20;
              local_1ac = *(undefined4 *)(iVar3 + 0x40);
              local_1a8 = *(uint *)(iVar3 + 0x44);
              uStack_1a4 = *(uint *)(iVar3 + 0x48);
              local_1bc = *(undefined4 *)(iVar3 + 0x30);
              local_1b8 = *(undefined4 *)(iVar3 + 0x34);
              uStack_1b4 = *(undefined4 *)(iVar3 + 0x38);
              local_1b0 = *(undefined4 *)(iVar3 + 0x3c);
              local_1c0 = *(uint *)(iVar3 + 0x2c);
              local_1a0 = iVar3;
              FUN_000edeb0(&local_108,local_10c,auStack_5c,auStack_30);
              FUN_0010e7f4(auStack_38);
              if (param_4 != 0) goto LAB_00101634;
              goto LAB_001017a4;
            }
            FUN_000eea30(&local_108);
            FUN_0010f5fc(&local_1bc,param_2 + 0x1c);
            local_1c0 = 0;
            FUN_000edc58(&local_108,local_10c,auStack_5c,&local_1bc);
            if (param_4 == 0) {
              piVar8 = (int *)param_1[2];
              FUN_0010f5fc(&local_1b0,param_2 + 0x1c);
              (**(code **)(*piVar8 + 8))(piVar8,&local_108,&local_1b0);
            }
            else {
              (**(code **)(*(int *)param_1[2] + 0x14))((int *)param_1[2],&local_108);
            }
            FUN_000ee880(&local_108);
            FUN_000e9f98(auStack_f4);
            FUN_000e9f98(auStack_fc);
            local_104 = 0;
            local_108 = 0;
            local_100 = 0;
            goto LAB_001018fc;
          }
          break;
        }
        iVar7 = *(int *)(iVar3 + iVar6 * 4 + 0x5c);
        if (iVar7 == 0) break;
        bVar1 = 0;
        if (iVar6 != 0) {
          bVar1 = *(byte *)(iVar3 + 100);
        }
        iVar3 = iVar7;
      } while (iVar6 == 0 || (bVar1 & 0x80) == 0);
    }
  }
  if ((param_4 == 0) || (iVar3 = FUN_0015e1e0(param_1[1]), iVar3 != 0 || bVar2 != 0)) {
    puStack_194 = (undefined1 *)(uint)local_122;
    local_198 = (uint)local_124;
    local_1a0 = local_12c;
    local_19c = local_128;
    uStack_1a4 = (uint)local_12e;
    local_1a8 = (uint)local_130;
    local_1b0 = local_138;
    local_1ac = local_134;
    local_1c0 = local_148;
    local_1bc = local_144;
    local_1b8 = local_140;
    uStack_1b4 = uStack_13c;
    iVar3 = FUN_00108720(*param_1,local_190,auStack_158,local_14c);
    if (iVar3 != 0) {
      thunk_FUN_000ea2a4(auStack_44,param_1[1]);
      local_198 = (uint)local_124;
      puStack_194 = (undefined1 *)(uint)local_122;
      local_190 = (undefined1 *)(uint)local_120;
      puStack_18c = auStack_44;
      local_1a8 = (uint)local_130;
      uStack_1a4 = (uint)local_12e;
      local_1a0 = local_12c;
      local_19c = local_128;
      local_1b8 = local_140;
      uStack_1b4 = uStack_13c;
      local_1b0 = local_138;
      local_1ac = local_134;
      local_1c0 = local_148;
      local_1bc = local_144;
      FUN_000f115c(auStack_b0,iVar3,auStack_158,local_14c);
      FUN_000ea314(auStack_44);
      FUN_000eea30(&local_108);
      FUN_0015e148(auStack_38,param_1[1]);
      FUN_0010f5fc(auStack_30,param_2 + 0x1c);
      local_190 = auStack_b0;
      puStack_194 = auStack_38;
      local_198 = iVar3 + 0x4c;
      local_19c = iVar3 + 0x20;
      local_1ac = *(undefined4 *)(iVar3 + 0x40);
      local_1a8 = *(uint *)(iVar3 + 0x44);
      uStack_1a4 = *(uint *)(iVar3 + 0x48);
      local_1bc = *(undefined4 *)(iVar3 + 0x30);
      local_1b8 = *(undefined4 *)(iVar3 + 0x34);
      uStack_1b4 = *(undefined4 *)(iVar3 + 0x38);
      local_1b0 = *(undefined4 *)(iVar3 + 0x3c);
      local_1c0 = *(uint *)(iVar3 + 0x2c);
      local_1a0 = iVar3;
      FUN_000edeb0(&local_108,local_10c,auStack_5c,auStack_30);
      FUN_0010e7f4(auStack_38);
      if (param_4 == 0) {
LAB_001017a4:
        piVar8 = (int *)param_1[2];
        FUN_0010f5fc(&local_1c0,param_2 + 0x1c);
        (**(code **)(*piVar8 + 8))(piVar8,&local_108,&local_1c0);
      }
      else {
LAB_00101634:
        (**(code **)(*(int *)param_1[2] + 0x14))((int *)param_1[2],&local_108);
      }
      FUN_000ee880(&local_108);
      FUN_000e9f98(auStack_f4);
      FUN_000e9f98(auStack_fc);
      local_104 = 0;
      local_108 = 0;
      local_100 = 0;
      FUN_000f1344(auStack_b0);
      goto LAB_001018fc;
    }
    FUN_000ea2e0(&local_1bc);
    uVar4 = FUN_0015e0d8(param_1[1],1,&local_1bc);
    if ((uVar4 & ~(uint)bVar2) == 0) {
      FUN_000eea30(&local_108);
      FUN_0010f5fc(&local_1b0,param_2 + 0x1c);
      local_1c0 = 0;
      FUN_000edc58(&local_108,local_10c,auStack_5c,&local_1b0);
      if (param_4 != 0) goto LAB_0010197c;
      piVar8 = (int *)param_1[2];
      FUN_0010f5fc(&uStack_1a4,param_2 + 0x1c);
      (**(code **)(*piVar8 + 8))(piVar8,&local_108,&uStack_1a4);
      goto LAB_001019bc;
    }
LAB_0010192c:
    (**(code **)(*(int *)param_1[2] + 0x10))((int *)param_1[2],param_2,&local_1bc);
  }
  else {
    FUN_000ea2e0(&local_1bc);
    iVar3 = FUN_0015e1fc(param_1[1],local_1c0,&local_1bc);
    if (iVar3 != 0) goto LAB_0010192c;
    FUN_000eea30(&local_108);
    FUN_0010f5fc(&local_1b0,param_2 + 0x1c);
    local_1c0 = 1;
    FUN_000edc58(&local_108,local_10c,auStack_5c,&local_1b0);
LAB_0010197c:
    (**(code **)(*(int *)param_1[2] + 0x14))((int *)param_1[2],&local_108);
LAB_001019bc:
    FUN_000ee880(&local_108);
    FUN_000e9f98(auStack_f4);
    FUN_000e9f98(auStack_fc);
    local_104 = 0;
    local_108 = 0;
    local_100 = 0;
  }
  FUN_000ea314(&local_1bc);
LAB_001018fc:
  FUN_000fa4a4(auStack_188);
  return;
}

