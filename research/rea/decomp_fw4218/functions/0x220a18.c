// rea decompile_all
// name: FUN_00220a18
// address: 0x220a18
// body: available
// range: 0x220a18-0x220b5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00220a18(undefined4 *param_1,int param_2,uint *param_3)

{
  char *pcVar1;
  char *pcVar2;
  uint unaff_r6;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined4 local_1c [2];
  
  pcVar2 = *(char **)(param_2 + 0x10);
  bVar5 = *(char **)(pcVar2 + 4) != (char *)0x0;
  if (bVar5) {
    unaff_r6 = *param_3;
  }
  bVar6 = true;
  pcVar3 = pcVar2;
  pcVar4 = *(char **)(pcVar2 + 4);
  while (bVar5) {
    bVar6 = unaff_r6 < *(uint *)(pcVar4 + 0x10);
    if (bVar6) {
      pcVar1 = *(char **)(pcVar4 + 8);
    }
    else {
      pcVar1 = *(char **)(pcVar4 + 0xc);
    }
    bVar5 = pcVar1 != (char *)0x0;
    pcVar3 = pcVar4;
    pcVar4 = pcVar1;
  }
  if (*(char *)(param_2 + 0x18) != '\0') {
LAB_00220a90:
    FUN_00220b9c(local_1c);
    *param_1 = local_1c[0];
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if (bVar6) {
    if (pcVar3 == *(char **)(pcVar2 + 8)) goto LAB_00220a90;
    if ((*pcVar3 == '\0') && (*(char **)(*(int *)(pcVar3 + 4) + 4) == pcVar3)) {
      pcVar3 = *(char **)(pcVar3 + 0xc);
    }
    else {
      pcVar2 = *(char **)(pcVar3 + 8);
      if (*(char **)(pcVar3 + 8) == (char *)0x0) {
        pcVar2 = *(char **)(pcVar3 + 4);
        pcVar4 = pcVar3;
        while (pcVar3 = pcVar2, pcVar4 == *(char **)(pcVar3 + 8)) {
          pcVar4 = pcVar3;
          pcVar2 = *(char **)(pcVar3 + 4);
        }
      }
      else {
        do {
          pcVar3 = pcVar2;
          pcVar2 = *(char **)(pcVar3 + 0xc);
        } while (*(char **)(pcVar3 + 0xc) != (char *)0x0);
      }
    }
  }
  if (*param_3 <= *(uint *)(pcVar3 + 0x10)) {
    *param_1 = pcVar3;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  FUN_00220b9c(local_1c);
  *param_1 = local_1c[0];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

