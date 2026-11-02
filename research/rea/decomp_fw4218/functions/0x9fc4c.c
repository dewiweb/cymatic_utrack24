// rea decompile_all
// name: FUN_0009fc4c
// address: 0x9fc4c
// body: available
// range: 0x9fc4c-0x9fd53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0009fc4c(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  FUN_0011eda0();
  FUN_0011f8a0();
  uVar1 = FUN_00006604(param_2,*(undefined4 *)(DAT_0009fd54 + 0x1c));
  uVar2 = FUN_0011eda0();
  FUN_0011f5a8(uVar2,*(undefined4 *)(DAT_0009fd54 + 0x80),uVar1,1);
  uVar1 = FUN_00006604(param_2,*(undefined4 *)(DAT_0009fd54 + 0x1c));
  (**(code **)(*param_1 + 0x74))(param_1,uVar1,*(undefined4 *)(DAT_0009fd54 + 0x80));
  FUN_00083fd0(param_1 + 5);
  FUN_00085698(param_1 + 5,param_3,param_4,param_2);
  *DAT_0009fd58 = param_2;
  if (param_3 == 1) {
    uVar1 = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_00244c00(DAT_0009fd5c,param_3 + -2);
    uVar1 = *puVar3;
  }
  *DAT_0009fd60 = uVar1;
  *DAT_0009fd64 = 0;
  FUN_001a48f0(param_1,0x2e,0);
  if (*(char *)((int)param_1 + 0xa3) == '\0') {
    FUN_00084814(param_1 + 5);
  }
  return CONCAT44(param_2,param_1);
}

