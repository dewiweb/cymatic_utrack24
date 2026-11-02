// rea decompile_all
// name: FUN_001dbb14
// address: 0x1dbb14
// body: available
// range: 0x1dbb14-0x1dbcd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_001dbb14(int param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  char *local_28;
  undefined1 local_24;
  
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  iVar1 = FUN_0010e7e0(&local_6c);
  FUN_0010e7e0(iVar1 + 8);
  local_50 = *param_2;
  local_4c = 0;
  iVar1 = FUN_0010e770(auStack_48,&local_6c);
  iVar1 = FUN_0010e770(iVar1 + 8,&local_64);
  *(undefined4 *)(iVar1 + 8) = local_5c;
  bVar4 = true;
  *(undefined2 *)(iVar1 + 0xc) = (undefined2)local_58;
  *(undefined2 *)(iVar1 + 0xe) = local_58._2_2_;
  pcVar2 = *(char **)(param_1 + 0x10);
  local_28 = pcVar2;
  if (*(char **)(pcVar2 + 4) != (char *)0x0) {
    pcVar3 = *(char **)(pcVar2 + 4);
    do {
      local_28 = pcVar3;
      bVar4 = *(uint *)(iVar1 + -0x10) < *(uint *)(local_28 + 0x10);
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
      if (local_28 == *(char **)(pcVar2 + 8)) goto LAB_001dbc90;
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
    if (*(uint *)(iVar1 + -0x10) <= *(uint *)(local_28 + 0x10)) {
      local_24 = 0;
      goto LAB_001dbca8;
    }
  }
LAB_001dbc90:
  FUN_001cd9f8(&local_54);
  local_28 = local_54;
  local_24 = 1;
LAB_001dbca8:
  pcVar2 = local_28;
  iVar1 = FUN_0010e7f4(auStack_40);
  FUN_0010e7f4(iVar1 + -8);
  iVar1 = FUN_0010e7f4(&local_64);
  FUN_0010e7f4(iVar1 + -8);
  return pcVar2 + 0x14;
}

