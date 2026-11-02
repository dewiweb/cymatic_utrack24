// rea decompile_all
// name: FUN_00003864
// address: 0x3864
// body: available
// range: 0x3864-0x389f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00003864(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  
  uVar2 = (undefined1)param_3;
  if (param_2 < 4) {
    if ((bool)((byte)(param_2 >> 1) & 1)) {
      puVar4 = (undefined1 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = uVar2;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar4 = uVar2;
    }
    puVar3 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar3 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = uVar2;
    }
    return puVar3;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar6 = 4 - ((uint)param_1 & 3);
    puVar3 = param_1;
    if (iVar6 != 2) {
      puVar3 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = uVar2;
    }
    param_2 = param_2 - iVar6;
    param_1 = puVar3;
    if (1 < iVar6) {
      param_1 = (undefined4 *)((int)puVar3 + 2);
      *(short *)puVar3 = (short)param_3;
    }
  }
  bVar7 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar7) {
      *param_1 = param_3;
      param_1[1] = param_3;
      param_1[2] = param_3;
      param_1[3] = param_3;
      param_1[4] = param_3;
      param_1[5] = param_3;
      param_1[6] = param_3;
      param_1[7] = param_3;
      param_1 = param_1 + 8;
      bVar7 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar7);
  if ((bool)((byte)(param_2 >> 4) & 1)) {
    *param_1 = param_3;
    param_1[1] = param_3;
    param_1[2] = param_3;
    param_1[3] = param_3;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = param_3;
    param_1[1] = param_3;
    param_1 = param_1 + 2;
  }
  uVar1 = param_2 << 0x1e;
  puVar3 = param_1;
  if ((bool)((byte)((param_2 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = param_1 + 1;
    *param_1 = param_3;
  }
  if (uVar1 == 0) {
    return puVar3;
  }
  puVar5 = puVar3;
  if ((int)uVar1 < 0) {
    puVar5 = (undefined4 *)((int)puVar3 + 2);
    *(short *)puVar3 = (short)param_3;
  }
  puVar3 = puVar5;
  if ((uVar1 & 0x40000000) != 0) {
    puVar3 = (undefined4 *)((int)puVar5 + 1);
    *(undefined1 *)puVar5 = uVar2;
  }
  return puVar3;
}

