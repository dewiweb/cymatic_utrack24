// rea decompile_all
// name: FUN_00156bf0
// address: 0x156bf0
// body: available
// range: 0x156bf0-0x1573fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00156bf0(int param_1,uint *param_2)

{
  int iVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int iVar10;
  
  FUN_00155054();
  puVar3 = (undefined4 *)(*param_2 + 3 & 0xfffffffc);
  *param_2 = (uint)puVar3;
  *puVar3 = *(undefined4 *)(param_1 + 0x24);
  puVar4 = (undefined2 *)(*param_2 + 4);
  *param_2 = (uint)puVar4;
  if ((*(ushort *)(param_1 + 0x24) & 0x100) != 0) {
    *puVar4 = *(undefined2 *)(param_1 + 0x3e);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    uVar2 = *(ushort *)(param_1 + 0x3e);
    FUN_000039e0(uVar5 + 2,*(undefined4 *)(param_1 + 0x38),(uint)uVar2);
    puVar4 = (undefined2 *)(*param_2 + (uint)uVar2);
    *param_2 = (uint)puVar4;
  }
  puVar3 = (undefined4 *)((int)puVar4 + 3U & 0xfffffffc);
  *param_2 = (uint)puVar3;
  if ((*(uint *)(param_1 + 0x24) & 0x800000) != 0) {
    uVar9 = *(undefined4 *)(param_1 + 0x34);
    *puVar3 = *(undefined4 *)(param_1 + 0x30);
    puVar3[1] = uVar9;
    *param_2 = *param_2 + 8;
  }
  if ((*(uint *)(param_1 + 0x24) & 0x8000000) != 0) {
    *(undefined2 *)*param_2 = *(undefined2 *)(param_1 + 0x9a);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    *(undefined2 *)(uVar5 + 2) = *(undefined2 *)(param_1 + 0x98);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    *(undefined2 *)(uVar5 + 2) = *(undefined2 *)(param_1 + 0x9c);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    *(undefined2 *)(uVar5 + 2) = *(undefined2 *)(param_1 + 0x9e);
    *param_2 = *param_2 + 2;
  }
  if ((*(ushort *)(param_1 + 0x24) & 0x1000) != 0) {
    FUN_00171f98(param_2,param_1 + 0x58);
  }
  puVar3 = (undefined4 *)(*param_2 + 3 & 0xfffffffc);
  *param_2 = (uint)puVar3;
  if ((*(ushort *)(param_1 + 0x24) & 0x2000) != 0) {
    *puVar3 = *(undefined4 *)(param_1 + 0xa4);
    uVar5 = *param_2;
    *param_2 = uVar5 + 4;
    *(undefined4 *)(uVar5 + 4) = *(undefined4 *)(param_1 + 0xa8);
    *param_2 = *param_2 + 4;
  }
  if ((*(ushort *)(param_1 + 0x24) & 0x4000) != 0) {
    *(undefined4 *)*param_2 = *(undefined4 *)(param_1 + 0xac);
    uVar5 = *param_2;
    *param_2 = uVar5 + 4;
    *(undefined4 *)(uVar5 + 4) = *(undefined4 *)(param_1 + 0xb0);
    *param_2 = *param_2 + 4;
  }
  if ((*(ushort *)(param_1 + 0x24) & 0x8000) != 0) {
    *(undefined4 *)*param_2 = *(undefined4 *)(param_1 + 0xb4);
    uVar5 = *param_2;
    *param_2 = uVar5 + 4;
    *(undefined4 *)(uVar5 + 4) = *(undefined4 *)(param_1 + 0xb8);
    uVar5 = *param_2;
    *param_2 = uVar5 + 4;
    *(undefined4 *)(uVar5 + 4) = *(undefined4 *)(param_1 + 0xbc);
    *param_2 = *param_2 + 4;
  }
  if ((*(uint *)(param_1 + 0x24) & 0x10000000) != 0) {
    *(undefined2 *)*param_2 = *(undefined2 *)(param_1 + 0x88);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    *(short *)(uVar5 + 2) = (short)((uint)*(undefined4 *)(param_1 + 0x88) >> 0x10);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    *(undefined2 *)(uVar5 + 2) = *(undefined2 *)(param_1 + 0x8c);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    *(short *)(uVar5 + 2) = (short)((uint)*(undefined4 *)(param_1 + 0x8c) >> 0x10);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    *(undefined2 *)(uVar5 + 2) = *(undefined2 *)(param_1 + 0x90);
    *param_2 = *param_2 + 2;
  }
  if ((*(uint *)(param_1 + 0x24) & 0x20000) != 0) {
    *(undefined2 *)*param_2 = *(undefined2 *)(param_1 + 0xc0);
    *param_2 = *param_2 + 2;
  }
  if ((*(uint *)(param_1 + 0x24) & 0x40000) != 0) {
    *(undefined2 *)*param_2 = *(undefined2 *)(param_1 + 0xc2);
    *param_2 = *param_2 + 2;
  }
  if ((*(uint *)(param_1 + 0x24) & 0x80000) != 0) {
    *(undefined2 *)*param_2 = *(undefined2 *)(param_1 + 0xc4);
    *param_2 = *param_2 + 2;
  }
  if ((*(uint *)(param_1 + 0x24) & 0x100000) != 0) {
    *(undefined2 *)*param_2 = *(undefined2 *)(param_1 + 0xc6);
    *param_2 = *param_2 + 2;
  }
  if ((*(uint *)(param_1 + 0x24) & 0x200000) != 0) {
    *(undefined2 *)*param_2 = *(undefined2 *)(param_1 + 200);
    *param_2 = *param_2 + 2;
  }
  if ((*(uint *)(param_1 + 0x24) & 0x400000) != 0) {
    *(undefined2 *)*param_2 = *(undefined2 *)(param_1 + 0xca);
    *param_2 = *param_2 + 2;
  }
  if ((*(uint *)(param_1 + 0x24) & 0x20000000) != 0) {
    FUN_00171f98(param_2,param_1 + 0xf0);
    *(undefined2 *)*param_2 = *(undefined2 *)(param_1 + 0xfc);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    *(undefined2 *)(uVar5 + 2) = *(undefined2 *)(param_1 + 0x100);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    *(undefined2 *)(uVar5 + 2) = *(undefined2 *)(param_1 + 0x102);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    *(undefined2 *)(uVar5 + 2) = *(undefined2 *)(param_1 + 0x104);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    *(undefined2 *)(uVar5 + 2) = *(undefined2 *)(param_1 + 0x108);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    *(undefined2 *)(uVar5 + 2) = *(undefined2 *)(param_1 + 0x10a);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    *(undefined2 *)(uVar5 + 2) = *(undefined2 *)(param_1 + 0x10c);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    *(undefined2 *)(uVar5 + 2) = *(undefined2 *)(param_1 + 0x106);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    *(undefined2 *)(uVar5 + 2) = *(undefined2 *)(param_1 + 0x10e);
    *param_2 = *param_2 + 2;
  }
  if ((*(ushort *)(param_1 + 0x24) & 0x200) != 0) {
    *(undefined2 *)*param_2 = *(undefined2 *)(param_1 + 0x46);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    uVar2 = *(ushort *)(param_1 + 0x46);
    FUN_000039e0(uVar5 + 2,*(undefined4 *)(param_1 + 0x40),(uint)uVar2);
    *param_2 = *param_2 + (uint)uVar2;
  }
  if ((*(ushort *)(param_1 + 0x24) & 0x400) != 0) {
    puVar4 = (undefined2 *)(*param_2 + 1 & 0xfffffffe);
    *param_2 = (uint)puVar4;
    *puVar4 = *(undefined2 *)(param_1 + 0x4e);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    uVar2 = *(ushort *)(param_1 + 0x4e);
    FUN_000039e0(uVar5 + 2,*(undefined4 *)(param_1 + 0x48),(uint)uVar2);
    *param_2 = *param_2 + (uint)uVar2;
  }
  uVar5 = *param_2;
  if ((*(ushort *)(param_1 + 0x24) & 0x800) != 0) {
    puVar4 = (undefined2 *)(uVar5 + 1 & 0xfffffffe);
    *param_2 = (uint)puVar4;
    *puVar4 = *(undefined2 *)(param_1 + 0x56);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    uVar2 = *(ushort *)(param_1 + 0x56);
    FUN_000039e0(uVar5 + 2,*(undefined4 *)(param_1 + 0x50),(uint)uVar2);
    uVar5 = *param_2 + (uint)uVar2;
    *param_2 = uVar5;
  }
  puVar3 = (undefined4 *)(uVar5 + 3 & 0xfffffffc);
  *param_2 = (uint)puVar3;
  if ((*(uint *)(param_1 + 0x24) & 0x10000) != 0) {
    *puVar3 = *(undefined4 *)(param_1 + 0xa0);
    *param_2 = *param_2 + 4;
  }
  if ((*(uint *)(param_1 + 0x24) & 0x1000000) != 0) {
    *(undefined2 *)*param_2 = *(undefined2 *)(param_1 + 100);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    *(undefined2 *)(uVar5 + 2) = *(undefined2 *)(param_1 + 0x66);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    FUN_000039e0(uVar5 + 2,param_1 + 0x68,8);
    *param_2 = *param_2 + 8;
  }
  if ((*(uint *)(param_1 + 0x24) & 0x2000000) != 0) {
    *(undefined2 *)*param_2 = *(undefined2 *)(param_1 + 0x70);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    *(undefined2 *)(uVar5 + 2) = *(undefined2 *)(param_1 + 0x72);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    FUN_000039e0(uVar5 + 2,param_1 + 0x74,8);
    *param_2 = *param_2 + 8;
  }
  if ((*(uint *)(param_1 + 0x24) & 0x4000000) != 0) {
    *(undefined2 *)*param_2 = *(undefined2 *)(param_1 + 0x7c);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    *(undefined2 *)(uVar5 + 2) = *(undefined2 *)(param_1 + 0x7e);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    FUN_000039e0(uVar5 + 2,param_1 + 0x80,8);
    *param_2 = *param_2 + 8;
  }
  if ((*(uint *)(param_1 + 0x24) & 0x40000000) != 0) {
    puVar4 = (undefined2 *)(*param_2 + 1 & 0xfffffffe);
    *param_2 = (uint)puVar4;
    *puVar4 = *(undefined2 *)(param_1 + 0xcc);
    uVar6 = *param_2;
    *param_2 = uVar6 + 2;
    uVar2 = *(ushort *)(param_1 + 0xcc);
    uVar7 = (uint)uVar2;
    uVar5 = 0;
    if (uVar7 != 0) {
      uVar5 = uVar7 & 1;
    }
    if (uVar7 != 0 && (uVar2 & 1) != 0) {
      *(undefined2 *)(uVar6 + 2) = **(undefined2 **)(param_1 + 0xd8);
      *param_2 = *param_2 + 2;
    }
    if (uVar5 < *(ushort *)(param_1 + 0xcc)) {
      do {
        iVar10 = uVar5 * 2;
        iVar1 = uVar5 * 2;
        uVar5 = uVar5 + 2;
        *(undefined2 *)*param_2 = *(undefined2 *)(*(int *)(param_1 + 0xd8) + iVar10);
        uVar6 = *param_2;
        *param_2 = uVar6 + 2;
        *(undefined2 *)(uVar6 + 2) = *(undefined2 *)(*(int *)(param_1 + 0xd8) + iVar1 + 2);
        *param_2 = *param_2 + 2;
      } while ((int)uVar5 < (int)(uint)*(ushort *)(param_1 + 0xcc));
    }
  }
  if ((*(uint *)(param_1 + 0x24) & 0x80000000) != 0) {
    iVar10 = 0;
    puVar4 = (undefined2 *)(*param_2 + 1 & 0xfffffffe);
    *param_2 = (uint)puVar4;
    *puVar4 = *(undefined2 *)(param_1 + 0xce);
    *param_2 = *param_2 + 2;
    if (*(short *)(param_1 + 0xce) != 0) {
      do {
        puVar4 = (undefined2 *)(*param_2 + 1 & 0xfffffffe);
        *param_2 = (uint)puVar4;
        puVar3 = *(undefined4 **)(*(int *)(param_1 + 0xdc) + iVar10 * 4);
        *puVar4 = *(undefined2 *)((int)puVar3 + 6);
        uVar5 = *param_2;
        *param_2 = uVar5 + 2;
        uVar2 = *(ushort *)((int)puVar3 + 6);
        FUN_000039e0(uVar5 + 2,*puVar3,(uint)uVar2);
        iVar10 = iVar10 + 1;
        *param_2 = *param_2 + (uint)uVar2;
      } while (iVar10 < (int)(uint)*(ushort *)(param_1 + 0xce));
    }
  }
  if ((*(byte *)(param_1 + 0x24) & 0x80) != 0) {
    puVar4 = (undefined2 *)(*param_2 + 1 & 0xfffffffe);
    *param_2 = (uint)puVar4;
    *puVar4 = *(undefined2 *)(param_1 + 0xd0);
    uVar5 = *param_2;
    *param_2 = uVar5 + 2;
    FUN_000039e0(uVar5 + 2,*(undefined4 *)(param_1 + 0xe0),*(undefined2 *)(param_1 + 0xd0));
    *param_2 = (uint)*(ushort *)(param_1 + 0xd0) + *param_2;
  }
  if ((*(uint *)(param_1 + 0x24) & 0x10000) == 0) {
    return;
  }
  puVar8 = (undefined1 *)(*param_2 + 1 & 0xfffffffe);
  *param_2 = (uint)puVar8;
  *puVar8 = *(undefined1 *)(param_1 + 0xe8);
  uVar5 = *param_2;
  *param_2 = uVar5 + 1;
  *(undefined1 *)(uVar5 + 1) = *(undefined1 *)(param_1 + 0xe9);
  uVar5 = *param_2;
  *param_2 = uVar5 + 1;
  FUN_000039e0(uVar5 + 1,param_1 + 0xea,6);
  *param_2 = *param_2 + 6;
  return;
}

