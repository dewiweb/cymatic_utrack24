// rea decompile_all
// name: FUN_000fd72c
// address: 0xfd72c
// body: available
// range: 0xfd72c-0xfdaa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000fd72c(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_r2;
  uint uVar5;
  int iVar6;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined2 local_76;
  undefined4 local_74;
  undefined2 local_70;
  undefined2 local_6e;
  undefined1 auStack_6c [60];
  undefined1 auStack_30 [12];
  
  FUN_000ea2a4(auStack_30,param_2 + 0x24);
  iVar2 = FUN_0015e07c(param_1);
  bVar1 = false;
  iVar3 = FUN_000ea134(auStack_30,param_1);
  if (iVar3 < 0) {
    FUN_000fd4c4(param_1,DAT_000fdaa4,param_1 + 0x1c,0x10,auStack_30,1);
    FUN_000fd4c4(param_1,DAT_000fdaa8,param_1 + 0x34,4,auStack_30,0xffffffff);
  }
  else if ((0 < iVar3) &&
          (iVar6 = *(int *)(param_1 + 0x28),
          FUN_000fd4c4(param_1,DAT_000fdaac,param_1 + 0x28,0x10,auStack_30,0xffffffff),
          *(int *)(param_1 + 0x28) != iVar6)) {
    bVar1 = true;
  }
  if ((*(char *)(param_1 + 0x59) != '\0') &&
     (iVar3 = FUN_000ea134(auStack_30,param_1 + 0x4c), iVar3 == 0)) {
    *(undefined1 *)(param_1 + 0x58) = 5;
  }
  if (0 < iVar3) {
    FUN_000ea348(param_1 + 0x4c,auStack_30);
    *(undefined1 *)(param_1 + 0x59) = 1;
    *(undefined1 *)(param_1 + 0x58) = 5;
  }
  if (bVar1) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x1c))(*(int **)(param_1 + 0x18),1);
  }
  iVar3 = FUN_0015e07c(param_1);
  if (*(char *)(param_1 + 0x78) == '\0') {
    if ((*(char *)(param_1 + 0x7b) == '\0') && (iVar2 != 0)) {
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x74) = 0;
        *(undefined1 *)(param_1 + 0x7b) = 1;
        *(undefined1 *)(param_1 + 0x78) = 1;
        uVar4 = FUN_0017bfc0();
        *(undefined4 *)(param_1 + 0x70) = uVar4;
        *(undefined1 *)(param_1 + 0x79) = 0;
        FUN_000ea314(auStack_30);
        return;
      }
    }
    else if ((iVar3 == 0) && ((*(byte *)(param_2 + 0x30) & 1) != 0)) {
      local_84 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_7c = 0;
      local_76 = 0;
      local_74 = 0;
      local_6e = 0;
      iVar2 = FUN_0010f718(auStack_6c);
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *(undefined4 *)(iVar2 + 0x24) = 0;
      *(undefined1 *)(iVar2 + 0x35) = 1;
      FUN_000ee880(iVar2 + -0x1c);
      FUN_000edfa8(&local_88,0,(~*(byte *)(param_2 + 0x30) & 3) == 0,0,
                   *(uint *)(param_1 + 0x7c) + *(uint *)(param_2 + 0x18),
                   *(int *)(param_2 + 0x1c) +
                   (uint)CARRY4(*(uint *)(param_1 + 0x7c),*(uint *)(param_2 + 0x18)),0,0,
                   *(undefined4 *)(param_2 + 0x20));
      (**(code **)(**(int **)(param_1 + 0x18) + 0x14))(*(int **)(param_1 + 0x18),&local_88);
      iVar2 = FUN_000ea134(param_1 + 0x5c,auStack_30);
      if (iVar2 != 0) {
        FUN_000ea348(param_1 + 0x5c,auStack_30);
        FUN_000fdddc(param_1,1);
      }
      FUN_000ee880(&local_88);
      FUN_000e9f98(&local_74);
      FUN_000e9f98(&local_7c);
      local_84 = 0;
      local_88 = 0;
      local_80 = 0;
    }
    goto LAB_000fda94;
  }
  iVar2 = FUN_0017bfc0();
  if (*(char *)(param_1 + 0x79) == '\0') {
    if ((uint)(iVar2 - *(int *)(param_1 + 0x70)) < DAT_000fdab0) {
      if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
        FUN_000ea348(param_1 + 0x5c,auStack_30);
        *(undefined1 *)(param_1 + 0x79) = 1;
      }
      goto LAB_000fda94;
    }
    iVar3 = FUN_0015e07c(param_1);
    iVar2 = extraout_r2;
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 0xb0) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined1 *)(param_1 + 0x78) = 0;
      goto LAB_000fda94;
    }
  }
  else {
    if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(undefined4 *)(param_1 + 0x6c) = 0;
        FUN_000fdddc(param_1,1);
      }
      else {
        uVar5 = *(uint *)(param_2 + 0x18);
        iVar3 = *(int *)(param_2 + 0x1c);
        iVar2 = FUN_0017bfc0();
        *(uint *)(param_1 + 0x68) = uVar5 + iVar2 * -1000;
        *(uint *)(param_1 + 0x6c) = iVar3 - (uint)(uVar5 < (uint)(iVar2 * 1000));
        *(undefined1 *)(param_1 + 0xb0) = 0;
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      *(undefined1 *)(param_1 + 0x78) = 0;
      goto LAB_000fda94;
    }
    if ((uint)(iVar2 - *(int *)(param_1 + 0x70)) < DAT_000fdab4) goto LAB_000fda94;
  }
  *(int *)(param_1 + 0x70) = iVar2;
  *(undefined1 *)(param_1 + 0x79) = 0;
LAB_000fda94:
  FUN_000ea314(auStack_30);
  return;
}

