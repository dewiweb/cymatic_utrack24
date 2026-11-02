// rea decompile_all
// name: FUN_00177990
// address: 0x177990
// body: available
// range: 0x177990-0x177bef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00177990(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_2c;
  int local_28;
  int local_24;
  int local_20 [3];
  
  local_20[0] = 0;
  *param_3 = 0;
  if (param_2 == 0) {
    return -2;
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    if ((*(char *)(iVar1 + 0x2c) != '\x0e') && (*(char *)(iVar1 + 0x2c) != '\r')) {
      return -3;
    }
    local_2c = 0;
    iVar1 = FUN_001a4d9c(*(undefined4 *)(iVar1 + 0x20),local_20);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = *(int *)(*(int *)(param_2 + 0x38) + 0x24);
    if ((iVar1 != 0) && (iVar1 = FUN_001a4d9c(iVar1,&local_2c), iVar1 != 0)) {
      FUN_001a52e0(local_20[0]);
      return iVar1;
    }
    FUN_00173680(*(undefined4 *)(param_2 + 0x38));
    uVar3 = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_2 + 0x38) = 0;
    FUN_001a4a80(param_1 + 0x9c,uVar3,0);
    local_24 = FUN_001a1aa8(*(undefined4 *)(*(int *)(local_20[0] + 0x70) + 4));
    iVar1 = FUN_000034d0(*(undefined4 *)(*(int *)(local_20[0] + 0x70) + 4));
    FUN_001a4d54(local_20[0] + 0x44,DAT_00177bf0);
    FUN_001a4d54(local_20[0] + 0x94,DAT_00177bf0);
    iVar2 = FUN_00179ab4(local_20[0]);
    if (iVar2 != 0) {
      FUN_001a52e0(local_20[0]);
      if (local_2c != 0) {
        FUN_001a52e0();
      }
      return iVar2;
    }
    local_24 = local_24 + 1;
    if (*(int *)(*(int *)(local_20[0] + 0x70) + 4) != 0) {
      if ((code *)*DAT_00177bf4 == entry) {
        FUN_0018a280();
      }
      else {
        (*(code *)*DAT_00177bf4)();
      }
    }
    if ((code *)*DAT_00177bf8 == entry) {
      iVar2 = FUN_0019b388(iVar1 + 2);
    }
    else {
      iVar2 = (*(code *)*DAT_00177bf8)(iVar1 + 2);
    }
    *(int *)(*(int *)(local_20[0] + 0x70) + 4) = iVar2;
    if (iVar2 == 0) {
      FUN_001a52e0(local_20[0]);
joined_r0x00177af6:
      if (local_2c != 0) {
        FUN_001a52e0();
      }
      return -4;
    }
    FUN_000027f4(iVar2,iVar1 + 2,&DAT_00177bfc,local_24);
    if ((local_2c == 0) || (*(int *)(local_2c + 0xc) != 0x1a7)) {
      FUN_001a56f2(local_20[0],s_expires_00177c00,0,&local_28);
      if (local_28 != 0) {
        if (*(int *)(local_28 + 4) != 0) {
          if ((code *)*DAT_00177bf4 == entry) {
            FUN_0018a280();
          }
          else {
            (*(code *)*DAT_00177bf4)();
          }
        }
        if ((code *)*DAT_00177bf8 == entry) {
          iVar1 = FUN_0019b388(10);
        }
        else {
          iVar1 = (*(code *)*DAT_00177bf8)(10);
        }
        *(int *)(local_28 + 4) = iVar1;
        if (iVar1 == 0) {
          FUN_001a52e0(local_20[0]);
          goto joined_r0x00177af6;
        }
        FUN_000027f4(iVar1,9,&DAT_00177bfc,*(undefined4 *)(param_2 + 8));
      }
    }
    else {
      FUN_001a56f2(local_20[0],s_expires_00177c00,0,&local_24);
      FUN_001a56f2(local_2c,s_min_expires_00177c08,0,&local_28);
      if ((((local_24 == 0) || (*(int *)(local_24 + 4) == 0)) || (local_28 == 0)) ||
         (*(int *)(local_28 + 4) == 0)) {
        FUN_001a52e0(local_20[0]);
        if (local_2c != 0) {
          FUN_001a52e0();
        }
        return -5;
      }
      if ((code *)*DAT_00177bf4 == entry) {
        FUN_0018a280();
      }
      else {
        (*(code *)*DAT_00177bf4)();
      }
      uVar3 = FUN_001a6f50(*(undefined4 *)(local_28 + 4));
      *(undefined4 *)(local_24 + 4) = uVar3;
      uVar3 = FUN_0000317c(*(undefined4 *)(local_28 + 4));
      *(undefined4 *)(param_2 + 4) = uVar3;
      *(undefined4 *)(param_2 + 8) = uVar3;
    }
    FUN_001a52cc(local_20[0]);
    if (local_2c != 0) {
      iVar1 = local_2c;
      if ((*(int *)(local_2c + 0xc) != 0x191) && (*(int *)(local_2c + 0xc) != 0x197)) {
        iVar1 = 0;
      }
      FUN_001712b4(param_1,local_20[0],iVar1);
      FUN_001a52e0(local_2c);
    }
    if (local_20[0] != 0) goto LAB_00177be6;
  }
  local_24 = *(int *)(param_2 + 8);
  local_28 = *(int *)(param_2 + 0x14);
  local_2c = *(int *)(param_2 + 0x10);
  iVar1 = FUN_00174a08(param_1,param_2,local_20,param_1 + 0x78,*(undefined4 *)(param_2 + 0xc));
  if (iVar1 != 0) {
    return iVar1;
  }
LAB_00177be6:
  *param_3 = local_20[0];
  return 0;
}

