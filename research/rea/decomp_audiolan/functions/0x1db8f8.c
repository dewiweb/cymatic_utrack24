// rea decompile_all
// name: FUN_001db8f8
// address: 0x1db8f8
// body: available
// range: 0x1db8f8-0x1dbb0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_001db8f8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined2 local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  int local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined4 local_70;
  undefined4 local_6c [9];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  int local_40;
  int local_38;
  char *local_30;
  undefined1 local_2c;
  char *local_28 [2];
  
  uVar1 = DAT_001dbb0c;
  local_a0 = 0;
  local_ac = DAT_001dbb0c;
  local_98 = 0;
  local_a8 = 0;
  local_9e = 0;
  local_9c = 0;
  local_97 = 0;
  local_a7 = 0;
  local_9a = 0;
  local_96 = 0;
  local_8c = 0;
  local_a4 = 0;
  local_95 = 0;
  local_94 = 0;
  local_8a = 0;
  local_88 = DAT_001dbb10;
  local_84 = DAT_001dbb10;
  local_80 = 0;
  local_74 = 0;
  local_7c = 0;
  local_73 = 0;
  local_78 = 0;
  local_72 = 0;
  local_90 = 0;
  local_70 = *param_2;
  iVar2 = FUN_000e82c8(local_6c,&local_ac);
  pcVar3 = *(char **)(param_1 + 0x10);
  bVar5 = true;
  local_30 = pcVar3;
  if (*(char **)(pcVar3 + 4) != (char *)0x0) {
    pcVar4 = *(char **)(pcVar3 + 4);
    do {
      local_30 = pcVar4;
      bVar5 = *(uint *)(iVar2 + -4) < *(uint *)(local_30 + 0x10);
      if (bVar5) {
        pcVar4 = *(char **)(local_30 + 8);
      }
      else {
        pcVar4 = *(char **)(local_30 + 0xc);
      }
    } while (pcVar4 != (char *)0x0);
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (bVar5) {
      if (local_30 == *(char **)(pcVar3 + 8)) goto LAB_001dba7c;
      if ((*local_30 == '\0') && (*(char **)(*(int *)(local_30 + 4) + 4) == local_30)) {
        local_30 = *(char **)(local_30 + 0xc);
      }
      else {
        pcVar3 = *(char **)(local_30 + 8);
        if (*(char **)(local_30 + 8) == (char *)0x0) {
          pcVar3 = *(char **)(local_30 + 4);
          pcVar4 = local_30;
          while (local_30 = pcVar3, pcVar4 == *(char **)(local_30 + 8)) {
            pcVar4 = local_30;
            pcVar3 = *(char **)(local_30 + 4);
          }
        }
        else {
          do {
            local_30 = pcVar3;
            pcVar3 = *(char **)(local_30 + 0xc);
          } while (*(char **)(local_30 + 0xc) != (char *)0x0);
        }
      }
    }
    if (*(uint *)(iVar2 + -4) <= *(uint *)(local_30 + 0x10)) {
      local_2c = 0;
      goto LAB_001dba94;
    }
  }
LAB_001dba7c:
  FUN_001ccae8(local_28);
  local_30 = local_28[0];
  local_2c = 1;
LAB_001dba94:
  pcVar3 = local_30;
  local_6c[0] = uVar1;
  FUN_0010fa20(local_40,local_38 - local_40 >> 1,0);
  FUN_001da314(auStack_44);
  FUN_001da314(auStack_48);
  local_ac = uVar1;
  FUN_0010fa20(local_80,local_78 - local_80 >> 1,0);
  FUN_001da314(&local_84);
  FUN_001da314(&local_88);
  return pcVar3 + 0x14;
}

