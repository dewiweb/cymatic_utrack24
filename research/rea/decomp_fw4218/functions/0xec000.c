// rea decompile_all
// name: FUN_000ec000
// address: 0xec000
// body: available
// range: 0xec000-0xec0ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_000ec000(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  iVar3 = FUN_00065060(param_1,param_2);
  piVar4 = (int *)FUN_0012d308(iVar3 + 0xdc);
  iVar3 = DAT_000ec0ac;
  piVar4[-0x37] = DAT_000ec0ac;
  *piVar4 = iVar3 + 0x48;
  for (iVar3 = 0; iVar2 = DAT_000ec0b4, iVar1 = DAT_000ec0b0, iVar3 < 0xc; iVar3 = iVar3 + 1) {
    *(int *)(DAT_000ec0b4 + iVar3 * 0xc) = DAT_000ec0b0;
    *(int *)(iVar2 + (iVar3 * 3 + 1) * 4) = iVar1;
    *(int *)(iVar2 + (iVar3 * 3 + 2) * 4) = ~(iVar1 << 2);
  }
  *(undefined4 *)(DAT_000ec0b4 + 0x90) = 0;
  *(undefined4 *)(iVar2 + 0x94) = DAT_000ec0b8;
  FUN_000f8ee0();
  uVar5 = FUN_000f6910();
  FUN_000699c8(uVar5,piVar4);
  return piVar4 + -0x37;
}

