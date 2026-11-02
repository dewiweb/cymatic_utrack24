// rea decompile_all
// name: FUN_001dbf54
// address: 0x1dbf54
// body: available
// range: 0x1dbf54-0x1dbff9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001dbf54(undefined4 *param_1,int param_2,uint *param_3)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_2c;
  char *local_28;
  undefined1 local_24;
  undefined4 *local_20;
  int iStack_1c;
  uint *puStack_18;
  
  pcVar3 = *(char **)(param_2 + 0x10);
  bVar1 = true;
  local_28 = pcVar3;
  if (*(char **)(pcVar3 + 4) != (char *)0x0) {
    pcVar2 = *(char **)(pcVar3 + 4);
    do {
      local_28 = pcVar2;
      if (*(uint *)(local_28 + 0x10) <= *param_3) {
        pcVar2 = *(char **)(local_28 + 0xc);
      }
      else {
        pcVar2 = *(char **)(local_28 + 8);
      }
      bVar1 = *(uint *)(local_28 + 0x10) > *param_3;
    } while (pcVar2 != (char *)0x0);
  }
  local_20 = param_1;
  if (*(char *)(param_2 + 0x18) == '\0') {
    if (bVar1) {
      if (local_28 == *(char **)(pcVar3 + 8)) goto LAB_001dbfd2;
      if ((*local_28 == '\0') && (*(char **)(*(int *)(local_28 + 4) + 4) == local_28)) {
        local_28 = *(char **)(local_28 + 0xc);
      }
      else {
        pcVar3 = *(char **)(local_28 + 8);
        if (*(char **)(local_28 + 8) == (char *)0x0) {
          pcVar3 = local_28;
          for (local_28 = *(char **)(local_28 + 4); pcVar3 == *(char **)(local_28 + 8);
              local_28 = *(char **)(local_28 + 4)) {
            pcVar3 = local_28;
          }
        }
        else {
          do {
            local_28 = pcVar3;
            pcVar3 = *(char **)(local_28 + 0xc);
          } while (*(char **)(local_28 + 0xc) != (char *)0x0);
        }
      }
    }
    if (*param_3 <= *(uint *)(local_28 + 0x10)) {
      local_24 = 0;
      goto LAB_001dbfea;
    }
  }
LAB_001dbfd2:
  iStack_1c = param_2;
  puStack_18 = param_3;
  FUN_001c2b4a(&local_2c);
  local_28 = local_2c;
  local_24 = 1;
LAB_001dbfea:
  *local_20 = local_28;
  *(undefined1 *)(local_20 + 1) = local_24;
  return;
}

