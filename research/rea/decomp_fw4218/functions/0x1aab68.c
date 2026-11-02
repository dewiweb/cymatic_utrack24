// rea decompile_all
// name: FUN_001aab68
// address: 0x1aab68
// body: available
// range: 0x1aab68-0x1aac09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001aab68(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  ushort local_24 [2];
  int local_20;
  int iStack_1c;
  uint uStack_18;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar3 = 0;
  uVar2 = 0;
  if (param_3 == 0) {
    return 1;
  }
  do {
    if (*(byte *)(param_2 + uVar2) < 0x80) {
      iVar1 = 1;
    }
    else if (*(byte *)(param_2 + uVar2) < 0x800) {
      iVar1 = 2;
    }
    else {
      iVar1 = 3;
    }
    iVar3 = iVar1 + iVar3;
    uVar2 = uVar2 + 1;
  } while (uVar2 < param_3);
  if (iVar3 == 0) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 8) + iVar3;
  local_20 = param_1;
  iStack_1c = param_2;
  uStack_18 = param_3;
  if (*(char *)(param_1 + 0xc) != '\0') {
    uVar2 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar2 = *(uint *)(*(int *)(param_1 + 4) + 4);
    }
    if (iVar3 + 1U <= uVar2) goto LAB_001aabc8;
  }
  iVar1 = FUN_000d6154(param_1 + 4);
  if (iVar1 == 0) {
    return 0;
  }
LAB_001aabc8:
  iVar1 = *(int *)(local_20 + 4);
  if (iVar1 != 0) {
    iVar1 = iVar1 + 8;
  }
  uVar2 = 0;
  puVar4 = (undefined1 *)(iVar1 + *(int *)(local_20 + 8));
  if (param_3 != 0) {
    do {
      local_24[0] = (ushort)*(byte *)(param_2 + uVar2);
      iVar1 = FUN_000c7830(local_24,puVar4);
      puVar4 = puVar4 + iVar1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  *puVar4 = 0;
  *(int *)(local_20 + 8) = iVar3;
  return 1;
}

