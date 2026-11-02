// rea decompile_all
// name: FUN_000701bc
// address: 0x701bc
// body: available
// range: 0x701bc-0x70247 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_000701bc(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  *param_1 = DAT_00070248;
  FUN_0006ffb4(param_1);
  iVar2 = FUN_0014fc34(param_1 + 0x30);
  piVar3 = (int *)(iVar2 + -0xc0);
  *piVar3 = DAT_0007024c;
  cVar1 = *(char *)(iVar2 + -4);
  if ((cVar1 != '\x06' && cVar1 != '\x05') && cVar1 != '\0') {
    *(undefined1 *)(iVar2 + -4) = 5;
    FUN_0017bde0(iVar2 + -0xbc);
    (**(code **)(*piVar3 + 0x18))(piVar3);
    *(undefined1 *)(iVar2 + -4) = 6;
  }
  if (*(int *)(iVar2 + -0xbc) != 0) {
    FUN_0019f30c(*(undefined4 *)(iVar2 + -0xb0));
    FUN_0017b348(iVar2 + -0xbc);
  }
  return piVar3;
}

