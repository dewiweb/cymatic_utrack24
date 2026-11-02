// rea decompile_all
// name: FUN_00154bd8
// address: 0x154bd8
// body: available
// range: 0x154bd8-0x154d8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00154bd8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_14 [4];
  
  iVar1 = FUN_001d06b8();
  if (*(char *)(param_1 + 0xbe6) == '\0') {
    if (*(char *)(param_1 + 0xbe4) == '\x01') {
      *DAT_00154d90 = 0;
      if (*(char *)(param_1 + 0xbe8) == '\0') {
        return;
      }
      uVar3 = iVar1 - *(int *)(param_1 + 0xbf0);
      if (*(char *)(param_1 + 0xbf8) == '\0') {
        if (1000 < uVar3) {
          *(undefined1 *)(param_1 + 0xbf8) = 1;
          *(int *)(param_1 + 0xbf0) = iVar1;
          FUN_00154908(param_1,&LAB_0000a000,0);
          return;
        }
        return;
      }
      if (2000 < uVar3) {
        *(undefined1 *)(param_1 + 0xbe4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00154d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(int **)(param_1 + 0x8c) + 0x10))(*(int **)(param_1 + 0x8c),0);
        return;
      }
      return;
    }
    if (*(char *)(param_1 + 0xbe4) != '\0') {
      return;
    }
    if ((uint)(iVar1 - *(int *)(param_1 + 0xbec)) <= *(uint *)(param_1 + 0xbf4)) {
      return;
    }
    uVar3 = *DAT_00154d90;
    *DAT_00154d90 = uVar3 + 1;
    if (((10 < uVar3 + 1) && (*(int **)(param_1 + 0x94) != (int *)0x0)) &&
       (iVar2 = (**(code **)(**(int **)(param_1 + 0x94) + 0x10))(), iVar2 != 0)) {
      (**(code **)(**(int **)(param_1 + 0x94) + 8))(*(int **)(param_1 + 0x94),1);
    }
    auStack_14[0] = *(undefined1 *)(param_1 + 0xbe8);
    FUN_00154908(param_1,0x8000,auStack_14,1);
  }
  else {
    if (*(char *)(param_1 + 0xbe4) != '\x01') {
      return;
    }
    if (*(char *)(param_1 + 0xbe8) == '\0') {
      return;
    }
    if ((uint)(iVar1 - *(int *)(param_1 + 0xbec)) <= DAT_00154d8c) {
      return;
    }
    *(undefined1 *)(param_1 + 0xbe4) = 2;
    (**(code **)(**(int **)(param_1 + 0x8c) + 0x10))(*(int **)(param_1 + 0x8c),0);
  }
  *(int *)(param_1 + 0xbec) = iVar1;
  return;
}

