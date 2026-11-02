// rea decompile_all
// name: FUN_000a03f4
// address: 0xa03f4
// body: available
// range: 0xa03f4-0xa05ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000a03f4(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_0011eda0();
  FUN_00120374(uVar1,&DAT_000a05f0);
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  *DAT_000a05f8 = 0x3c;
  *(undefined1 *)((int)param_1 + 0xa3) = 0;
  *DAT_000a05fc = 0;
  *DAT_000a0600 = 1;
  FUN_00095264(uVar1,0);
  FUN_00093c5c(uVar1,1);
  FUN_000835e4(param_1 + 5);
  iVar2 = FUN_000bc47c(param_1 + 5);
  if (iVar2 == 0) {
    uVar3 = FUN_001b5968(uVar1);
    if (1 < uVar3) {
      (**(code **)(*(int *)param_1[0x1c] + 0x14))((int *)param_1[0x1c],0xce,1,0);
      (**(code **)(*(int *)param_1[0x1c] + 0x14))((int *)param_1[0x1c],0xcd,0);
    }
  }
  else {
    FUN_000bc068(param_1 + 5,0);
  }
  iVar2 = FUN_001b5844(uVar1);
  if ((iVar2 == 0) && (*DAT_000a0604 == '\x02')) {
    FUN_001a7e60(DAT_000a060c,DAT_000a0608);
  }
  iVar2 = FUN_001a4804(param_2);
  if (iVar2 != 0x27) {
    FUN_0011eda0();
    FUN_0011f6a0();
  }
  FUN_0009eccc(param_1,0);
  FUN_00093300(uVar1,4);
  if (*DAT_000a0610 != 0) {
    FUN_001a48f0(param_1,0x41,0);
  }
  iVar2 = FUN_001b5844(uVar1);
  if (iVar2 != 0) {
    FUN_00095510(uVar1,3);
    FUN_00095568(uVar1,0);
  }
  if ((char)param_1[0x28] != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
    (**(code **)(*param_1 + 0x7c))(param_1,0);
  }
  (**(code **)(*(int *)param_1[0x27] + 0x24))((int *)param_1[0x27],0x1b,0,DAT_000a0614,0);
  (**(code **)(*(int *)param_1[0x27] + 0x24))((int *)param_1[0x27],0x2a,0,300,300);
  return;
}

