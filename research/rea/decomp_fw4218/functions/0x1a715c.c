// rea decompile_all
// name: FUN_001a715c
// address: 0x1a715c
// body: available
// range: 0x1a715c-0x1a722b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_001a715c(undefined4 param_1,int param_2,undefined4 param_3,undefined1 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  FUN_000ceed4();
  puVar3 = (undefined4 *)FUN_0005b350();
  uVar2 = DAT_001a7230;
  uVar1 = DAT_001a722c;
  *(undefined1 *)(puVar3 + 7) = 0;
  *puVar3 = uVar1;
  puVar3[8] = uVar2;
  uVar1 = DAT_001a7234;
  *(undefined1 *)(puVar3 + 9) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((int)puVar3 + 0x25) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((int)puVar3 + 0x26) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((int)puVar3 + 0x27) = *(undefined1 *)(param_2 + 7);
  *puVar3 = uVar1;
  puVar3 = (undefined4 *)FUN_0005b350(puVar3 + 10);
  uVar1 = DAT_001a723c;
  *(undefined1 *)(puVar3 + 7) = 0;
  *puVar3 = uVar1;
  puVar3[8] = param_3;
  puVar3 = (undefined4 *)FUN_0005b350(puVar3 + 9);
  uVar1 = DAT_001a7244;
  *(undefined1 *)(puVar3 + 7) = 0;
  *(undefined1 *)((int)puVar3 + 0x1d) = param_4;
  *puVar3 = uVar1;
  puVar3 = (undefined4 *)FUN_0005b350(puVar3 + 8);
  uVar1 = DAT_001a7248;
  *(undefined1 *)(puVar3 + 7) = 0;
  *puVar3 = uVar1;
  puVar3[8] = param_5;
  puVar3 = (undefined4 *)FUN_0005b350(puVar3 + 9);
  uVar1 = DAT_001a724c;
  *(undefined1 *)(puVar3 + 7) = 0;
  *puVar3 = uVar1;
  puVar3[8] = param_6;
  puVar3 = (undefined4 *)FUN_0005b350(puVar3 + 9);
  uVar1 = DAT_001a7250;
  *(undefined1 *)(puVar3 + 7) = 0;
  puVar3[8] = param_7;
  *puVar3 = uVar1;
  return puVar3 + -0x2d;
}

