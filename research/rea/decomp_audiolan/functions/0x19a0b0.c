// rea decompile_all
// name: FUN_0019a0b0
// address: 0x19a0b0
// body: available
// range: 0x19a0b0-0x19a1af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0019a0b0(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 1;
  piVar4 = (int *)(param_1 + DAT_0019a1b0);
  do {
    piVar2 = piVar4;
    piVar4 = (int *)*piVar2;
    if (piVar4 == (int *)0x0) {
      FUN_00024642(0,DAT_0019a1f0,param_2);
      return DAT_0019a1f4;
    }
  } while (piVar4 != param_2);
  *piVar2 = *piVar4;
  if (*_DAT_0019a1b4 != 0) {
    FUN_00024642(3,s____mDNS_StopNATOperation_interna_0019a1b5 + 3,param_2,
                 *(undefined1 *)(param_2 + 10),
                 *(ushort *)((int)param_2 + 0x2a) << 8 | *(ushort *)((int)param_2 + 0x2a) >> 8,
                 (param_2[0xb] & 0xff) << 8 | (param_2[0xb] & 0xffff) >> 8,param_2[0xc]);
  }
  if (*(undefined4 **)(param_1 + 0x27ac) == param_2) {
    *(undefined4 *)(param_1 + 0x27ac) = **(undefined4 **)(param_1 + 0x27ac);
  }
  if (*(char *)(param_2 + 10) != '\0') {
    for (piVar4 = *(int **)(param_1 + 0x27a8); piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
      if (*(char *)(param_2 + 10) == *(char *)(piVar4 + 10)) {
        uVar3 = (uint)*(ushort *)((int)param_2 + 0x2a);
        uVar1 = *(ushort *)((int)piVar4 + 0x2a);
        if (uVar3 == uVar1) {
          if (uVar3 != *DAT_0019a1e8) {
            FUN_00024642(0,DAT_0019a1ec,param_2,*(char *)(param_2 + 10),
                         (uVar3 & 0xff) << 8 | (uint)(*(ushort *)((int)param_2 + 0x2a) >> 8),
                         param_2[0xc],piVar4,*(char *)(piVar4 + 10),
                         (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8),piVar4[0xc]);
          }
          iVar5 = 0;
        }
      }
    }
  }
  if ((param_2[1] != 0) && (iVar5 != 0)) {
    param_2[0xc] = 0;
    param_2[2] = 0;
    FUN_001b7620(param_1,param_2);
  }
  return 0;
}

