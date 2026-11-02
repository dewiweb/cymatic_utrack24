// rea decompile_all
// name: FUN_000c6ce0
// address: 0xc6ce0
// body: available
// range: 0xc6ce0-0xc6e5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c6ce0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 *puStack_60;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];
  
  iVar5 = FUN_001c0d24(param_2);
  if (iVar5 != 0) {
    local_6c = param_1;
    if (*(short *)(param_1 + 0x7f98) == 0) {
      FUN_000a1bbc(auStack_50,param_2);
      iVar5 = FUN_001b6c2c(auStack_50);
      uVar7 = _DAT_000c6e68;
      if ((iVar5 != 0) && (iVar5 = FUN_001b6b94(auStack_50), iVar5 == 0)) {
        uVar4 = FUN_001b6c2c(auStack_50);
        *(undefined2 *)(param_1 + 0x7f98) = uVar4;
        if (*(int *)(param_1 + 0x7f9c) == 0) {
          iVar5 = FUN_001f01c4(0xc,1);
          puVar9 = (undefined4 *)0x0;
          if (iVar5 != 0) {
            puVar9 = (undefined4 *)FUN_001ae5e8(iVar5,auStack_50);
            *puVar9 = uVar7;
          }
          *(undefined4 **)(param_1 + 0x7f9c) = puVar9;
          if (puVar9 == (undefined4 *)0x0) {
            FUN_00002898(s___D4__T4__ERROR__packetReceived__000c6e6a + 10);
            FUN_000a1c14(auStack_50);
            return;
          }
        }
        else {
          FUN_001ae65c(*(int *)(param_1 + 0x7f9c),auStack_50);
        }
      }
      puVar9 = (undefined4 *)FUN_001ae5e8(auStack_38,auStack_50);
      *puVar9 = uVar7;
      puVar9 = (undefined4 *)FUN_001ae5e8(auStack_2c,puVar9);
      *puVar9 = uVar7;
      uVar8 = s___D4__T4__ERROR__packetReceived__000c6e6a._6_4_;
      uVar1 = s___D4__T4__ERROR__packetReceived__000c6e6a._2_4_;
      local_74 = 4;
      local_68 = *DAT_000c6e5c;
      uStack_64 = DAT_000c6e5c[1];
      local_44 = auStack_5c;
      local_78._0_1_ = s___D4__T4__ERROR__packetReceived__000c6e6a[2];
      local_78._1_1_ = s___D4__T4__ERROR__packetReceived__000c6e6a[3];
      local_78._2_1_ = s___D4__T4__ERROR__packetReceived__000c6e6a[4];
      local_78._3_1_ = s___D4__T4__ERROR__packetReceived__000c6e6a[5];
      local_70._0_1_ = s___D4__T4__ERROR__packetReceived__000c6e6a[6];
      local_70._1_1_ = s___D4__T4__ERROR__packetReceived__000c6e6a[7];
      local_70._2_1_ = s___D4__T4__ERROR__packetReceived__000c6e6a[8];
      local_70._3_1_ = s___D4__T4__ERROR__packetReceived__000c6e6a[9];
      puStack_60 = &local_78;
      puVar9 = (undefined4 *)FUN_001ae5e8(local_44,puVar9,uStack_64,auStack_5c);
      *puVar9 = uVar7;
      FUN_000a1c14(auStack_2c);
      if (*(char *)(param_1 + 0x10) != '\0') {
        *(undefined4 **)(param_1 + 8) = &local_78;
        (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc),param_1);
        *(undefined4 *)(param_1 + 8) = 0;
      }
      uVar2 = s___D4__T4__ERROR__packetReceived__000c6e6a._6_4_;
      uVar7 = s___D4__T4__ERROR__packetReceived__000c6e6a._2_4_;
      s___D4__T4__ERROR__packetReceived__000c6e6a[6] = (char)uVar8;
      s___D4__T4__ERROR__packetReceived__000c6e6a[7] = SUB41(uVar8,1);
      s___D4__T4__ERROR__packetReceived__000c6e6a[8] = SUB41(uVar8,2);
      s___D4__T4__ERROR__packetReceived__000c6e6a[9] = SUB41(uVar8,3);
      local_70._0_1_ = s___D4__T4__ERROR__packetReceived__000c6e6a[6];
      local_70._1_1_ = s___D4__T4__ERROR__packetReceived__000c6e6a[7];
      local_70._2_1_ = s___D4__T4__ERROR__packetReceived__000c6e6a[8];
      local_70._3_1_ = s___D4__T4__ERROR__packetReceived__000c6e6a[9];
      s___D4__T4__ERROR__packetReceived__000c6e6a[2] = (char)uVar1;
      s___D4__T4__ERROR__packetReceived__000c6e6a[3] = SUB41(uVar1,1);
      s___D4__T4__ERROR__packetReceived__000c6e6a[4] = SUB41(uVar1,2);
      s___D4__T4__ERROR__packetReceived__000c6e6a[5] = SUB41(uVar1,3);
      local_78._0_1_ = s___D4__T4__ERROR__packetReceived__000c6e6a[2];
      local_78._1_1_ = s___D4__T4__ERROR__packetReceived__000c6e6a[3];
      local_78._2_1_ = s___D4__T4__ERROR__packetReceived__000c6e6a[4];
      local_78._3_1_ = s___D4__T4__ERROR__packetReceived__000c6e6a[5];
      s___D4__T4__ERROR__packetReceived__000c6e6a._2_4_ = uVar7;
      s___D4__T4__ERROR__packetReceived__000c6e6a._6_4_ = uVar2;
      FUN_000a1c14(local_44);
      FUN_000a1c14(auStack_38);
      FUN_000a1c14(auStack_50);
      return;
    }
    uVar6 = FUN_001c0d24(param_2);
    if (*(ushort *)(param_1 + 0x7f98) < uVar6) {
      *(undefined2 *)(param_1 + 0x7f98) = 0;
      return;
    }
    sVar3 = FUN_001c0d24(param_2);
    *(short *)(param_1 + 0x7f98) = *(short *)(param_1 + 0x7f98) - sVar3;
    uVar7 = FUN_001ae5e8(auStack_2c,param_2);
    uVar8 = FUN_001ae5e8(auStack_20,uVar7);
    uVar1 = DAT_000c6e64;
    uVar7 = DAT_000c6e60;
    local_74 = 5;
    local_68 = *DAT_000c6e5c;
    uStack_64 = DAT_000c6e5c[1];
    local_70 = DAT_000c6e64;
    local_78 = DAT_000c6e60;
    local_40 = auStack_5c;
    puStack_60 = &local_78;
    FUN_001ae5e8(local_40,uVar8,uStack_64,auStack_5c);
    FUN_001ae614(auStack_20);
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(undefined4 **)(param_1 + 8) = &local_78;
      (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc),param_1);
      *(undefined4 *)(param_1 + 8) = 0;
    }
    local_70 = uVar1;
    local_78 = uVar7;
    FUN_001ae614(local_40);
    FUN_001ae614(auStack_2c);
  }
  return;
}

