// rea decompile_all
// name: FUN_001577f8
// address: 0x1577f8
// body: available
// range: 0x1577f8-0x157b47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001577f8(undefined2 *param_1,uint *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  if (100 < (int)(param_3 - (int)*param_2)) {
    *param_1 = *(undefined2 *)*param_2;
    uVar4 = *param_2;
    *param_2 = uVar4 + 4;
    param_1[2] = *(undefined2 *)(uVar4 + 4);
    uVar4 = *param_2;
    *param_2 = uVar4 + 2;
    param_1[3] = *(undefined2 *)(uVar4 + 2);
    uVar4 = *param_2;
    *param_2 = uVar4 + 2;
    uVar2 = *(undefined2 *)(uVar4 + 2);
    *param_2 = uVar4 + 4;
    uVar3 = *(undefined2 *)(uVar4 + 4);
    *param_2 = uVar4 + 6;
    *(uint *)(param_1 + 4) = CONCAT22(uVar3,uVar2);
    param_1[6] = *(undefined2 *)*param_2;
    uVar4 = *param_2;
    *param_2 = uVar4 + 2;
    param_1[8] = *(undefined2 *)(uVar4 + 2);
    uVar4 = *param_2;
    *param_2 = uVar4 + 2;
    param_1[9] = *(undefined2 *)(uVar4 + 2);
    uVar4 = *param_2;
    *param_2 = uVar4 + 2;
    uVar2 = *(undefined2 *)(uVar4 + 2);
    *param_2 = uVar4 + 4;
    uVar3 = *(undefined2 *)(uVar4 + 4);
    *param_2 = uVar4 + 6;
    *(uint *)(param_1 + 10) = CONCAT22(uVar3,uVar2);
    param_1[0xc] = *(undefined2 *)*param_2;
    uVar4 = *param_2;
    *param_2 = uVar4 + 2;
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(uVar4 + 2);
    uVar4 = *param_2;
    *param_2 = uVar4 + 4;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(uVar4 + 4);
    uVar4 = *param_2;
    *param_2 = uVar4 + 4;
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(uVar4 + 4);
    uVar4 = *param_2;
    *param_2 = uVar4 + 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(uVar4 + 4);
    uVar4 = *param_2;
    *param_2 = uVar4 + 4;
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(uVar4 + 4);
    uVar4 = *param_2;
    *param_2 = uVar4 + 4;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(uVar4 + 4);
    uVar4 = *param_2;
    *param_2 = uVar4 + 4;
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(uVar4 + 4);
    uVar4 = *param_2;
    *param_2 = uVar4 + 4;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(uVar4 + 4);
    uVar4 = *param_2;
    *param_2 = uVar4 + 4;
    *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(uVar4 + 4);
    uVar4 = *param_2;
    *param_2 = uVar4 + 4;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(uVar4 + 4);
    uVar4 = *param_2;
    *param_2 = uVar4 + 4;
    *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(uVar4 + 4);
    uVar4 = *param_2;
    *param_2 = uVar4 + 4;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(uVar4 + 4);
    uVar4 = *param_2;
    *param_2 = uVar4 + 4;
    *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(uVar4 + 4);
    uVar4 = *param_2;
    *param_2 = uVar4 + 4;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(uVar4 + 4);
    uVar4 = *param_2;
    *param_2 = uVar4 + 4;
    *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(uVar4 + 4);
    uVar4 = *param_2;
    *param_2 = uVar4 + 4;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(uVar4 + 4);
    uVar4 = *param_2;
    *param_2 = uVar4 + 4;
    param_1[0x2e] = *(undefined2 *)(uVar4 + 4);
    uVar4 = *param_2;
    *param_2 = uVar4 + 2;
    param_1[0x2f] = *(undefined2 *)(uVar4 + 2);
    uVar4 = *param_2;
    puVar5 = (undefined1 *)(uVar4 + 2);
    *param_2 = (uint)puVar5;
    if ((int)(param_3 - (int)puVar5) < 8) {
      *(undefined1 *)(param_1 + 0x32) = 0x7f;
      *(undefined1 *)((int)param_1 + 0x65) = 0;
      FUN_001c6c64(param_1 + 0x33);
    }
    else {
      uVar1 = *puVar5;
      *param_2 = uVar4 + 3;
      *(undefined1 *)(param_1 + 0x32) = uVar1;
      *(undefined1 *)((int)param_1 + 0x65) = *(undefined1 *)*param_2;
      uVar4 = *param_2;
      *param_2 = uVar4 + 1;
      FUN_000039e0(param_1 + 0x33,uVar4 + 1,6);
      uVar4 = *param_2;
      *param_2 = uVar4 + 6;
      if (uVar4 + 6 < param_3) {
        return 1;
      }
    }
  }
  *param_1 = 0xffff;
  FUN_00172658(param_1 + 2);
  FUN_00172658(param_1 + 8);
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0x7f;
  *(undefined1 *)((int)param_1 + 0x65) = 0;
  FUN_001c6c64(param_1 + 0x33);
  return 0;
}

