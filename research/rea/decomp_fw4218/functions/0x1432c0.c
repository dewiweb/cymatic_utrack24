// rea decompile_all
// name: FUN_001432c0
// address: 0x1432c0
// body: available
// range: 0x1432c0-0x1433ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001432c0(int param_1,uint param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_50;
  bool local_4c;
  char *local_48 [5];
  uint local_34;
  char *local_30 [2];
  int local_28;
  char **local_24;
  uint local_20;
  
  local_28 = param_1 + 0x114;
  FUN_001f00bc();
  local_34 = param_2 & 0xffffff00 | 1;
  local_24 = local_30;
  pcVar4 = *(char **)(param_1 + 0x148);
  bVar1 = true;
  local_50 = pcVar4;
  pcVar2 = *(char **)(pcVar4 + 4);
  while (pcVar2 != (char *)0x0) {
    if (*(uint *)(pcVar2 + 0x10) <= param_2) {
      pcVar3 = *(char **)(pcVar2 + 0xc);
    }
    else {
      pcVar3 = *(char **)(pcVar2 + 8);
    }
    bVar1 = *(uint *)(pcVar2 + 0x10) > param_2;
    local_50 = pcVar2;
    pcVar2 = pcVar3;
  }
  local_20 = param_2;
  if (*(char *)(param_1 + 0x150) == '\0') {
    if (bVar1) {
      if (local_50 == *(char **)(pcVar4 + 8)) goto LAB_0014332a;
      if ((*local_50 == '\0') && (*(char **)(*(int *)(local_50 + 4) + 4) == local_50)) {
        local_50 = *(char **)(local_50 + 0xc);
      }
      else {
        pcVar2 = *(char **)(local_50 + 8);
        if (*(char **)(local_50 + 8) == (char *)0x0) {
          pcVar2 = *(char **)(local_50 + 4);
          pcVar4 = local_50;
          while (local_50 = pcVar2, pcVar4 == *(char **)(local_50 + 8)) {
            pcVar4 = local_50;
            pcVar2 = *(char **)(local_50 + 4);
          }
        }
        else {
          do {
            local_50 = pcVar2;
            pcVar2 = *(char **)(local_50 + 0xc);
          } while (*(char **)(local_50 + 0xc) != (char *)0x0);
        }
      }
    }
    local_4c = *(uint *)(local_50 + 0x10) < param_2;
    if (local_4c) {
      FUN_00211f64(local_48);
      local_50 = local_48[0];
    }
  }
  else {
LAB_0014332a:
    FUN_00211f64(local_48);
    local_50 = local_48[0];
    local_4c = true;
  }
  local_30[0] = local_50;
  *(bool *)(local_24 + 1) = local_4c;
  if ((local_34 & 0xff) != 0) {
    FUN_001f06d4(local_28);
  }
  return 1;
}

