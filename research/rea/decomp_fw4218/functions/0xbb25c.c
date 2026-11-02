// rea decompile_all
// name: FUN_000bb25c
// address: 0xbb25c
// body: available
// range: 0xbb25c-0xbb313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000bb25c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_34 [28];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  puVar1 = (undefined4 *)FUN_001a2e8c(param_1);
  *puVar1 = DAT_000bb314;
  uVar2 = FUN_0022f570(auStack_14);
  iVar3 = FUN_0023c30c(puVar1 + 5,uVar2);
  uVar2 = FUN_0022f570(auStack_18);
  iVar3 = FUN_0023c30c(iVar3 + 0xc,uVar2);
  for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
    uVar2 = FUN_000ec594(auStack_34);
    FUN_0023c2ac(iVar3 + -0xc,uVar2);
    FUN_000ec5c4(auStack_34);
    uVar2 = FUN_000ec594(auStack_34);
    FUN_0023c2ac(iVar3,uVar2);
    FUN_000ec5c4(auStack_34);
  }
  return iVar3 + -0x20;
}

