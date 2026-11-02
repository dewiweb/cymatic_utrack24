// rea decompile_all
// name: FUN_000f704c
// address: 0xf704c
// body: available
// range: 0xf704c-0xf71db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000f704c(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if (0x11 < (int)(param_3 - *param_2)) {
    FUN_000f2acc(param_1);
    *param_2 = *param_2 + 3 & 0xfffffffc;
    iVar1 = FUN_000f0d50(param_1 + 0x6c,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = *param_2 + 3 & 0xfffffffc;
    *param_2 = uVar2;
    if (0x33 < (int)(param_3 - uVar2)) {
      FUN_0010ea10(param_1 + 0x44,param_2);
      FUN_0010ea10(param_1 + 0x50,param_2);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)*param_2;
      uVar2 = *param_2;
      *param_2 = uVar2 + 4;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(uVar2 + 4);
      uVar2 = *param_2;
      *param_2 = uVar2 + 4;
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(uVar2 + 4);
      uVar2 = *param_2;
      *param_2 = uVar2 + 4;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(uVar2 + 4);
      uVar2 = *param_2;
      *param_2 = uVar2 + 4;
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(uVar2 + 4);
      uVar2 = *param_2;
      *param_2 = uVar2 + 4;
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(uVar2 + 4);
      uVar2 = *param_2;
      *param_2 = uVar2 + 4;
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(uVar2 + 4);
      uVar2 = *param_2;
      *param_2 = uVar2 + 4;
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(uVar2 + 4);
      *param_2 = *param_2 + 4;
      if (((*(byte *)(param_1 + 0xb0) & 2) != 0) &&
         (iVar1 = FUN_0010e834(param_1 + 0x5c,param_2,param_3), iVar1 == 0)) {
        return 0;
      }
      if ((*(byte *)(param_1 + 0xb0) & 1) != 0) {
        *param_2 = *param_2 + 1 & 0xfffffffe;
        iVar1 = FUN_0010e834(param_1 + 100,param_2,param_3);
        if (iVar1 == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

