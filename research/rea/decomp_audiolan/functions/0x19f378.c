// rea decompile_all
// name: FUN_0019f378
// address: 0x19f378
// body: available
// range: 0x19f378-0x19f47f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0019f378(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_98 [128];
  
  pcVar1 = DAT_0019f480;
  if (param_1 == 0 || param_2 == 0) {
    return;
  }
  pcVar3 = DAT_0019f480 + 0x1c;
  if (*DAT_0019f480 == '\0') {
    FUN_0017afd4(DAT_0019f484,0xffffffff);
    if (*pcVar1 == '\0') {
      iVar2 = FUN_001813bc(DAT_0019f488);
      if (iVar2 != -1) {
        FUN_0004797c(iVar2,pcVar3);
      }
      if (*(int *)(pcVar1 + 0x20) == 0) {
        pcVar1[0x20] = '\0';
        pcVar1[0x21] = '\b';
        pcVar1[0x22] = '\0';
        pcVar1[0x23] = '\0';
      }
      FUN_00180424(iVar2);
      *pcVar1 = '\x01';
    }
    FUN_0017b0f0(DAT_0019f484);
  }
  FUN_000037d0(auStack_98,DAT_0019f48c,0x15);
  FUN_00003604(auStack_98,param_1);
  iVar2 = FUN_001813bc(auStack_98);
  if (iVar2 == -1) {
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(pcVar1 + 0x20);
    *(char *)(param_2 + 8) = pcVar1[0x24];
    *(char *)(param_2 + 9) = pcVar1[0x25];
    *(char *)(param_2 + 10) = pcVar1[0x26];
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(pcVar1 + 0x28);
    *(undefined4 *)(param_2 + 0x10) = 0;
    return;
  }
  FUN_0004797c(iVar2,param_2);
  FUN_00180424(iVar2);
  return;
}

