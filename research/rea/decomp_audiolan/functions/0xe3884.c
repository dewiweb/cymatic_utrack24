// rea decompile_all
// name: FUN_000e3884
// address: 0xe3884
// body: available
// range: 0xe3884-0xe391d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_000e3884(undefined4 param_1)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  
  pcVar1 = (char *)FUN_0007009c(param_1,s_PTP_Notification_000e3924,0,1,0x14,DAT_000e3920,
                                DAT_000e3920,DAT_000e3920,DAT_000e3920,DAT_000e3920,DAT_000e3920);
  *(undefined4 *)pcVar1 = s_<X&_PTP2_Notification_000e3938._0_4_;
  pcVar1[0x118] = '\0';
  pcVar1[0x119] = '\0';
  pcVar1[0x11a] = '\0';
  pcVar1[0x11b] = '\0';
  FUN_001a07ac(pcVar1 + 0x114,s_<X&_PTP2_Notification_000e3938 + 4);
  piVar5 = (int *)(pcVar1 + 0x138);
  *piVar5 = 0;
  pcVar1[0x148] = '\0';
  pcVar1[0x149] = '\0';
  pcVar1[0x14a] = '\0';
  pcVar1[0x14b] = '\0';
  pcVar1[0x14c] = '\0';
  pcVar1[0x14d] = '\0';
  pcVar1[0x14e] = '\0';
  pcVar1[0x14f] = '\0';
  pcVar1[0x150] = '\0';
  pcVar1[0x151] = (char)piVar5;
  pcVar1[0x144] = '\0';
  pcVar1[0x145] = '\0';
  pcVar1[0x146] = '\0';
  pcVar1[0x147] = '\0';
  pcVar1[0x140] = '\0';
  pcVar1[0x141] = '\0';
  pcVar1[0x142] = '\0';
  pcVar1[0x143] = '\0';
  pcVar1[0x13c] = '\0';
  pcVar1[0x13d] = '\0';
  pcVar1[0x13e] = '\0';
  pcVar1[0x13f] = '\0';
  piVar2 = (int *)FUN_0010f82c(0xc,0);
  iVar3 = FUN_0010f82c(0x14,0);
  piVar2[2] = iVar3;
  iVar3 = *piVar5;
  piVar2[1] = 1;
  *piVar2 = iVar3;
  *piVar5 = (int)piVar2;
  iVar3 = piVar2[2];
  *(int *)(pcVar1 + 0x140) = iVar3;
  *(int *)(pcVar1 + 0x144) = iVar3 + 0x14;
  puVar4 = *(undefined1 **)(pcVar1 + 0x140);
  *(undefined1 **)(pcVar1 + 0x140) = puVar4 + 0x14;
  *(undefined4 *)(puVar4 + 8) = 0;
  *(undefined4 *)(puVar4 + 0xc) = 0;
  *puVar4 = 0;
  *(undefined1 **)(pcVar1 + 0x148) = puVar4;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(int *)(*(int *)(pcVar1 + 0x148) + 8) = *(int *)(pcVar1 + 0x148);
  *(int *)(*(int *)(pcVar1 + 0x148) + 0xc) = *(int *)(pcVar1 + 0x148);
  FUN_0006e024(pcVar1);
  return pcVar1;
}

