// rea decompile_all
// name: FUN_00126594
// address: 0x126594
// body: available
// range: 0x126594-0x126997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00126594(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 *local_84;
  undefined1 auStack_80 [2];
  short local_7e;
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [56];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  FUN_00131d28(param_1 + 0x30);
  if (DAT_00126998 < (uint)(param_2 - param_1[0x4a])) {
    param_1[0x4a] = param_2;
    iVar1 = *(int *)param_1[0x1f];
    uVar4 = *(uint *)(iVar1 + 0x608);
    *(uint *)(iVar1 + 0x608) = uVar4 + 1;
    *(uint *)(iVar1 + 0x60c) = *(int *)(iVar1 + 0x60c) + (uint)(0xfffffffe < uVar4);
    if (param_1[0x50] != 0) {
      FUN_00115a98(auStack_80);
      local_84 = auStack_80;
      local_90 = 0;
      local_8c = 0;
      local_88 = 0;
      (**(code **)(*param_1 + 0x1c0))(param_1,DAT_0012699c,1,0);
      uVar2 = FUN_0010f6a4(auStack_70,auStack_80);
      uVar3 = FUN_00115c50(param_1[0x50]);
      FUN_00121904(param_1[0x1f],1,uVar3,uVar2);
    }
  }
  if (DAT_001269a0 < (uint)(param_2 - param_1[0x4b])) {
    param_1[0x4b] = param_2;
    iVar1 = *(int *)param_1[0x1f];
    uVar4 = *(uint *)(iVar1 + 0x610);
    *(uint *)(iVar1 + 0x610) = uVar4 + 1;
    *(uint *)(iVar1 + 0x614) = *(int *)(iVar1 + 0x614) + (uint)(0xfffffffe < uVar4);
    FUN_0012d87c(param_1 + 0x20,*(byte *)(param_1 + 0x52) & 1);
    FUN_0012d87c(param_1 + 0x22,*(byte *)(param_1 + 0x52) & 1);
  }
  if (DAT_001269a4 < (uint)(param_2 - param_1[0x4c])) {
    param_1[0x4c] = param_2;
    iVar1 = *(int *)param_1[0x1f];
    uVar4 = *(uint *)(iVar1 + 0x618);
    *(uint *)(iVar1 + 0x618) = uVar4 + 1;
    *(uint *)(iVar1 + 0x61c) = *(int *)(iVar1 + 0x61c) + (uint)(0xfffffffe < uVar4);
    FUN_0012b094(param_1 + 0x24);
  }
  if (0x4b0 < (uint)(param_2 - param_1[0x4d])) {
    param_1[0x4d] = param_2;
    iVar1 = *(int *)param_1[0x1f];
    uVar4 = *(uint *)(iVar1 + 0x620);
    *(uint *)(iVar1 + 0x620) = uVar4 + 1;
    *(uint *)(iVar1 + 0x624) = *(int *)(iVar1 + 0x624) + (uint)(0xfffffffe < uVar4);
    FUN_0012d87c(param_1 + 0x20,*(byte *)(param_1 + 0x52) & 1);
  }
  if (DAT_001269a8 < (uint)(param_2 - param_1[0x4e])) {
    param_1[0x4e] = param_2;
    iVar1 = *(int *)param_1[0x1f];
    uVar4 = *(uint *)(iVar1 + 0x628);
    *(uint *)(iVar1 + 0x628) = uVar4 + 1;
    *(uint *)(iVar1 + 0x62c) = *(int *)(iVar1 + 0x62c) + (uint)(0xfffffffe < uVar4);
    iVar1 = FUN_0013ed60(param_1 + 0x2a);
    if (iVar1 != 0) {
      FUN_000eea30(&local_90);
      FUN_000ec860(&local_90,*(undefined4 *)(*(int *)param_1[0x1f] + 0x188),1,param_1 + 0x10);
      iVar1 = FUN_000eaaa4(&local_90,iVar1);
      if (iVar1 == 0) {
        uVar4 = 0;
        if ((short)param_1[0x2b] != 0) {
          do {
            iVar1 = FUN_0013f040(param_1 + 0x2a,uVar4);
            if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == '\x01')) {
              uVar2 = FUN_0010f674(auStack_38,iVar1,0);
              FUN_000eaa14(&local_90,uVar2);
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(ushort *)(param_1 + 0x2b));
        }
        if (local_7e != 0) {
          FUN_00149df0(*(int *)param_1[0x1f] + 0x4a0,&local_90,0);
        }
      }
      FUN_000ee880(&local_90);
      FUN_000e9f98(auStack_7c);
      FUN_000e9f98(&local_84);
      local_8c = 0;
      local_90 = 0;
      local_88 = 0;
    }
  }
  if (2000 < (uint)(param_2 - param_1[0x4f])) {
    param_1[0x4f] = param_2;
    iVar1 = *(int *)param_1[0x1f];
    uVar4 = *(uint *)(iVar1 + 0x630);
    *(uint *)(iVar1 + 0x630) = uVar4 + 1;
    *(uint *)(iVar1 + 0x634) = *(int *)(iVar1 + 0x634) + (uint)(0xfffffffe < uVar4);
    iVar1 = FUN_0013ed9c(param_1 + 0x2a);
    if (iVar1 != 0) {
      FUN_000eea30(&local_90);
      FUN_000ec860(&local_90,*(undefined4 *)(*(int *)param_1[0x1f] + 0x188),2,param_1 + 0x10);
      iVar1 = FUN_000eaaa4(&local_90,iVar1);
      if (iVar1 == 0) {
        uVar4 = 0;
        if ((short)param_1[0x2b] != 0) {
          do {
            iVar1 = FUN_0013f040(param_1 + 0x2a,uVar4);
            if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == '\x02')) {
              uVar2 = FUN_0010f674(auStack_28,iVar1,0);
              FUN_000eaa14(&local_90,uVar2);
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(ushort *)(param_1 + 0x2b));
        }
        if (local_7e != 0) {
          FUN_00149df0(*(int *)param_1[0x1f] + 0x4a0,&local_90,0);
        }
      }
      FUN_000ee880(&local_90);
      FUN_000e9f98(auStack_7c);
      FUN_000e9f98(&local_84);
    }
  }
  return 0;
}

