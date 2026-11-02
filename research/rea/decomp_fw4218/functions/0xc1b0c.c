// rea decompile_all
// name: FUN_000c1b0c
// address: 0xc1b0c
// body: available
// range: 0xc1b0c-0xc1c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000c1b0c(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  ushort uVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  int *piVar10;
  undefined4 local_30;
  undefined4 local_2c [2];
  
  if (param_2 != 0) {
    if (param_5 < 8) {
      param_5 = 8;
    }
    iVar4 = param_1;
    if (param_3 == 1) {
      iVar4 = *(int *)(param_1 + 0x314);
    }
    uVar1 = *(ushort *)(param_1 + 0x390);
    iVar9 = param_1 + param_2 * 4;
    bVar8 = 0;
    if (param_3 == 1 && iVar4 == 0) {
      bVar8 = 0x10;
      param_5 = param_5 << 1;
    }
    piVar10 = (int *)(iVar9 + 0x5b4);
    if (param_4 != 0) {
      piVar10 = (int *)(iVar9 + 0x574);
    }
    iVar4 = 0;
    for (; param_5 != 0; param_5 = param_5 >> 1) {
      iVar4 = iVar4 + 1;
    }
    uVar7 = iVar4 - 1;
    if (bVar8 == 0) {
      if (uVar7 < 3) {
        uVar7 = 3;
      }
    }
    else if (uVar7 < 4) {
      uVar7 = 4;
    }
    cVar6 = (char)uVar7;
    iVar4 = 1 << (uVar7 & 0xff);
    if (*piVar10 != iVar4) {
      if (0x2000 < (uint)uVar1 + iVar4) {
        return 0;
      }
      if (bVar8 != 0) {
        cVar6 = cVar6 + -1;
      }
      *(short *)(param_1 + 0x390) = (short)((uint)uVar1 + iVar4);
      bVar8 = bVar8 | cVar6 - 3U & 0xf;
      uVar2 = (undefined1)(uVar1 >> 3);
      bVar3 = (byte)(uVar1 >> 8);
      if (param_4 == 0) {
        FUN_001fe1e4(&local_30);
        *(byte *)(*(int *)(param_1 + 0x4c8) + 0x62) = bVar8;
        iVar5 = *(int *)(param_1 + 0x4c8);
        *(undefined1 *)(iVar5 + 100) = uVar2;
        *(byte *)(iVar5 + 0x65) = bVar3 >> 3;
        FUN_001fe1f8(local_30);
        *(int *)(iVar9 + 0x5b4) = iVar4;
      }
      else {
        if (param_4 != 1) {
          return 0;
        }
        FUN_001fe1e4(local_2c);
        *(byte *)(*(int *)(param_1 + 0x4c8) + 99) = bVar8;
        iVar5 = *(int *)(param_1 + 0x4c8);
        *(undefined1 *)(iVar5 + 0x66) = uVar2;
        *(byte *)(iVar5 + 0x67) = bVar3 >> 3;
        FUN_001fe1f8(local_2c[0]);
        *(int *)(iVar9 + 0x574) = iVar4;
      }
    }
  }
  return 1;
}

