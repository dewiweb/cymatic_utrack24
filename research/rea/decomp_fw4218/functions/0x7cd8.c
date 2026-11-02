// rea decompile_all
// name: FUN_00007cd8
// address: 0x7cd8
// body: available
// range: 0x7cd8-0x7e33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00007cd8(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar7 = param_1 + 0x118;
  FUN_001f00bc(iVar7);
  if ((int *)*param_2 != (int *)0x0) {
    (**(code **)(*(int *)*param_2 + 8))();
    piVar5 = (int *)param_2[2];
    if ((int *)param_2[3] != piVar5) {
      do {
        piVar1 = (int *)*piVar5;
        if (piVar1 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = piVar1 + 1;
        }
        if ((piVar4 != (int *)*param_2) && (iVar2 = (**(code **)(*piVar1 + 0x1a8))(), iVar2 == 0))
        goto LAB_00007e18;
        piVar5 = piVar5 + 1;
      } while ((int *)param_2[3] != piVar5);
    }
    piVar5 = (int *)param_2[5];
    if ((int *)param_2[6] != piVar5) {
      do {
        piVar1 = (int *)*piVar5;
        if (piVar1 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = piVar1 + 1;
        }
        if ((piVar4 != (int *)*param_2) && (iVar2 = (**(code **)(*piVar1 + 0x194))(), iVar2 == 0)) {
LAB_00007e18:
          FUN_001f06d4(iVar7);
          return 0;
        }
        piVar5 = piVar5 + 1;
      } while ((int *)param_2[6] != piVar5);
    }
    puVar6 = *(undefined4 **)(param_1 + 0x178);
    if (*(undefined4 **)(param_1 + 0x17c) != puVar6) {
      do {
        piVar5 = (int *)*puVar6;
        uVar3 = FUN_0000a2e8(*param_2);
        (**(code **)(*piVar5 + 0x14))(piVar5,uVar3);
        puVar6 = puVar6 + 1;
      } while (*(undefined4 **)(param_1 + 0x17c) != puVar6);
    }
  }
  FUN_001f06d4(iVar7);
  return 1;
}

