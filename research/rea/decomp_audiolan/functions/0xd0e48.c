// rea decompile_all
// name: FUN_000d0e48
// address: 0xd0e48
// body: available
// range: 0xd0e48-0xd0f03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000d0e48(void)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char local_10;
  char local_f;
  char local_e;
  char local_d;
  char local_c;
  
  iVar2 = FUN_0018a53c(0,&local_10);
  if (iVar2 == 0) {
    FUN_000028a4(DAT_000d0f04);
  }
  else {
    cVar1 = local_10;
    if (local_10 == '\0') {
      cVar1 = local_f;
    }
    if (local_10 != '\0' || cVar1 != '\0') {
      return 1;
    }
    bVar3 = local_e == '\0';
    cVar1 = local_e;
    if (bVar3) {
      cVar1 = local_d;
    }
    bVar4 = bVar3 && cVar1 == '\0';
    if (bVar3 && cVar1 == '\0') {
      bVar4 = local_c == '\0';
    }
    if (!bVar4) {
      return 1;
    }
  }
  iVar2 = FUN_0018a53c(2,&local_10);
  if (iVar2 == 0) {
    FUN_000028a4(DAT_000d0f08);
    return 0;
  }
  bVar3 = local_10 == '\0';
  if (bVar3) {
    local_10 = local_f;
  }
  if (bVar3 && local_10 == '\0') {
    bVar3 = local_e == '\0';
    if (bVar3) {
      local_e = local_d;
    }
    bVar4 = bVar3 && local_e == '\0';
    if (bVar3 && local_e == '\0') {
      bVar4 = local_c == '\0';
    }
    if (bVar4) {
      return 0;
    }
  }
  return 1;
}

