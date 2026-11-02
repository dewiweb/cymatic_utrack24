// rea decompile_all
// name: FUN_00136a54
// address: 0x136a54
// body: available
// range: 0x136a54-0x136b3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00136a54(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_28 [12];
  undefined2 local_1c;
  int *local_18;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  while( true ) {
    iVar3 = iVar1;
    if (iVar3 == 0) {
      (**(code **)(*param_2 + 0x40))(param_2,0);
      return 2;
    }
    if (*(int **)(iVar3 + 0x10) == param_2) break;
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0xc);
    }
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x6c))(auStack_28);
  piVar2 = *(int **)(iVar3 + 0x20);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*(int *)((int)piVar2 + *(int *)(*piVar2 + -0x48)) + 0x34))
              ((int)piVar2 + *(int *)(*piVar2 + -0x48));
  }
  *(int **)(iVar3 + 0x20) = local_18;
  if (local_18 != (int *)0x0) {
    (**(code **)(*(int *)((int)local_18 + *(int *)(*local_18 + -0x48)) + 0x30))
              (*(int *)(*local_18 + -0x48) + (int)local_18);
  }
  *(undefined2 *)(iVar3 + 0x1c) = local_1c;
  (**(code **)(*param_2 + 0x40))(param_2);
  FUN_0010f210(auStack_28);
  return 0;
}

