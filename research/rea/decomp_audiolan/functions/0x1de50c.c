// rea decompile_all
// name: FUN_001de50c
// address: 0x1de50c
// body: available
// range: 0x1de50c-0x1de7d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001de50c(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  
  iVar2 = DAT_001de7d8;
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 == (undefined4 *)param_1[2]) {
    iVar7 = (int)((ulonglong)((longlong)DAT_001de7d8 * (longlong)(param_1[2] - *param_1)) >> 0x20);
    iVar5 = (int)((ulonglong)((longlong)DAT_001de7d8 * (longlong)((int)puVar1 - *param_1)) >> 0x20);
    uVar6 = (iVar5 >> 2) - (iVar5 >> 0x1f);
    if ((uint)((iVar7 >> 2) - (iVar7 >> 0x1f)) <= uVar6) {
      uVar12 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
      if (uVar12 < uVar6 + 1) {
        uVar12 = uVar6 + 1;
      }
      puVar3 = (undefined4 *)FUN_0010f82c(uVar12 * 0x18,0);
      puVar8 = puVar3;
      for (puVar9 = (undefined4 *)*param_1; puVar9 != puVar1; puVar9 = puVar9 + 6) {
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = *puVar9;
          iVar5 = FUN_0010e770(puVar8 + 1,puVar9 + 1);
          iVar5 = FUN_0010e770(iVar5 + 8,puVar9 + 3);
          *(undefined1 *)(iVar5 + 8) = *(undefined1 *)(puVar9 + 5);
        }
        puVar8 = puVar8 + 6;
      }
      iVar5 = (int)((ulonglong)((longlong)iVar2 * (longlong)((int)puVar1 - *param_1)) >> 0x20);
      puVar9 = puVar3 + ((iVar5 >> 2) - (iVar5 >> 0x1f)) * 6;
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = *param_2;
        iVar5 = FUN_0010e770(puVar9 + 1,param_2 + 1);
        iVar5 = FUN_0010e770(iVar5 + 8,param_2 + 3);
        *(undefined1 *)(iVar5 + 8) = *(undefined1 *)(param_2 + 5);
      }
      puVar8 = (undefined4 *)param_1[1];
      iVar5 = (int)((ulonglong)((longlong)iVar2 * (longlong)((int)puVar1 - *param_1)) >> 0x20);
      puVar9 = puVar3 + ((iVar5 >> 2) - (iVar5 >> 0x1f)) * 6;
      for (; puVar1 != puVar8; puVar1 = puVar1 + 6) {
        puVar10 = puVar9 + 6;
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = *puVar1;
          iVar5 = FUN_0010e770(puVar9 + 7,puVar1 + 1);
          iVar5 = FUN_0010e770(iVar5 + 8,puVar1 + 3);
          *(undefined1 *)(iVar5 + 8) = *(undefined1 *)(puVar1 + 5);
        }
        puVar9 = puVar10;
      }
      iVar5 = *param_1;
      iVar11 = param_1[1];
      iVar7 = (int)((ulonglong)((longlong)iVar2 * (longlong)(iVar11 - iVar5)) >> 0x20);
      for (; iVar5 != iVar11; iVar5 = iVar5 + 0x18) {
        iVar4 = FUN_0010e7f4(iVar5 + 0xc);
        FUN_0010e7f4(iVar4 + -8);
      }
      iVar2 = (int)((ulonglong)((longlong)iVar2 * (longlong)(param_1[2] - *param_1)) >> 0x20);
      FUN_0010fa20(*param_1,(iVar2 >> 2) - (iVar2 >> 0x1f),0);
      *param_1 = (int)puVar3;
      param_1[1] = (int)(puVar3 + ((iVar7 >> 2) - (iVar7 >> 0x1f)) * 6 + 6);
      param_1[2] = (int)(puVar3 + uVar12 * 6);
      return;
    }
    param_1[1] = (int)(puVar1 + 6);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = puVar1[-6];
      iVar2 = FUN_0010e770(puVar1 + 1,puVar1 + -5);
      iVar2 = FUN_0010e770(iVar2 + 8,puVar1 + -3);
      *(undefined1 *)(iVar2 + 8) = *(undefined1 *)(puVar1 + -1);
    }
    puVar9 = puVar1 + -6;
    puVar8 = puVar1;
    while (puVar1 != puVar9) {
      puVar8[-6] = puVar9[-6];
      FUN_0010e820(puVar8 + -5,puVar9 + -5);
      FUN_0010e820(puVar8 + -3,puVar9 + -3);
      *(undefined1 *)(puVar8 + -1) = *(undefined1 *)(puVar9 + -1);
      puVar9 = puVar9 + -6;
      puVar8 = puVar8 + -6;
    }
    *puVar1 = *param_2;
    FUN_0010e820(puVar1 + 1,param_2 + 1);
    FUN_0010e820(puVar1 + 3,param_2 + 3);
    *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(param_2 + 5);
    return;
  }
  param_1[1] = (int)(puVar1 + 6);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    iVar2 = FUN_0010e770(puVar1 + 1,param_2 + 1);
    iVar2 = FUN_0010e770(iVar2 + 8,param_2 + 3);
    *(undefined1 *)(iVar2 + 8) = *(undefined1 *)(param_2 + 5);
    return;
  }
  return;
}

