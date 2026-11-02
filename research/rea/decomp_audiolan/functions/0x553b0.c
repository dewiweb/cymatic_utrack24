// rea decompile_all
// name: FUN_000553b0
// address: 0x553b0
// body: available
// range: 0x553b0-0x5555b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000553b0(int param_1,int *param_2,short *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int *piVar7;
  
  iVar5 = param_1 + 200;
  FUN_001a0700(iVar5);
  piVar3 = *(int **)(param_1 + 0x148);
  piVar1 = (int *)*piVar3;
  while( true ) {
    if (piVar1 == piVar3) {
      FUN_001a0d18(iVar5);
      return 0;
    }
    if (*param_3 == *(short *)(piVar1[2] + 8)) break;
    piVar1 = (int *)*piVar1;
  }
  while (piVar7 = (int *)*piVar3, piVar7 != piVar3) {
    while (*(short *)(param_1 + 0x11c) != *(short *)(piVar7[2] + 8)) {
      piVar7 = (int *)*piVar7;
      if (piVar7 == piVar3) goto LAB_0005545c;
    }
    sVar6 = *(short *)(param_1 + 0x11c) + 1;
    *(short *)(param_1 + 0x11c) = sVar6;
    if (sVar6 == 0) {
      *(undefined2 *)(param_1 + 0x11c) = 1;
    }
  }
LAB_0005545c:
  *param_3 = *(short *)(param_1 + 0x11c);
  iVar4 = piVar1[2];
  piVar7 = (int *)(iVar4 + 0xc);
  *(undefined2 *)(iVar4 + 8) = *(undefined2 *)(param_1 + 0x11c);
  piVar1 = DAT_0005555c;
  iVar2 = *param_2;
  piVar3 = (int *)(iVar2 + -0xc);
  if (*piVar3 == -1) {
    if (piVar7 != param_2) {
      FUN_001da110(piVar7,0,*(undefined4 *)(*piVar7 + -4),iVar2,*(undefined4 *)(iVar2 + -4),0,
                   *(undefined4 *)(iVar2 + -4));
    }
  }
  else {
    if (piVar3 != DAT_0005555c) {
      *piVar3 = *piVar3 + 1;
    }
    if (*piVar7 != DAT_00055560) {
      piVar3 = (int *)(*piVar7 + -0xc);
      iVar2 = *piVar3;
      if ((iVar2 == -1) || ((piVar3 != piVar1 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
        FUN_0010fa20(*piVar7 + -0xc,*(int *)(*piVar7 + -8) + 0xe,0);
      }
    }
    *piVar7 = *param_2;
  }
  FUN_000b1e04(iVar4 + 0xc);
  FUN_001a0d18(iVar5);
  return 1;
}

