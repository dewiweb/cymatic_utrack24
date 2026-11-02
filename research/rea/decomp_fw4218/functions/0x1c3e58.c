// rea decompile_all
// name: FUN_001c3e58
// address: 0x1c3e58
// body: available
// range: 0x1c3e58-0x1c4243 inclusive
// range: 0x1c4278-0x1c428f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001c3e58(int param_1,uint param_2,uint param_3,undefined4 param_4,ushort *param_5)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uStack_28;
  undefined4 uStack_24;
  
  iVar8 = param_1 + -0x128;
  uStack_28 = param_3;
  uStack_24 = param_4;
  if (*(uint *)(param_1 + 100) == param_2) {
    if (param_3 == 0) {
      *param_5 = 0;
      FUN_00171828(param_4,&DAT_001c4244);
    }
    else if (param_3 == 1) {
      *param_5 = 1;
      FUN_00171828(param_4,s__Root__001c424c);
    }
    else {
      uVar4 = param_3 - 2;
      *param_5 = (ushort)(uVar4 * 0x10000 >> 0x10) | 0x6000;
      if (((-1 < (int)uVar4) && (uVar2 = FUN_0022e20c(param_1 + 0x6e8), uVar4 < uVar2)) &&
         ((int)uVar4 < (int)DAT_001c4254)) {
        uVar3 = FUN_0023b208(param_1 + 0x6e8,uVar4);
        FUN_000acd2c(iVar8,uVar3,param_4);
      }
    }
  }
  if (*(uint *)(param_1 + 0x68) == param_2) {
    if (param_3 == 0) {
      *param_5 = 0;
      uVar4 = FUN_00171828(param_4,&DAT_001c4258);
    }
    else if (param_3 == 1) {
      *param_5 = 1;
      uVar4 = FUN_00171828(param_4,&DAT_001c425c);
    }
    else {
      param_3 = param_3 - 2;
      uVar4 = *(uint *)(param_1 + 0x68);
      if (((-1 < (int)param_3) && (uVar4 = FUN_0022e20c(param_1 + 0x6e8), param_3 < uVar4)) &&
         (uVar4 = DAT_001c4254, (int)param_3 < (int)DAT_001c4254)) {
        *param_5 = 0;
        iVar8 = FUN_0023b208(param_1 + 0x6e8,param_3);
        uVar4 = (uint)*(byte *)(iVar8 + 4);
        sVar1 = (short)param_3;
        if (uVar4 == 8) {
          *param_5 = sVar1 + 0x7000;
          uVar4 = FUN_00171828(param_4,&DAT_001c4258);
        }
        else if (uVar4 < 9) {
          if (uVar4 == 1) {
            *param_5 = sVar1 + 0x1000;
            uVar4 = FUN_00171828(param_4,&DAT_001c4260);
          }
          else if (uVar4 == 2) {
            *param_5 = sVar1 + 0x2000;
            uVar4 = FUN_00171828(param_4,&DAT_001c4264);
          }
          else if (uVar4 == 4) {
            *param_5 = sVar1 + 0x3000;
            uVar4 = FUN_00171828(param_4,&DAT_001c4268);
          }
        }
        else if (uVar4 == 0x10) {
          *param_5 = sVar1 + 0x4000;
          uVar4 = FUN_00171828(param_4,&DAT_001c4268);
        }
        else if (uVar4 == 0x20) {
          *param_5 = sVar1 + 0x5000;
          uVar4 = FUN_00171828(param_4,&DAT_001c426c);
        }
      }
    }
  }
  else if (*(uint *)(param_1 + 0x6c) == param_2) {
    uVar4 = FUN_0022ef74(param_1 + 0x52c);
    if (param_3 < uVar4) {
      puVar5 = (undefined4 *)FUN_00244c00(param_1 + 0x52c,param_3);
      FUN_00171c08(param_4,*puVar5);
      puVar6 = (uint *)FUN_00244c00(param_1 + 0x52c,param_3);
      uVar4 = *puVar6;
      *param_5 = (ushort)uVar4;
    }
    else {
      FUN_00171828(param_4,&DAT_001c4270);
      *param_5 = 0xffff;
      uVar4 = 0xffffffff;
    }
  }
  else if (*(uint *)(param_1 + 0x70) == param_2) {
    uVar4 = FUN_0022ef74(param_1 + 0x520);
    if (param_3 < uVar4) {
      puVar5 = (undefined4 *)FUN_00244c00(param_1 + 0x520,param_3);
      uVar4 = FUN_00171c08(param_4,*puVar5);
      *param_5 = (ushort)param_3;
    }
    else {
      FUN_00171828(param_4,&DAT_001c4270);
      *param_5 = 0xffff;
      uVar4 = 0xffffffff;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x74);
    if (*(uint *)(param_1 + 0x74) == param_2) {
      uVar4 = FUN_0022e14c(param_1 + 0x6fc);
      if (param_3 < uVar4) {
        iVar7 = FUN_0023ab8c(param_1 + 0x6fc,param_3);
        FUN_000acd2c(iVar8,iVar7 + 0xc,param_4);
        FUN_00171e90(&uStack_28);
        iVar7 = FUN_0023ab8c(param_1 + 0x6fc,param_3);
        FUN_000acd2c(iVar8,iVar7 + 0x10,&uStack_28);
        FUN_00171b00(param_4,&DAT_001c4274);
        FUN_00171bc8(param_4,&uStack_28);
        FUN_00171b00(param_4,&DAT_001c4274);
        iVar8 = FUN_0023ab8c(param_1 + 0x6fc,param_3);
        FUN_00171cdc(param_4,*(undefined1 *)(iVar8 + 4));
        FUN_00171b00(param_4,&DAT_001c4274);
        iVar8 = FUN_0023ab8c(param_1 + 0x6fc,param_3);
        FUN_00171cdc(param_4,*(undefined4 *)(iVar8 + 8));
        *param_5 = (ushort)param_3;
        uVar4 = FUN_00171ea4(&uStack_28);
      }
      else {
        FUN_00171828(param_4,&DAT_001c4270);
        *param_5 = 0xffff;
        uVar4 = 0xffffffff;
      }
    }
  }
  return uVar4;
}

