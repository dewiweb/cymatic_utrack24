// rea decompile_all
// name: FUN_00131238
// address: 0x131238
// body: available
// range: 0x131238-0x131493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00131238(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  bool bVar11;
  
  if (0x17 < *(ushort *)(param_1 + 0x114)) {
    return 0;
  }
  if (param_3 < *(byte *)(param_1 + 5)) {
    piVar2 = *(int **)(param_1 + 0x584);
    piVar6 = (int *)(param_1 + 0x580);
    if (piVar2 == *(int **)(param_1 + 0x588)) {
      uVar1 = (int)piVar2 - *piVar6 >> 2;
      if (uVar1 < (uint)((int)*(int **)(param_1 + 0x588) - *piVar6 >> 2)) {
        *(int **)(param_1 + 0x584) = piVar2 + 1;
        piVar6 = piVar2;
        piVar10 = piVar2;
        if (piVar2 != (int *)0x0) {
          thunk_FUN_00232084(piVar2,piVar2 + -1);
        }
        while (piVar2 != piVar10 + -1) {
          FUN_0023223c(piVar6 + -1);
          piVar6 = piVar6 + -1;
          piVar10 = piVar10 + -1;
        }
        FUN_0023223c(piVar2,param_2);
      }
      else {
        uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar9 < uVar1 + 1) {
          uVar9 = uVar1 + 1;
        }
        iVar3 = FUN_00173860(uVar9 << 2,0);
        iVar7 = iVar3;
        for (piVar10 = (int *)*piVar6; piVar10 != piVar2; piVar10 = piVar10 + 1) {
          if (iVar7 != 0) {
            thunk_FUN_00232084(iVar7,piVar10);
          }
          iVar7 = iVar7 + 4;
        }
        iVar7 = ((int)piVar2 - *piVar6 & 0xfffffffcU) + iVar3;
        if (iVar7 != 0) {
          thunk_FUN_00232084(iVar7,param_2);
        }
        piVar10 = *(int **)(param_1 + 0x584);
        iVar7 = ((int)piVar2 - *piVar6 & 0xfffffffcU) + iVar3;
        for (; piVar2 != piVar10; piVar2 = piVar2 + 1) {
          iVar7 = iVar7 + 4;
          if (iVar7 != 0) {
            thunk_FUN_00232084(iVar7,piVar2);
          }
        }
        piVar2 = (int *)*piVar6;
        piVar8 = *(int **)(param_1 + 0x584);
        bVar11 = piVar2 != piVar8;
        iVar7 = (int)piVar8 - (int)piVar2;
        if (bVar11) {
          piVar10 = DAT_00131498;
        }
        while (bVar11) {
          if ((int *)*piVar2 != piVar10 + 3) {
            piVar4 = (int *)*piVar2 + -3;
            iVar5 = *piVar4;
            if ((iVar5 == -1) || ((piVar4 != piVar10 && (*piVar4 = iVar5 + -1, iVar5 == 0)))) {
              FUN_00173a54(*piVar2 + -0xc,*(int *)(*piVar2 + -8) + 8,0);
            }
          }
          piVar2 = piVar2 + 1;
          bVar11 = piVar2 != piVar8;
        }
        FUN_00173a54(*piVar6,*(int *)(param_1 + 0x588) - *piVar6 >> 2,0);
        *piVar6 = iVar3;
        *(int *)(param_1 + 0x584) = iVar3 + (iVar7 >> 2) * 4 + 4;
        *(uint *)(param_1 + 0x588) = iVar3 + uVar9 * 4;
      }
    }
    else {
      *(int **)(param_1 + 0x584) = piVar2 + 1;
      if (piVar2 != (int *)0x0) {
        thunk_FUN_00232084();
      }
    }
    *(char *)((uint)*(ushort *)(param_1 + 0x114) + param_1 + 0xfc) = (char)param_3;
    *(undefined4 *)(param_1 + (uint)*(ushort *)(param_1 + 0x114) * 4 + 0x9c) = 0xffffffff;
    *(short *)(param_1 + 0x114) = *(short *)(param_1 + 0x114) + 1;
    return 1;
  }
  FUN_00002898(DAT_00131494);
  return 0;
}

