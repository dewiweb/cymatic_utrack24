// rea decompile_all
// name: FUN_0019443c
// address: 0x19443c
// body: available
// range: 0x19443c-0x194513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0019443c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5,undefined2 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = DAT_00194514;
  iVar4 = 0;
  if (*(short *)(param_1 + 0x14) == 0) {
    return;
  }
  do {
    if ((iVar4 < (int)(uint)*(ushort *)(param_1 + 0x14)) &&
       (iVar3 = *(int *)(*(int *)(param_1 + 0x10) + iVar4 * 4), iVar3 != 0)) {
      puVar2 = (undefined4 *)FUN_001c6b14(0x34,DAT_00194518);
      if (puVar2 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        puVar2[3] = param_3;
        puVar2[2] = iVar3;
        *puVar2 = uVar1;
        puVar2[1] = 0;
        iVar3 = FUN_0017277c(puVar2 + 4,param_4);
        *(undefined2 *)(iVar3 + 0x10) = param_5;
        *(undefined2 *)(iVar3 + 0x12) = param_6;
        iVar3 = FUN_00171d94(iVar3 + 0x14,param_7);
        iVar3 = FUN_00171d94(iVar3 + 8,param_8);
        iVar3 = iVar3 + -0x2c;
      }
      FUN_0019429c(*(undefined4 *)(param_1 + 4),param_2,iVar3);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0x14));
  return;
}

