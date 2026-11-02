// rea decompile_all
// name: FUN_001eed34
// address: 0x1eed34
// body: available
// range: 0x1eed34-0x1eee3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001eed34(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_98 [128];
  
  pcVar1 = DAT_001eee3c;
  if (param_1 == 0 || param_2 == 0) {
    return;
  }
  pcVar3 = DAT_001eee3c + 0x1c;
  if (*DAT_001eee3c == '\0') {
    FUN_001cf70c(DAT_001eee40,0xffffffff);
    if (*pcVar1 == '\0') {
      iVar2 = FUN_001d24ec(DAT_001eee44);
      if (iVar2 != -1) {
        FUN_0004e56c(iVar2,pcVar3);
      }
      if (*(int *)(pcVar1 + 0x20) == 0) {
        pcVar1[0x20] = '\0';
        pcVar1[0x21] = '\b';
        pcVar1[0x22] = '\0';
        pcVar1[0x23] = '\0';
      }
      FUN_001d1ef4(iVar2);
      *pcVar1 = '\x01';
    }
    FUN_001cf828(DAT_001eee40);
  }
  FUN_00003b88(auStack_98,DAT_001eee48,0x15);
  FUN_000039bc(auStack_98,param_1);
  iVar2 = FUN_001d24ec(auStack_98);
  if (iVar2 == -1) {
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(pcVar1 + 0x20);
    *(char *)(param_2 + 8) = pcVar1[0x24];
    *(char *)(param_2 + 9) = pcVar1[0x25];
    *(char *)(param_2 + 10) = pcVar1[0x26];
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(pcVar1 + 0x28);
    *(undefined4 *)(param_2 + 0x10) = 0;
    return;
  }
  FUN_0004e56c(iVar2,param_2);
  FUN_001d1ef4(iVar2);
  return;
}

