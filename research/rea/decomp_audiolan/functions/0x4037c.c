// rea decompile_all
// name: FUN_0004037c
// address: 0x4037c
// body: available
// range: 0x4037c-0x40447 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0004037c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((*DAT_00040448 & 1) == 0) &&
     (iVar2 = FUN_0016ddfa(DAT_00040448), puVar1 = DAT_0004044c, iVar2 != 0)) {
    iVar3 = 0;
    iVar2 = DAT_00040450 + -0x20;
    DAT_0004044c[1] = DAT_00040450;
    puVar1[2] = iVar2;
    puVar1[3] = 0;
    puVar1[4] = 0;
    iVar2 = 0;
    *puVar1 = DAT_00040454;
    do {
      iVar4 = iVar3 + 1;
      iVar2 = iVar2 + 2;
      puVar1[iVar3 * 2 + 5] = 0;
      iVar3 = iVar3 + 2;
      puVar1[iVar4 * 2 + 5] = 0;
    } while (iVar2 < 0x14);
    FUN_0016dd44(puVar1,DAT_0004045c,DAT_00040458);
  }
  puVar1 = DAT_0004044c;
  if (param_2 == 0) {
    return;
  }
  iVar2 = 0;
  do {
    if (DAT_0004044c[iVar2 * 2 + 5] == 0) {
      DAT_0004044c[iVar2 * 2 + 5] = param_1;
      puVar1[iVar2 * 2 + 6] = param_2;
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x14);
  return;
}

