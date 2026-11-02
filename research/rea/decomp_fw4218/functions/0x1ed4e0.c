// rea decompile_all
// name: FUN_001ed4e0
// address: 0x1ed4e0
// body: available
// range: 0x1ed4e0-0x1ed583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_001ed4e0(uint param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar6 = param_1;
  puVar1 = (undefined1 *)FUN_001ed0b4(6);
  if (puVar1 == (undefined1 *)0x0) {
    return (undefined1 *)0x0;
  }
  puVar1[8] = 0;
  *puVar1 = (char)param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  uVar5 = 8;
  param_1 = param_1 & 0xfffffff0;
  uVar3 = DAT_001ed59c;
  uVar4 = DAT_001ed5a0;
  if (((param_1 != 0x10) && (uVar3 = DAT_001ed594, uVar4 = DAT_001ed598, param_1 != 0x20)) &&
     (uVar3 = DAT_001ed584, uVar4 = DAT_001ed588, param_1 == 0x40)) {
    uVar3 = DAT_001ed58c;
    uVar4 = DAT_001ed590;
  }
  iVar2 = FUN_001f934c(puVar1 + 0xc,0,uVar3,extraout_r3,8,uVar6);
  if (iVar2 == 0) {
    iVar2 = FUN_001f9230(puVar1 + 0x2c,uVar5,uVar4);
    if (iVar2 == 0) {
      *(undefined4 *)(puVar1 + 0x6c) = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 0xac) = 0xffffffff;
      *(undefined4 *)(puVar1 + 0xc0) = 0;
      *(undefined4 *)(puVar1 + 0xc4) = param_2;
      *(undefined4 *)(puVar1 + 0xbc) = 0;
      *(undefined4 *)(puVar1 + 0xb0) = 0;
      *(undefined4 *)(puVar1 + 0xb4) = 0;
      puVar1[0xb8] = 0;
      return puVar1;
    }
    FUN_001f9344(puVar1 + 0xc);
  }
  FUN_001ecfbc(6,puVar1);
  return (undefined1 *)0x0;
}

