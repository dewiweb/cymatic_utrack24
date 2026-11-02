// rea decompile_all
// name: FUN_0000f254
// address: 0xf254
// body: available
// range: 0xf254-0xf3cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0000f254(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 uVar5;
  
  iVar2 = param_1[2];
  FUN_001a0700();
  cVar1 = (char)param_1[9];
  if ((cVar1 != '\x04' && cVar1 != '\x03') && cVar1 != '\x06') {
LAB_0000f294:
    FUN_001a0d18(iVar2 + 0x118);
    return 0;
  }
  thunk_EXT_FUN_00400100(param_1[0xd7]);
  *(undefined1 *)((int)param_1 + 0x359) = 1;
  if (param_1[0xc9] != 0) {
    FUN_0017ac6c(param_1[0xc9] + 0x10,1);
  }
  iVar3 = FUN_0018ea5c(param_1[7]);
  if (iVar3 != 0) {
    piVar4 = (int *)param_1[0xf];
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4,param_1,6);
    }
    *(undefined1 *)(param_1 + 9) = 1;
    goto LAB_0000f294;
  }
  if ((param_1[8] != 0) && (iVar3 = FUN_0018ea5c(), iVar3 != 0)) {
    piVar4 = (int *)param_1[0xf];
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4,param_1,6);
    }
    *(undefined1 *)(param_1 + 9) = 1;
    goto LAB_0000f294;
  }
  cVar1 = (char)param_1[9];
  if (cVar1 == '\x03' || cVar1 == '\x04') {
    uVar5 = 5;
  }
  else {
    if (cVar1 != '\x06') goto LAB_0000f384;
    uVar5 = 7;
  }
  *(undefined1 *)(param_1 + 9) = uVar5;
LAB_0000f384:
  (**(code **)(*param_1 + 0x160))(param_1);
  piVar4 = (int *)param_1[0xf];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x2c))(piVar4,param_1);
  }
  FUN_0000b524(param_1 + 1);
  FUN_001a0d18(iVar2 + 0x118);
  return 1;
}

