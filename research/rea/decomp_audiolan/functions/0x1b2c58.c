// rea decompile_all
// name: FUN_001b2c58
// address: 0x1b2c58
// body: available
// range: 0x1b2c58-0x1b2d11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001b2c58(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = DAT_001b2d14;
  if ((*(ushort *)(param_1[3] + 0xc) >> 8 & 1) == 0) {
    while (param_2 != (undefined4 *)0x0) {
      iVar3 = *(int *)(iVar2 + 0xc);
      if ((int)(((uint)*(ushort *)(param_1 + 2) + iVar3) -
               (*(int *)(param_2[3] + 4) + (uint)*(ushort *)(param_2 + 2))) < 0) {
        if (0 < (int)(((uint)*(ushort *)(param_1 + 2) + iVar3) - *(int *)(param_2[3] + 4))) {
          *(short *)(param_1 + 2) = (short)*(int *)(param_2[3] + 4) - (short)iVar3;
          FUN_001aa274(param_1[1]);
        }
        break;
      }
      if ((*(ushort *)(param_2[3] + 0xc) >> 8 & 1) != 0) {
        iVar3 = param_1[3];
        uVar1 = *(undefined2 *)(iVar3 + 0xc);
        *(char *)(iVar3 + 0xc) = (char)uVar1;
        *(byte *)(iVar3 + 0xd) = (byte)((ushort)uVar1 >> 8) | 1;
      }
      puVar4 = (undefined4 *)*param_2;
      FUN_001b4c2e(param_2);
      param_2 = puVar4;
    }
  }
  else {
    FUN_001b4c4c(param_2);
    param_2 = (undefined4 *)0x0;
  }
  *param_1 = param_2;
  return;
}

