// rea decompile_all
// name: FUN_0010a78c
// address: 0x10a78c
// body: available
// range: 0x10a78c-0x10a983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0010a78c(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  FUN_000f4e84();
  uVar2 = FUN_000f4fc0();
  FUN_00093a08(uVar2);
  FUN_0007ec88();
  FUN_00084a18(param_1 + 5);
  FUN_000f4e84();
  uVar3 = FUN_000f4fb4();
  iVar4 = FUN_0006d818(uVar3);
  cVar1 = *(char *)(*DAT_0010a984 + 4);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x29) = 1;
    param_1[0x28] = 100;
    iVar4 = (**(code **)(*(int *)param_1[2] + 8))();
    if (iVar4 != 0) {
      FUN_00085cbc(param_1 + 5,param_1[0x28]);
    }
    (**(code **)(*(int *)param_1[0x26] + 0x24))((int *)param_1[0x26],9,0,500,500);
  }
  else if (cVar1 == '\x01') {
    iVar4 = FUN_000bc47c(param_1 + 5);
    if (iVar4 == 0) {
      param_1[0x28] = *(int *)(*DAT_0010a984 + 8);
      if (99 < param_1[0x28]) {
        param_1[0x28] = 99;
      }
      FUN_000f4e84();
      uVar3 = FUN_000f4fc0();
      FUN_00095568(uVar3,*(undefined4 *)(*DAT_0010a984 + 8));
      (**(code **)(*(int *)param_1[0x26] + 0x24))((int *)param_1[0x26],9,0,1000,1000);
    }
  }
  else if ((cVar1 == '\x02') && (iVar5 = FUN_000bc47c(param_1 + 5), iVar5 == 0)) {
    if (iVar4 == 1) {
      (**(code **)(*param_1 + 0x34))(param_1,DAT_0010a988);
    }
    else {
      FUN_001a48f0(param_1,0x45,0);
    }
  }
  FUN_00095510(uVar2,*(undefined1 *)(*DAT_0010a984 + 4));
  uVar2 = (**(code **)(*(int *)param_1[2] + 8))();
  FUN_00084b88(param_1 + 5,1,uVar2,0);
  return;
}

