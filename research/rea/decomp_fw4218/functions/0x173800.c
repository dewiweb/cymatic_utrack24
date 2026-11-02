// rea decompile_all
// name: FUN_00173800
// address: 0x173800
// body: available
// range: 0x173800-0x173859 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00173800(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar1 = DAT_0017385c;
  if ((code *)*DAT_0017385c != entry) {
    uStack_c = param_2;
    uStack_8 = param_3;
    uStack_4 = param_4;
    if (param_1 < 4) {
      (*(code *)*DAT_0017385c)(param_1,0);
    }
    else {
      if (&stack0x00000000 == (undefined1 *)((int)&DAT_0000002f + 1)) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)FUN_001c13ac();
      }
      FUN_001c1324(piVar2,param_1,&uStack_c);
      uVar3 = (**(code **)(*piVar2 + 8))(piVar2);
      (*(code *)*puVar1)(param_1,uVar3);
      (**(code **)*piVar2)(piVar2);
    }
  }
  return CONCAT44(param_2,param_1);
}

