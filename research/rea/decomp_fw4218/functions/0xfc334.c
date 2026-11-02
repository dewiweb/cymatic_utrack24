// rea decompile_all
// name: FUN_000fc334
// address: 0xfc334
// body: available
// range: 0xfc334-0xfc46b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000fc334(uint param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 local_34 [20];
  uint uStack_20;
  uint local_1c;
  
  pcVar5 = *(char **)(param_1 + 0x274);
  bVar6 = *(char **)(pcVar5 + 4) != (char *)0x0;
  uVar2 = param_1;
  if (bVar6) {
    uVar2 = param_2;
  }
  bVar7 = true;
  pcVar3 = pcVar5;
  pcVar1 = *(char **)(pcVar5 + 4);
  while (bVar6) {
    bVar7 = uVar2 < *(uint *)(pcVar1 + 0x10);
    if (bVar7) {
      pcVar4 = *(char **)(pcVar1 + 8);
    }
    else {
      pcVar4 = *(char **)(pcVar1 + 0xc);
    }
    bVar6 = pcVar4 != (char *)0x0;
    pcVar3 = pcVar1;
    pcVar1 = pcVar4;
  }
  if (*(char *)(param_1 + 0x27c) == '\0') {
    if (bVar7) {
      if (pcVar3 == *(char **)(pcVar5 + 8)) goto LAB_000fc42c;
      if ((*pcVar3 == '\0') && (*(char **)(*(int *)(pcVar3 + 4) + 4) == pcVar3)) {
        pcVar3 = *(char **)(pcVar3 + 0xc);
      }
      else {
        pcVar5 = *(char **)(pcVar3 + 8);
        if (*(char **)(pcVar3 + 8) == (char *)0x0) {
          pcVar5 = pcVar3;
          for (pcVar3 = *(char **)(pcVar3 + 4); pcVar5 == *(char **)(pcVar3 + 8);
              pcVar3 = *(char **)(pcVar3 + 4)) {
            pcVar5 = pcVar3;
          }
        }
        else {
          do {
            pcVar3 = pcVar5;
            pcVar5 = *(char **)(pcVar3 + 0xc);
          } while (*(char **)(pcVar3 + 0xc) != (char *)0x0);
        }
      }
    }
    if (param_2 <= *(uint *)(pcVar3 + 0x10)) {
      return;
    }
  }
LAB_000fc42c:
  uStack_20 = param_1;
  local_1c = param_2;
  FUN_00215884(local_34);
  return;
}

