// rea decompile_all
// name: FUN_0011cd24
// address: 0x11cd24
// body: available
// range: 0x11cd24-0x11ce3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0011cd24(undefined4 *param_1,ushort param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  uint uVar4;
  
  *(undefined2 *)(param_1 + 1) = 1;
  uVar2 = DAT_0011ce40;
  *(undefined2 *)((int)param_1 + 6) = 0x8000;
  *param_1 = uVar2;
  *(ushort *)(param_1 + 2) = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar4 = (uint)param_2;
  param_1[6] = 0;
  if (uVar4 != 0) {
    puVar1 = (undefined4 *)FUN_0016d774(uVar4 * 8 + 8,DAT_0011ce44);
    uVar2 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 8;
      uVar2 = DAT_0011ce48;
      puVar1[1] = uVar4;
      uVar2 = FUN_0016dd70(puVar1 + 2,uVar2,8,uVar4);
    }
    param_1[4] = uVar2;
    uVar2 = FUN_0016d774((uint)*(ushort *)(param_1 + 2) << 1,DAT_0011ce44);
    param_1[5] = uVar2;
    uVar2 = FUN_0016d774((uint)*(ushort *)(param_1 + 2) << 1,DAT_0011ce44);
    uVar4 = 0;
    param_1[6] = uVar2;
    if (*(short *)(param_1 + 2) != 0) {
      do {
        if (param_1[4] != 0) {
          FUN_0010e6f4(param_1[4] + uVar4 * 8,uVar4 + 1);
        }
        if (param_1[5] != 0) {
          *(short *)(param_1[5] + uVar4 * 2) = (short)((int)uVar4 / 2) + 1;
        }
        if (param_1[6] != 0) {
          if ((uVar4 & 1) == 0) {
            uVar3 = 1;
          }
          else {
            uVar3 = 2;
          }
          *(undefined2 *)(param_1[6] + uVar4 * 2) = uVar3;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)(uint)*(ushort *)(param_1 + 2));
    }
  }
  return param_1;
}

