// rea decompile_all
// name: FUN_001a688c
// address: 0x1a688c
// body: available
// range: 0x1a688c-0x1a6915 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_001a688c(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if ((param_1 != 0) &&
     ((*(int *)(param_1 + 0xc) != 0 ||
      ((*(int *)(param_1 + 8) != 0 && (*(int *)(param_1 + 4) != 0)))))) {
    if ((code *)*DAT_001a6918 == entry) {
      puVar2 = (undefined1 *)FUN_0019b388(0xc);
    }
    else {
      puVar2 = (undefined1 *)(*(code *)*DAT_001a6918)(0xc);
    }
    if (puVar2 != (undefined1 *)0x0) {
      *(int *)(puVar2 + 8) = param_1;
      iVar3 = *(int *)(param_1 + 0xc);
      if (iVar3 == 0) {
        iVar3 = FUN_00003960(*(undefined4 *)(param_1 + 8),DAT_001a691c);
        if (iVar3 == 0) {
          uVar1 = 0x10;
        }
        else if ((*(int *)(param_1 + 0xc) == 0) &&
                (iVar3 = FUN_00003960(*(undefined4 *)(param_1 + 8),DAT_001a6920), iVar3 == 0)) {
          uVar1 = 0x11;
        }
        else {
          uVar1 = 0x12;
        }
      }
      else if (iVar3 - 100U < 100) {
        uVar1 = 0x13;
      }
      else if (iVar3 - 200U < 100) {
        uVar1 = 0x14;
      }
      else {
        uVar1 = 0x15;
      }
      *puVar2 = uVar1;
      *(undefined4 *)(puVar2 + 4) = 0;
      return puVar2;
    }
  }
  return (undefined1 *)0x0;
}

