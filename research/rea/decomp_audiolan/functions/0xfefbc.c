// rea decompile_all
// name: FUN_000fefbc
// address: 0xfefbc
// body: available
// range: 0xfefbc-0xff087 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000fefbc(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int extraout_r2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar4 = 0;
  if (iVar3 != 0) {
    for (iVar2 = *(int *)(iVar3 + 0x2c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x2c)) {
      iVar3 = iVar2;
    }
    while (iVar1 = iVar3, iVar1 != 0) {
      if (iVar1 == 0) {
        iVar3 = *(int *)(param_1 + 4);
        if (iVar3 != 0) {
          iVar2 = *(int *)(iVar3 + 0x2c);
        }
        if (iVar3 != 0 && iVar2 != 0) {
          do {
            iVar3 = iVar2;
            iVar2 = *(int *)(iVar3 + 0x2c);
          } while (*(int *)(iVar3 + 0x2c) != 0);
        }
      }
      else {
        iVar3 = *(int *)(iVar1 + 0x30);
        iVar2 = iVar3;
        if ((*(byte *)(iVar1 + 0x34) & 0x80) == 0) {
          do {
            iVar3 = iVar2;
            if (iVar3 != 0) {
              param_3 = *(int *)(iVar3 + 0x2c);
            }
            iVar2 = param_3;
          } while (iVar3 != 0 && param_3 != 0);
        }
      }
      iVar2 = 0;
      if ((*(int *)(iVar1 + 0x18) != 0) &&
         (iVar2 = FUN_000ea1e8(*(int *)(iVar1 + 0x18),param_2), param_3 = extraout_r2, iVar2 == 0))
      {
        iVar4 = iVar4 + 1;
        *(undefined1 *)(iVar1 + 0x1c) = 3;
      }
    }
  }
  return iVar4;
}

