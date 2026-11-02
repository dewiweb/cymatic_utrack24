// rea decompile_all
// name: FUN_00088004
// address: 0x88004
// body: available
// range: 0x88004-0x8815b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00088004(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  char **ppcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined4 *local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  char *local_60 [2];
  undefined4 local_58;
  char **local_54;
  undefined4 local_50;
  undefined1 auStack_4c [28];
  char *local_30 [4];
  undefined4 local_20;
  
  local_84 = DAT_0008815c;
  local_80 = 0;
  uVar10 = FUN_0001f744(&local_68,0,0,param_2,param_3);
  if ((int)uVar10 != 0) {
    return 0;
  }
  local_58 = DAT_00088160;
  FUN_001a0700();
  local_64 = (uint)((ulonglong)uVar10 >> 0x20) & 0xffffff00 | 1;
  local_54 = local_60;
  puVar11 = &local_50;
  local_74 = 0;
  local_84 = (undefined4 *)0x0;
  local_70 = 0;
  local_20 = 1;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  puVar3 = (undefined4 *)FUN_0010f82c(0xc,0);
  uVar4 = FUN_0010f82c(0x18,0);
  puVar3[2] = uVar4;
  *puVar3 = local_84;
  puVar3[1] = local_20;
  local_74 = puVar3[2];
  local_7c = local_74 + 0x18;
  *(int *)local_74 = local_74;
  *(int *)(local_74 + 4) = local_74;
  local_50 = local_68;
  local_84 = puVar3;
  local_78 = local_7c;
  local_6c = param_4;
  iVar5 = FUN_00088164(puVar11 + 1,&local_84);
  ppcVar2 = local_54;
  pcVar7 = *(char **)(param_1 + 0xf0);
  puVar9 = (uint *)(iVar5 + -4);
  bVar1 = true;
  pcVar8 = pcVar7;
  if (*(char **)(pcVar7 + 4) != (char *)0x0) {
    pcVar6 = *(char **)(pcVar7 + 4);
    do {
      pcVar8 = pcVar6;
      if (*(uint *)(pcVar8 + 0x10) <= *puVar9) {
        pcVar6 = *(char **)(pcVar8 + 0xc);
      }
      else {
        pcVar6 = *(char **)(pcVar8 + 8);
      }
      bVar1 = *(uint *)(pcVar8 + 0x10) > *puVar9;
    } while (pcVar6 != (char *)0x0);
  }
  if (*(char *)(param_1 + 0xf8) == '\0') {
    local_60[0] = pcVar8;
    if (bVar1) {
      if (pcVar8 == *(char **)(pcVar7 + 8)) goto LAB_00088120;
      if ((*pcVar8 == '\0') && (*(char **)(*(int *)(pcVar8 + 4) + 4) == pcVar8)) {
        local_60[0] = *(char **)(pcVar8 + 0xc);
      }
      else {
        pcVar7 = *(char **)(pcVar8 + 8);
        if (*(char **)(pcVar8 + 8) == (char *)0x0) {
          pcVar7 = pcVar8;
          for (local_60[0] = *(char **)(pcVar8 + 4); pcVar7 == *(char **)(local_60[0] + 8);
              local_60[0] = *(char **)(local_60[0] + 4)) {
            pcVar7 = local_60[0];
          }
        }
        else {
          do {
            local_60[0] = pcVar7;
            pcVar7 = *(char **)(local_60[0] + 0xc);
          } while (*(char **)(local_60[0] + 0xc) != (char *)0x0);
        }
      }
    }
    if (*puVar9 <= *(uint *)(local_60[0] + 0x10)) {
      *(undefined1 *)(local_54 + 1) = 0;
      goto LAB_0008813a;
    }
  }
LAB_00088120:
  FUN_001c3160(local_30,param_1 + 0xe0,0,pcVar8,puVar9);
  local_60[0] = local_30[0];
  *(undefined1 *)(ppcVar2 + 1) = 1;
LAB_0008813a:
  FUN_001dc328(auStack_4c);
  FUN_001dc328(&local_84);
  if ((local_64 & 0xff) != 0) {
    FUN_001a0d18(local_58);
  }
  return local_68;
}

