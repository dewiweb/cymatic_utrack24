// rea decompile_all
// name: FUN_0006bd80
// address: 0x6bd80
// body: available
// range: 0x6bd80-0x6bf0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0006bd80(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  piVar3 = *(int **)(param_1 + 0x10);
  piVar5 = (int *)*piVar3;
  while( true ) {
    if (piVar5 == piVar3) {
      return 0;
    }
    if (piVar5[2] == param_2) break;
    piVar5 = (int *)*piVar5;
  }
  iVar8 = piVar5[4];
  if (iVar8 != piVar5[3]) {
    piVar1 = (int *)*piVar3;
    bVar4 = false;
    if (piVar1 != piVar3) {
      do {
        if (piVar1[2] == param_2) {
          if (piVar1[4] != iVar8) goto LAB_0006be7c;
          bVar4 = true;
          piVar1[3] = iVar8;
        }
        piVar1 = (int *)*piVar1;
      } while (piVar1 != *(int **)(param_1 + 0x10));
    }
    for (piVar3 = (int *)**(int **)(param_1 + 0x10); piVar3 != *(int **)(param_1 + 0x10);
        piVar3 = (int *)*piVar3) {
      if (piVar3[3] != piVar3[4]) goto LAB_0006be7c;
    }
    if (bVar4) {
      FUN_000659b0(param_1 + 300);
      uVar6 = *DAT_0006bf10;
      uVar7 = DAT_0006bf10[1];
      puVar2 = (undefined4 *)FUN_001a0808(0x10,1);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = DAT_0006bf14;
        puVar2[1] = param_1;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
      }
      (**(code **)(*(int *)(param_1 + 0x18) + 0x2c))((int *)(param_1 + 0x18),puVar2,0xffffffff);
    }
  }
LAB_0006be7c:
  if (piVar5 != (int *)*(int *)(param_1 + 0x10)) {
    *(int *)piVar5[1] = *piVar5;
    *(int *)(*piVar5 + 4) = piVar5[1];
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    *piVar5 = *(undefined4 *)(param_1 + 4);
    *(int **)(param_1 + 4) = piVar5;
  }
  *(undefined4 *)(param_1 + 0x1a0) = DAT_0006bf18;
  for (piVar5 = (int *)**(int **)(param_1 + 0x10); piVar5 != *(int **)(param_1 + 0x10);
      piVar5 = (int *)*piVar5) {
    if (*(uint *)(param_1 + 0x1a0) < (uint)piVar5[5]) {
      *(int *)(param_1 + 0x1a0) = piVar5[5];
    }
  }
  return 1;
}

