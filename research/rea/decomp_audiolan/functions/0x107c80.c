// rea decompile_all
// name: FUN_00107c80
// address: 0x107c80
// body: available
// range: 0x107c80-0x107e9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00107c80(uint *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_88;
  uint local_84;
  undefined4 local_80;
  undefined1 auStack_7c [4];
  int local_78;
  undefined1 auStack_74 [68];
  undefined1 auStack_30 [4];
  int local_2c;
  
  FUN_0010f5fc(auStack_30,param_3);
  iVar2 = FUN_001d782c(param_1,param_3);
  if (iVar2 != 0) {
    uVar4 = *(byte *)(iVar2 + 0x58) & 0xf;
    uVar1 = -((int)((uint)*(byte *)(iVar2 + 0x58) << 0x1b) >> 0x1f);
    if ((uVar4 == 1 || uVar4 == 2) || uVar4 == 3) {
      if ((param_4 & uVar1) != 0) {
LAB_00107d34:
        FUN_000eea30(&local_88);
        FUN_000ee768(&local_88,param_3,param_3,4);
        (**(code **)(*(int *)param_1[3] + 0x18))((int *)param_1[3],&local_88,param_2);
        FUN_000ee880(&local_88);
        FUN_000e9f98(auStack_74);
        FUN_000e9f98(auStack_7c);
        return 0;
      }
      if ((param_4 & ~uVar1) == 0) {
        if (((uVar1 & ~param_4) != 0) || (uVar1 == 0 && param_4 == 0)) {
LAB_00107dc8:
          local_2c = FUN_000faed0(0xfffffffd);
          local_2c = local_2c + 1;
        }
      }
      else {
        iVar3 = FUN_000faed0(0xfffffffd);
        FUN_00107b00(param_1,iVar2,iVar3 + 1);
      }
    }
    else if (uVar4 == 4) {
      if ((param_4 & uVar1) != 0) goto LAB_00107d34;
      if ((param_4 & ~uVar1) == 0) {
        if (((uVar1 & ~param_4) != 0) || (uVar1 == 0 && param_4 == 0)) goto LAB_00107dc8;
      }
      else {
        iVar3 = FUN_000faed0(0xfffffffd);
        FUN_001072ec(param_1,iVar2,iVar3 + 1);
      }
    }
  }
  if (*param_1 < 0x400) {
    FUN_0010f5fc(auStack_7c,auStack_30);
    iVar2 = FUN_0015e8f8(auStack_7c);
    if ((iVar2 != 0) && (local_78 == 0)) {
      local_78 = FUN_000faed0(0xfffffffd);
      local_78 = local_78 + 1;
    }
    iVar2 = FUN_0016d7a4(0x68,DAT_00107e9c);
    if (iVar2 != 0) {
      local_80 = FUN_0017bfc0();
      local_88 = 0;
      local_84 = param_4;
      iVar2 = FUN_000fe4e8(iVar2,param_2,param_3,auStack_7c);
      if (iVar2 != 0) {
        iVar2 = FUN_001bd0f0(param_1);
        if (iVar2 != 0) {
          return 0;
        }
        uVar5 = 0x11;
        goto LAB_00107e7c;
      }
    }
    uVar5 = 0x10;
  }
  else {
    uVar5 = 0x12;
  }
LAB_00107e7c:
  FUN_00106474(param_1,param_2,param_3,uVar5);
  return uVar5;
}

