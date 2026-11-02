// rea decompile_all
// name: FUN_001db4e0
// address: 0x1db4e0
// body: available
// range: 0x1db4e0-0x1db657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_001db4e0(int param_1,undefined1 *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  char *local_58 [2];
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined2 local_42;
  undefined1 auStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  char *local_28;
  undefined1 local_24;
  
  local_30 = 0;
  local_38 = 0;
  local_34 = 0;
  local_2e = 0;
  local_2c = DAT_001db658;
  local_50 = *param_2;
  local_44 = 0;
  local_4c = 0;
  local_48 = 0;
  local_42 = 0;
  iVar1 = FUN_001d9c54(auStack_40,&local_2c);
  pcVar2 = *(char **)(param_1 + 0x10);
  bVar4 = true;
  local_28 = pcVar2;
  if (*(char **)(pcVar2 + 4) != (char *)0x0) {
    pcVar3 = *(char **)(pcVar2 + 4);
    do {
      local_28 = pcVar3;
      bVar4 = *(byte *)(iVar1 + -0x10) < (byte)local_28[0x10];
      if (bVar4) {
        pcVar3 = *(char **)(local_28 + 8);
      }
      else {
        pcVar3 = *(char **)(local_28 + 0xc);
      }
    } while (pcVar3 != (char *)0x0);
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (bVar4) {
      if (local_28 == *(char **)(pcVar2 + 8)) goto LAB_001db620;
      if ((*local_28 == '\0') && (*(char **)(*(int *)(local_28 + 4) + 4) == local_28)) {
        local_28 = *(char **)(local_28 + 0xc);
      }
      else {
        pcVar2 = *(char **)(local_28 + 8);
        if (*(char **)(local_28 + 8) == (char *)0x0) {
          pcVar2 = *(char **)(local_28 + 4);
          pcVar3 = local_28;
          while (local_28 = pcVar2, pcVar3 == *(char **)(local_28 + 8)) {
            pcVar3 = local_28;
            pcVar2 = *(char **)(local_28 + 4);
          }
        }
        else {
          do {
            local_28 = pcVar2;
            pcVar2 = *(char **)(local_28 + 0xc);
          } while (*(char **)(local_28 + 0xc) != (char *)0x0);
        }
      }
    }
    if (*(byte *)(iVar1 + -0x10) <= (byte)local_28[0x10]) {
      local_24 = 0;
      goto LAB_001db638;
    }
  }
LAB_001db620:
  FUN_001c8d28(local_58);
  local_28 = local_58[0];
  local_24 = 1;
LAB_001db638:
  pcVar2 = local_28;
  FUN_001d9b00(auStack_40);
  FUN_001d9b00(&local_2c);
  return pcVar2 + 0x14;
}

