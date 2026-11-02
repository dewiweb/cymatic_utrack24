// rea decompile_all
// name: FUN_000cf940
// address: 0xcf940
// body: available
// range: 0xcf940-0xcfa57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000cf940(int param_1,undefined4 param_2,undefined1 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (*(int *)(param_1 + 0x5e0) == -1) {
    iVar1 = FUN_000151a4(s__dev_spi0_000cfa58,0);
    *(int *)(param_1 + 0x5e0) = iVar1;
    if (iVar1 == -1) {
      FUN_000028a4(DAT_000cfa70,&DAT_000cfa68);
      (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),param_2,0xb);
      FUN_0019f30c(param_5);
      return;
    }
  }
  local_20 = 8;
  local_1c = param_3;
  iVar1 = FUN_0001545c(*(undefined4 *)(param_1 + 0x5e0),10,&local_20);
  uVar2 = DAT_000cfa64;
  if ((iVar1 == 0) &&
     (iVar1 = FUN_00015400(*(undefined4 *)(param_1 + 0x5e0),param_5,param_5,param_4,param_4),
     uVar2 = DAT_000cfa74, iVar1 == param_4)) {
    (**(code **)(**(int **)(param_1 + 0x118) + 200))
              (*(int **)(param_1 + 0x118),param_2,param_4,param_5);
    FUN_0019f30c(param_5);
    return;
  }
  FUN_000028a4(uVar2);
  FUN_0019f30c(param_5);
  (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),param_2,0xb);
  return;
}

