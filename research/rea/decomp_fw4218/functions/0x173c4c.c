// rea decompile_all
// name: FUN_00173c4c
// address: 0x173c4c
// body: available
// range: 0x173c4c-0x173cb1 inclusive
// range: 0x173cbe-0x173ccb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00173c4c(int *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  puVar2 = DAT_00173cd0;
  puVar1 = DAT_00173ccc;
  uVar4 = *DAT_00173ccc;
  *DAT_00173ccc = uVar4 + 1;
  if (((*puVar2 & 1) == 0) && (iVar3 = FUN_001c7162(DAT_00173cd0), iVar3 != 0)) {
    *DAT_00173cd8 = DAT_00173cd4;
  }
  if (param_2 == *DAT_00173cd8) {
    param_2 = 0;
    param_3 = 0;
    uVar4 = *puVar1 - 1;
    *puVar1 = uVar4;
  }
  else {
    FUN_001c6a78(param_2);
    if (param_3 != 0) {
      if ((param_3 < 0x1001) && (uVar4 + 1 < 2)) {
        param_2 = *DAT_00173cd8;
        goto LAB_00173cc6;
      }
      param_2 = FUN_001c6ad0(param_3);
    }
    uVar4 = *puVar1;
  }
  *puVar1 = uVar4 - 1;
LAB_00173cc6:
  *param_1 = param_2;
  param_1[1] = param_3;
  return CONCAT44(param_1,param_1 + 2);
}

