// rea decompile_all
// name: FUN_0016c460
// address: 0x16c460
// body: available
// range: 0x16c460-0x16c7e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0016c460(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  undefined4 local_1f0;
  undefined1 *local_1ec;
  undefined1 *local_1e8;
  undefined4 local_1e4;
  byte local_1db;
  ushort local_1d7;
  byte local_1cf;
  byte local_1cb;
  ushort local_1c2;
  undefined1 uStack_1b5;
  undefined1 local_1b4 [63];
  undefined1 uStack_175;
  undefined1 local_174 [63];
  undefined1 uStack_135;
  undefined1 local_134 [67];
  undefined1 uStack_f1;
  undefined1 local_f0 [8];
  int local_e8;
  int local_ac;
  uint local_a8;
  int local_a0;
  uint local_9c;
  uint local_90;
  int local_84;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [32];
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  uVar12 = 0;
  uVar8 = 0;
  iStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  FUN_00171e90(auStack_80);
  FUN_00171e90(auStack_78);
  FUN_00171e90(auStack_70);
  uVar9 = 0;
  local_e8 = FUN_00169e10(param_1 + 0x4a0);
  local_84 = 0;
  FUN_0015cb1c(param_2 + 0x18,0,&local_84);
  if (local_84 == 0x100) {
    FUN_0015cb1c(param_2 + 0x18,&local_1f0,&local_84);
    iVar1 = FUN_001616c8(param_1 + 0x4bc);
    local_e8 = iVar1 + local_e8;
    FUN_0014b654(&local_a0,0x40);
    uVar4 = 0;
    do {
      if ((uVar4 >> 2 < local_9c) && (local_a0 != 0)) {
        *(uint *)(local_a0 + (uVar4 >> 2) * 4) =
             (uint)*(byte *)((int)&local_1f0 + uVar4 + 2) << 0x10 |
             (uint)*(byte *)((int)&local_1f0 + uVar4 + 3) << 0x18 |
             (uint)CONCAT11(*(undefined1 *)((int)&local_1f0 + uVar4 + 1),
                            *(undefined1 *)((int)&local_1f0 + uVar4));
      }
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x100);
    FUN_0014b68c(&local_ac);
    FUN_0014b68c(auStack_50);
    FUN_0016eac0(auStack_5c,param_1);
    iVar1 = FUN_0016022c(param_1 + 1000);
    local_e8 = iVar1 + local_e8;
    FUN_0014b1dc(auStack_50,local_e8);
    FUN_0014b280(auStack_68,&local_a0,auStack_50,auStack_5c);
    FUN_0014b6e4(&local_ac,auStack_68);
    FUN_0014b6c8(auStack_68);
    uVar4 = 0;
    iVar1 = 0x40;
    puVar5 = &local_1f0;
    do {
      if ((uVar4 < local_a8) && (local_ac != 0)) {
        uVar2 = *(undefined4 *)(local_ac + uVar4 * 4);
      }
      else {
        uVar2 = 0;
      }
      *(char *)puVar5 = (char)uVar2;
      *(char *)((int)puVar5 + 1) = (char)((uint)uVar2 >> 8);
      *(char *)((int)puVar5 + 2) = (char)((uint)uVar2 >> 0x10);
      iVar1 = iVar1 + -1;
      uVar4 = uVar4 + 1;
      *(char *)((int)puVar5 + 3) = (char)((uint)uVar2 >> 0x18);
      puVar5 = (undefined4 *)((int)puVar5 + 4);
    } while (iVar1 != 0);
    iVar1 = FUN_0015d080(DAT_0016c7e4,&local_1ec,0xfc);
    if ((local_1f0 == iVar1) && (local_1e4._2_2_ == 0x1001 || local_1e4._2_2_ == 0x1002)) {
      uVar3 = (uint)local_1db;
      uVar11 = (uint)local_1cf;
      uVar10 = (uint)local_1cb;
      uVar4 = uVar3;
      if (uVar3 < 0x41) {
        uVar4 = uVar11;
      }
      if (uVar4 < 0x41) {
        uVar4 = uVar10;
      }
      if (uVar4 < 0x41) {
        uVar12 = local_1e4._2_2_ != 0x1002;
        if (!(bool)uVar12) {
          uVar8 = (uint)local_1d7;
          uVar12 = 2;
        }
        local_90 = (uint)local_1c2;
        if (uVar3 != 0) {
          puVar7 = &uStack_175;
          puVar6 = &uStack_f1;
          if ((local_1db & 1) != 0) {
            puVar7 = local_174;
            local_f0[0] = local_174[0];
            puVar6 = local_f0;
          }
          for (uVar4 = (uint)(local_1db >> 1); uVar4 != 0; uVar4 = uVar4 - 1) {
            puVar6[1] = puVar7[1];
            puVar7 = puVar7 + 2;
            puVar6 = puVar6 + 2;
            *puVar6 = *puVar7;
          }
          local_f0[uVar3] = 0;
          FUN_00171828(auStack_80,local_f0);
        }
        if (uVar11 != 0) {
          puVar7 = &uStack_135;
          puVar6 = &uStack_f1;
          if ((local_1cf & 1) != 0) {
            puVar7 = local_134;
            local_f0[0] = local_134[0];
            puVar6 = local_f0;
          }
          for (uVar4 = (uint)(local_1cf >> 1); uVar4 != 0; uVar4 = uVar4 - 1) {
            puVar6[1] = puVar7[1];
            puVar7 = puVar7 + 2;
            puVar6 = puVar6 + 2;
            *puVar6 = *puVar7;
          }
          local_f0[uVar11] = 0;
          FUN_00171828(auStack_78,local_f0);
        }
        if (uVar10 != 0) {
          puVar6 = &uStack_1b5;
          puVar7 = &uStack_f1;
          if ((local_1cb & 1) != 0) {
            puVar6 = local_1b4;
            local_f0[0] = local_1b4[0];
            puVar7 = local_f0;
          }
          for (uVar4 = (uint)(local_1cb >> 1); uVar4 != 0; uVar4 = uVar4 - 1) {
            puVar7[1] = puVar6[1];
            puVar6 = puVar6 + 2;
            puVar7 = puVar7 + 2;
            *puVar7 = *puVar6;
          }
          local_f0[uVar10] = 0;
          FUN_00171828(auStack_70,local_f0);
        }
        uVar9 = 1;
      }
    }
    FUN_0014b6c8(auStack_5c);
    FUN_0014b6c8(auStack_50);
    FUN_0014b6c8(&local_ac);
    FUN_0014b6c8(&local_a0);
  }
  local_1e4 = auStack_70;
  local_1e8 = auStack_78;
  local_1ec = auStack_80;
  local_1f0 = uVar8;
  FUN_0014f0fc(local_28,uVar9,uVar12,local_90);
  FUN_00171ea4(auStack_70);
  FUN_00171ea4(auStack_78);
  FUN_00171ea4(auStack_80);
  return;
}

