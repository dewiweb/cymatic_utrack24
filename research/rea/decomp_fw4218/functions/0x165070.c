// rea decompile_all
// name: FUN_00165070
// address: 0x165070
// body: available
// range: 0x165070-0x1652b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00165070(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  uint extraout_r12;
  uint uVar9;
  undefined1 auStack_30 [12];
  
  FUN_001f00bc(param_1 + 0xd4);
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_001bd898(param_3,auStack_30);
    uVar9 = extraout_r12;
    if (param_2 != 0) {
      uVar9 = (uint)*(byte *)(param_2 + 0x5a);
    }
    uVar4 = 2;
    if (param_2 != 0 && uVar9 != 0) {
      uVar1 = uVar9 & 1;
      if (uVar1 != 0) {
        uVar4 = *(int *)(*(int *)(param_2 + 4) + 0x10) + 5U & DAT_001652b4;
      }
      for (; uVar1 < uVar9; uVar1 = uVar1 + 2 & 0xfffeffff) {
        iVar3 = param_2 + uVar1 * 4;
        uVar4 = *(int *)(*(int *)(iVar3 + 8) + 0x10) +
                (*(int *)(*(int *)(iVar3 + 4) + 0x10) + uVar4 + 3 & DAT_001652b4) + 3 & DAT_001652b4
        ;
      }
    }
    uVar9 = (uVar4 + 3 & 0xfffffffc) + 0x1c & 0xfff8ffff;
    *(uint *)(param_1 + 0x764) = param_5 | 0x11;
    *(undefined4 *)(param_1 + 0x768) = param_4;
    *(undefined1 *)(param_1 + 0x76c) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_1 + 0x76d) = *(undefined1 *)(param_3 + 5);
    FUN_000039e0(param_1 + 0x76e,param_3 + 6,6);
    *(undefined1 *)(param_1 + 0x774) = *(undefined1 *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x775) = *(undefined1 *)(param_1 + 0x11);
    FUN_000039e0(param_1 + 0x776,param_1 + 0x12,6);
    puVar6 = (ushort *)(param_1 + 0x77dU & 0xfffffffe);
    if (param_2 == 0) {
      puVar7 = puVar6 + 1;
      *puVar6 = 0;
    }
    else {
      uVar4 = 0;
      puVar7 = puVar6 + 1;
      *puVar6 = (ushort)*(byte *)(param_2 + 0x5a);
      if (*(char *)(param_2 + 0x5a) != '\0') {
        do {
          iVar3 = *(int *)(param_2 + uVar4 * 4 + 4);
          *puVar7 = *(ushort *)(iVar3 + 0x10);
          iVar8 = *(int *)(iVar3 + 0x10);
          FUN_000039e0(puVar7 + 1,*(undefined4 *)(iVar3 + 0x14),iVar8);
          puVar7 = (ushort *)((int)(puVar7 + 1) + iVar8 + 1 & 0xfffffffe);
          uVar4 = uVar4 + 1 & 0xfffeffff;
        } while (uVar4 < *(byte *)(param_2 + 0x5a));
      }
    }
    puVar5 = (undefined4 *)((int)puVar7 + 3U & 0xfffffffc);
    uVar4 = uVar9;
    if (uVar9 < 0x31) {
      uVar4 = 0x30;
    }
    if (uVar9 < 0x31) {
      puVar5 = (undefined4 *)(param_1 + 0x790);
    }
    uVar2 = FUN_0015d080(DAT_001652b8,param_1 + 0x764,uVar4 - 4 & 0xffff);
    *puVar5 = uVar2;
    iVar3 = FUN_0002229c(*(undefined4 *)(param_1 + 0x34),param_1 + 0x764,uVar4,auStack_30);
    FUN_001f06d4(param_1 + 0xd4);
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 0xd40) = 1;
      *(int *)(param_1 + 0xd7c) = *(int *)(param_1 + 0xd7c) + 1;
    }
    else {
      *(int *)(param_1 + 0xd8c) = *(int *)(param_1 + 0xd8c) + 1;
    }
    return iVar3 != 0;
  }
  FUN_001f06d4(param_1 + 0xd4);
  return false;
}

