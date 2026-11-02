// rea decompile_all
// name: FUN_001a6d94
// address: 0x1a6d94
// body: available
// range: 0x1a6d94-0x1a6e73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a6d94(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_20 [2];
  int *local_18;
  int local_14;
  
  uVar2 = DAT_001a6e74;
  if (param_2 == 0) {
    return DAT_001a6e78;
  }
  cVar1 = *(char *)(param_2 + 0x44);
  if (cVar1 == '\0') {
    iVar3 = FUN_001a4c0a(param_1 + 0x20,local_20);
    while ((local_20[0] != 0 && (local_14 < *local_18))) {
      if (*(int *)(iVar3 + 4) == *(int *)(param_2 + 4)) goto LAB_001a6e4c;
      iVar3 = FUN_001a4c2a(local_20);
    }
  }
  else if (cVar1 == '\x01') {
    iVar3 = FUN_001a4c0a(param_1 + 0x28,local_20);
    while ((local_20[0] != 0 && (local_14 < *local_18))) {
      if (*(int *)(iVar3 + 4) == *(int *)(param_2 + 4)) goto LAB_001a6e4c;
      iVar3 = FUN_001a4c2a(local_20);
    }
  }
  else if (cVar1 == '\x02') {
    iVar3 = FUN_001a4c0a(param_1 + 0x30,local_20);
    while ((local_20[0] != 0 && (local_14 < *local_18))) {
      if (*(int *)(iVar3 + 4) == *(int *)(param_2 + 4)) goto LAB_001a6e4c;
      iVar3 = FUN_001a4c2a(local_20);
    }
  }
  else {
    if (cVar1 != '\x03') {
      return DAT_001a6e78;
    }
    iVar3 = FUN_001a4c0a(param_1 + 0x38,local_20);
    while ((local_20[0] != 0 && (local_14 < *local_18))) {
      if (*(int *)(iVar3 + 4) == *(int *)(param_2 + 4)) {
LAB_001a6e4c:
        FUN_001a4c64(local_20);
        return 0;
      }
      iVar3 = FUN_001a4c2a(local_20);
    }
  }
  return uVar2;
}

