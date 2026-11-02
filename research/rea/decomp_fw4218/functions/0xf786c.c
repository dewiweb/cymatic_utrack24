// rea decompile_all
// name: FUN_000f786c
// address: 0xf786c
// body: available
// range: 0xf786c-0xf78f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_000f786c(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_2c [28];
  
  *(undefined2 *)(DAT_000f78f4 + param_1) = 0xffff;
  uVar1 = (uint)*(byte *)(param_1 + 0x118);
  if (uVar1 == 2) {
    FUN_001470e8(auStack_2c);
    FUN_0022f0d0(param_1 + 0x48c);
    piVar2 = (int *)FUN_000c90cc();
    if ((piVar2 != (int *)0x0) &&
       (iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,auStack_2c,0), iVar3 == 0)) {
      FUN_00002898(DAT_000f78f8);
    }
    uVar1 = FUN_00147148(auStack_2c);
  }
  return uVar1;
}

