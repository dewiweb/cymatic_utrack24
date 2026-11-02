// rea decompile_all
// name: FUN_00199a40
// address: 0x199a40
// body: available
// range: 0x199a40-0x199af7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00199a40(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_001c6b14(0x68,DAT_00199af8);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_0015da90(iVar1,DAT_00199b00,DAT_00199afc);
    *piVar2 = DAT_00199b04;
    piVar2[0x19] = 0;
    piVar2[0x18] = (int)param_1;
    (**(code **)(*param_1 + 0x38))(param_1);
    piVar2[0x19] = param_2;
    iVar1 = FUN_0015d72c(piVar2,0,DAT_00199b08,param_3,0,2000,4,piVar2);
    if (iVar1 != 0) {
      return piVar2;
    }
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return (int *)0x0;
}

