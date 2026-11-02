// rea decompile_all
// name: FUN_0011f298
// address: 0x11f298
// body: available
// range: 0x11f298-0x11f46b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0011f298(int param_1,int *param_2,int *param_3)

{
  ushort uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  short local_28 [2];
  ushort local_24;
  
  piVar2 = (int *)(**(code **)(*param_2 + 0x30))(param_2);
  uVar3 = (**(code **)(*(int *)((int)piVar2 + *(int *)(*piVar2 + -0x38)) + 0x20))();
  (**(code **)(*param_2 + 0x34))(local_28,param_2);
  (**(code **)(*param_2 + 0x34))(local_28,param_2);
  if (local_28[0] == 2) {
    bVar9 = local_24 == 0x8000;
    uVar1 = 2;
    if (0x7fff < local_24) {
      uVar1 = *(ushort *)(param_1 + 0x1e);
      bVar9 = uVar1 == local_24;
    }
    if ((0x7fff < local_24 && local_24 <= uVar1) && !bVar9) {
      uVar4 = (**(code **)(*(int *)((int)param_2 + *(int *)(*param_2 + -0x38)) + 0x20))
                        (*(int *)(*param_2 + -0x38) + (int)param_2);
      uVar7 = 0;
      while( true ) {
        piVar2 = *(int **)(param_1 + 0x20);
        if (*(ushort *)(piVar2 + 0x5b) <= uVar7) {
          return;
        }
        piVar5 = *(int **)(piVar2[0x5a] + uVar7 * 4);
        if (piVar5 == (int *)0x0) break;
        if (piVar2 != (int *)0x0) {
          piVar2 = (int *)((int)piVar2 + *(int *)(*piVar2 + -0x18));
        }
        (**(code **)(*piVar5 + 0x24))(piVar5,piVar2,uVar3,uVar4);
        uVar7 = uVar7 + 1 & 0xfffeffff;
      }
      return;
    }
  }
  (**(code **)(*(int *)((int)param_2 + *(int *)(*param_2 + -0x38)) + 0x18))
            (*(int *)(*param_2 + -0x38) + (int)param_2);
  iVar6 = (**(code **)(*param_3 + 0xac))(param_3);
  uVar7 = 0;
  if (iVar6 != 0) {
    uVar7 = iVar6 - 1U & 0xffff;
  }
  uVar8 = 0;
  while( true ) {
    piVar2 = *(int **)(param_1 + 0x20);
    if (*(ushort *)(piVar2 + 0x5b) <= uVar8) {
      return;
    }
    piVar5 = *(int **)(piVar2[0x5a] + uVar8 * 4);
    if (piVar5 == (int *)0x0) break;
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)((int)piVar2 + *(int *)(*piVar2 + -0x18));
    }
    (**(code **)(*piVar5 + 0x1c))(piVar5,piVar2,uVar3,uVar7);
    uVar8 = uVar8 + 1 & 0xfffeffff;
  }
  return;
}

