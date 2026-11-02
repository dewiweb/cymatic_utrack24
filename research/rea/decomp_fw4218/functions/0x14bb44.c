// rea decompile_all
// name: FUN_0014bb44
// address: 0x14bb44
// body: available
// range: 0x14bb44-0x14bf0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0014bb44(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *local_30;
  uint local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  
  local_2c = 1;
  local_28 = 0x82;
  local_30 = (undefined4 *)FUN_001c6a94(0x208,DAT_0014bf0c);
  FUN_00003c58(local_30,local_28 << 2);
  local_20 = 1;
  local_1c = 0x82;
  local_24 = FUN_001c6a94(0x208,DAT_0014bf0c);
  FUN_00003c58(local_24,local_1c << 2);
  iVar1 = FUN_0014b890(param_2,param_3);
  uVar5 = DAT_0014bf0c;
  if (iVar1 == 1) {
    param_1[1] = param_2[1];
    iVar1 = param_2[2];
    param_1[2] = iVar1;
    *param_1 = 0;
    uVar5 = FUN_001c6a94(iVar1 << 2,uVar5);
    *param_1 = uVar5;
    FUN_00003b88(uVar5,*param_2,param_1[1] << 2);
    if (local_24 != 0) {
      FUN_001c6a64();
    }
    if (local_30 == (undefined4 *)0x0) {
      return;
    }
  }
  else {
    iVar1 = FUN_0014b1fc(param_2);
    iVar2 = FUN_0014b1fc(param_3);
    iVar1 = iVar1 - iVar2;
    FUN_0014b5cc(&local_30,param_3[1]);
    FUN_00003b88(local_30,*param_3,param_3[1] << 2);
    local_2c = param_3[1];
    FUN_0014b5cc(&local_24,param_2[1]);
    FUN_00003b88(local_24,*param_2,param_2[1] << 2);
    local_20 = param_2[1];
    FUN_0014b718(&local_30,iVar1);
    uVar5 = DAT_0014bf0c;
    for (; DAT_0014bf0c = uVar5, -1 < iVar1; iVar1 = iVar1 + -1) {
      iVar2 = FUN_0014b890(&local_24,&local_30);
      if (iVar2 != 1) {
        uVar4 = local_20;
        if (local_20 < local_2c) {
          uVar4 = local_2c;
        }
        FUN_0014b5cc(&local_24,uVar4);
        FUN_0014b5cc(&local_30,uVar4);
        uVar6 = 0;
        uVar3 = 0;
        uVar7 = local_20;
        if (uVar4 != 0) {
          do {
            uVar7 = *(uint *)(local_24 + uVar3 * 4);
            uVar6 = (uVar7 - local_30[uVar3]) - uVar6;
            *(uint *)(local_24 + uVar3 * 4) = uVar6;
            uVar6 = (uint)(uVar7 < uVar6);
            uVar3 = uVar3 + 1;
            uVar7 = local_20;
          } while (uVar3 < uVar4);
        }
        do {
          uVar4 = uVar7;
          uVar7 = uVar4 - 1;
          if ((int)uVar7 < 1) {
            uVar3 = local_2c;
            if ((int)uVar7 < 0) goto LAB_0014bd00;
            break;
          }
        } while (*(int *)(local_24 + uVar7 * 4) == 0);
        uVar3 = local_2c;
        if ((int)uVar7 < (int)(local_20 - 1)) {
          local_20 = uVar4;
        }
LAB_0014bd00:
        do {
          uVar4 = uVar3;
          uVar3 = uVar4 - 1;
          if ((int)uVar3 < 1) {
            if ((int)uVar3 < 0) goto LAB_0014bd38;
            break;
          }
        } while (local_30[uVar3] == 0);
        if ((int)uVar3 < (int)(local_2c - 1)) {
          local_2c = uVar4;
        }
      }
LAB_0014bd38:
      uVar4 = local_2c;
      if (local_2c == 0) {
        FUN_0014b170(&local_30,1);
        *local_30 = 0;
      }
      else {
        uVar7 = local_2c & 1;
        uVar3 = (uint)(uVar7 != 0);
        for (; uVar7 < local_2c; uVar7 = uVar7 + 2) {
          local_30[uVar3] = local_30[uVar3];
          local_30[uVar3 + 1] = local_30[uVar3 + 1];
          uVar3 = uVar3 + 2;
        }
        FUN_0014b5cc(&local_30);
        uVar4 = uVar4 - 1;
        uVar7 = 0;
        uVar3 = local_2c;
        if (-1 < (int)uVar4) {
          do {
            uVar3 = (uint)local_30[uVar4] >> 1 | uVar7;
            uVar7 = local_30[uVar4] << 0x1f;
            local_30[uVar4] = uVar3;
            uVar4 = uVar4 - 1;
            uVar3 = local_2c;
          } while (uVar4 < 0x80000000);
        }
        do {
          uVar4 = uVar3;
          uVar3 = uVar4 - 1;
          if ((int)uVar3 < 1) {
            if ((int)uVar3 < 0) goto LAB_0014be54;
            break;
          }
        } while (local_30[uVar3] == 0);
        if ((int)uVar3 < (int)(local_2c - 1)) {
          local_2c = uVar4;
        }
      }
LAB_0014be54:
      uVar5 = DAT_0014bf0c;
    }
    param_1[1] = local_20;
    param_1[2] = local_1c;
    *param_1 = 0;
    uVar5 = FUN_001c6a94(local_1c << 2,uVar5);
    *param_1 = uVar5;
    FUN_00003b88(uVar5,local_24,param_1[1] << 2);
    if (local_24 != 0) {
      FUN_001c6a64();
    }
    if (local_30 == (undefined4 *)0x0) {
      return;
    }
  }
  FUN_001c6a64();
  return;
}

