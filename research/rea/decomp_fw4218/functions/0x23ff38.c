// rea decompile_all
// name: FUN_0023ff38
// address: 0x23ff38
// body: available
// range: 0x23ff38-0x240147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24002c to 0x1c6d8c FUN_001c6d8c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0023ff38(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  
  iVar4 = DAT_00240148;
  puVar11 = (undefined4 *)param_1[1];
  if (puVar11 == (undefined4 *)param_1[2]) {
    iVar7 = (int)((ulonglong)((longlong)DAT_00240148 * (longlong)(param_1[2] - *param_1)) >> 0x20);
    iVar2 = (int)((ulonglong)((longlong)DAT_00240148 * (longlong)((int)puVar11 - *param_1)) >> 0x20)
    ;
    uVar3 = (iVar2 >> 1) - (iVar2 >> 0x1f);
    if (uVar3 < (uint)((iVar7 >> 1) - (iVar7 >> 0x1f))) {
      param_1[1] = (int)(puVar11 + 3);
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = puVar11[-3];
        puVar11[1] = puVar11[-2];
        puVar11[2] = puVar11[-1];
      }
      puVar8 = puVar11 + -3;
      iVar2 = (int)((ulonglong)((longlong)iVar4 * (longlong)((int)puVar8 - (int)puVar11)) >> 0x20);
      iVar7 = 1;
      if (1 < ((iVar2 >> 1) - (iVar2 >> 0x1f)) + 1) {
        iVar4 = (int)((ulonglong)((longlong)iVar4 * (longlong)((int)puVar8 - (int)puVar11)) >> 0x20)
        ;
        puVar9 = puVar11;
        do {
          puVar9 = puVar9 + -3;
          puVar8 = puVar8 + -3;
          FUN_001c6d8c(puVar9,puVar8);
          iVar7 = iVar7 + 1;
        } while (iVar7 < ((iVar4 >> 1) - (iVar4 >> 0x1f)) + 1);
      }
      FUN_001c6d8c(puVar11,param_2);
      return;
    }
    uVar12 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
    if (uVar12 < uVar3 + 1) {
      uVar12 = uVar3 + 1;
    }
    puVar5 = (undefined4 *)FUN_00173860(uVar12 * 0xc,0);
    puVar9 = puVar5;
    for (puVar8 = (undefined4 *)*param_1; puVar8 != puVar11; puVar8 = puVar8 + 3) {
      if (puVar9 != (undefined4 *)0x0) {
        uVar1 = puVar8[1];
        uVar10 = puVar8[2];
        *puVar9 = *puVar8;
        puVar9[1] = uVar1;
        puVar9[2] = uVar10;
      }
      puVar9 = puVar9 + 3;
    }
    iVar2 = (int)((ulonglong)((longlong)iVar4 * (longlong)((int)puVar11 - *param_1)) >> 0x20);
    puVar8 = puVar5 + ((iVar2 >> 1) - (iVar2 >> 0x1f)) * 3;
    if (puVar8 != (undefined4 *)0x0) {
      uVar1 = param_2[1];
      uVar10 = param_2[2];
      *puVar8 = *param_2;
      puVar8[1] = uVar1;
      puVar8[2] = uVar10;
    }
    puVar9 = (undefined4 *)param_1[1];
    iVar2 = (int)((ulonglong)((longlong)iVar4 * (longlong)((int)puVar11 - *param_1)) >> 0x20);
    puVar8 = puVar5 + ((iVar2 >> 1) - (iVar2 >> 0x1f)) * 3;
    for (; puVar11 != puVar9; puVar11 = puVar11 + 3) {
      puVar6 = puVar8 + 3;
      if (puVar6 != (undefined4 *)0x0) {
        uVar1 = puVar11[1];
        uVar10 = puVar11[2];
        *puVar6 = *puVar11;
        puVar8[4] = uVar1;
        puVar8[5] = uVar10;
      }
      puVar8 = puVar6;
    }
    iVar2 = *param_1;
    iVar7 = (int)((ulonglong)((longlong)iVar4 * (longlong)(param_1[1] - iVar2)) >> 0x20);
    iVar4 = (int)((ulonglong)((longlong)iVar4 * (longlong)(param_1[2] - iVar2)) >> 0x20);
    FUN_00173a54(iVar2,(iVar4 >> 1) - (iVar4 >> 0x1f),0);
    *param_1 = (int)puVar5;
    param_1[1] = (int)(puVar5 + ((iVar7 >> 1) - (iVar7 >> 0x1f)) * 3 + 3);
    param_1[2] = (int)(puVar5 + uVar12 * 3);
    return;
  }
  param_1[1] = (int)(puVar11 + 3);
  if (puVar11 == (undefined4 *)0x0) {
    return;
  }
  uVar1 = *param_2;
  uVar10 = param_2[1];
  puVar11[2] = param_2[2];
  *puVar11 = uVar1;
  puVar11[1] = uVar10;
  return;
}

