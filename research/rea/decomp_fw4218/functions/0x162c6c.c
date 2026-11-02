// rea decompile_all
// name: FUN_00162c6c
// address: 0x162c6c
// body: available
// range: 0x162c6c-0x162f3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00162c6c(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  uint local_198;
  uint uStack_194;
  int local_190;
  int local_18c;
  uint local_188;
  undefined1 *puStack_184;
  undefined1 *puStack_180;
  undefined1 *puStack_17c;
  undefined1 auStack_178 [22];
  undefined2 local_162;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [12];
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 local_124;
  ushort local_120;
  ushort local_11e;
  int local_11c;
  int local_118;
  ushort local_114;
  ushort local_112;
  byte local_110;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 auStack_ec [8];
  undefined1 auStack_e4 [68];
  undefined1 auStack_a0 [84];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [8];
  
  if (param_4 != 0) {
    return;
  }
  FUN_0015c714(auStack_178);
  iVar2 = FUN_0014ce34(auStack_178,param_3);
  if (iVar2 != 0) {
    FUN_001726d4(auStack_4c,auStack_160);
    puStack_184 = (undefined1 *)(uint)local_112;
    bVar1 = local_110 >> 7;
    local_188 = (uint)local_114;
    local_190 = local_11c;
    local_18c = local_118;
    uStack_194 = (uint)local_11e;
    local_198 = (uint)local_120;
    local_1a0 = local_128;
    local_19c = local_124;
    local_1ac = uStack_134;
    local_1a8 = local_130;
    uStack_1a4 = uStack_12c;
    iVar2 = FUN_00169ec0(*param_1,(local_110 & 7) >> 2,auStack_148,local_13c,local_138);
    if (iVar2 == 0) {
      FUN_0014cd58(&local_1ac);
      uVar3 = FUN_001be27c(param_1[1],1,&local_1ac);
      if ((uVar3 & ~(uint)bVar1) == 0) {
        FUN_001512cc(&local_f8);
        FUN_001726d4(&local_1a0,param_2 + 0x1c);
        FUN_00150634(&local_f8,local_162,auStack_4c,&local_1a0,2);
        piVar4 = (int *)param_1[2];
        FUN_001726d4(&local_1a0,param_2 + 0x1c);
        (**(code **)(*piVar4 + 8))(piVar4,&local_f8,&local_1a0);
        FUN_0015111c(&local_f8);
        FUN_0014ca10(auStack_e4);
        FUN_0014ca10(auStack_ec);
        local_f4 = 0;
        local_f8 = 0;
        local_f0 = 0;
      }
      else {
        (**(code **)(*(int *)param_1[2] + 0x10))((int *)param_1[2],param_2,&local_1ac);
      }
      FUN_0014cd8c(&local_1ac);
    }
    else {
      thunk_FUN_0014cd1c(auStack_34,param_1[1]);
      local_188 = (uint)local_114;
      puStack_184 = (undefined1 *)(uint)local_112;
      puStack_180 = (undefined1 *)(uint)local_110;
      puStack_17c = auStack_34;
      local_198 = (uint)local_120;
      uStack_194 = (uint)local_11e;
      local_190 = local_11c;
      local_18c = local_118;
      local_1a8 = local_130;
      uStack_1a4 = uStack_12c;
      local_1a0 = local_128;
      local_19c = local_124;
      local_1ac = uStack_134;
      FUN_00153740(auStack_a0,iVar2,auStack_148,local_13c,local_138);
      FUN_0014cd8c(auStack_34);
      FUN_001512cc(&local_f8);
      FUN_001be270(auStack_28,param_1[1]);
      FUN_001726d4(auStack_40,param_2 + 0x1c);
      puStack_180 = auStack_a0;
      puStack_184 = auStack_28;
      local_188 = iVar2 + 0x4c;
      local_18c = iVar2 + 0x20;
      local_19c = *(undefined4 *)(iVar2 + 0x40);
      local_198 = *(uint *)(iVar2 + 0x44);
      uStack_194 = *(uint *)(iVar2 + 0x48);
      local_1ac = *(undefined4 *)(iVar2 + 0x30);
      local_1a8 = *(undefined4 *)(iVar2 + 0x34);
      uStack_1a4 = *(undefined4 *)(iVar2 + 0x38);
      local_1a0 = *(undefined4 *)(iVar2 + 0x3c);
      local_190 = iVar2;
      FUN_0015088c(&local_f8,local_162,auStack_4c,auStack_40,*(undefined4 *)(iVar2 + 0x2c));
      FUN_00171ea4(auStack_28);
      piVar4 = (int *)param_1[2];
      FUN_001726d4(auStack_40,param_2 + 0x1c);
      (**(code **)(*piVar4 + 8))(piVar4,&local_f8,auStack_40);
      FUN_0015111c(&local_f8);
      FUN_0014ca10(auStack_e4);
      FUN_0014ca10(auStack_ec);
      local_f4 = 0;
      local_f8 = 0;
      local_f0 = 0;
      FUN_00153928(auStack_a0);
    }
  }
  FUN_0015c77c(auStack_178);
  return;
}

