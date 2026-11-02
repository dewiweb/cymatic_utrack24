// rea decompile_all
// name: FUN_0009d5d0
// address: 0x9d5d0
// body: available
// range: 0x9d5d0-0x9d83f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0009d5d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_20 = param_3;
  uStack_1c = param_4;
  puVar2 = (undefined4 *)FUN_000b440c(param_1);
  *puVar2 = _DAT_0009d840;
  iVar3 = FUN_00091838(puVar2 + 1,s___UIButtonControl_0009d842 + 2);
  uVar4 = FUN_00230ad8(&uStack_20);
  iVar3 = FUN_00233398(iVar3 + 0x24,&uStack_1c,uVar4);
  *(undefined4 *)(iVar3 + 0x20) = 1000;
  *(undefined4 *)(iVar3 + 0x24) = 0xa0;
  for (iVar6 = 0; *(short *)(DAT_0009d854 + iVar6 * 0x14) != 999; iVar6 = iVar6 + 1) {
    if (*(short *)(DAT_0009d854 + iVar6 * 0x14) != 999) {
      cVar1 = *(char *)(DAT_0009d854 + iVar6 * 0x14 + 2);
      if (cVar1 == '\0') {
        iVar5 = FUN_001c6b14(0x38,_DAT_0009d858);
        if (iVar5 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_0006e918(iVar5,*(undefined2 *)(DAT_0009d854 + iVar6 * 0x14),
                               *(undefined1 *)(DAT_0009d854 + iVar6 * 0x14 + 3),
                               *(int *)(DAT_0009d854 + iVar6 * 0x14 + 0xc) != 0,
                               *(int *)(DAT_0009d854 + iVar6 * 0x14 + 0x10) != 0);
        }
        puVar2 = (undefined4 *)FUN_002333c8(iVar3,DAT_0009d854 + iVar6 * 0x14);
        *puVar2 = uVar4;
      }
      else if (cVar1 == '\x01') {
        iVar5 = FUN_001c6b14(0x3c,_DAT_0009d858);
        if (iVar5 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_000bb384(iVar5,*(undefined2 *)(DAT_0009d854 + iVar6 * 0x14),
                               *(undefined4 *)(DAT_0009d854 + iVar6 * 0x14 + 4),
                               *(undefined4 *)(DAT_0009d854 + iVar6 * 0x14 + 8),
                               *(int *)(DAT_0009d854 + iVar6 * 0x14 + 0xc) != 0,
                               *(int *)(DAT_0009d854 + iVar6 * 0x14 + 0x10) != 0);
        }
        puVar2 = (undefined4 *)FUN_002333c8(iVar3,DAT_0009d854 + iVar6 * 0x14);
        *puVar2 = uVar4;
      }
      else {
        FUN_00002898(s____ERROR__UIButtonControl__Inval_0009d859 + 3,
                     *(undefined1 *)(DAT_0009d854 + iVar6 * 0x14 + 2));
      }
    }
  }
  return iVar3 + -0x28;
}

