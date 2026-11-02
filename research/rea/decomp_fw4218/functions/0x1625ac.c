// rea decompile_all
// name: FUN_001625ac
// address: 0x1625ac
// body: available
// range: 0x1625ac-0x162727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001625ac(int param_1,undefined4 param_2,int *param_3,undefined4 *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  *param_4 = 0;
  if ((param_5 != 2) ||
     (piVar1 = (int *)FUN_001c6b14(0xc20,DAT_00162728,param_3,param_4,param_4), piVar1 == (int *)0x0
     )) {
    return 1;
  }
  piVar1[1] = 0;
  piVar1[2] = 0;
  iVar2 = DAT_0016272c;
  piVar1[3] = 0;
  piVar1[4] = 0;
  *(undefined1 *)(piVar1 + 5) = 2;
  *piVar1 = iVar2;
  piVar1[6] = iVar2 + 0x2c;
  piVar1[7] = iVar2 + 0x40;
  iVar2 = FUN_00154d94(piVar1 + 8);
  piVar1 = (int *)(iVar2 + -0x20);
  *(undefined4 *)(iVar2 + 0xbfc) = 0;
  (**(code **)(*(int *)(iVar2 + -0x20) + 8))(piVar1,param_3,param_2);
  iVar3 = FUN_00154a64(iVar2,*param_3,param_2,iVar2 + -4,*(undefined4 *)(param_1 + 0x16c));
  if (iVar3 == 0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    return 1;
  }
  *param_4 = piVar1;
  iVar3 = (**(code **)(*param_3 + 0x24))
                    (*(undefined4 *)(iVar2 + -0x10),*(undefined4 *)(iVar2 + 0xbdc),
                     *(undefined4 *)(iVar2 + 0xbe0),DAT_00162730);
  if (iVar3 == 0) {
    piVar4 = *(int **)(param_1 + 0x178);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x18))(piVar4,iVar2 + -8);
    }
    FUN_001f00bc(param_1 + 0x134);
    *(undefined4 *)(iVar2 + -0x1c) = 0;
    *(undefined4 *)(iVar2 + -0x18) = 0;
    if (*(int *)(param_1 + 0x128) == 0) {
      *(int **)(param_1 + 0x124) = piVar1;
    }
    else {
      *(int *)(iVar2 + -0x1c) = *(int *)(param_1 + 0x128);
      *(int **)(*(int *)(param_1 + 0x128) + 8) = piVar1;
    }
    *(int **)(param_1 + 0x128) = piVar1;
    *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
    FUN_001f06d4(param_1 + 0x134);
    return 0;
  }
  *param_4 = 0;
  (**(code **)(*piVar1 + 4))(piVar1);
  return iVar3;
}

