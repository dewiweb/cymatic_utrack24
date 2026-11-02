// rea decompile_all
// name: FUN_002421a8
// address: 0x2421a8
// body: available
// range: 0x2421a8-0x24230b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_002421a8(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar3 = (undefined4 *)param_1[1];
  uVar1 = (int)puVar3 - *param_1 >> 2;
  if (uVar1 < (uint)(param_1[2] - *param_1 >> 2)) {
    param_1[1] = (int)(puVar3 + 1);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = puVar3[-1];
    }
    iVar6 = (int)puVar3 + (-4 - (int)param_2) >> 2;
    if (0 < iVar6) {
      iVar5 = 0;
      do {
        iVar6 = iVar6 + -1;
        puVar3[iVar5 + -1] = puVar3[iVar5 + -2];
        iVar5 = iVar5 + -1;
      } while (iVar6 != 0);
    }
    *param_2 = *param_3;
    return;
  }
  uVar7 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar7 < uVar1 + 1) {
    uVar7 = uVar1 + 1;
  }
  puVar2 = (undefined4 *)FUN_00173860(uVar7 << 2,0);
  puVar4 = puVar2;
  for (puVar3 = (undefined4 *)*param_1; puVar3 != param_2; puVar3 = puVar3 + 1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *puVar3;
    }
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffcU) + (int)puVar2);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = *param_3;
  }
  puVar4 = (undefined4 *)param_1[1];
  puVar3 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffcU) + (int)puVar2);
  for (; param_2 != puVar4; param_2 = param_2 + 1) {
    puVar3 = puVar3 + 1;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_2;
    }
  }
  iVar6 = *param_1;
  iVar5 = param_1[1];
  FUN_00173a54(iVar6,param_1[2] - iVar6 >> 2,0);
  param_1[2] = (int)(puVar2 + uVar7);
  param_1[1] = (int)(puVar2 + (iVar5 - iVar6 >> 2) + 1);
  *param_1 = (int)puVar2;
  return;
}

