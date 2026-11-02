// rea decompile_all
// name: FUN_000d2f3c
// address: 0xd2f3c
// body: available
// range: 0xd2f3c-0xd3097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d2f3c(int param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  char *local_48 [6];
  char *local_30;
  undefined1 local_2c;
  
  FUN_001a0700(param_1 + 0x5e4);
  pcVar2 = *(char **)(param_1 + 0x5d4);
  bVar3 = true;
  local_30 = pcVar2;
  pcVar1 = *(char **)(pcVar2 + 4);
  while (pcVar1 != (char *)0x0) {
    bVar3 = param_2 < *(uint *)(pcVar1 + 0x10);
    local_30 = pcVar1;
    if (bVar3) {
      pcVar1 = *(char **)(pcVar1 + 8);
    }
    else {
      pcVar1 = *(char **)(pcVar1 + 0xc);
    }
  }
  if (*(char *)(param_1 + 0x5dc) == '\0') {
    if (bVar3) {
      if (local_30 == *(char **)(pcVar2 + 8)) goto LAB_000d306c;
      if ((*local_30 == '\0') && (*(char **)(*(int *)(local_30 + 4) + 4) == local_30)) {
        local_30 = *(char **)(local_30 + 0xc);
      }
      else {
        pcVar1 = *(char **)(local_30 + 8);
        if (*(char **)(local_30 + 8) == (char *)0x0) {
          pcVar1 = *(char **)(local_30 + 4);
          pcVar2 = local_30;
          while (local_30 = pcVar1, pcVar2 == *(char **)(local_30 + 8)) {
            pcVar2 = local_30;
            pcVar1 = *(char **)(local_30 + 4);
          }
        }
        else {
          do {
            local_30 = pcVar1;
            pcVar1 = *(char **)(local_30 + 0xc);
          } while (*(char **)(local_30 + 0xc) != (char *)0x0);
        }
      }
    }
    if (param_2 <= *(uint *)(local_30 + 0x10)) {
      local_2c = 0;
      goto LAB_000d3084;
    }
  }
LAB_000d306c:
  FUN_001d0810(local_48);
  local_30 = local_48[0];
  local_2c = 1;
LAB_000d3084:
  FUN_001a0d18(param_1 + 0x5e4);
  return;
}

