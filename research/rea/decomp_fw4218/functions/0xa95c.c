// rea decompile_all
// name: FUN_0000a95c
// address: 0xa95c
// body: available
// range: 0xa95c-0xab1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_0000a95c(int param_1,undefined4 param_2,int param_3,undefined1 param_4,undefined4 param_5,
            undefined4 param_6,undefined2 param_7,int param_8,uint param_9,undefined1 param_10,
            undefined4 param_11,int param_12,int param_13)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(param_1 + 8) = param_4;
  *(undefined4 *)(param_1 + 0xc) = param_5;
  *(undefined4 *)(param_1 + 0x10) = param_6;
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar2 = FUN_001df5c4(1,param_3,param_2);
    *(int *)(param_1 + 0x18) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
  }
  cVar1 = *(char *)(param_1 + 8);
  if (((cVar1 == '\a' || cVar1 == '\b') || (cVar1 == '\t' || cVar1 == '\n')) && (param_9 != 0)) {
    puVar3 = *(undefined2 **)(param_1 + 0x1c);
    if (8 < param_9) {
      param_9 = 8;
    }
    if (puVar3 == (undefined2 *)0x0) {
      puVar3 = (undefined2 *)FUN_001df5c4(1,param_3,param_2);
      *(undefined2 **)(param_1 + 0x1c) = puVar3;
      if (puVar3 == (undefined2 *)0x0) {
        return 0;
      }
    }
    *puVar3 = param_7;
    if (*(char *)(param_1 + 8) == '\a' || *(char *)(param_1 + 8) == '\t') {
      uVar4 = 0x1e;
    }
    else {
      uVar4 = 0xe;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xd4) = uVar4;
    *(undefined1 *)(*(int *)(param_1 + 0x1c) + 0xd8) = 9;
    *(undefined1 *)(*(int *)(param_1 + 0x1c) + 0xb0) = 0;
  }
  if (param_3 == 0) {
    **(undefined2 **)(param_1 + 0x18) = param_7;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xd4) = param_11;
    *(undefined1 *)(*(int *)(param_1 + 0x18) + 0xd8) = param_10;
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      *(int *)(param_1 + 0x2c) = param_8;
      if (*(char *)(iVar2 + 0x65) == '\0') {
        if (*(char *)(iVar2 + 100) == '\x01') {
          *(int *)(param_1 + 0x30) = param_8;
        }
        else {
          param_8 = (uint)(*(int *)(param_1 + 0x34) != 0) + param_8;
          *(int *)(param_1 + 0x30) = param_8;
        }
        *(char *)(iVar2 + 0xb0) = (char)param_8;
      }
    }
    FUN_0000a87c(param_1,param_9);
    if (*(int *)(param_1 + 0x18) != 0 && param_12 != 0xff) {
      *(int *)(*(int *)(param_1 + 0x18) + 0x60) = param_12;
      if (*(int *)(param_1 + 0x1c) != 0) {
        *(int *)(*(int *)(param_1 + 0x1c) + 0x60) = param_12;
      }
    }
    if ((param_13 == 0x10) && (*(int *)(param_1 + 0x18) != 0)) {
      *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x5c) = 0x10;
      if (*(int *)(param_1 + 0x1c) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x1c) + 0x5c) = 0x10;
      }
    }
    return 1;
  }
  return 0;
}

