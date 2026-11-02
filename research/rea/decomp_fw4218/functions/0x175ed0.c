// rea decompile_all
// name: FUN_00175ed0
// address: 0x175ed0
// body: available
// range: 0x175ed0-0x175ff7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00175ed0(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar1 = param_1 + 2;
  iVar4 = param_1 + 1;
  do {
    if (0x199 < *(int *)(param_1 + 0x804) + 5U) {
      FUN_00176128(param_1);
      *(undefined4 *)(param_1 + 0x804) = 0;
    }
    *(undefined1 *)(param_1 + *(int *)(param_1 + 0x804)) = 0x3c;
    *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar4) = 0x21;
    *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar1) = 0x5b;
    *(undefined1 *)(*(int *)(param_1 + 0x804) + param_1 + 3) = 0x43;
    *(undefined1 *)(*(int *)(param_1 + 0x804) + param_1 + 4) = 0x44;
    iVar2 = *(int *)(param_1 + 0x804);
    *(int *)(param_1 + 0x804) = iVar2 + 5;
    if (0x199 < iVar2 + 9U) {
      FUN_00176128(param_1);
      *(undefined4 *)(param_1 + 0x804) = 0;
    }
    *(undefined1 *)(param_1 + *(int *)(param_1 + 0x804)) = 0x41;
    *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar4) = 0x54;
    *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar1) = 0x41;
    *(undefined1 *)(*(int *)(param_1 + 0x804) + param_1 + 3) = 0x5b;
    *(int *)(param_1 + 0x804) = *(int *)(param_1 + 0x804) + 4;
    for (pcVar3 = param_2; *pcVar3 != '\0'; pcVar3 = pcVar3 + 1) {
      if (((*pcVar3 == ']') && (pcVar3[1] == ']')) && (pcVar3[2] == '>')) {
        pcVar3 = pcVar3 + 2;
        break;
      }
    }
    FUN_00176438(param_1,param_2,(int)pcVar3 - (int)param_2);
    if (0x199 < *(int *)(param_1 + 0x804) + 3U) {
      FUN_00176128(param_1);
      *(undefined4 *)(param_1 + 0x804) = 0;
    }
    *(undefined1 *)(param_1 + *(int *)(param_1 + 0x804)) = 0x5d;
    *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar4) = 0x5d;
    *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar1) = 0x3e;
    *(int *)(param_1 + 0x804) = *(int *)(param_1 + 0x804) + 3;
    param_2 = pcVar3;
    if (*pcVar3 == '\0') {
      return;
    }
  } while( true );
}

