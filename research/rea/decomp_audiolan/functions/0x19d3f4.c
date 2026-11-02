// rea decompile_all
// name: FUN_0019d3f4
// address: 0x19d3f4
// body: available
// range: 0x19d3f4-0x19d493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_0019d3f4(uint param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar6 = param_1;
  puVar1 = (undefined1 *)FUN_0019cbdc(6);
  if (puVar1 == (undefined1 *)0x0) {
    return (undefined1 *)0x0;
  }
  puVar1[8] = 0;
  *puVar1 = (char)param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  uVar5 = 8;
  param_1 = param_1 & 0xfffffff0;
  uVar3 = DAT_0019d4ac;
  uVar4 = DAT_0019d4b0;
  if (((param_1 != 0x10) && (uVar3 = DAT_0019d4a4, uVar4 = DAT_0019d4a8, param_1 != 0x20)) &&
     (uVar3 = DAT_0019d494, uVar4 = DAT_0019d498, param_1 == 0x40)) {
    uVar3 = DAT_0019d49c;
    uVar4 = DAT_0019d4a0;
  }
  iVar2 = FUN_001b0d78(puVar1 + 0xc,0,uVar3,extraout_r3,8,uVar6);
  if (iVar2 == 0) {
    iVar2 = FUN_001b0c5c(puVar1 + 0x2c,uVar5,uVar4);
    if (iVar2 == 0) {
      *(undefined4 *)(puVar1 + 0x6c) = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 0xac) = 0xffffffff;
      *(undefined4 *)(puVar1 + 0xc0) = param_2;
      *(undefined4 *)(puVar1 + 0xbc) = 0;
      *(undefined4 *)(puVar1 + 0xb8) = 0;
      *(undefined4 *)(puVar1 + 0xb0) = 0;
      puVar1[0xb4] = 0;
      return puVar1;
    }
    FUN_001b0d70(puVar1 + 0xc);
  }
  FUN_0019cae4(6,puVar1);
  return (undefined1 *)0x0;
}

