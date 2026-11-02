// rea decompile_all
// name: FUN_000e87b8
// address: 0xe87b8
// body: available
// range: 0xe87b8-0xe8af7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000e87b8(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_a0 [12];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_88;
  int local_84;
  undefined4 local_7c;
  int local_78;
  int local_70;
  int local_6c;
  int local_64;
  int local_60;
  int local_58;
  int local_54;
  int local_4c;
  int local_48;
  int local_3c [3];
  int local_30;
  int local_2c;
  
  param_1[2] = 0x82;
  uVar3 = DAT_000e8af8;
  param_1[1] = 1;
  iVar4 = FUN_0016d774(0x208,uVar3);
  *param_1 = iVar4;
  FUN_000038a0(iVar4,param_1[2] << 2);
  FUN_0016dd70(&local_94,DAT_000e8afc,0xc,3);
  FUN_000e86a8(param_1,1);
  *(undefined4 *)*param_1 = 1;
  FUN_000e8b04(&local_94,param_2[1]);
  FUN_000037d0(local_94,*param_2,param_2[1] << 2);
  local_90 = param_2[1];
  FUN_000e8ea0(&local_64,&local_94,param_2);
  FUN_000e907c(&local_70,&local_64,param_4);
  FUN_000e8b04(&local_88,local_6c);
  FUN_000037d0(local_88,local_70,local_6c << 2);
  local_84 = local_6c;
  if (local_70 != 0) {
    FUN_0016d744();
  }
  if (local_64 != 0) {
    FUN_0016d744();
  }
  FUN_000e8ea0(&local_70,&local_88,param_2);
  FUN_000e907c(&local_64,&local_70,param_4);
  FUN_000e8b04(&local_7c,local_60);
  FUN_000037d0(local_7c,local_64,local_60 << 2);
  local_78 = local_60;
  if (local_64 != 0) {
    FUN_0016d744();
  }
  if (local_70 != 0) {
    FUN_0016d744();
  }
  uVar5 = FUN_000e8734(param_3);
  for (uVar5 = uVar5 | 1; -1 < (int)uVar5; uVar5 = uVar5 - 2) {
    if (uVar5 >> 5 < (uint)param_3[1]) {
      uVar6 = *(uint *)(*param_3 + (uVar5 >> 5) * 4);
      uVar1 = 1 << (uVar5 & 0x1f | 1);
      uVar7 = 0;
      if ((uVar6 & uVar1) != 0) {
        uVar7 = 2;
      }
      if ((uVar6 & uVar1 >> 1) != 0) {
        uVar7 = uVar7 | 1;
      }
    }
    else {
      uVar7 = 0;
    }
    FUN_000e8ea0(&local_4c,param_1);
    FUN_000e907c(&local_58,&local_4c,param_4);
    FUN_000e8b04(param_1,local_54);
    FUN_000037d0(*param_1,local_58,local_54 << 2);
    param_1[1] = local_54;
    if (local_58 != 0) {
      FUN_0016d744();
    }
    if (local_4c != 0) {
      FUN_0016d744();
    }
    FUN_000e8ea0(&local_58,param_1);
    FUN_000e907c(&local_4c,&local_58,param_4);
    FUN_000e8b04(param_1,local_48);
    FUN_000037d0(*param_1,local_4c,local_48 << 2);
    param_1[1] = local_48;
    if (local_4c != 0) {
      FUN_0016d744();
    }
    if (local_58 != 0) {
      FUN_0016d744();
    }
    if (uVar7 != 0) {
      FUN_000e8ea0(local_3c,param_1,auStack_a0 + uVar7 * 0xc);
      FUN_000e907c(&local_30,local_3c,param_4);
      FUN_000e8b04(param_1,local_2c);
      FUN_000037d0(*param_1,local_30,local_2c << 2);
      param_1[1] = local_2c;
      if (local_30 != 0) {
        FUN_0016d744();
      }
      if (local_3c[0] != 0) {
        FUN_0016d744();
      }
    }
  }
  iVar4 = param_1[1];
  do {
    iVar2 = iVar4;
    iVar4 = iVar2 + -1;
    if (iVar4 < 1) {
      if (iVar4 < 0) goto LAB_000e8adc;
      break;
    }
  } while (*(int *)(*param_1 + iVar4 * 4) == 0);
  if (iVar4 < param_1[1] + -1) {
    param_1[1] = iVar2;
  }
LAB_000e8adc:
  FUN_00003c7c(&local_94,DAT_000e8b00,0xc,3);
  return;
}

