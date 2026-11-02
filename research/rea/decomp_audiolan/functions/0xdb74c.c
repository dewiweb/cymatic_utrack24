// rea decompile_all
// name: FUN_000db74c
// address: 0xdb74c
// body: available
// range: 0xdb74c-0xdb953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000db74c(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  char *local_3c;
  char *local_38;
  undefined1 local_34;
  uint local_30;
  undefined4 uStack_2c;
  
  iVar6 = param_1 + 4;
  FUN_001a0700(iVar6);
  iVar4 = *(int *)(*(int *)(param_1 + 0x44) + 8);
  if (iVar4 != *(int *)(param_1 + 0x44)) {
    do {
      if (*(int *)(iVar4 + 0x14) == param_2) {
        FUN_001a0d18(iVar6);
        return 0;
      }
      iVar1 = *(int *)(iVar4 + 0xc);
      if (*(int *)(iVar4 + 0xc) == 0) {
        iVar1 = *(int *)(iVar4 + 4);
        while (iVar2 = iVar1, iVar4 == *(int *)(iVar2 + 0xc)) {
          iVar4 = iVar2;
          iVar1 = *(int *)(iVar2 + 4);
        }
        if (*(int *)(iVar4 + 0xc) != iVar2) {
          iVar4 = iVar2;
        }
      }
      else {
        do {
          iVar4 = iVar1;
          iVar1 = *(int *)(iVar4 + 8);
        } while (*(int *)(iVar4 + 8) != 0);
      }
    } while (iVar4 != *(int *)(param_1 + 0x44));
  }
  *param_3 = *(uint *)(param_1 + 0x50);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  local_30 = *param_3;
  uStack_2c = 0;
  pcVar5 = *(char **)(param_1 + 0x44);
  bVar7 = true;
  local_38 = pcVar5;
  pcVar3 = *(char **)(pcVar5 + 4);
  while (pcVar3 != (char *)0x0) {
    bVar7 = local_30 < *(uint *)(pcVar3 + 0x10);
    local_38 = pcVar3;
    if (bVar7) {
      pcVar3 = *(char **)(pcVar3 + 8);
    }
    else {
      pcVar3 = *(char **)(pcVar3 + 0xc);
    }
  }
  if (*(char *)(param_1 + 0x4c) == '\0') {
    if (bVar7) {
      if (local_38 == *(char **)(pcVar5 + 8)) goto LAB_000db91c;
      if ((*local_38 == '\0') && (*(char **)(*(int *)(local_38 + 4) + 4) == local_38)) {
        local_38 = *(char **)(local_38 + 0xc);
      }
      else {
        pcVar3 = *(char **)(local_38 + 8);
        if (*(char **)(local_38 + 8) == (char *)0x0) {
          pcVar3 = local_38;
          for (local_38 = *(char **)(local_38 + 4); pcVar3 == *(char **)(local_38 + 8);
              local_38 = *(char **)(local_38 + 4)) {
            pcVar3 = local_38;
          }
        }
        else {
          do {
            local_38 = pcVar3;
            pcVar3 = *(char **)(local_38 + 0xc);
          } while (*(char **)(local_38 + 0xc) != (char *)0x0);
        }
      }
    }
    if (local_30 <= *(uint *)(local_38 + 0x10)) {
      local_34 = 0;
      goto LAB_000db934;
    }
  }
LAB_000db91c:
  FUN_001d2a70(&local_3c);
  local_38 = local_3c;
  local_34 = 1;
LAB_000db934:
  *(int *)(local_38 + 0x14) = param_2;
  FUN_001a0d18(iVar6);
  return 1;
}

