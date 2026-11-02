// rea decompile_all
// name: FUN_00148710
// address: 0x148710
// body: available
// range: 0x148710-0x14884b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00148710(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int extraout_r1;
  int iVar3;
  int extraout_r1_00;
  int extraout_r1_01;
  
  (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x104))(param_1);
  FUN_0011785c(param_1 + 0x78,0);
  FUN_0012271c();
  piVar1 = (int *)param_1[0x69];
  iVar3 = extraout_r1;
  while (piVar1 != (int *)0x0) {
    if (piVar1 != (int *)0x0) {
      iVar3 = *(int *)(*piVar1 + -0x14) + (int)piVar1;
    }
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    (**(code **)(*param_1 + 0xc0))(param_1,iVar3);
    iVar3 = extraout_r1_00;
    piVar1 = (int *)param_1[0x69];
  }
  piVar1 = (int *)param_1[0x6a];
  while (piVar1 != (int *)0x0) {
    if (piVar1 != (int *)0x0) {
      iVar3 = *(int *)(*piVar1 + -0x14) + (int)piVar1;
    }
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    (**(code **)(*param_1 + 0xcc))(param_1,iVar3);
    iVar3 = extraout_r1_01;
    piVar1 = (int *)param_1[0x6a];
  }
  *(undefined2 *)(param_1 + 100) = 0;
  if (param_1[99] != 0) {
    FUN_0016d744();
  }
  param_1[99] = 0;
  *(undefined2 *)(param_1 + 0x65) = 0;
  param_1[0x68] = 0;
  FUN_00118214(param_1 + 0x1b0);
  FUN_00134dd8(param_1 + 0x219);
  if (param_2 == 0) {
    FUN_000fc2e0(param_1 + 0x152);
  }
  else {
    uVar2 = FUN_001209ac(param_1 + 0x163);
    FUN_0011785c(param_1 + 0x78,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00148848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4c))(param_1);
  return;
}

