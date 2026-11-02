// rea decompile_all
// name: FUN_0010a9f0
// address: 0x10a9f0
// body: available
// range: 0x10a9f0-0x10aba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0010a9f0(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  FUN_000f4e84();
  uVar2 = FUN_000f4fb4();
  iVar3 = FUN_000bc47c(param_1 + 5);
  if (iVar3 == 0) {
    FUN_00083e6c(param_1 + 5);
  }
  iVar3 = FUN_0006d818(uVar2);
  if ((param_1[0x27] == 0x3b) || (param_1[0x27] == 0x16)) {
    FUN_0010a78c(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  if (*(char *)((int)param_1 + 0xa6) != '\0') {
    *(undefined1 *)((int)param_1 + 0xa6) = 0;
    if (iVar3 == 1) {
      (**(code **)(*param_1 + 0x34))(param_1,DAT_0010aba4);
    }
    else {
      FUN_00093a08(uVar1);
      iVar4 = FUN_0007ea24();
      if (*(char *)(iVar4 + 4) != '\0') {
        FUN_001a48f0(param_1,2,0);
      }
    }
  }
  *DAT_0010aba8 = 0;
  *DAT_0010abac = 0;
  *DAT_0010abb0 = 0;
  FUN_00093574(uVar1,0);
  FUN_0009444c(uVar1,0);
  (**(code **)(*(int *)param_1[0x26] + 0x24))((int *)param_1[0x26],0x18,0,DAT_0010abb4,DAT_0010abb4)
  ;
  if (param_1[0x27] == 0x16) {
    FUN_000950d0(uVar1,1);
    FUN_00085844(param_1 + 5,DAT_0010abb8);
    if (iVar3 == 1) {
      FUN_0006d908(uVar2,4);
    }
  }
  else {
    FUN_0010a328(param_1);
  }
  FUN_00093300(uVar1,1);
  uVar2 = FUN_000dfcb0();
  FUN_000e08ec(uVar2,1);
  FUN_00092ea0(uVar1,2);
  return;
}

