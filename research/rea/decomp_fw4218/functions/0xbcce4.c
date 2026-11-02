// rea decompile_all
// name: FUN_000bcce4
// address: 0xbcce4
// body: available
// range: 0xbcce4-0xbd09b inclusive
// range: 0xbd0d0-0xbd2db inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000bcce4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined4 local_fc;
  undefined1 auStack_f8 [4];
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [4];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [4];
  int *local_9c;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [28];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [4];
  undefined1 local_50;
  undefined1 auStack_4c [4];
  undefined4 local_48;
  int *local_44;
  int *local_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  
  iStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  do {
    iVar1 = FUN_0022c84c(param_1 + 4,auStack_4c,0);
  } while (iVar1 != 0);
  FUN_00070a34(auStack_54);
  FUN_0023adc8(local_2c);
  uVar2 = FUN_0023077c(auStack_38);
  FUN_00242c40(auStack_60,uVar2);
  puVar3 = (undefined4 *)FUN_000cbaf0();
  uVar2 = (**(code **)*puVar3)(puVar3);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  FUN_001156a4(auStack_7c,param_1 + 4,*(undefined4 *)(param_1 + 0x58),param_2);
  uVar2 = FUN_00230e4c(auStack_3c);
  FUN_00231ef4(auStack_80,&DAT_000bd09c,uVar2);
  iVar1 = FUN_0022d2a0(param_2,auStack_80);
  if (iVar1 == 0) {
    uVar2 = FUN_00230e4c(auStack_a0);
    uVar2 = FUN_00231ef4(&local_9c,&DAT_000bd0a0,uVar2);
    FUN_0023223c(param_2,uVar2);
    iVar1 = FUN_00232190(&local_9c);
  }
  local_40 = (int *)FUN_000cbaf0(iVar1);
  iVar1 = (**(code **)(*local_40 + 8))(local_40,auStack_7c,0,0xffffffff);
  if (iVar1 == 0) {
    local_48 = FUN_001ba160(auStack_7c);
    do {
      FUN_00115750(auStack_e0,param_1 + 4,*(undefined4 *)(param_1 + 0x58),local_48);
      local_9c = (int *)FUN_000cbaf0();
      iVar1 = (**(code **)(*local_9c + 8))(local_9c,auStack_e0,0,0xffffffff);
      if (iVar1 == 0) {
        iVar4 = FUN_001ba16c(auStack_e0);
        psVar5 = (short *)FUN_001c06f8(iVar4);
        if (*psVar5 == 0) {
          iVar1 = FUN_0022eccc(auStack_60);
          if (iVar1 == 0) {
            for (iVar1 = FUN_00242bc8(auStack_60); iVar4 = FUN_00242bb0(auStack_60), iVar4 != iVar1;
                iVar1 = iVar1 + 4) {
              FUN_00232084(&local_fc,iVar1);
              FUN_000bc800(param_1,&local_fc);
              FUN_00232190(&local_fc);
            }
          }
          iVar1 = FUN_0022e24c(local_2c);
          if (iVar1 == 0) {
            uVar2 = FUN_0023ad98(local_2c);
            local_fc = FUN_0023adb0(local_2c);
            FUN_002481b8(local_fc,uVar2,_DAT_000bd2e8);
          }
          FUN_0012c504(auStack_f8,param_1 + 4,*(undefined4 *)(param_1 + 0x58),local_48);
          piVar10 = (int *)FUN_000cbaf0();
          (**(code **)(*piVar10 + 8))(piVar10,auStack_f8,0xffffffff);
          FUN_0012c578(auStack_f8);
          FUN_001157b0(auStack_e0);
          FUN_00232190(auStack_80);
          FUN_001156f4(auStack_7c);
          FUN_00242c74(auStack_60);
          uVar2 = FUN_00070a68(auStack_54);
          return uVar2;
        }
        if ((*(byte *)(iVar4 + 8) & 2) == 0 && (*(byte *)(iVar4 + 8) & 4) == 0) {
          iVar6 = FUN_0022d150(param_2);
          local_ec = FUN_001c06f8(iVar4);
          iVar7 = FUN_000038be();
          iVar8 = thunk_FUN_001d2fb4(1);
          uVar9 = FUN_00006604(iVar8 * 0x14,100);
          if (uVar9 < (uint)((iVar7 + iVar6 + 1) * 4)) {
            iVar1 = 1;
          }
          else {
            uVar2 = FUN_001c06f8(iVar4);
            FUN_0023219c(auStack_54,uVar2);
            FUN_00248acc(auStack_e8,param_2,&DAT_000bd09c);
            FUN_00248b50(auStack_e4,auStack_e8,auStack_54);
            FUN_0023223c(auStack_54,auStack_e4);
            FUN_00232190(auStack_e4);
            FUN_00232190(auStack_e8);
            if ((*(byte *)(iVar4 + 8) & 0x10) == 0) {
              FUN_00232084(&local_ec,auStack_54);
              uVar2 = FUN_00231354(&local_ec);
              local_f0 = FUN_00231330(&local_ec);
              local_f4 = FUN_00231354(&local_ec);
              FUN_00248900(local_f4,local_f0,uVar2,DAT_000bd0c0);
              if ((((param_4 & 2) != 0) || ((param_4 & 0x10) != 0)) &&
                 (iVar4 = FUN_0022d018(&local_ec,u__wav_000bd0c4,0), iVar4 != -1)) {
                if ((param_4 & 2) == 0) {
                  local_50 = 0x10;
                }
                else {
                  local_50 = 2;
                }
                FUN_0023aee8(local_2c,auStack_54);
              }
              if (((param_4 & 0x20) != 0) &&
                 (iVar4 = FUN_0022d018(&local_ec,u__play_000bd2dc,0), iVar4 != -1)) {
                local_50 = 0x20;
                FUN_0023aee8(local_2c,auStack_54);
              }
              FUN_00232190(&local_ec);
            }
            else if ((param_4 & 8) != 0) {
              iVar4 = FUN_000bd5f8(param_1,auStack_54);
              if (iVar4 == 0) {
                local_50 = 8;
                FUN_0023aee8(local_2c,auStack_54);
              }
              else {
                FUN_00242be0(auStack_60,auStack_54);
              }
            }
          }
        }
      }
      else if (iVar1 == 1) {
        uVar2 = FUN_001b29dc(auStack_e0);
        FUN_00002898(s__ERROR__Read_directory_failed_wi_000bd2eb + 1,uVar2);
      }
      else {
        FUN_00002898(s_ERROR__Read_directory_failed_000bd314);
      }
      FUN_001157b0(auStack_e0);
    } while (iVar1 == 0);
    FUN_0012c504(auStack_98,param_1 + 4,*(undefined4 *)(param_1 + 0x58),local_48);
    local_44 = (int *)FUN_000cbaf0();
    (**(code **)(*local_44 + 8))(local_44,auStack_98,0xffffffff);
    FUN_0012c578(auStack_98);
    FUN_00232190(auStack_80);
    FUN_001156f4(auStack_7c);
    FUN_00242c74(auStack_60);
    uVar2 = FUN_00070a68(auStack_54);
  }
  else {
    uVar2 = FUN_0022d168(param_2);
    FUN_00002898(DAT_000bd0a4,iVar1,uVar2);
    iVar1 = FUN_001b29dc(auStack_7c);
    iVar4 = FUN_0022d260(param_2,u__MultiTrack_000bd0a8);
    if ((iVar4 == 0) && (iVar1 == 5)) {
      FUN_000bc6c0(param_1,param_2);
    }
    FUN_00232190(auStack_80);
    FUN_001156f4(auStack_7c);
    FUN_00242c74(auStack_60);
    uVar2 = FUN_00070a68(auStack_54);
  }
  return uVar2;
}

