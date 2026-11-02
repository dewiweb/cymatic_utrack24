// rea decompile_all
// name: FUN_0015e3c0
// address: 0x15e3c0
// body: available
// range: 0x15e3c0-0x15e6af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0015e3c0(int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint *local_90;
  uint *local_8c;
  uint *local_88;
  uint *puStack_84;
  uint *puStack_80;
  uint *puStack_7c;
  undefined4 local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [8];
  uint auStack_50 [4];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [16];
  
  uVar5 = *(uint *)(param_3 + 0x24);
  if ((((uVar5 & 7) == 2) || ((uVar5 & 7) == 1)) &&
     (iVar3 = FUN_0015e1c4(*(undefined4 *)(param_1 + 8)), iVar3 != 0)) {
    uVar5 = uVar5 & 0xffff | 0x8000;
  }
  uVar1 = *(ushort *)(param_3 + 0x34);
  uVar6 = (uint)uVar1;
  FUN_0010e7e0(auStack_58);
  uVar7 = uVar5 & 0xff8;
  if (uVar7 == 8) {
    FUN_0015e148(auStack_40,*(undefined4 *)(param_1 + 8));
    FUN_0010e498(auStack_58,auStack_40);
    FUN_0010e7f4(auStack_40);
    uVar2 = FUN_0015d6f8(*(int *)(param_1 + 0x14) + 0x720);
    local_78 = CONCAT22(uVar2,**(undefined2 **)(param_1 + 4));
    uVar2 = FUN_0015e074(*(undefined4 *)(param_1 + 0x10));
    uVar5 = uVar5 & 0xffff | 0x4000;
    local_74 = (uint)CONCAT12(*(int *)(*(int *)(param_1 + 0xc) + 8) != 0,uVar2);
    local_6c = *(uint *)(*(int *)(param_1 + 0x14) + 0x778);
    local_70 = *(uint *)(*(int *)(param_1 + 0x14) + 0x77c);
    local_68 = CONCAT22(local_68._2_2_,(short)DAT_0015e6b0);
    goto LAB_0015e47c;
  }
  if (uVar7 == 0x10) {
    iVar3 = FUN_000e9df4(*(int *)(param_1 + 0x14) + 0x720,uVar6);
    if (iVar3 != 0) {
      FUN_0010e240(auStack_58,*(undefined4 *)(iVar3 + 0x18));
      iVar3 = FUN_0015d6f8(*(int *)(param_1 + 0x14) + 0x720);
joined_r0x0015e5d4:
      if (uVar6 < iVar3 - 1U) goto LAB_0015e47c;
    }
  }
  else if (uVar7 == 0x18) {
    local_90 = &local_74;
    local_8c = &local_70;
    local_88 = &local_6c;
    puStack_84 = &local_68;
    puStack_80 = &uStack_64;
    puStack_7c = &uStack_60;
    iVar3 = FUN_000fc68c(*(undefined4 *)(param_1 + 0x10),uVar6,&local_78,auStack_58);
    if (iVar3 != 0) {
      iVar3 = FUN_0015e074(*(undefined4 *)(param_1 + 0x10));
      goto joined_r0x0015e5d4;
    }
  }
  else {
    if (uVar7 != 0x20) {
      FUN_0015e148(auStack_38,*(undefined4 *)(param_1 + 8));
      FUN_0010e498(auStack_58,auStack_38);
      FUN_0010e7f4(auStack_38);
      goto LAB_0015e47c;
    }
    iVar3 = 0;
    if (uVar6 == 0) {
      local_90 = &local_70;
      local_8c = &local_6c;
      local_88 = &local_68;
      puStack_84 = &uStack_64;
      puStack_80 = &uStack_60;
      iVar3 = FUN_0015e294(*(undefined4 *)(param_1 + 0xc),&local_78,auStack_58,&local_74);
    }
    if (iVar3 == 1 && uVar6 == 0) goto LAB_0015e47c;
  }
  uVar5 = uVar5 & 0xffff | 0x4000;
LAB_0015e47c:
  thunk_FUN_000ea2a4(auStack_50,*(undefined4 *)(param_1 + 8));
  FUN_0010f5fc(auStack_30,param_3 + 0x18);
  local_90 = auStack_50;
  iVar3 = FUN_000ee154(param_2,*(undefined2 *)(param_3 + 0x16),auStack_30,uVar5 & 0xffff);
  FUN_000ea314(auStack_50);
  FUN_0010e820(iVar3 + 0x68,auStack_58);
  *(undefined1 *)(iVar3 + 0x74) = 1;
  *(ushort *)(iVar3 + 0x40) = uVar1;
  *(undefined4 *)(iVar3 + 0x48) = local_78;
  *(uint *)(iVar3 + 0x4c) = local_74;
  *(uint *)(iVar3 + 0x50) = local_70;
  *(uint *)(iVar3 + 0x54) = local_6c;
  *(uint *)(iVar3 + 0x58) = local_68;
  *(uint *)(iVar3 + 0x5c) = uStack_64;
  *(uint *)(iVar3 + 0x60) = uStack_60;
  *(undefined4 *)(iVar3 + 100) = uStack_5c;
  uVar5 = *(uint *)(param_3 + 0x24);
  bVar8 = (uVar5 & 7) == 2;
  if (!bVar8) {
    uVar5 = uVar5 & 7;
  }
  if (bVar8 || uVar5 == 1) {
    FUN_000ea2e0(&local_90);
    iVar4 = FUN_0015e0d8(*(undefined4 *)(param_1 + 8),1,&local_90);
    if (iVar4 != 0) {
      FUN_000ea348(iVar3 + 0x34,&local_90);
      *(undefined1 *)(iVar3 + 0x74) = 1;
    }
    FUN_000ea314(&local_90);
  }
  FUN_0010e7f4(auStack_58);
  return;
}

