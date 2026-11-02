// rea decompile_all
// name: FUN_0006c3f8
// address: 0x6c3f8
// body: available
// range: 0x6c3f8-0x6c617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0006c3f8(int *param_1,undefined1 param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  undefined1 local_20;
  undefined1 local_1f;
  undefined2 uStack_1e;
  
  for (puVar8 = (undefined1 *)*param_1; (undefined1 *)param_1[1] != puVar8; puVar8 = puVar8 + 2) {
    if ((byte)puVar8[1] == param_3) {
      *puVar8 = param_2;
      return;
    }
  }
  uVar2 = (undefined1)param_3;
  uStack_1e = (undefined2)((uint)param_4 >> 0x10);
  _local_20 = CONCAT11(uVar2,param_2);
  puVar8 = (undefined1 *)param_1[1];
  if (puVar8 != (undefined1 *)param_1[2]) {
    param_1[1] = (int)(puVar8 + 2);
    if (puVar8 != (undefined1 *)0x0) {
      *puVar8 = param_2;
      puVar8[1] = uVar2;
      return;
    }
    return;
  }
  uVar1 = (int)puVar8 - *param_1 >> 1;
  if ((uint)(param_1[2] - *param_1 >> 1) <= uVar1) {
    uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
    if (uVar9 < uVar1 + 0x20) {
      uVar9 = uVar1 + 0x20;
    }
    puVar4 = (undefined1 *)FUN_0010f82c(uVar9 << 1,0);
    puVar5 = puVar4;
    for (puVar3 = (undefined1 *)*param_1; puVar3 != puVar8; puVar3 = puVar3 + 2) {
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = *puVar3;
        puVar5[1] = puVar3[1];
      }
      puVar5 = puVar5 + 2;
    }
    puVar3 = puVar4 + ((int)puVar8 - *param_1 & 0xfffffffe);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = local_20;
      puVar3[1] = local_1f;
    }
    puVar5 = (undefined1 *)param_1[1];
    puVar3 = puVar4 + ((int)puVar8 - *param_1 & 0xfffffffe);
    for (; puVar8 != puVar5; puVar8 = puVar8 + 2) {
      puVar7 = puVar3 + 2;
      if (puVar7 != (undefined1 *)0x0) {
        *puVar7 = *puVar8;
        puVar3[3] = puVar8[1];
      }
      puVar3 = puVar7;
    }
    iVar6 = *param_1;
    iVar10 = param_1[1];
    FUN_0010fa20(iVar6,param_1[2] - iVar6 >> 1,0);
    param_1[2] = (int)(puVar4 + uVar9 * 2);
    param_1[1] = (int)(puVar4 + (iVar10 - iVar6 >> 1) * 2 + 2);
    *param_1 = (int)puVar4;
    return;
  }
  param_1[1] = (int)(puVar8 + 2);
  if (puVar8 != (undefined1 *)0x0) {
    *puVar8 = puVar8[-2];
    puVar8[1] = puVar8[-1];
  }
  puVar3 = puVar8 + -2;
  iVar6 = (int)puVar3 - (int)puVar8 >> 1;
  iVar10 = 1;
  puVar5 = puVar8;
  if (1 < iVar6 + 1) {
    do {
      puVar7 = puVar5 + -2;
      puVar4 = puVar3 + -2;
      if (puVar7 != puVar4) {
        *puVar7 = *puVar4;
        puVar5[-1] = puVar3[-1];
      }
      iVar10 = iVar10 + 1;
      puVar3 = puVar4;
      puVar5 = puVar7;
    } while (iVar10 < iVar6 + 1);
  }
  if (puVar8 != &local_20) {
    *puVar8 = param_2;
    puVar8[1] = uVar2;
    return;
  }
  return;
}

