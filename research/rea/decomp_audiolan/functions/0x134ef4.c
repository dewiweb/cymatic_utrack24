// rea decompile_all
// name: FUN_00134ef4
// address: 0x134ef4
// body: available
// range: 0x134ef4-0x134fb3 inclusive
// range: 0x13c980-0x13ca0b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00134ef4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 local_68 [26];
  undefined4 local_34;
  undefined4 local_30;
  
  if (param_2 == 1) {
    if (*(int *)(param_1 + 0xac) != 0) {
      (**(code **)(**(int **)(param_1 + 0x24) + 0x80))();
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0x4000;
    if (*(char *)(param_1 + 0xd9) != '\0') {
      *(undefined4 *)(param_1 + 0xdc) = 0x6000;
    }
    FUN_0010f0bc(local_68);
    local_68[0] = 0;
    local_34 = *(undefined4 *)(param_1 + 0xdc);
    local_30 = 1;
    uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x120))
                      (*(int **)(param_1 + 0x24),local_68,param_1 + 0x54,0);
    *(undefined4 *)(param_1 + 0xac) = uVar1;
    return;
  }
  if (param_2 != 2) {
    return;
  }
  FUN_00135c00(param_1 + 0x78);
  uVar1 = DAT_0013ca0c;
  iVar4 = 0;
  if (*(short *)(param_1 + 0x120) == 0) {
    return;
  }
  do {
    if ((iVar4 < (int)(uint)*(ushort *)(param_1 + 0x120)) &&
       (iVar3 = *(int *)(*(int *)(param_1 + 0x11c) + iVar4 * 4), iVar3 != 0)) {
      puVar2 = (undefined4 *)FUN_0016d7a4(0x10,DAT_0013ca10);
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[2] = iVar3;
        puVar2[3] = param_1 + 0x40;
        *puVar2 = uVar1;
        puVar2[1] = 0;
      }
      FUN_00134d50(*(undefined4 *)(param_1 + 0x110),1,puVar2);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0x120));
  return;
}

