// rea decompile_all
// name: FUN_000c1c8c
// address: 0xc1c8c
// body: available
// range: 0xc1c8c-0xc1ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000c1c8c(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  byte **local_30;
  byte *local_2c;
  byte **local_28 [2];
  
  if (0xf < param_3) {
    return 0;
  }
  if (param_3 == 0) {
    if (param_4 != 2) {
      return 0;
    }
  }
  else if (param_4 == 2) {
    return 0;
  }
  local_30 = &local_2c;
  iVar2 = FUN_000c171c(param_1);
  if (iVar2 == 0) {
    return 1;
  }
  if (param_4 == 0) {
    FUN_001fe1e4(local_28);
    iVar2 = *(int *)(param_1 + 0x4c8);
    uVar4 = (uint)*(ushort *)(iVar2 + 6) & ((~(1 << *local_2c) & 0x7ffU) << 1 | 0xfffff001);
    *(char *)(iVar2 + 6) = (char)uVar4;
    *(char *)(iVar2 + 7) = (char)(uVar4 >> 8);
  }
  else {
    if (param_4 != 1) {
      if (param_4 == 2) {
        FUN_001fe1e4(&local_30);
        iVar2 = *(int *)(param_1 + 0x4c8);
        uVar1 = *(undefined2 *)(iVar2 + 6);
        *(byte *)(iVar2 + 6) = (byte)uVar1 & 0xfe;
        *(char *)(iVar2 + 7) = (char)((ushort)uVar1 >> 8);
        FUN_001fe1f8(local_30);
      }
      goto LAB_000c1e08;
    }
    FUN_001fe1e4(&local_30);
    iVar2 = *(int *)(param_1 + 0x4c8);
    uVar4 = (uint)*(ushort *)(iVar2 + 8) &
            ((~(1 << (*local_2c - 1 & 0xff)) & 0x7ffU) << 1 | 0xfffff001);
    *(char *)(iVar2 + 8) = (char)uVar4;
    *(char *)(iVar2 + 9) = (char)(uVar4 >> 8);
    local_28[0] = local_30;
  }
  FUN_001fe1f8(local_28[0]);
LAB_000c1e08:
  iVar2 = FUN_000c2d78(param_1,local_2c);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = 1;
  do {
    uVar4 = param_1 + iVar2 * 0x24;
    bVar5 = *(char *)(uVar4 + 0xd5) != -1;
    if (!bVar5) {
      uVar4 = (uint)*(byte *)(uVar4 + 0x1f5);
    }
    if (bVar5 || uVar4 != 0xff) goto LAB_000c1e94;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  *(undefined2 *)(param_1 + 0x390) = 0x80;
  *(undefined4 *)(param_1 + 0x578) = 0;
  *(undefined4 *)(param_1 + 0x57c) = 0;
  *(undefined4 *)(param_1 + 0x580) = 0;
  *(undefined4 *)(param_1 + 0x584) = 0;
  *(undefined4 *)(param_1 + 0x588) = 0;
  *(undefined4 *)(param_1 + 0x58c) = 0;
  *(undefined4 *)(param_1 + 0x590) = 0;
  *(undefined4 *)(param_1 + 0x5b8) = 0;
  *(undefined4 *)(param_1 + 0x5bc) = 0;
  *(undefined4 *)(param_1 + 0x5c0) = 0;
  *(undefined4 *)(param_1 + 0x5c4) = 0;
  *(undefined4 *)(param_1 + 0x5c8) = 0;
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  *(undefined4 *)(param_1 + 0x5d0) = 0;
LAB_000c1e94:
  param_1 = param_1 + param_3 * 4;
  if (param_4 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x534);
  }
  else {
    if (param_4 != 1 && param_4 != 2) {
      return 0;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x4f4);
  }
  FUN_001f06d4(uVar3);
  return 1;
}

