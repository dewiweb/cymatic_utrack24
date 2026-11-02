// rea decompile_all
// name: FUN_001aac0a
// address: 0x1aac0a
// body: available
// range: 0x1aac0a-0x1aacd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001aac0a(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  
  if ((((*(int *)(param_2 + 4) == 0) || (*(int *)(param_2 + 4) == -8)) || (param_3 < 0)) ||
     ((param_4 < 0 || (param_4 < param_3)))) {
    return 0;
  }
  iVar1 = FUN_001c0864(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_001c0864(param_2,param_4 + 1);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_2 + 4);
    if (iVar2 != 0) {
      iVar2 = iVar2 + 8;
    }
    uVar9 = *(int *)(param_2 + 8) - (iVar1 - iVar2);
  }
  else {
    uVar9 = iVar2 - iVar1;
  }
  if (uVar9 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 8) + uVar9;
  if (*(char *)(param_1 + 0xc) != '\0') {
    uVar7 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar7 = *(uint *)(*(int *)(param_1 + 4) + 4);
    }
    if (iVar1 + 1U <= uVar7) goto LAB_001aac6e;
  }
  iVar2 = FUN_000d6154(param_1 + 4);
  if (iVar2 == 0) {
    return 0;
  }
LAB_001aac6e:
  puVar3 = (undefined1 *)FUN_001c0864(param_2,param_3);
  uVar5 = 0;
  if (puVar3 != (undefined1 *)0x0) {
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 != 0) {
      iVar2 = iVar2 + 8;
    }
    puVar8 = (undefined1 *)(iVar2 + *(int *)(param_1 + 8));
    if (0 < (int)uVar9) {
      puVar4 = puVar8 + -1;
      puVar6 = puVar3 + -1;
      if ((uVar9 & 1) != 0) {
        *puVar8 = *puVar3;
        puVar4 = puVar8;
        puVar6 = puVar3;
      }
      for (iVar2 = (int)uVar9 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
        puVar3 = puVar6 + 1;
        puVar6 = puVar6 + 2;
        puVar4[1] = *puVar3;
        puVar4 = puVar4 + 2;
        *puVar4 = *puVar6;
      }
      puVar8 = puVar8 + uVar9;
    }
    *puVar8 = 0;
    uVar5 = 1;
    *(int *)(param_1 + 8) = iVar1;
  }
  return uVar5;
}

