// rea decompile_all
// name: FUN_0008cd40
// address: 0x8cd40
// body: available
// range: 0x8cd40-0x8ce4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0008cd40(uint param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  
  uVar1 = DAT_0008ce50;
  FUN_001a0700();
  piVar9 = (int *)**(int **)(param_1 + 0x14);
  if (piVar9 != *(int **)(param_1 + 0x14)) {
    do {
      if ((int *)piVar9[2] == param_2) {
LAB_0008cdb4:
        FUN_001a0d18(uVar1);
        return 0;
      }
      uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
      uVar3 = (**(code **)(*(int *)piVar9[2] + 0x10))();
      iVar4 = FUN_00003960(uVar3,uVar2);
      if (iVar4 == 0) goto LAB_0008cdb4;
      piVar9 = (int *)*piVar9;
    } while (piVar9 != (int *)*(int *)(param_1 + 0x14));
  }
  piVar9 = *(int **)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0x14);
  piVar10 = (int *)(param_1 + 4);
  if (piVar9 == (int *)0x0) {
    if (*(int *)(param_1 + 0xc) == *(int *)(param_1 + 0x10)) {
      uVar8 = 1;
      if (*piVar10 != 0) {
        uVar7 = *(uint *)(*piVar10 + 4);
        uVar5 = (uVar7 >> 1) + uVar7 + (uVar7 >> 3);
        uVar8 = uVar7 + 1;
        if (uVar7 + 1 <= uVar5) {
          uVar8 = uVar5;
        }
      }
      piVar9 = (int *)FUN_0010f82c(0xc,0);
      iVar6 = FUN_0010f82c(uVar8 * 0x14,0);
      piVar9[2] = iVar6;
      iVar6 = *piVar10;
      piVar9[1] = uVar8;
      *piVar9 = iVar6;
      *piVar10 = (int)piVar9;
      iVar6 = piVar9[2];
      *(int *)(param_1 + 0xc) = iVar6;
      *(uint *)(param_1 + 0x10) = iVar6 + uVar8 * 0x14;
    }
    piVar9 = *(int **)(param_1 + 0xc);
    *(int **)(param_1 + 0xc) = piVar9 + 5;
  }
  else {
    *(int *)(param_1 + 8) = *piVar9;
  }
  if (piVar9 + 2 != (int *)0x0) {
    piVar9[2] = (int)param_2;
    piVar9[3] = 0;
    piVar9[4] = param_1 & 0xffffff00 | 1;
  }
  *piVar9 = iVar4;
  piVar9[1] = *(int *)(iVar4 + 4);
  **(int **)(iVar4 + 4) = (int)piVar9;
  *(int **)(iVar4 + 4) = piVar9;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  FUN_001a0d18(uVar1);
  return 1;
}

