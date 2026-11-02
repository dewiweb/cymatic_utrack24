// rea decompile_all
// name: FUN_001a5bb8
// address: 0x1a5bb8
// body: available
// range: 0x1a5bb8-0x1a5c5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001a5bb8(int param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    if (*(int *)(param_1 + 0x4c) != 0) {
      return -5;
    }
    if ((code *)*DAT_001a5c60 == entry) {
      puVar1 = (undefined4 *)FUN_0019b388(8);
    }
    else {
      puVar1 = (undefined4 *)(*(code *)*DAT_001a5c60)(8);
    }
    *(undefined4 **)(param_1 + 0x4c) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return -4;
    }
    *puVar1 = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + 4) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 2;
    iVar2 = FUN_001a2d7c(*(undefined4 *)(param_1 + 0x4c),param_2);
    puVar1 = DAT_001a5c64;
    if (iVar2 != 0) {
      piVar4 = *(int **)(param_1 + 0x4c);
      if (piVar4 != (int *)0x0) {
        if (*piVar4 != 0) {
          if ((code *)*DAT_001a5c64 == entry) {
            FUN_0018a280();
          }
          else {
            (*(code *)*DAT_001a5c64)();
          }
        }
        if (piVar4[1] != 0) {
          pcVar3 = (code *)*puVar1;
          if (pcVar3 == entry) {
            FUN_0018a280();
          }
          else {
            (*pcVar3)();
          }
        }
        *piVar4 = 0;
        piVar4[1] = 0;
        pcVar3 = (code *)*puVar1;
        if (pcVar3 == entry) {
          FUN_0018a280(piVar4);
        }
        else {
          (*pcVar3)(piVar4);
        }
      }
      *(undefined4 *)(param_1 + 0x4c) = 0;
      return iVar2;
    }
  }
  return 0;
}

