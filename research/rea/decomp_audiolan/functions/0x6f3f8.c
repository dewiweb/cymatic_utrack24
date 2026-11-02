// rea decompile_all
// name: FUN_0006f3f8
// address: 0x6f3f8
// body: available
// range: 0x6f3f8-0x6f69b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0006f3f8(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *local_2c [2];
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar2 = FUN_000b9aac();
    iVar8 = *DAT_0006f69c;
    iVar3 = FUN_00084950();
    piVar1 = DAT_0006f6a0;
    piVar9 = *(int **)(iVar3 + 0x38);
    piVar4 = *(int **)(iVar8 + 0x18);
    piVar5 = piVar4 + -3;
    if (*piVar5 + 1 == 0) {
      uVar7 = piVar4[-1];
      if (0xfffffff1 < uVar7) {
        FUN_0010f7cc(8,&DAT_0006f6a4,&DAT_0006f6a4,uVar7,0xfffffff1);
      }
      piVar4 = piVar1;
      if (uVar7 != 0) {
        piVar4 = (int *)FUN_0010f82c(uVar7 + 0xe,0);
        if (piVar4 != (int *)0x0) {
          *piVar4 = 0;
          piVar4[1] = 0;
          piVar4[2] = 0;
        }
        piVar4[1] = uVar7;
        piVar4[2] = uVar7;
        puVar6 = (undefined1 *)((int)piVar4 + uVar7 + 0xc);
        *piVar4 = 0;
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0;
        }
      }
      piVar4 = piVar4 + 3;
      FUN_00003628(piVar4,*(undefined4 *)(iVar8 + 0x18),uVar7);
    }
    else if (piVar5 != DAT_0006f6a0) {
      *piVar5 = *piVar5 + 1;
    }
    *(undefined1 *)(param_1 + 8) = 1;
    FUN_00159b14(local_2c,uVar2);
    (**(code **)(*piVar9 + 0x20))(piVar9,local_2c[0]);
    piVar9 = (int *)(**(code **)(*piVar9 + 0xb4))
                              (piVar9,*(undefined2 *)(iVar8 + 0x10),*(undefined4 *)(iVar8 + 8),
                               *(undefined1 *)(iVar8 + 0xc),0,DAT_0006f6a8,piVar4);
    piVar5 = DAT_0006f6ac;
    if (piVar9 != (int *)0x0) {
      piVar9 = (int *)((int)piVar9 + *(int *)(*piVar9 + -0x1ec));
    }
    *(int **)(param_1 + 4) = piVar9;
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0xe4))(piVar9,local_2c[0]);
      (**(code **)(**(int **)(param_1 + 4) + 0xb8))(*(int **)(param_1 + 4),param_1);
      if (local_2c[0] != piVar5) {
        piVar9 = local_2c[0] + -3;
        iVar3 = *piVar9;
        if ((iVar3 == -1) || ((piVar9 != piVar1 && (*piVar9 = iVar3 + -1, iVar3 == 0)))) {
          FUN_0010fa20(local_2c[0] + -3,local_2c[0][-2] + 0xe,0);
        }
      }
      if (piVar4 != piVar5) {
        iVar3 = piVar4[-3];
        if ((iVar3 == -1) || ((piVar4 + -3 != piVar1 && (piVar4[-3] = iVar3 + -1, iVar3 == 0)))) {
          FUN_0010fa20(piVar4 + -3,piVar4[-2] + 0xe,0);
        }
      }
      return 1;
    }
    FUN_000028a4(DAT_0006f6b0);
    if (local_2c[0] != piVar5) {
      piVar9 = local_2c[0] + -3;
      iVar3 = *piVar9;
      if ((iVar3 == -1) || ((piVar9 != piVar1 && (*piVar9 = iVar3 + -1, iVar3 == 0)))) {
        FUN_0010fa20(local_2c[0] + -3,local_2c[0][-2] + 0xe,0);
      }
    }
    if (piVar4 != piVar5) {
      iVar3 = piVar4[-3];
      if ((iVar3 == -1) || ((piVar4 + -3 != piVar1 && (piVar4[-3] = iVar3 + -1, iVar3 == 0)))) {
        FUN_0010fa20(piVar4 + -3,piVar4[-2] + 0xe,0);
      }
    }
  }
  return 0;
}

