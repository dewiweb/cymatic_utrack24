// rea decompile_all
// name: FUN_000b666c
// address: 0xb666c
// body: available
// range: 0xb666c-0xb67db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb67d8 to 0x1a0d18 FUN_001a0d18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000b67cc) */

void FUN_000b666c(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_001a0700(param_1 + 0xf04);
  if (*(char *)(param_1 + 0xf29) != '\0') goto LAB_000b67d0;
  FUN_00110eec();
  uVar1 = FUN_00110c58();
  if (*(byte *)(param_1 + 0xf28) != uVar1) {
    *(char *)(param_1 + 0xf28) = (char)uVar1;
    uVar3 = DAT_000b67dc;
    if (*(char *)(param_1 + 0xf28) == '\0') {
      uVar3 = DAT_000b67e0;
    }
    FUN_000028a4(DAT_000b67e4,uVar3);
    if (*(char *)(param_1 + 0xf28) == '\0') {
      FUN_000dafe0(param_1 + 0x830);
    }
    else {
      FUN_000db018();
    }
  }
  FUN_00110eec();
  iVar2 = FUN_00110ba4();
  if (iVar2 == 1) {
    iVar2 = FUN_000b9aac();
    if (*(char *)(iVar2 + 0x251) != '\x01') {
      FUN_000028a4(DAT_000b67e8);
      uVar3 = FUN_000b9aac();
      uVar4 = 1;
      goto LAB_000b6764;
    }
  }
  else if (iVar2 == 2) {
    iVar2 = FUN_000b9aac();
    if (*(char *)(iVar2 + 0x251) != '\x02') {
      FUN_000028a4(DAT_000b67ec);
      uVar3 = FUN_000b9aac();
      uVar4 = 2;
      goto LAB_000b6764;
    }
  }
  else if (iVar2 == 3) {
    iVar2 = FUN_000b9aac();
    if (*(char *)(iVar2 + 0x251) != '\x03') {
      FUN_000028a4(DAT_000b67f0);
      uVar3 = FUN_000b9aac();
      uVar4 = 3;
      goto LAB_000b6764;
    }
  }
  else if ((iVar2 == 4) && (iVar2 = FUN_000b9aac(), *(char *)(iVar2 + 0x251) != '\x04')) {
    FUN_000028a4(DAT_000b67f4);
    uVar3 = FUN_000b9aac();
    uVar4 = 4;
LAB_000b6764:
    FUN_000ba54c(uVar3,uVar4);
  }
  FUN_00111024(param_1 + 0xe04,0xfa,param_1 + 0x17c);
LAB_000b67d0:
  FUN_001a0d18(param_1 + 0xf04);
  return;
}

