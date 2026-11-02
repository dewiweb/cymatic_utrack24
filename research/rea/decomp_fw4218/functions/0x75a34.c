// rea decompile_all
// name: FUN_00075a34
// address: 0x75a34
// body: available
// range: 0x75a34-0x75b4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00075a34(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00002898(DAT_00075b4c);
  iVar3 = 0;
  do {
    iVar1 = FUN_00074c00(iVar3);
    if (iVar1 != 0) {
      FUN_00002898(DAT_00075b50,iVar3);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x40);
  FUN_00002898(DAT_00075b54);
  iVar3 = 0;
  do {
    iVar1 = FUN_00074d0c(iVar3);
    if (iVar1 != 0) {
      FUN_00002898(DAT_00075b58,iVar3);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  FUN_00002898(DAT_00075b5c);
  iVar3 = 0;
  do {
    iVar1 = FUN_00074c24(iVar3);
    if (iVar1 != 0) {
      FUN_00002898(DAT_00075b50,iVar3);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  FUN_00002898(DAT_00075b60);
  iVar3 = 0;
  do {
    iVar1 = FUN_00074b34(iVar3);
    if (iVar1 != 0) {
      FUN_00002898(DAT_00075b50,iVar3);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  FUN_00002898(DAT_00075b64);
  iVar3 = DAT_00075b68;
  iVar1 = 0;
  do {
    piVar2 = (int *)(iVar3 + iVar1 * 8);
    if (*piVar2 != 0) {
      FUN_00002898(DAT_00075b6c,iVar1,*piVar2,piVar2[1]);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40);
  return;
}

