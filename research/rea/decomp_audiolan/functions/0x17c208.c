// rea decompile_all
// name: FUN_0017c208
// address: 0x17c208
// body: available
// range: 0x17c208-0x17c2ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0017c208(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  
  puVar5 = (uint *)(param_1 + 8);
  thunk_EXT_FUN_0040001c();
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((*DAT_0017c2f0 <= uVar1) && (uVar1 < *DAT_0017c2f4)) {
    uVar3 = *DAT_0017c2f8;
    if (uVar1 < uVar3) {
      iVar2 = ((int)(uVar1 - *DAT_0017c2f0) >> 2) + ((int)(*DAT_0017c2f4 - uVar3) >> 2);
    }
    else {
      iVar2 = uVar1 - uVar3;
    }
    if (*puVar5 < 0x21) {
      *puVar5 = iVar2 + 1;
    }
    else {
      *puVar5 = iVar2 + -0x1f + *puVar5;
    }
  }
  puVar4 = *(undefined4 **)(param_1 + 0x20);
  if (puVar4 != (undefined4 *)0x0) {
    if (*(uint **)(param_1 + 0x18) == puVar5) {
      if ((uint *)*puVar4 == puVar5) {
        *puVar4 = 0;
      }
    }
    else {
      (*(uint **)(param_1 + 0x18))[5] = *(uint *)(param_1 + 0x1c);
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10) = *(undefined4 *)(param_1 + 0x18);
      if ((uint *)**(undefined4 **)(param_1 + 0x20) == puVar5) {
        *(undefined4 **)(*(int *)(param_1 + 0x18) + 0x18) = *(undefined4 **)(param_1 + 0x20);
        **(undefined4 **)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x18);
      }
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  thunk_EXT_FUN_00400034();
  return 0;
}

