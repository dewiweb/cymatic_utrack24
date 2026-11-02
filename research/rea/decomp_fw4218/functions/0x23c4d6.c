// rea decompile_all
// name: FUN_0023c4d6
// address: 0x23c4d6
// body: available
// range: 0x23c4d6-0x23c605 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0023c4d6(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  puVar3 = (undefined1 *)param_1[1];
  uVar7 = (int)puVar3 - *param_1 >> 1;
  if ((uint)(param_1[2] - *param_1 >> 1) <= uVar7) {
    uVar5 = (uVar7 >> 1) + uVar7 + (uVar7 >> 3);
    uVar2 = uVar7 + 1;
    if (uVar7 + 1 <= uVar5) {
      uVar2 = uVar5;
    }
    puVar1 = (undefined1 *)FUN_00173860(uVar2 * 2,0);
    puVar6 = puVar1;
    for (puVar3 = (undefined1 *)*param_1; puVar3 != param_2; puVar3 = puVar3 + 2) {
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0;
        if (puVar6 != puVar3) {
          *puVar6 = *puVar3;
          puVar6[1] = puVar3[1];
        }
      }
      puVar6 = puVar6 + 2;
    }
    puVar3 = puVar1 + ((int)param_2 - *param_1 & 0xfffffffe);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      if (puVar3 != param_3) {
        *puVar3 = *param_3;
        puVar3[1] = param_3[1];
      }
    }
    puVar6 = (undefined1 *)param_1[1];
    puVar3 = puVar1 + ((int)param_2 - *param_1 & 0xfffffffe);
    for (; param_2 != puVar6; param_2 = param_2 + 2) {
      puVar4 = puVar3 + 2;
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
        puVar3[3] = 0;
        if (puVar4 != param_2) {
          *puVar4 = *param_2;
          puVar3[3] = param_2[1];
        }
      }
      puVar3 = puVar4;
    }
    iVar9 = param_1[1];
    iVar8 = *param_1;
    FUN_00173a54(iVar8,param_1[2] - iVar8 >> 1,0);
    *param_1 = (int)puVar1;
    param_1[1] = (int)(puVar1 + (iVar9 - iVar8 >> 1) * 2 + 2);
    param_1[2] = (int)(puVar1 + uVar2 * 2);
    return;
  }
  param_1[1] = (int)(puVar3 + 2);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    *puVar3 = puVar3[-2];
    puVar3[1] = puVar3[-1];
  }
  iVar8 = 1;
  iVar9 = ((int)(puVar3 + -2) - (int)param_2 >> 1) + 1;
  puVar6 = puVar3 + -2;
  if (1 < iVar9) {
    do {
      puVar4 = puVar3 + -2;
      puVar1 = puVar6 + -2;
      if (puVar4 != puVar1) {
        *puVar4 = *puVar1;
        puVar3[-1] = puVar6[-1];
      }
      iVar8 = iVar8 + 1;
      puVar6 = puVar1;
      puVar3 = puVar4;
    } while (iVar8 < iVar9);
  }
  if (param_2 != param_3) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
  }
  return;
}

