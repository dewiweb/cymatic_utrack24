// rea decompile_all
// name: FUN_00163958
// address: 0x163958
// body: available
// range: 0x163958-0x163d63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00163958(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint **ppuVar4;
  uint uVar5;
  undefined4 ***pppuVar6;
  code *pcVar7;
  int *piVar8;
  uint **local_1b8;
  uint **local_1b4;
  undefined4 **local_1b0;
  undefined4 **local_1ac;
  undefined4 **local_1a8;
  uint **local_1a4;
  uint **local_1a0;
  uint **ppuStack_19c;
  undefined4 **local_198;
  undefined4 **local_194;
  undefined4 **local_190;
  uint *puStack_18c;
  uint **local_188;
  uint *puStack_184;
  uint uStack_180;
  undefined4 **ppuStack_17c;
  undefined4 **local_178;
  uint uStack_174;
  uint auStack_170 [2];
  undefined1 auStack_168 [22];
  ushort local_152;
  undefined1 auStack_150 [12];
  undefined1 auStack_144 [12];
  uint auStack_138 [3];
  uint **local_12c;
  uint **local_128;
  undefined4 **local_124;
  undefined4 **local_120;
  undefined4 **ppuStack_11c;
  uint *local_118;
  uint **local_114;
  ushort local_110;
  ushort local_10e;
  undefined4 **local_10c;
  undefined4 **local_108;
  ushort local_104;
  ushort local_102;
  byte local_100;
  undefined1 auStack_fc [16];
  uint local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 auStack_dc [8];
  undefined1 auStack_d4 [68];
  uint *apuStack_90 [21];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  
  FUN_0015c5c8(auStack_168);
  iVar3 = FUN_0014ce34(auStack_168,param_3);
  if (iVar3 == 0) goto LAB_00163d54;
  bVar2 = local_100 >> 7;
  uVar1 = (local_100 & 7) >> 2;
  if (param_4 != 0) {
    thunk_FUN_0014cd1c(&local_1b8,param_1[1]);
    iVar3 = FUN_0014cc60(auStack_fc,&local_1b8);
    FUN_0014cd8c(&local_1b8);
    if (iVar3 != 0) {
      (**(code **)(*(int *)param_1[2] + 0x10))((int *)param_1[2],param_2,auStack_fc);
      FUN_0015c630(auStack_168);
      return;
    }
  }
  local_ec = (uint)local_152;
  FUN_001726d4(auStack_3c,auStack_150);
  local_188 = (uint **)(uint)local_102;
  puStack_18c = (uint *)(uint)local_104;
  local_194 = local_10c;
  local_190 = local_108;
  local_198 = (undefined4 **)(uint)local_10e;
  ppuStack_19c = (uint **)(uint)local_110;
  local_1a4 = (uint **)local_118;
  local_1a0 = local_114;
  local_1b4 = local_128;
  local_1b0 = local_124;
  local_1ac = local_120;
  local_1a8 = ppuStack_11c;
  local_1b8 = local_12c;
  ppuVar4 = (uint **)FUN_00167560(*param_1,auStack_144,uVar1,auStack_138);
  if (ppuVar4 != (uint **)0x0) {
    thunk_FUN_0014cd1c(&uStack_180,param_1[1]);
    local_190 = (undefined4 **)(uint)local_104;
    puStack_18c = (uint *)(uint)local_102;
    local_188 = (uint **)(uint)local_100;
    puStack_184 = &uStack_180;
    local_1a0 = (uint **)(uint)local_110;
    ppuStack_19c = (uint **)(uint)local_10e;
    local_198 = local_10c;
    local_194 = local_108;
    local_1b0 = local_120;
    local_1ac = ppuStack_11c;
    local_1a8 = (undefined4 **)local_118;
    local_1a4 = local_114;
    local_1b8 = local_128;
    local_1b4 = local_124;
    FUN_00153740(apuStack_90,ppuVar4,auStack_138,local_12c);
    FUN_0014cd8c(&uStack_180);
    FUN_001512cc(&local_e8);
    FUN_001be270(auStack_170,param_1[1]);
    FUN_001726d4(auStack_30,param_2 + 0x1c);
    local_188 = apuStack_90;
    puStack_18c = auStack_170;
    local_190 = ppuVar4 + 0x13;
    local_194 = ppuVar4 + 8;
    local_1a4 = (uint **)ppuVar4[0x10];
    local_1a0 = (uint **)ppuVar4[0x11];
    ppuStack_19c = (uint **)ppuVar4[0x12];
    local_1b4 = (uint **)ppuVar4[0xc];
    local_1b0 = (undefined4 **)ppuVar4[0xd];
    local_1ac = (undefined4 **)ppuVar4[0xe];
    local_1a8 = (undefined4 **)ppuVar4[0xf];
    local_1b8 = (uint **)ppuVar4[0xb];
    local_198 = ppuVar4;
    FUN_0015088c(&local_e8,local_ec,auStack_3c,auStack_30);
    FUN_00171ea4(auStack_170);
    if (param_4 == 0) {
      piVar8 = (int *)param_1[2];
      FUN_001726d4(&local_1b8,param_2 + 0x1c);
      (**(code **)(*piVar8 + 8))(piVar8,&local_e8,&local_1b8);
    }
    else {
      (**(code **)(*(int *)param_1[2] + 0x14))((int *)param_1[2],&local_e8);
    }
    FUN_0015111c(&local_e8);
    FUN_0014ca10(auStack_d4);
    FUN_0014ca10(auStack_dc);
    local_e4 = 0;
    local_e8 = 0;
    local_e0 = 0;
    FUN_00153928(apuStack_90);
    goto LAB_00163d54;
  }
  FUN_0014cd58(apuStack_90);
  uVar5 = FUN_001be27c(param_1[1],1,apuStack_90);
  if ((uVar5 & ~(uint)bVar2) == 0) {
    FUN_001512cc(&local_e8);
    FUN_001726d4(&local_1b4,param_2 + 0x1c);
    local_1b8 = (uint **)0x2;
    FUN_00150634(&local_e8,local_ec,auStack_3c,&local_1b4);
    if (param_4 == 0) {
      piVar8 = (int *)param_1[2];
      FUN_001726d4(&local_1a8,param_2 + 0x1c);
      pppuVar6 = &local_1a8;
      pcVar7 = *(code **)(*piVar8 + 8);
      goto LAB_00163d20;
    }
    (**(code **)(*(int *)param_1[2] + 0x14))((int *)param_1[2],&local_e8);
  }
  else {
    FUN_001512cc(&local_e8);
    uStack_174 = (uint)local_104;
    auStack_170[0] = (uint)local_102;
    local_178 = local_108;
    auStack_170[1] = 1;
    puStack_184 = (uint *)(uint)local_110;
    uStack_180 = (uint)local_10e;
    local_188 = local_114;
    ppuStack_17c = local_10c;
    local_198 = local_124;
    local_194 = local_120;
    local_190 = ppuStack_11c;
    puStack_18c = local_118;
    local_1a0 = local_12c;
    ppuStack_19c = local_128;
    uVar5 = (uint)local_100;
    local_1a4 = (uint **)auStack_138;
    local_1b0 = (undefined4 **)(uVar5 & 1);
    local_1b4 = (uint **)((uVar5 & 3) >> 1);
    local_1a8 = (uint **)0x0;
    local_1ac = (undefined4 **)((uVar5 & 0xf) >> 3);
    local_1b8 = (uint **)(uint)bVar2;
    FUN_00150c70(&local_e8,local_ec,auStack_3c,uVar1);
    piVar8 = (int *)param_1[2];
    pppuVar6 = (undefined4 ***)apuStack_90;
    pcVar7 = *(code **)(*piVar8 + 0x10);
LAB_00163d20:
    (*pcVar7)(piVar8,&local_e8,pppuVar6);
  }
  FUN_0015111c(&local_e8);
  FUN_0014ca10(auStack_d4);
  FUN_0014ca10(auStack_dc);
  local_e4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  FUN_0014cd8c(apuStack_90);
LAB_00163d54:
  FUN_0015c630(auStack_168);
  return;
}

