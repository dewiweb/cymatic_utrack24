// rea decompile_all
// name: FUN_001dae50
// address: 0x1dae50
// body: available
// range: 0x1dae50-0x1daeed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001dae50(undefined4 *param_1,int param_2,uint *param_3)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 local_1c [2];
  
  pcVar3 = *(char **)(param_2 + 0x10);
  bVar1 = true;
  pcVar4 = pcVar3;
  if (*(char **)(pcVar3 + 4) != (char *)0x0) {
    pcVar2 = *(char **)(pcVar3 + 4);
    do {
      pcVar4 = pcVar2;
      if (*(uint *)(pcVar4 + 0x10) <= *param_3) {
        pcVar2 = *(char **)(pcVar4 + 0xc);
      }
      else {
        pcVar2 = *(char **)(pcVar4 + 8);
      }
      bVar1 = *(uint *)(pcVar4 + 0x10) > *param_3;
    } while (pcVar2 != (char *)0x0);
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    if (bVar1) {
      if (pcVar4 == *(char **)(pcVar3 + 8)) goto LAB_001dae82;
      if ((*pcVar4 == '\0') && (*(char **)(*(int *)(pcVar4 + 4) + 4) == pcVar4)) {
        pcVar4 = *(char **)(pcVar4 + 0xc);
      }
      else {
        pcVar3 = *(char **)(pcVar4 + 8);
        if (*(char **)(pcVar4 + 8) == (char *)0x0) {
          pcVar3 = *(char **)(pcVar4 + 4);
          pcVar2 = pcVar4;
          while (pcVar4 = pcVar3, pcVar2 == *(char **)(pcVar4 + 8)) {
            pcVar2 = pcVar4;
            pcVar3 = *(char **)(pcVar4 + 4);
          }
        }
        else {
          do {
            pcVar4 = pcVar3;
            pcVar3 = *(char **)(pcVar4 + 0xc);
          } while (*(char **)(pcVar4 + 0xc) != (char *)0x0);
        }
      }
    }
    if (*param_3 <= *(uint *)(pcVar4 + 0x10)) {
      *param_1 = pcVar4;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
LAB_001dae82:
  FUN_001c3d94(local_1c);
  *param_1 = local_1c[0];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

