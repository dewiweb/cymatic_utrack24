// rea decompile_all
// name: FUN_000037d0
// address: 0x37d0
// body: available
// range: 0x37d0-0x3833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_000037d0(undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  
  while (uVar1 = param_3 - 0x20, 0x1f < param_3) {
    uVar7 = *(undefined4 *)(param_2 + 4);
    uVar8 = *(undefined4 *)(param_2 + 8);
    uVar9 = *(undefined4 *)(param_2 + 0xc);
    *param_1 = *(undefined4 *)param_2;
    param_1[1] = uVar7;
    param_1[2] = uVar8;
    param_1[3] = uVar9;
    param_4 = *(undefined4 *)(param_2 + 0x10);
    uVar7 = *(undefined4 *)(param_2 + 0x14);
    uVar8 = *(undefined4 *)(param_2 + 0x18);
    uVar9 = *(undefined4 *)(param_2 + 0x1c);
    param_2 = param_2 + 0x20;
    param_1[4] = param_4;
    param_1[5] = uVar7;
    param_1[6] = uVar8;
    param_1[7] = uVar9;
    param_1 = param_1 + 8;
    param_3 = uVar1;
  }
  if ((bool)((byte)(uVar1 >> 4) & 1)) {
    param_4 = *(undefined4 *)param_2;
    uVar7 = *(undefined4 *)(param_2 + 4);
    uVar8 = *(undefined4 *)(param_2 + 8);
    uVar9 = *(undefined4 *)(param_2 + 0xc);
    param_2 = param_2 + 0x10;
    *param_1 = param_4;
    param_1[1] = uVar7;
    param_1[2] = uVar8;
    param_1[3] = uVar9;
    param_1 = param_1 + 4;
  }
  if ((int)(param_3 << 0x1c) < 0) {
    param_4 = *(undefined4 *)param_2;
    uVar7 = *(undefined4 *)(param_2 + 4);
    param_2 = param_2 + 8;
    *param_1 = param_4;
    param_1[1] = uVar7;
    param_1 = param_1 + 2;
  }
  puVar3 = param_1;
  pbVar4 = param_2;
  if ((bool)((byte)(uVar1 >> 2) & 1)) {
    pbVar4 = param_2 + 4;
    param_4 = *(undefined4 *)param_2;
    puVar3 = param_1 + 1;
    *param_1 = param_4;
  }
  uVar6 = (undefined2)param_4;
  if ((uVar1 & 3) == 0) {
    return CONCAT44(pbVar4,puVar3);
  }
  bVar11 = (bool)((byte)(uVar1 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  bVar10 = (int)param_3 < 0;
  pbVar5 = pbVar4;
  if (bVar11) {
    pbVar5 = pbVar4 + 2;
    uVar6 = *(undefined2 *)pbVar4;
  }
  pbVar4 = pbVar5;
  if (bVar10) {
    pbVar4 = pbVar5 + 1;
    param_3 = (uint)*pbVar5;
  }
  puVar2 = puVar3;
  if (bVar11) {
    puVar2 = (undefined4 *)((int)puVar3 + 2);
    *(undefined2 *)puVar3 = uVar6;
  }
  puVar3 = puVar2;
  if (bVar10) {
    puVar3 = (undefined4 *)((int)puVar2 + 1);
    *(char *)puVar2 = (char)param_3;
  }
  return CONCAT44(pbVar4,puVar3);
}

