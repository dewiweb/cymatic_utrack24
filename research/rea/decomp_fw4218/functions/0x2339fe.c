// rea decompile_all
// name: FUN_002339fe
// address: 0x2339fe
// body: available
// range: 0x2339fe-0x233aa9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_002339fe(int param_1,byte *param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_2c;
  byte local_28;
  undefined4 local_24;
  char *local_20;
  
  local_28 = *param_2;
  local_24 = 0;
  pcVar4 = *(char **)(param_1 + 0x10);
  bVar1 = true;
  local_20 = pcVar4;
  pcVar2 = *(char **)(pcVar4 + 4);
  while (pcVar2 != (char *)0x0) {
    if ((byte)pcVar2[0x10] <= local_28) {
      pcVar3 = *(char **)(pcVar2 + 0xc);
    }
    else {
      pcVar3 = *(char **)(pcVar2 + 8);
    }
    bVar1 = (byte)pcVar2[0x10] > local_28;
    local_20 = pcVar2;
    pcVar2 = pcVar3;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (bVar1) {
      if (local_20 == *(char **)(pcVar4 + 8)) goto LAB_00233a8a;
      if ((*local_20 == '\0') && (*(char **)(*(int *)(local_20 + 4) + 4) == local_20)) {
        local_20 = *(char **)(local_20 + 0xc);
      }
      else {
        pcVar2 = *(char **)(local_20 + 8);
        if (*(char **)(local_20 + 8) == (char *)0x0) {
          pcVar2 = *(char **)(local_20 + 4);
          pcVar4 = local_20;
          while (local_20 = pcVar2, pcVar4 == *(char **)(local_20 + 8)) {
            pcVar4 = local_20;
            pcVar2 = *(char **)(local_20 + 4);
          }
        }
        else {
          do {
            local_20 = pcVar2;
            pcVar2 = *(char **)(local_20 + 0xc);
          } while (*(char **)(local_20 + 0xc) != (char *)0x0);
        }
      }
    }
    if (local_28 <= (byte)local_20[0x10]) goto LAB_00233aa2;
  }
LAB_00233a8a:
  FUN_0021c066(&local_2c);
  local_20 = local_2c;
LAB_00233aa2:
  return local_20 + 0x14;
}

