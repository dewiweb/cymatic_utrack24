// rea decompile_all
// name: FUN_001daeee
// address: 0x1daeee
// body: available
// range: 0x1daeee-0x1dafb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_001daeee(int param_1,uint *param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint unaff_r4;
  char *local_58;
  char *local_50 [4];
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  
  local_40 = *param_2;
  local_2c = unaff_r4 & 0xffffff00;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  pcVar4 = *(char **)(param_1 + 0x10);
  bVar1 = true;
  local_58 = pcVar4;
  pcVar2 = *(char **)(pcVar4 + 4);
  while (pcVar2 != (char *)0x0) {
    if (*(uint *)(pcVar2 + 0x10) <= local_40) {
      pcVar3 = *(char **)(pcVar2 + 0xc);
    }
    else {
      pcVar3 = *(char **)(pcVar2 + 8);
    }
    bVar1 = *(uint *)(pcVar2 + 0x10) > local_40;
    local_58 = pcVar2;
    pcVar2 = pcVar3;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (bVar1) {
      if (local_58 == *(char **)(pcVar4 + 8)) goto LAB_001daf4c;
      if ((*local_58 == '\0') && (*(char **)(*(int *)(local_58 + 4) + 4) == local_58)) {
        local_58 = *(char **)(local_58 + 0xc);
      }
      else {
        pcVar2 = *(char **)(local_58 + 8);
        if (*(char **)(local_58 + 8) == (char *)0x0) {
          pcVar2 = *(char **)(local_58 + 4);
          pcVar4 = local_58;
          while (local_58 = pcVar2, pcVar4 == *(char **)(local_58 + 8)) {
            pcVar4 = local_58;
            pcVar2 = *(char **)(local_58 + 4);
          }
        }
        else {
          do {
            local_58 = pcVar2;
            pcVar2 = *(char **)(local_58 + 0xc);
          } while (*(char **)(local_58 + 0xc) != (char *)0x0);
        }
      }
    }
    if (*(uint *)(local_58 + 0x10) < local_40) {
      FUN_001c5a08(local_50);
      local_58 = local_50[0];
    }
  }
  else {
LAB_001daf4c:
    FUN_001c5a08(local_50);
    local_58 = local_50[0];
  }
  return local_58 + 0x14;
}

