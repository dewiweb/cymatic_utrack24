// rea decompile_all
// name: FUN_000e2fac
// address: 0xe2fac
// body: available
// range: 0xe2fac-0xe30e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000e2fac(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fb4();
  uVar6 = 1;
  for (iVar2 = FUN_0023cc00(param_2); iVar4 = FUN_0023cbe8(param_2), iVar4 != iVar2;
      iVar2 = iVar2 + 0x18) {
    uVar3 = FUN_001b9ec4(iVar2);
    uVar6 = uVar6 & uVar3;
  }
  if (uVar6 == 0) {
    FUN_0006de44(uVar1,0);
    (**(code **)(**(int **)(param_1 + 0xa4) + 0x24))(*(int **)(param_1 + 0xa4),0x1e,0,500,500);
  }
  else {
    FUN_0006de44(uVar1,1);
  }
  iVar2 = FUN_001b2780(uVar1);
  if (iVar2 == 0) {
    pcVar5 = s_false_000e30f0;
  }
  else {
    pcVar5 = &DAT_000e30e8;
  }
  FUN_00002898(DAT_000e30f8,pcVar5);
  FUN_001a48f0(param_1,0x56,0);
  FUN_001a48f0(param_1,0x32,0);
  FUN_001a48f0(param_1,0x3e,0);
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  iVar2 = FUN_001b5844(uVar1);
  if (iVar2 != 0) {
    (**(code **)(**(int **)(param_1 + 0xa4) + 0x24))
              (*(int **)(param_1 + 0xa4),0x23,0,DAT_000e30fc,DAT_000e30fc);
  }
  return;
}

