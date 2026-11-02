// rea decompile_all
// name: FUN_0017389c
// address: 0x17389c
// body: available
// range: 0x17389c-0x17395f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0017389c(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  while (iVar2 = FUN_001a4bc4(*(undefined4 *)(param_2 + 0x28),0), iVar2 == 0) {
    uVar3 = FUN_001a4bdc(*(undefined4 *)(param_2 + 0x28),0);
    FUN_001a4cbc(*(undefined4 *)(param_2 + 0x28),0);
    FUN_00173680(uVar3);
    FUN_001a4a80(param_1 + 0x9c,uVar3,0);
  }
  while (iVar2 = FUN_001a4bc4(*(undefined4 *)(param_2 + 0x2c),0), iVar2 == 0) {
    uVar3 = FUN_001a4bdc(*(undefined4 *)(param_2 + 0x2c),0);
    FUN_001a4cbc(*(undefined4 *)(param_2 + 0x2c),0);
    FUN_00173680(uVar3);
    FUN_001a4a80(param_1 + 0x9c,uVar3,0);
  }
  FUN_001a52e0(*(undefined4 *)(param_2 + 0x20));
  FUN_001a52e0(*(undefined4 *)(param_2 + 0x24));
  FUN_001a3a18(*(undefined4 *)(param_2 + 4));
  puVar1 = DAT_00173960;
  if (*(int *)(param_2 + 0x2c) != 0) {
    if ((code *)*DAT_00173960 == entry) {
      FUN_0018a280();
    }
    else {
      (*(code *)*DAT_00173960)();
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    pcVar4 = (code *)*puVar1;
    if (pcVar4 == entry) {
      FUN_0018a280();
    }
    else {
      (*pcVar4)();
    }
  }
  if (param_2 != 0) {
    pcVar4 = (code *)*puVar1;
    if (pcVar4 == entry) {
      FUN_0018a280(param_2);
    }
    else {
      (*pcVar4)(param_2);
    }
  }
  FUN_001799e4(param_1);
  return;
}

