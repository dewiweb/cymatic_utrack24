// rea decompile_all
// name: FUN_0016a438
// address: 0x16a438
// body: available
// range: 0x135010-0x135023 inclusive
// range: 0x13c4d8-0x13c593 inclusive
// range: 0x16a438-0x16a4af inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0016a438(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0xdc) = 0;
  if (param_4 == (undefined1 *)0x6000) {
    FUN_0010ecc0(param_1 + 0x4c,param_5);
    uVar3 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x94))
                      (*(int **)(param_1 + 0x1c),5,DAT_0016a4b0,param_1);
    *(undefined4 *)(param_1 + 0xdc) = uVar3;
    return;
  }
  if (param_4 != &LAB_00006000_1) {
    return;
  }
  FUN_0010ecc0(param_1 + 100,param_5);
  uVar3 = DAT_0013c594;
  iVar2 = *(int *)(param_1 + 0x24);
  piVar4 = (int *)(*(int *)(*(int *)(param_1 + -0x60) + -0x14) + param_1 + -0x60);
  iVar6 = 0;
  if (*(short *)(iVar2 + 0x120) == 0) {
    return;
  }
  do {
    if ((iVar6 < (int)(uint)*(ushort *)(iVar2 + 0x120)) &&
       (iVar5 = *(int *)(*(int *)(iVar2 + 0x11c) + iVar6 * 4), iVar5 != 0)) {
      puVar1 = (undefined4 *)FUN_0016d7a4(0x14,DAT_0013c598);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = uVar3;
        puVar1[1] = 0;
        puVar1[2] = iVar5;
        puVar1[3] = iVar2 + 0x40;
        puVar1[4] = piVar4;
        if (piVar4 != (int *)0x0) {
          (**(code **)(*(int *)((int)piVar4 + *(int *)(*piVar4 + -0x48)) + 0x30))
                    (*(int *)(*piVar4 + -0x48) + (int)piVar4);
        }
      }
      FUN_00134d50(*(undefined4 *)(iVar2 + 0x110),1,puVar1);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < (int)(uint)*(ushort *)(iVar2 + 0x120));
  return;
}

