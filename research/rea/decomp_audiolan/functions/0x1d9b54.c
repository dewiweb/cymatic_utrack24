// rea decompile_all
// name: FUN_001d9b54
// address: 0x1d9b54
// body: available
// range: 0x1d9b54-0x1d9c47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_001d9b54(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint local_24 [2];
  
  uVar1 = FUN_00003544(param_2);
  puVar2 = DAT_001d9c48;
  if (uVar1 != 0) {
    puVar3 = local_24 + 1;
    if (0x80 < uVar1) {
      puVar3 = local_24;
    }
    local_24[0] = uVar1;
    local_24[1] = 0x80;
    uVar5 = *puVar3;
    if (0xfffffff1 < uVar5) {
      FUN_0010f7cc(8,&DAT_001d9c4c,&DAT_001d9c4c,uVar5,0xfffffff1);
    }
    if (uVar5 < uVar1) {
      FUN_0010f7cc(8,&DAT_001d9c4c,&DAT_001d9c4c,uVar1,uVar5);
    }
    puVar2 = DAT_001d9c50;
    if (uVar5 != 0) {
      puVar2 = (undefined4 *)FUN_0010f82c((uVar5 + 8) * 2,0);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      *puVar2 = 0;
      puVar2[1] = uVar5;
      puVar2[2] = uVar1;
      puVar4 = (undefined2 *)((int)puVar2 + uVar1 * 2 + 0xc);
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
      }
    }
    puVar2 = puVar2 + 3;
  }
  *param_1 = puVar2;
  FUN_00003628(puVar2,param_2,uVar1 << 1);
  return param_1;
}

